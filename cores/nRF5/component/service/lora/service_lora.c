#include <stddef.h>
#include <stdint.h>
#include "udrv_errno.h"
#include "udrv_serial.h"
#include "udrv_system.h"
#include "board_basic.h"
#include "service_nvm.h"
#include "service_lora.h"
#include "LoRaMac.h"
#include "Region.h"
#include "systime.h"
#include "utilities.h"
#include "service_lora_certification.c"
#include "RegionNvm.h"
#include "service_lora_arssi.h"
#include "service_lora_test.h"

static bool last_ack;
static uint8_t last_dlink_data[SERVICE_LORA_DLINK_BUFF_SIZE];
static uint8_t last_dlink_data_size;
static uint8_t last_dlink_port;
static SysTime_t btime;
static int16_t rssi;
static int8_t snr;
static uint32_t auto_join_retry_cnt;
static const char *slotStrings[] = {"1", "2", "C", "C Multicast", "B Ping-Slot", "B Multicast Ping-Slot"};
static beacon_bgw_t beacon_bgw;
static char *lorawan_ver = LORAWAN_VERSION;
static uint8_t linkcheck_flag;
static uint8_t DemodMargin;
static uint8_t NbGateways;
static uint8_t linkcheck_state;
SERVICE_LORA_CLASS_B_STATE class_b_state = SERVICE_LORA_CLASS_B_S0;//Initial state

static void service_lora_linkcheck_callback(void);
static service_lora_recv_cb service_lora_recv_callback;
static SERVICE_LORA_RECEIVE_T recv_data_pkg;
static service_lora_join_cb service_lora_join_callback;
static service_lora_send_cb service_lora_send_callback;

extern bool udrv_powersave_in_sleep;
static udrv_system_event_t rui_lora_auto_join_event = {.request = UDRV_SYS_EVT_OP_LORAWAN_AUTO_JOIN, .p_context = NULL};
static udrv_system_event_t rui_lora_send_hello_event = {.request = UDRV_SYS_EVT_OP_LORAWAN_SEND_HELLO, .p_context = NULL};
static udrv_system_event_t rui_lora_beacon_acquire_event = {.request = UDRV_SYS_EVT_OP_LORAWAN_BEACON_ACQUIRE, .p_context = NULL};

static uint32_t service_lora_wlock_cnt;

static void service_lora_wake_lock (void) {
    udrv_powersave_wake_lock();
    service_lora_wlock_cnt++;
}

static void service_lora_wake_unlock (void) {
    if (service_lora_wlock_cnt > 0) {
        udrv_powersave_wake_unlock();
        service_lora_wlock_cnt--;
    }
}

static void service_lora_wake_unlock_all (void) {
    while (service_lora_wlock_cnt > 0) {
        udrv_powersave_wake_unlock();
        service_lora_wlock_cnt--;
    }
}

static void service_lora_sleep(void) {
    Radio.Sleep();
}

static int32_t service_lora_send_ping_slot_periodicity(uint8_t periodicity)
{
    LoRaMacStatus_t status;
    MlmeReq_t mlmeReq;

    mlmeReq.Type = MLME_PING_SLOT_INFO;
    mlmeReq.Req.PingSlotInfo.PingSlot.Fields.Periodicity = periodicity;
    mlmeReq.Req.PingSlotInfo.PingSlot.Fields.RFU = 0;

    status = LoRaMacMlmeRequest(&mlmeReq);

    if (status != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    return UDRV_RETURN_OK;
}

static void service_lora_auto_join(void *m_data)
{
    udrv_system_event_produce(&rui_lora_auto_join_event);
    udrv_powersave_in_sleep = false;
}

static int32_t service_lora_start(void)
{
    LoRaMacStatus_t Status = LoRaMacStart();
    if (Status == LORAMAC_STATUS_OK)
    {
        //udrv_serial_log_printf("LORAMAC start OK!\r\n");
    }
    else
    {
        //udrv_serial_log_printf("LORAMAC start FAILED!\r\n");
        return -UDRV_INTERNAL_ERR;
    }

    if (service_lora_get_auto_join())
    {
        udrv_system_timer_stop(SYSTIMER_LORAWAN);

        auto_join_retry_cnt = 0;

        if (udrv_system_timer_create(SYSTIMER_LORAWAN, service_lora_auto_join, HTMR_PERIODIC) == UDRV_RETURN_OK)
        {
            udrv_system_timer_start(SYSTIMER_LORAWAN, service_lora_get_auto_join_period() * 1000, NULL);
        }
        else
        {
            udrv_serial_log_printf("+EVT: JOIN FAILED (%d)\r\n", __LINE__);
        }
    }

    return UDRV_RETURN_OK;
}

static int32_t service_lora_stop(void)
{
    LoRaMacStatus_t Status = LoRaMacStop();
    if (Status == LORAMAC_STATUS_BUSY)
    {
        return -UDRV_BUSY;
    }
    else if (Status != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    udrv_system_timer_stop(SYSTIMER_LORAWAN);

    return UDRV_RETURN_OK;
}

static void McpsConfirm(McpsConfirm_t *mcpsConfirm)
{
    if (mcpsConfirm->Status == LORAMAC_EVENT_INFO_STATUS_OK)
    {
        last_ack = mcpsConfirm->AckReceived;
        if (service_lora_send_callback != NULL) {
            service_lora_send_callback(UDRV_RETURN_OK);
        }
    } else {
        last_ack = false;
        if (service_lora_send_callback != NULL) {
            service_lora_send_callback(mcpsConfirm->Status);
        }
    }
    if(SERVICE_LORA_ACK == service_lora_get_cfm())
    {
        if(mcpsConfirm->AckReceived)
        udrv_serial_log_printf("+EVT: SEND CONFIRMED OK\r\n");
        else
        udrv_serial_log_printf("+EVT: SEND CONFIRMED FAILED\r\n");
    }

    service_lora_lptp_send_callback(0);

    service_lora_wake_unlock();
}

static void McpsIndication(McpsIndication_t *mcpsIndication)
{
    if (mcpsIndication->Status == LORAMAC_EVENT_INFO_STATUS_OK)
    {
        rssi = mcpsIndication->Rssi;
        snr = mcpsIndication->Snr;
        service_lora_arssi_rx_callback(rssi);

        if (mcpsIndication->BufferSize > 0)
        {
            udrv_serial_log_printf("+EVT: RX_%s, RSSI %d, SNR %d\r\n", slotStrings[mcpsIndication->RxSlot], rssi, snr);
            if (mcpsIndication->Multicast == 1)
                MulticastMcpsIndication(mcpsIndication);
            else
                udrv_serial_log_printf("UNICAST\r\n");
            udrv_serial_log_printf("%d : ", mcpsIndication->Port);
            for (int i = 0 ; i < SERIAL_MAX ; i++)
            {
                SERVICE_MODE_TYPE mode = service_nvm_get_mode_type_from_nvm((SERIAL_PORT)i);
                if (mode == SERVICE_MODE_TYPE_CLI) {
                    for (uint8_t j = 0; j < mcpsIndication->BufferSize; j++)
                    {
                        udrv_serial_printf((SERIAL_PORT)i, "%02x", mcpsIndication->Buffer[j]);
                    }
                    udrv_serial_printf((SERIAL_PORT)i, "\r\n");
                } else if (mode == SERVICE_MODE_TYPE_TRANSPARENT) 
                {
                    if (mcpsIndication->Port == service_nvm_get_tp_port_from_nvm((SERIAL_PORT)i))
                    {
                        udrv_serial_write((SERIAL_PORT)i, mcpsIndication->Buffer, mcpsIndication->BufferSize);
                    }
                }
            }
            if (mcpsIndication->BufferSize > SERVICE_LORA_DLINK_BUFF_SIZE)
            {
                memcpy(last_dlink_data, mcpsIndication->Buffer, SERVICE_LORA_DLINK_BUFF_SIZE);
                last_dlink_data_size = SERVICE_LORA_DLINK_BUFF_SIZE;
            }
            else
            {
                memcpy(last_dlink_data, mcpsIndication->Buffer, mcpsIndication->BufferSize);
                last_dlink_data_size = mcpsIndication->BufferSize;
            }
            last_dlink_port = mcpsIndication->Port;
        }
    }
    
    service_lora_linkcheck_callback();
    service_lora_Certifi_Callback(mcpsIndication);
    //FramePending TODO

    if(( mcpsIndication->Port ) !=224)
    {
        if (service_lora_recv_callback != NULL) {
            recv_data_pkg.Port = mcpsIndication->Port ;
            recv_data_pkg.RxDatarate = mcpsIndication->RxDatarate;
            recv_data_pkg.Buffer = mcpsIndication->Buffer;
            recv_data_pkg.BufferSize = mcpsIndication->BufferSize;
            recv_data_pkg.Rssi = mcpsIndication->Rssi;
            recv_data_pkg.Snr = mcpsIndication->Snr;
            recv_data_pkg.DownLinkCounter = mcpsIndication->DownLinkCounter;
            service_lora_recv_callback(&recv_data_pkg);
        }
    }
}

static void service_lora_beacon_acquisition(void)
{
    udrv_system_event_produce(&rui_lora_beacon_acquire_event);
    udrv_powersave_in_sleep = false;
}

static void service_lora_send_hello(void *m_data)
{
    udrv_system_event_produce(&rui_lora_send_hello_event);
    udrv_powersave_in_sleep = false;
}

static void MlmeConfirm(MlmeConfirm_t *mlmeConfirm)
{
    switch (mlmeConfirm->MlmeRequest)
    {
    case MLME_JOIN:
        if (mlmeConfirm->Status == LORAMAC_EVENT_INFO_STATUS_OK)
        {
            LoRaMacStatus_t status;
            MlmeReq_t mlmeReq;

            udrv_serial_log_printf("+EVT: JOINED\r\n");

            udrv_system_timer_stop(SYSTIMER_LORAWAN);

            auto_join_retry_cnt = 0;

            if (service_lora_get_class() == SERVICE_LORA_CLASS_B)
            {
                service_lora_class_b_process();
            }
            else if (service_lora_get_class() == SERVICE_LORA_CLASS_C)
            {
                MibRequestConfirm_t mibReq;

                // Class C is now activated
                mibReq.Type = MIB_DEVICE_CLASS;
                mibReq.Param.Class = CLASS_C;
                if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
                {
                    udrv_serial_log_printf("+EVT: SWITCH FAILED \r\n", __LINE__);
                }
            }

            if (service_lora_join_callback != NULL) {
                service_lora_join_callback(UDRV_RETURN_OK);
            }
        }
        else
        {
            switch (mlmeConfirm->Status) {
                case LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT:
                {
                    udrv_serial_log_printf("+EVT: JOIN FAILED (TX timeout)\r\n");
                    break;
                }
                case LORAMAC_EVENT_INFO_STATUS_RX2_TIMEOUT:
                {
                    udrv_serial_log_printf("+EVT: JOIN FAILED (RX timeout)\r\n");
                    break;
                }
                default:
                {
                    udrv_serial_log_printf("+EVT: JOIN FAILED (%d)\r\n", mlmeConfirm->Status);
                    break;
                }
            }

            udrv_system_timer_stop(SYSTIMER_LORAWAN);

            if (service_lora_get_auto_join())
            {
                if (++auto_join_retry_cnt > service_lora_get_auto_join_max_cnt())
                {
                    auto_join_retry_cnt = 0;
                }
                else
                {
                    if (udrv_system_timer_create(SYSTIMER_LORAWAN, service_lora_auto_join, HTMR_PERIODIC) == UDRV_RETURN_OK)
                    {
                        udrv_system_timer_start(SYSTIMER_LORAWAN, service_lora_get_auto_join_period() * 1000, NULL);
                    }
                    else
                    {
                        udrv_serial_log_printf("+EVT: JOIN FAILED (%d)\r\n", __LINE__);
                    }
                }
            }

            if (service_lora_join_callback != NULL) {
                service_lora_join_callback(mlmeConfirm->Status);
            }

            service_lora_sleep();
        }

        if (service_lora_get_class() != SERVICE_LORA_CLASS_B)
        {
            service_lora_wake_unlock();
        }
        break;
    case MLME_DEVICE_TIME:
    {
        if (mlmeConfirm->Status == LORAMAC_EVENT_INFO_STATUS_OK)
        {
            //udrv_serial_log_printf("Get Device Time Success\r\n");

            if (service_lora_get_class() == SERVICE_LORA_CLASS_B)
            {
                if (class_b_state != SERVICE_LORA_CLASS_B_COMPLETED) {
                    class_b_state = SERVICE_LORA_CLASS_B_S1;//Beacon searching

                    service_lora_class_b_process();
                }
            }
        }
        break;
    }
    case MLME_PING_SLOT_INFO:
    {
        if (mlmeConfirm->Status == LORAMAC_EVENT_INFO_STATUS_OK)
        {
            udrv_serial_log_printf("+PS: DONE\r\n");

            class_b_state = SERVICE_LORA_CLASS_B_COMPLETED;//Class B enabled

            service_lora_class_b_process();

            service_lora_wake_unlock();
        }
        else
        {
            //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

            LORA_TEST_DEBUG("mlmeConfirm->Status=%d",mlmeConfirm->Status);
            udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
        }
        break;
    }
    case MLME_LINK_CHECK:
    {
        linkcheck_flag = 1;
        DemodMargin = mlmeConfirm->DemodMargin;
        NbGateways = mlmeConfirm->NbGateways;
        linkcheck_state = mlmeConfirm->Status;
        if(linkcheck_state!= LORAMAC_EVENT_INFO_STATUS_OK)
        {
            udrv_serial_log_printf("+EVT: LINKCHECK : 1,0,0,0,0\r\n");
        }
        break;
    }
    default:
        break;
    }
}

static void MlmeIndication(MlmeIndication_t *mlmeIndication)
{
    switch (mlmeIndication->MlmeIndication)
    {
    case MLME_BEACON_LOST:
    {
        udrv_serial_log_printf("+BC: LOST (given up)\r\n");

        class_b_state = SERVICE_LORA_CLASS_B_S1;//Beacon searching

        service_lora_class_b_process();
    }
    break;
    case MLME_BEACON:
    {
        if (mlmeIndication->Status == LORAMAC_EVENT_INFO_STATUS_BEACON_LOCKED)
        {
            udrv_serial_log_printf("+BC: LOCKED\r\n");

            //udrv_serial_log_printf("Lock Beacon Success\r\n");

            if (class_b_state != SERVICE_LORA_CLASS_B_COMPLETED) {
                class_b_state = SERVICE_LORA_CLASS_B_S2;//Beacon locked
                service_lora_class_b_process();
            }

            switch (mlmeIndication->BeaconInfo.GwSpecific.InfoDesc)
            {
            case 0:
                beacon_bgw.GPS_coordinate = 0;

                beacon_bgw.latitude = (mlmeIndication->BeaconInfo.GwSpecific.Info[2] << 16)|
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[1] << 8) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[0]);
                beacon_bgw.longitude = (mlmeIndication->BeaconInfo.GwSpecific.Info[5] << 16) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[4] << 8) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[3]);
		break;
            case 1:
                beacon_bgw.GPS_coordinate = 1;
		
                beacon_bgw.latitude = (mlmeIndication->BeaconInfo.GwSpecific.Info[2] << 16)|
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[1] << 8) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[0]);
                beacon_bgw.longitude = (mlmeIndication->BeaconInfo.GwSpecific.Info[5] << 16) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[4] << 8) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[3]);
		break;
            case 2:
                beacon_bgw.GPS_coordinate = 2;

                beacon_bgw.latitude = (mlmeIndication->BeaconInfo.GwSpecific.Info[2] << 16)|
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[1] << 8) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[0]);
                beacon_bgw.longitude = (mlmeIndication->BeaconInfo.GwSpecific.Info[5] << 16) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[4] << 8) |
                                      (mlmeIndication->BeaconInfo.GwSpecific.Info[3]);
                break;
            case 3:
                beacon_bgw.net_ID = (mlmeIndication->BeaconInfo.GwSpecific.Info[2] << 16) |
                                    (mlmeIndication->BeaconInfo.GwSpecific.Info[1] << 8) |
                                    (mlmeIndication->BeaconInfo.GwSpecific.Info[0]);
                beacon_bgw.gateway_ID = (mlmeIndication->BeaconInfo.GwSpecific.Info[5] << 16) |
                                        (mlmeIndication->BeaconInfo.GwSpecific.Info[4] << 8) |
                                        (mlmeIndication->BeaconInfo.GwSpecific.Info[3]);
                break;
            default:
                break;
            }
        }
        else if (mlmeIndication->Status == LORAMAC_EVENT_INFO_STATUS_BEACON_LOST)
        {
            MlmeReq_t mlmeReq;
            LoRaMacStatus_t status;

            udrv_serial_log_printf("+BC: LOST (temporarily)\r\n");

            mlmeReq.Type = MLME_DEVICE_TIME;
            status = LoRaMacMlmeRequest(&mlmeReq);
            //if (status == LORAMAC_STATUS_OK)
            //{
	        //service_lora_send_hello(NULL);
            //}
        }
        else
        {
            //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

            udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
        }
        btime = mlmeIndication->BeaconInfo.Time;
        break;
    }
    default:
        break;
    }
}

static void OnMacProcessNotify(void)
{
    // Mac notification. Process run function
}

static LoRaMacPrimitives_t LoRaMacPrimitives;
static LoRaMacCallback_t LoRaMacCallbacks;

int32_t service_lora_init(SERVICE_LORA_BAND band)
{
    LoRaMacStatus_t Status;
    int32_t ret = UDRV_RETURN_OK;

    BoardInitMcu(); //initialize MCU for LoRa

    if (SERVICE_LORAWAN != service_lora_get_nwm())
    {
        service_lora_p2p_init();
        goto out;
    }

    LoRaMacPrimitives.MacMcpsConfirm = McpsConfirm;
    LoRaMacPrimitives.MacMcpsIndication = McpsIndication;
    LoRaMacPrimitives.MacMlmeConfirm = MlmeConfirm;
    LoRaMacPrimitives.MacMlmeIndication = MlmeIndication;
    LoRaMacCallbacks.GetBatteryLevel = NULL;
    LoRaMacCallbacks.GetTemperatureLevel = NULL; // apply board specific temperature reading
    LoRaMacCallbacks.NvmDataChange = NULL;
    LoRaMacCallbacks.MacProcessNotify = OnMacProcessNotify;

    /**************************************************************************************
     *
     * Step 1. Start to init LoRaWAN stack with stack built-in config for the selected band.
     *
     **************************************************************************************/

    Status = LoRaMacInitialization(&LoRaMacPrimitives, &LoRaMacCallbacks, band);

    if (Status == LORAMAC_STATUS_OK)
    {
        MibRequestConfirm_t mibReq;
        uint8_t buff[16];

        // Initialization successful
        //udrv_serial_log_printf("LORAMAC initialization OK!\r\n");

        mibReq.Type = MIB_ABP_LORAWAN_VERSION;
        mibReq.Param.AbpLrWanVersion.Value = 0x01000300;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            ret = -UDRV_INTERNAL_ERR;
            goto out;
        }

        /**************************************************************************************
     *
     * Step 2. Start to apply the RUI saved LoRaWAN config.
     *
     **************************************************************************************/

        if ((band == SERVICE_LORA_AU915) || (band == SERVICE_LORA_US915) || (band == SERVICE_LORA_CN470))
        {
            uint16_t mask_tmp[REGION_NVM_CHANNELS_MASK_SIZE];
            uint16_t channel_mask = 0;
            uint8_t *p_mask;

            if ((ret = service_nvm_get_mask_from_nvm(mask_tmp)) != UDRV_RETURN_OK)
            {
                goto out;
            }
            p_mask = (uint8_t *)mask_tmp;
            for (uint8_t i = 0; i < REGION_NVM_CHANNELS_MASK_SIZE * 2; i++)
            {
                if (p_mask[i])
                    channel_mask |= (1 << i);
            }

            if (service_lora_get_chs() != 0)
            {
                if ((ret = service_lora_set_chs(service_lora_get_chs())) != UDRV_RETURN_OK)
                {
                    goto out;
                }
            }
            else
            {
                if ((ret = service_lora_set_mask(&channel_mask, false)) != UDRV_RETURN_OK)
                {
                    goto out;
                }
            }
        }

        if ((ret = service_lora_set_njm(service_nvm_get_njm_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_setup_multicast()) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_class(service_nvm_get_class_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_adr(service_nvm_get_adr_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_dr(service_nvm_get_dr_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_rx2dr(service_nvm_get_rx2dr_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_jn1dl(service_nvm_get_jn1dl_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_pub_nwk_mode(service_nvm_get_pub_nwk_mode_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_rx1dl(service_nvm_get_rx1dl_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        if ((ret = service_lora_set_txpower(service_nvm_get_txpower_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }

        
        if ((ret = service_lora_set_dcs(service_nvm_get_dcs_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            goto out;
        }
       
 
        /**************************************************************************************
     *
     * Step 3. Start to enable LoRaWAN stack.
     *
     **************************************************************************************/

        if ((ret = service_lora_start()) != UDRV_RETURN_OK)
        {
            goto out;
        }
    }
    else
    {
        //udrv_serial_log_printf("LORAMAC initialization FAILED!\r\n");
        ret = -UDRV_INTERNAL_ERR;
        goto out;
    }

out:
    service_lora_sleep();
    return ret;
}

int32_t service_lora_get_app_eui(uint8_t *buff, uint32_t len)
{
    return service_nvm_get_app_eui_from_nvm(buff, len);
}

int32_t service_lora_set_app_eui(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_JOIN_EUI;
    mibReq.Param.JoinEui = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_app_eui_to_nvm(buff, len);
}

int32_t service_lora_get_app_key(uint8_t *buff, uint32_t len)
{
    return service_nvm_get_app_key_from_nvm(buff, len);
}

int32_t service_lora_set_app_key(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_APP_KEY;
    mibReq.Param.AppKey = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    mibReq.Type = MIB_NWK_KEY;
    mibReq.Param.NwkKey = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_app_key_to_nvm(buff, len);
}

int32_t service_lora_get_app_skey(uint8_t *buff, uint32_t len)
{
    switch (service_lora_get_njm())
    {
    case SERVICE_LORA_ABP:
    {
        return service_nvm_get_app_skey_from_nvm(buff, len);
    }
    case SERVICE_LORA_OTAA:
    default:
    {
        MibRequestConfirm_t mibReq;

        if (len < 16)
        {
            return -UDRV_INTERNAL_ERR;
        }

        if (service_lora_get_njs() == false)
        {
            memset(buff, 0, 16);
            return UDRV_RETURN_OK;
        }

        mibReq.Type = MIB_APP_S_KEY;
        if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        memcpy(buff, mibReq.Param.AppSKey, 16);
        return UDRV_RETURN_OK;
    }
    }
}

int32_t service_lora_set_app_skey(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_APP_S_KEY;
    mibReq.Param.AppSKey = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_app_skey_to_nvm(buff, len);
}

int32_t service_lora_get_dev_addr(uint8_t *buff, uint32_t len)
{
    switch (service_lora_get_njm())
    {
        case SERVICE_LORA_ABP:
            return service_nvm_get_dev_addr_from_nvm(buff, len);
        case SERVICE_LORA_OTAA:
        default:
        {
            MibRequestConfirm_t mibReq;

            if (len < 4)
            {
                return -UDRV_INTERNAL_ERR;
            }

            if (service_lora_get_njs() == false)
            {
                memset(buff, 0, 4);
                return UDRV_RETURN_OK;
            }

            mibReq.Type = MIB_DEV_ADDR;
            if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
            {
                return -UDRV_INTERNAL_ERR;
            }

            *(uint32_t *)buff = __builtin_bswap32(mibReq.Param.DevAddr);
            return UDRV_RETURN_OK;
        }
    }
}

int32_t service_lora_set_dev_addr(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_DEV_ADDR;
    mibReq.Param.DevAddr = __builtin_bswap32(*(uint32_t *)buff);
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_dev_addr_to_nvm(buff, len);
}

int32_t service_lora_get_dev_eui(uint8_t *buff, uint32_t len)
{
    return service_nvm_get_dev_eui_from_nvm(buff, len);
}

int32_t service_lora_set_dev_eui(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_DEV_EUI;
    mibReq.Param.DevEui = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_dev_eui_to_nvm(buff, len);
}

int32_t service_lora_get_net_id(uint8_t *buff, uint32_t len)
{
    switch (service_lora_get_njm())
    {
    case SERVICE_LORA_ABP:
    {
        return service_nvm_get_net_id_from_nvm(buff, len);
    }
    case SERVICE_LORA_OTAA:
    default:
    {
        MibRequestConfirm_t mibReq;

        if (len < 4)
        {
            return -UDRV_INTERNAL_ERR;
        }

        if (service_lora_get_njs() == false)
        {
            memset(buff, 0, 4);
            return UDRV_RETURN_OK;
        }

        mibReq.Type = MIB_NET_ID;
        if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        memcpy(buff, (uint8_t *)&mibReq.Param.NetID, 4);
        return UDRV_RETURN_OK;
    }
    }
}

int32_t service_lora_set_nwk_id(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_NET_ID;
    mibReq.Param.NetID = *(uint32_t *)buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_nwk_id_to_nvm(buff, len);
}

int32_t service_lora_get_nwk_skey(uint8_t *buff, uint32_t len)
{
    switch (service_lora_get_njm())
    {
    case SERVICE_LORA_ABP:
    {
        return service_nvm_get_nwk_skey_from_nvm(buff, len);
    }
    case SERVICE_LORA_OTAA:
    default:
    {
        MibRequestConfirm_t mibReq;

        if (len < 16)
        {
            return -UDRV_INTERNAL_ERR;
        }

        if (service_lora_get_njs() == false)
        {
            memset(buff, 0, 16);
            return UDRV_RETURN_OK;
        }

        mibReq.Type = MIB_NWK_S_ENC_KEY;
        if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        memcpy(buff, mibReq.Param.NwkSEncKey, 16);
        return UDRV_RETURN_OK;
    }
    }
}

int32_t service_lora_set_nwk_skey(uint8_t *buff, uint32_t len)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_F_NWK_S_INT_KEY;
    mibReq.Param.FNwkSIntKey = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    mibReq.Type = MIB_S_NWK_S_INT_KEY;
    mibReq.Param.SNwkSIntKey = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    mibReq.Type = MIB_NWK_S_ENC_KEY;
    mibReq.Param.NwkSEncKey = buff;
    if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
    {
        if (status == LORAMAC_STATUS_BUSY) {
            return -UDRV_BUSY;
        } else {
            return -UDRV_INTERNAL_ERR;
        }
    }

    return service_nvm_set_nwk_skey_to_nvm(buff, len);
}

uint8_t service_lora_get_retry(void)
{
    return service_nvm_get_retry_from_nvm();
}

int32_t service_lora_set_retry(uint8_t retry)
{
    if(retry>7)
        return -UDRV_WRONG_ARG;   
    return service_nvm_set_retry_to_nvm(retry);
}

SERVICE_LORA_CONFIRM_MODE service_lora_get_cfm(void)
{
    return service_nvm_get_cfm_from_nvm();
}

int32_t service_lora_set_cfm(SERVICE_LORA_CONFIRM_MODE cfm)
{
    return service_nvm_set_cfm_to_nvm(cfm);
}

bool service_lora_get_cfs(void)
{
    return last_ack;
}

SERVICE_LORA_BAND service_lora_get_band(void)
{
    return service_nvm_get_band_from_nvm();
}

int32_t service_lora_set_band(SERVICE_LORA_BAND band)
{
    uint16_t mask = 0;
    int32_t ret;
    LoRaMacStatus_t Status;

    if (band == service_lora_get_band())
    {
        return UDRV_RETURN_OK;
    }

    /**************************************************************************************
     *
     * Step 1. Start to disable LoRaWAN stack.
     *
     **************************************************************************************/

    if ((ret = service_lora_stop()) != UDRV_RETURN_OK)
    {
        return ret;
    }

    if (service_lora_clear_multicast() != UDRV_RETURN_OK)
    {
        return ret;
    }

    if (service_rui_set_chs_to_nvm(0) != UDRV_RETURN_OK)
    {
        return ret;
    }
    /**************************************************************************************
     *
     * Step 2. Start to init LoRaWAN stack with built-in config for the selected band.
     *
     **************************************************************************************/

    Status = LoRaMacInitialization(&LoRaMacPrimitives, &LoRaMacCallbacks, band);

    if (Status == LORAMAC_STATUS_OK)
    {
        MibRequestConfirm_t mibReq;
        uint8_t buff[16];

        // Initialization successful
        //udrv_serial_log_printf("LORAMAC initialization OK!\r\n");

        /**************************************************************************************
     *
     * Step 3. Replace RUI saved config with the stack built-in config for the selected band.
     *
     **************************************************************************************/

        mibReq.Type = MIB_CHANNELS_DEFAULT_DATARATE;
        if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }
        if ((ret = service_nvm_set_dr_to_nvm(mibReq.Param.ChannelsDefaultDatarate)) != UDRV_RETURN_OK)
        {
            return ret;
        }

        mibReq.Type = MIB_RX2_DEFAULT_CHANNEL;
        if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }
        if ((ret = service_nvm_set_rx2dr_to_nvm(mibReq.Param.Rx2Channel.Datarate)) != LORAMAC_STATUS_OK)
        {
            return ret;
        }

        mibReq.Type = MIB_CHANNELS_DEFAULT_TX_POWER;
        if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }
        if ((ret = service_nvm_set_txpower_to_nvm(mibReq.Param.ChannelsDefaultTxPower)) != UDRV_RETURN_OK)
        {
            return ret;
        }

        if (band == SERVICE_LORA_AU915 || band == SERVICE_LORA_US915 || band == SERVICE_LORA_CN470)
        {
            mibReq.Type = MIB_CHANNELS_DEFAULT_MASK;
            if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
            {
                return -UDRV_INTERNAL_ERR;
            }

            if ((ret = service_nvm_set_mask_to_nvm(mibReq.Param.ChannelsDefaultMask)) != UDRV_RETURN_OK)
            {
                return ret;
            }

            if (service_rui_set_chs_to_nvm(0) != UDRV_RETURN_OK)
            {
                return -UDRV_INTERNAL_ERR;
            }
        }

        /**************************************************************************************
     *
     * Step 4. Save the new band config.
     *
     **************************************************************************************/

        if ((ret = service_nvm_set_band_to_nvm(band)) != UDRV_RETURN_OK)
        {
            return ret;
        }

        /**************************************************************************************
     *
     * Step 5-1. Start to init LoRaWAN stack with built-in config for the selected band.
     * Step 5-2. Start to apply the RUI saved LoRaWAN config.
     * Step 5-3. Start to enable LoRaWAN stack.
     *
     **************************************************************************************/

        if ((ret = service_lora_init(band)) != UDRV_RETURN_OK)
        {
            return ret;
        }
    }
    else
    {
        //udrv_serial_log_printf("LORAMAC initialization FAILED!\r\n");
        return -UDRV_INTERNAL_ERR;
    }

    return UDRV_RETURN_OK;
}

#if defined(REGION_CN470) || defined(REGION_US915) || \
    defined(REGION_AU915)
int32_t service_lora_get_mask(uint16_t *mask)
{
    SERVICE_LORA_BAND band = service_lora_get_band();

    if ((band != SERVICE_LORA_AU915) && (band != SERVICE_LORA_US915) && (band != SERVICE_LORA_CN470))
        return -UDRV_WRONG_ARG;

    uint16_t channel_mask = 0;
    uint16_t mask_tmp[REGION_NVM_CHANNELS_MASK_SIZE];
    uint8_t *p_mask;

    service_nvm_get_mask_from_nvm(mask_tmp);
    p_mask = (uint8_t *)mask_tmp;
    for (uint8_t i = 0; i < REGION_NVM_CHANNELS_MASK_SIZE * 2; i++)
    {
        if (p_mask[i])
            channel_mask |= (1 << i);
    }

    *mask = channel_mask;

    return UDRV_RETURN_OK;
}

int32_t service_lora_set_mask(uint16_t *mask, bool commit)
{
    SERVICE_LORA_BAND band = service_lora_get_band();
    uint16_t channel_mask[REGION_NVM_CHANNELS_MASK_SIZE] = {0};
    uint16_t mask_val[2] = {0x00FF, 0xFF00};
    LoRaMacStatus_t Status;
    int32_t ret;

    if ((band != SERVICE_LORA_AU915) && (band != SERVICE_LORA_US915) && (band != SERVICE_LORA_CN470))
    {
        return -UDRV_WRONG_ARG;
    }

    /**************************************************************************************
     *
     * Step 1. Start to disable LoRaWAN stack.
     *
     **************************************************************************************/

    if ((ret = service_lora_stop()) != UDRV_RETURN_OK)
    {
        return ret;
    }

    /**************************************************************************************
     *
     * Step 2. Start to set the new channel mask.
     *
     **************************************************************************************/

    {
        MibRequestConfirm_t mibReq;

        // Initialization successful
        //udrv_serial_log_printf("LORAMAC initialization OK!\r\n");

        if (*mask == 0)
        { //All zero means enabling all channels; All ones still means enabling all channels.
            if (band == SERVICE_LORA_AU915)
                *mask = 0x01FF; // channels 0 - 71
            if (band == SERVICE_LORA_US915)
                *mask = 0x01FF; // channels 0 - 71
            if (band == SERVICE_LORA_CN470)
                *mask = 0x0FFF; // channels 0 - 95
        }

        memset(channel_mask, 0x00, REGION_NVM_CHANNELS_MASK_SIZE * 2);
        for (uint8_t i = 0; i < REGION_NVM_CHANNELS_MASK_SIZE * 2; i++)
        {
            if (*mask & (1 << i))
            {
                channel_mask[i / 2] |= mask_val[i % 2];
            }
        }

        mibReq.Type = MIB_CHANNELS_MASK;
        mibReq.Param.ChannelsMask = channel_mask;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        mibReq.Type = MIB_CHANNELS_DEFAULT_MASK;
        mibReq.Param.ChannelsDefaultMask = channel_mask;
        LoRaMacMibSetRequestConfirm( &mibReq );

        if(0!=service_rui_get_chs_from_nvm())
        {
            if (service_rui_set_chs_to_nvm(0) != UDRV_RETURN_OK)
            {
                return ret;
            }
        }
        /**************************************************************************************
     *
     * Step 3. Start to enable LoRaWAN stack.
     *
     **************************************************************************************/

        if ((ret = service_lora_start()) != UDRV_RETURN_OK)
        {
            return ret;
        }
    }

    if (commit)
    {
        return service_nvm_set_mask_to_nvm(channel_mask);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}
#endif

void service_lora_class_b_process(void)
{
    MlmeReq_t mlmeReq;
    LoRaMacStatus_t status;

    udrv_system_timer_stop(SYSTIMER_LORAWAN);

    switch (class_b_state)
    {
        case SERVICE_LORA_CLASS_B_S0:
        {
            if (udrv_system_timer_create(SYSTIMER_LORAWAN, service_lora_send_hello, HTMR_PERIODIC) == UDRV_RETURN_OK)
            {
                udrv_system_timer_start(SYSTIMER_LORAWAN, 6000, NULL);
            }
            else
            {
                //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

                udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
            }
            break;
        }
        case SERVICE_LORA_CLASS_B_S1:
        {
            if (udrv_system_timer_create(SYSTIMER_LORAWAN, service_lora_beacon_acquisition, HTMR_PERIODIC) == UDRV_RETURN_OK)
            {
                udrv_system_timer_start(SYSTIMER_LORAWAN, 6000, NULL);
            }
            else
            {
                //udrv_serial_log_printf("Acquire Beacon Fail\r\n");
                //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

                udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
            }
            break;
        }
        case SERVICE_LORA_CLASS_B_S2:
        {
            if (udrv_system_timer_create(SYSTIMER_LORAWAN, service_lora_send_hello, HTMR_PERIODIC) == UDRV_RETURN_OK)
            {
                udrv_system_timer_start(SYSTIMER_LORAWAN, 6000, NULL);
            }
            else
            {
                //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

                udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
            }
            break;
        }
        //case SERVICE_LORA_CLASS_B_S3:
        //{
            //break;
        //}
        case SERVICE_LORA_CLASS_B_COMPLETED:
        {
            MibRequestConfirm_t mibReq;

            // Class B is now activated
            mibReq.Type = MIB_DEVICE_CLASS;
            mibReq.Param.Class = CLASS_B;
            if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) == LORAMAC_STATUS_OK)
            {
                udrv_system_timer_stop(SYSTIMER_LORAWAN);

                udrv_serial_log_printf("+BC: DONE\r\n");
            }
            else
            {
                //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

                LORA_TEST_DEBUG("status=%d",status);
                udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
            }
            break;
        }
        default:
        {
            //Do nothing
            break;
        }
    }
}

int32_t service_lora_join(int32_t param1, int32_t param2, int32_t param3, int32_t param4)
{
    LoRaMacStatus_t status;
    uint8_t rbuff[16];
    MibRequestConfirm_t mibReq;
    SERVICE_LORA_JOIN_MODE njm = service_lora_get_njm();
    int32_t ret;

    if (param1 != -1)
    {
        if ((bool)!!param1 != service_lora_get_join_start())
        {
            if ((ret = service_lora_set_join_start((bool)!!param1)) != UDRV_RETURN_OK)
            {
                return ret;
            }
        }
    }

    if (param2 != -1)
    {
        if ((bool)!!param2 != service_lora_get_auto_join())
        {
            if ((ret = service_lora_set_auto_join((bool)!!param2)) != UDRV_RETURN_OK)
            {
                return ret;
            }
        }
    }

    if (param3 != -1)
    {
        if (param3 != service_lora_get_auto_join_period())
        {
            if ((ret = service_lora_set_auto_join_period(param3)) != UDRV_RETURN_OK)
            {
                return ret;
            }
        }
    }

    if (param4 != -1)
    {
        if (param4 != service_lora_get_auto_join_max_cnt())
        {
            if ((ret = service_lora_set_auto_join_max_cnt(param4)) != UDRV_RETURN_OK)
            {
                return ret;
            }
        }
    }

    if (param1 == 0)
    {
        udrv_system_timer_stop(SYSTIMER_LORAWAN);
        auto_join_retry_cnt = 0;
        return UDRV_RETURN_OK;
    }

    if (njm == SERVICE_LORA_OTAA)
    {
        MlmeReq_t mlmeReq;

        // Setup the request type
        mlmeReq.Type = MLME_JOIN;

        mibReq.Type = MIB_NETWORK_ACTIVATION;
        mibReq.Param.NetworkActivation = ACTIVATION_TYPE_NONE;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        mlmeReq.Req.Join.Datarate = service_lora_get_dr();

        status = LoRaMacMlmeRequest(&mlmeReq);
        LORA_TEST_DEBUG("status=%d", status);

        if (status == LORAMAC_STATUS_OK)
        {
            if (service_lora_get_class() == SERVICE_LORA_CLASS_B)
            {
                class_b_state = SERVICE_LORA_CLASS_B_S0;//Initial state
            }

            service_lora_wake_unlock_all();
            service_lora_wake_lock();
            return UDRV_RETURN_OK;
        }
        else if (status == LORAMAC_STATUS_BUSY)
        {
            return -UDRV_BUSY;
        }
        else if (status == LORAMAC_STATUS_DUTYCYCLE_RESTRICTED)
        {
            udrv_serial_log_printf("Restricted (wait %d ms)\r\n", mlmeReq.ReqReturn.DutyCycleWaitTime);
            return -UDRV_BUSY;
        }
        else
        {
            return -UDRV_INTERNAL_ERR;
        }
    }
    else if (njm == SERVICE_LORA_ABP)
    {
        mibReq.Type = MIB_NETWORK_ACTIVATION;
        mibReq.Param.NetworkActivation = ACTIVATION_TYPE_ABP;
        if (LoRaMacMibSetRequestConfirm(&mibReq) == LORAMAC_STATUS_OK)
        {
        }
        else
        {
            return -UDRV_INTERNAL_ERR;
        }
        if (service_lora_get_class() == SERVICE_LORA_CLASS_C)
        { 
            // Class C is now activated
            mibReq.Type = MIB_DEVICE_CLASS;
            mibReq.Param.Class = CLASS_C;
            LoRaMacMibSetRequestConfirm(&mibReq);
        } else if (service_lora_get_class() == SERVICE_LORA_CLASS_B)
        {
            service_lora_class_b_process();

            service_lora_wake_lock();
        }
    }
    else
    {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t service_lora_set_lora_default(void)
{
    LoRaMacStatus_t Status;
    int32_t ret;

    /**************************************************************************************
     *
     * Step 1. Start to disable LoRaWAN stack.
     *
     **************************************************************************************/

    if (SERVICE_LORAWAN == service_lora_get_nwm())
    {
        if ((ret = service_lora_stop()) != UDRV_RETURN_OK)
        {
            return ret;
        }
    }
    
    /**************************************************************************************
     *
     * Step 2. Restore the default configuration and save it.
     *
     **************************************************************************************/

    if (service_nvm_set_default_config_to_nvm() != UDRV_RETURN_OK)
    {
        udrv_serial_log_printf("%s(): Fail\r\n", __func__);
        return -UDRV_INTERNAL_ERR;
    }

    if(service_lora_clear_multicast()!= UDRV_RETURN_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    /**************************************************************************************
     *
     * Step 3-1. Start to init LoRaWAN stack with built-in config for the current band.
     * Step 3-2. Start to apply the RUI saved LoRaWAN config.
     * Step 3-3. Start to enable LoRaWAN stack.
     *
     **************************************************************************************/

    if (SERVICE_LORAWAN == service_lora_get_nwm())
    {
        if ((ret = service_lora_init(service_lora_get_band())) != UDRV_RETURN_OK)
        {
            return ret;
        }
    }

    return UDRV_RETURN_OK;
}

SERVICE_LORA_WORK_MODE service_lora_get_nwm(void)
{
    return service_nvm_get_nwm_from_nvm();
}

int32_t service_lora_set_nwm(SERVICE_LORA_WORK_MODE nwm)
{

    switch (nwm)
    {
    case SERVICE_LORA_P2P:
    case SERVICE_LORAWAN:
    case SERVICE_LORA_FSK:
        break;
    default:
        return -UDRV_INTERNAL_ERR;
    }

    service_nvm_set_nwm_to_nvm(nwm);
    udrv_system_reboot();

    return UDRV_RETURN_OK;
}

SERVICE_LORA_JOIN_MODE service_lora_get_njm(void)
{
    return service_nvm_get_njm_from_nvm();
}

int32_t service_lora_set_njm(SERVICE_LORA_JOIN_MODE njm, bool commit)
{
    MibRequestConfirm_t mibReq;
    uint8_t buff[16];
    int32_t ret;

    mibReq.Type = MIB_NETWORK_ACTIVATION;
    switch (njm)
    {
    case SERVICE_LORA_ABP:
        mibReq.Param.NetworkActivation = ACTIVATION_TYPE_ABP;
        break;
    case SERVICE_LORA_OTAA:
    default:
        if (LoRaMacMibGetRequestConfirm(&mibReq) == LORAMAC_STATUS_OK)
        {
            if (mibReq.Param.NetworkActivation == ACTIVATION_TYPE_ABP)
            {
                mibReq.Param.NetworkActivation = ACTIVATION_TYPE_NONE;
            }
        }
        else
        {
            return -UDRV_INTERNAL_ERR;
        }
        break;
    }
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    switch (njm)
    {
    case SERVICE_LORA_ABP:
        service_nvm_get_app_skey_from_nvm(buff, 16);
        mibReq.Type = MIB_APP_S_KEY;
        mibReq.Param.AppSKey = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        service_nvm_get_dev_addr_from_nvm(buff, 4);
        mibReq.Type = MIB_DEV_ADDR;
        mibReq.Param.DevAddr = __builtin_bswap32(*(uint32_t *)buff);
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        service_nvm_get_nwk_skey_from_nvm(buff, 16);
        mibReq.Type = MIB_F_NWK_S_INT_KEY;
        mibReq.Param.FNwkSIntKey = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        mibReq.Type = MIB_S_NWK_S_INT_KEY;
        mibReq.Param.SNwkSIntKey = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        mibReq.Type = MIB_NWK_S_ENC_KEY;
        mibReq.Param.NwkSEncKey = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        if ((ret = service_lora_set_class(service_nvm_get_class_from_nvm(), false)) != UDRV_RETURN_OK)
        {
            return ret;
        }

        break;
    case SERVICE_LORA_OTAA:
    default:
        service_nvm_get_dev_eui_from_nvm(buff, 8);
        mibReq.Type = MIB_DEV_EUI;
        mibReq.Param.DevEui = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        service_nvm_get_app_eui_from_nvm(buff, 8);
        mibReq.Type = MIB_JOIN_EUI;
        mibReq.Param.JoinEui = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        service_nvm_get_app_key_from_nvm(buff, 16);
        mibReq.Type = MIB_APP_KEY;
        mibReq.Param.AppKey = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        mibReq.Type = MIB_NWK_KEY;
        mibReq.Param.NwkKey = buff;
        if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }

        break;
    }

    if (commit)
    {
        return service_nvm_set_njm_to_nvm(njm);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

bool service_lora_get_njs(void)
{
    MibRequestConfirm_t mibReq;
    LoRaMacStatus_t status;

    mibReq.Type = MIB_NETWORK_ACTIVATION;
    status = LoRaMacMibGetRequestConfirm(&mibReq);

    if (status == LORAMAC_STATUS_OK)
    {
        if (mibReq.Param.NetworkActivation == ACTIVATION_TYPE_NONE)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int32_t service_lora_send(uint8_t *buff, uint32_t len, SERVICE_LORA_SEND_INFO info, bool blocking)
{
    LoRaMacStatus_t status;
    McpsReq_t mcpsReq;
    LoRaMacTxInfo_t txInfo;
    SERVICE_LORA_DATA_RATE dr = service_lora_get_dr();
    bool tx_possible = true;

    if (service_lora_get_njs() == false)
    {
        return -UDRV_NO_WAN_CONNECTION;
    }

    if (LoRaMacIsBusy() == true)
    {
        return -UDRV_BUSY;
    }

    if (service_lora_get_class() == SERVICE_LORA_CLASS_C)
    {
        // Class C is now activated
        MibRequestConfirm_t mibReq;
        mibReq.Type = MIB_DEVICE_CLASS;
        mibReq.Param.Class = CLASS_C;
        LoRaMacMibSetRequestConfirm(&mibReq);
    }
    else if (service_lora_get_class() == SERVICE_LORA_CLASS_B)
    {
        if (class_b_state != SERVICE_LORA_CLASS_B_COMPLETED) {
            service_lora_class_b_process();
        }
    }

    mcpsReq.Req.Unconfirmed.Datarate = dr;
    mcpsReq.Req.Confirmed.Datarate = dr;

    if (service_nvm_get_linkcheck_from_nvm() != LINK_CHECK_DISABLE)
    {
        if (service_nvm_get_linkcheck_from_nvm() == LINK_CHECK_ONCE)
            service_lora_set_linkcheck(LINK_CHECK_DISABLE);

        MlmeReq_t mlmeReq;
        mlmeReq.Type = MLME_LINK_CHECK;
        LoRaMacStatus_t status = LoRaMacMlmeRequest(&mlmeReq);
    }

    if (LoRaMacQueryTxPossible(len, &txInfo) != LORAMAC_STATUS_OK)
    {
        // Send empty frame in order to flush MAC commands
        mcpsReq.Type = MCPS_UNCONFIRMED;
        mcpsReq.Req.Unconfirmed.fBuffer = NULL;
        mcpsReq.Req.Unconfirmed.fBufferSize = 0;
        tx_possible = false;
    }
    else
    {
        mcpsReq.Req.Unconfirmed.fPort = info.port;
        mcpsReq.Req.Unconfirmed.fBufferSize = len;
        mcpsReq.Req.Unconfirmed.fBuffer = buff;

        // Set the retry times
        if (true == info.retry_valid)
            mcpsReq.Req.Confirmed.NbTrials = info.retry;
        else
        {
            mcpsReq.Req.Confirmed.NbTrials = service_nvm_get_retry_from_nvm()+1;
        }
        // Set the packet type
        if (true == info.confirm_valid)
        {
            if (info.confirm == SERVICE_LORA_NO_ACK)
                mcpsReq.Type = MCPS_UNCONFIRMED;
            else
                mcpsReq.Type = MCPS_CONFIRMED;
        }
        else
        {
            if (service_lora_get_cfm() == SERVICE_LORA_NO_ACK)
            {
                mcpsReq.Type = MCPS_UNCONFIRMED;
            }
            else
            {
                mcpsReq.Type = MCPS_CONFIRMED;
            }
        }
        last_ack = false;
    }

    status = LoRaMacMcpsRequest(&mcpsReq);
    LORA_TEST_DEBUG("status %d",status);
    LORA_TEST_DEBUG("DutyCycleWaitTime  %d",mcpsReq.ReqReturn.DutyCycleWaitTime);

    if (status == LORAMAC_STATUS_OK)
    {
        if (tx_possible == false)
        {
            return -UDRV_BUSY;
        }

        service_lora_wake_lock();
        if (blocking) {
#if 0
            udrv_app_delay_ms(service_lora_get_rx2dl());
#endif
        }
        return UDRV_RETURN_OK;
    }
    else if (status == LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME)
    {
        return -UDRV_BUSY;
    }
    else if (status == LORAMAC_STATUS_DUTYCYCLE_RESTRICTED)
    {
        udrv_serial_log_printf("Restricted (wait %d ms)\r\n", mcpsReq.ReqReturn.DutyCycleWaitTime);
        return -UDRV_BUSY;
    }
    else
    {
        return -UDRV_INTERNAL_ERR;
    }
}

bool service_lora_get_adr(void)
{
    return service_nvm_get_adr_from_nvm();
}

int32_t service_lora_set_adr(bool adr, bool commit)
{
    MibRequestConfirm_t mibReq;

    mibReq.Type = MIB_ADR;
    mibReq.Param.AdrEnable = adr;
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    if (commit)
    {
        return service_nvm_set_adr_to_nvm(adr);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

SERVICE_LORA_CLASS service_lora_get_class(void)
{
    return service_nvm_get_class_from_nvm();
}

int32_t service_lora_set_class(SERVICE_LORA_CLASS device_class, bool commit)
{
    MibRequestConfirm_t mibReq;
    MlmeReq_t mlmeReq;
    LoRaMacStatus_t status;

    if (service_lora_get_class() == device_class)
    {
        //Do nothing.
        return UDRV_RETURN_OK;
    }

    if (service_lora_get_njs() == true)
    {
        mibReq.Type = MIB_DEVICE_CLASS;
        if ((status = LoRaMacMibGetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }
        else
        {
            switch (mibReq.Param.Class)
            {
            case CLASS_A:
                switch (device_class)
                {
                case SERVICE_LORA_CLASS_A:
                    //Skip switching class A to class A case.
                    goto skip_class_setting;
                case SERVICE_LORA_CLASS_B:
                    class_b_state = SERVICE_LORA_CLASS_B_S0;//Initial state

                    goto skip_class_setting;
                case SERVICE_LORA_CLASS_C:
                    mibReq.Param.Class = CLASS_C;
                    break;
                default:
                    return -UDRV_INTERNAL_ERR;
                }
                break;
            case CLASS_B:
                switch (device_class)
                {
                case SERVICE_LORA_CLASS_A:
                    mibReq.Param.Class = CLASS_A;
                    break;
                case SERVICE_LORA_CLASS_B:
                    break;
                    //Skip switching class B to class B case.
                    goto skip_class_setting;
                case SERVICE_LORA_CLASS_C:
                    mibReq.Param.Class = CLASS_C;
                    break;
                default:
                    return -UDRV_INTERNAL_ERR;
                }
                break;
            case CLASS_C:
                switch (device_class)
                {
                case SERVICE_LORA_CLASS_A:
                    mibReq.Param.Class = CLASS_A;
                    break;
                case SERVICE_LORA_CLASS_B:
                    class_b_state = SERVICE_LORA_CLASS_B_S0;//Initial state

                    goto skip_class_setting;
                case SERVICE_LORA_CLASS_C:
                    //Skip switching class C to class C case.
                    goto skip_class_setting;
                default:
                    return -UDRV_INTERNAL_ERR;
                }
                break;
            default:
                return -UDRV_INTERNAL_ERR;
            }
        }
        if ((status = LoRaMacMibSetRequestConfirm(&mibReq)) != LORAMAC_STATUS_OK)
        {
            return -UDRV_INTERNAL_ERR;
        }
    }
skip_class_setting:

    if (commit)
    {
        return service_nvm_set_class_to_nvm(device_class);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

bool service_lora_get_dcs(void)
{
    // GetPhyParams_t getPhy;
    // PhyParam_t phyParam;

    // getPhy.Attribute = PHY_DUTY_CYCLE;
    // phyParam = RegionGetPhyParam(service_lora_get_band(), &getPhy);
    // return (uint32_t)phyParam.Value;
    return service_nvm_get_dcs_from_nvm();
}

int32_t service_lora_set_dcs(uint8_t dutycycle, bool commit )
{
    LoRaMacTestSetDutyCycleOn(dutycycle);

    if(commit)
    {
        return service_nvm_set_dcs_to_nvm(dutycycle);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

SERVICE_LORA_DATA_RATE service_lora_get_dr(void)
{
    return service_nvm_get_dr_from_nvm();
}

int32_t service_lora_set_dr(SERVICE_LORA_DATA_RATE dr, bool commit)
{
    LoRaMacStatus_t status;
    MibRequestConfirm_t mibReq;

    mibReq.Type = MIB_CHANNELS_DATARATE;
    mibReq.Param.ChannelsDatarate = (int8_t)dr;

    status = LoRaMacMibSetRequestConfirm(&mibReq);
    if (status == LORAMAC_STATUS_OK)
    {
        if (commit)
        {
            return service_nvm_set_dr_to_nvm(dr);
        }
        else
        {
            return UDRV_RETURN_OK;
        }
    }
    else if (status == LORAMAC_STATUS_PARAMETER_INVALID)
    {
        return -UDRV_WRONG_ARG;
    }
    else
    {
        return -UDRV_INTERNAL_ERR;
    }
}

uint32_t service_lora_get_jn1dl(void)
{
    return service_nvm_get_jn1dl_from_nvm();
}

int32_t service_lora_set_jn1dl(uint32_t jn1dl, bool commit)
{
    MibRequestConfirm_t mibReq;
    int32_t ret;

    mibReq.Type = MIB_JOIN_ACCEPT_DELAY_1;
    mibReq.Param.JoinAcceptDelay1 = jn1dl;
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    mibReq.Type = MIB_JOIN_ACCEPT_DELAY_2;
    mibReq.Param.JoinAcceptDelay2 = jn1dl + 1000;
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    if (commit)
    {
        if ((ret = service_nvm_set_jn2dl_to_nvm(jn1dl + 1000)) != UDRV_RETURN_OK)
        {
            return ret;
        }
        return service_nvm_set_jn1dl_to_nvm(jn1dl);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

uint32_t service_lora_get_jn2dl(void)
{
    return service_nvm_get_jn2dl_from_nvm();
}

bool service_lora_get_pub_nwk_mode(void)
{
    return service_nvm_get_pub_nwk_mode_from_nvm();
}

int32_t service_lora_set_pub_nwk_mode(bool pnm, bool commit)
{ 
    MibRequestConfirm_t mibReq;

    mibReq.Type = MIB_PUBLIC_NETWORK;
    mibReq.Param.EnablePublicNetwork = pnm;
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    if (commit)
    {
        return service_nvm_set_pub_nwk_mode_to_nvm(pnm);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

uint32_t service_lora_get_rx1dl(void)
{
    if ((service_lora_get_njm() == SERVICE_LORA_OTAA) && service_lora_get_njs())
    {
        MibRequestConfirm_t mibReq;

        mibReq.Type = MIB_RECEIVE_DELAY_1;
        if (LoRaMacMibGetRequestConfirm(&mibReq) == LORAMAC_STATUS_OK)
        {
            return mibReq.Param.ReceiveDelay1;
        }
    }
    else
    {
        return service_nvm_get_rx1dl_from_nvm();
    }
}

int32_t service_lora_set_rx1dl(uint32_t rx1dl, bool commit)
{
    MibRequestConfirm_t mibReq;
    int32_t ret;

    mibReq.Type = MIB_RECEIVE_DELAY_1;
    mibReq.Param.ReceiveDelay1 = rx1dl;
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    mibReq.Type = MIB_RECEIVE_DELAY_2;
    mibReq.Param.ReceiveDelay2 = rx1dl + 1000;
    if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    if (commit)
    {
        if ((ret = service_nvm_set_rx2dl_to_nvm(rx1dl + 1000)) != UDRV_RETURN_OK)
        {
            return ret;
        }
        return service_nvm_set_rx1dl_to_nvm(rx1dl);
    }
    else
    {
        return UDRV_RETURN_OK;
    }
}

uint32_t service_lora_get_rx2dl(void)
{
    return service_nvm_get_rx2dl_from_nvm();
}

uint8_t service_lora_get_txpower(void)
{
    return service_nvm_get_txpower_from_nvm();
}

int32_t service_lora_set_txpower(uint8_t txp, bool commit)
{
    LoRaMacStatus_t status;
    MibRequestConfirm_t mibReq;

    mibReq.Type = MIB_CHANNELS_TX_POWER;
    mibReq.Param.ChannelsTxPower = txp;

    status = LoRaMacMibSetRequestConfirm(&mibReq);
    if (status == LORAMAC_STATUS_OK)
    {
        if (commit)
        {
            return service_nvm_set_txpower_to_nvm(txp);
        }
        else
        {
            return UDRV_RETURN_OK;
        }
    }
    else if (status == LORAMAC_STATUS_PARAMETER_INVALID)
    {
        return -UDRV_WRONG_ARG;
    }
    else
    {
        return -UDRV_INTERNAL_ERR;
    }
}

uint8_t service_lora_get_ping_slot_periodicity(void)
{
    return service_nvm_get_ping_slot_periodicity_from_nvm();
}

int32_t service_lora_set_ping_slot_periodicity(uint8_t periodicity)
{
    return service_nvm_set_ping_slot_periodicity_to_nvm(periodicity);
}

uint32_t service_lora_get_beacon_freq(void)
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;

    getPhy.Attribute = PHY_BEACON_CHANNEL_FREQ;
    phyParam = RegionGetPhyParam(service_lora_get_band(), &getPhy);
    return (uint32_t)phyParam.Value;
}


uint32_t service_lora_get_beacon_dr(void)
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;

    getPhy.Attribute = PHY_BEACON_CHANNEL_DR;
    phyParam = RegionGetPhyParam(service_lora_get_band(), &getPhy);
    return (uint32_t)phyParam.Value;
}

uint32_t service_lora_get_beacon_time(void)
{
    return (uint32_t)btime.Seconds;
}

int16_t service_lora_get_rssi(void)
{
    return rssi;
}

int8_t service_lora_get_snr(void)
{
    return snr;
}

int32_t service_lora_get_local_time(char *local_time)
{
    struct tm localtime;
    SysTime_t UnixEpoch = SysTimeGet();

    UnixEpoch.Seconds -= 18; /*removing leap seconds*/
    SysTimeLocalTime(UnixEpoch.Seconds, &localtime);
    sprintf(local_time, "%02dh%02dm%02ds %02d-%02d-%04d", localtime.tm_hour, localtime.tm_min, localtime.tm_sec,
            localtime.tm_mday, localtime.tm_mon + 1, localtime.tm_year + 1900);

    return UDRV_RETURN_OK;
}

uint32_t service_lora_get_lorawan_version(char **version)
{
    *version = lorawan_ver;
    return UDRV_RETURN_OK;
}

uint32_t service_lora_get_rx2freq(void)
{
    MibRequestConfirm_t mibReq;
    mibReq.Type = MIB_RX2_CHANNEL;
    if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }
    return mibReq.Param.Rx2Channel.Frequency;
}

uint32_t service_lora_set_rx2dr(SERVICE_LORA_DATA_RATE datarate, bool commit)
{
    LoRaMacStatus_t status;
    MibRequestConfirm_t mibReq;

    mibReq.Type = MIB_RX2_CHANNEL;
    if (LoRaMacMibGetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
    {
        return -UDRV_INTERNAL_ERR;
    }

    mibReq.Type = MIB_RXC_CHANNEL;
    mibReq.Param.RxCChannel.Datarate = (uint8_t)datarate;

    status = LoRaMacMibSetRequestConfirm(&mibReq);

    mibReq.Type = MIB_RX2_CHANNEL;
    mibReq.Param.Rx2Channel.Datarate = (uint8_t)datarate;

    status = LoRaMacMibSetRequestConfirm(&mibReq);
    if (status == LORAMAC_STATUS_OK)
    {
        if (commit)
        {
            return service_nvm_set_rx2dr_to_nvm(datarate);
        }
        else
        {
            return UDRV_RETURN_OK;
        }
    }
    else if (status == LORAMAC_STATUS_PARAMETER_INVALID)
    {
        return -UDRV_WRONG_ARG;
    }
    else
    {
        return -UDRV_INTERNAL_ERR;
    }
}

SERVICE_LORA_DATA_RATE service_lora_get_rx2dr(void)
{
    return service_nvm_get_rx2dr_from_nvm();
}

uint8_t service_lora_get_linkcheck(void)
{
    return service_nvm_get_linkcheck_from_nvm();
}

int32_t service_lora_set_linkcheck(uint8_t mode)
{
    if(mode>2)
    {
        return -UDRV_WRONG_ARG;
    }
    return service_nvm_set_linkcheck_to_nvm(mode);
}

bool service_lora_get_join_start(void)
{
    return service_nvm_get_join_start_from_nvm();
}

int32_t service_lora_set_join_start(bool join_start)
{
    return service_nvm_set_join_start_to_nvm(join_start);
}

bool service_lora_get_auto_join(void)
{
    return service_nvm_get_auto_join_from_nvm();
}

int32_t service_lora_set_auto_join(bool auto_join)
{
    return service_nvm_set_auto_join_to_nvm(auto_join);
}

uint32_t service_lora_get_auto_join_period(void)
{
    return service_nvm_get_auto_join_period_from_nvm();
}

int32_t service_lora_set_auto_join_period(uint32_t auto_join_period)
{
    return service_nvm_set_auto_join_period_to_nvm(auto_join_period);
}

uint32_t service_lora_get_auto_join_max_cnt(void)
{
    return service_nvm_get_auto_join_max_cnt_from_nvm();
}

int32_t service_lora_set_auto_join_max_cnt(uint32_t auto_join_max_cnt)
{
    return service_nvm_set_auto_join_max_cnt_to_nvm(auto_join_max_cnt);
}

int32_t service_lora_get_last_recv(uint8_t *port, uint8_t *buff, uint32_t len)
{
    int32_t actual_len;

    if (len < last_dlink_data_size)
    {
        actual_len = len;
    }
    else
    {
        actual_len = last_dlink_data_size;
    }
    memcpy(buff, last_dlink_data, actual_len);
    *port = last_dlink_port;
    last_dlink_data_size = 0;
    last_dlink_port = 0;

    return actual_len;
}

int32_t service_lora_get_che(void)
{
    SERVICE_LORA_BAND band = service_lora_get_band();
    uint16_t mask, sub_band;

    if ((band != SERVICE_LORA_AU915) && (band != SERVICE_LORA_US915) && (band != SERVICE_LORA_CN470))
        return -UDRV_WRONG_ARG;
    service_lora_get_mask(&mask);
    switch (band)
    {
    case SERVICE_LORA_AU915:
    case SERVICE_LORA_US915:
        switch (mask)
        {
        case SERVICE_LORA_CHANNEL_ALL:
        case SERVICE_LORA_CHANNEL_0_63:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_0;
            break;
        case SERVICE_LORA_CHANNEL_0_7:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_1;
            break;
        case SERVICE_LORA_CHANNEL_8_15:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_2;
            break;
        case SERVICE_LORA_CHANNEL_16_23:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_3;
            break;
        case SERVICE_LORA_CHANNEL_24_31:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_4;
            break;
        case SERVICE_LORA_CHANNEL_32_39:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_5;
            break;
        case SERVICE_LORA_CHANNEL_40_47:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_6;
            break;
        case SERVICE_LORA_CHANNEL_48_55:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_7;
            break;
        case SERVICE_LORA_CHANNEL_56_63:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_8;
            break;
        default:
            return -UDRV_INTERNAL_ERR;
            break;
        }

        break;
    case SERVICE_LORA_CN470:

        switch (mask)
        {
        case 0x0fff:
        case SERVICE_LORA_CHANNEL_ALL:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_0;
            break;
        case SERVICE_LORA_CHANNEL_80_87:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_1;
            break;
        case SERVICE_LORA_CHANNEL_88_95:
            sub_band = SERVICE_LORA_CH_EIGHT_MODE_2;
            break;
        default:
            return -UDRV_WRONG_ARG;

            break;
        }

        break;
    default:

        break;
    }
    return sub_band;
}

int32_t service_lora_set_che(uint8_t sub_band)
{
    SERVICE_LORA_BAND band = service_lora_get_band();
    uint16_t mask;
    if ((band != SERVICE_LORA_AU915) && (band != SERVICE_LORA_US915) && (band != SERVICE_LORA_CN470))
        return -UDRV_WRONG_ARG;

    switch (band)
    {
    case SERVICE_LORA_US915:
    case SERVICE_LORA_AU915:
        switch (sub_band)
        {
        case SERVICE_LORA_CH_EIGHT_MODE_0:
            mask = SERVICE_LORA_CHANNEL_0_63;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_1:
            mask = SERVICE_LORA_CHANNEL_0_7;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_2:
            mask = SERVICE_LORA_CHANNEL_8_15;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_3:
            mask = SERVICE_LORA_CHANNEL_16_23;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_4:
            mask = SERVICE_LORA_CHANNEL_24_31;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_5:
            mask = SERVICE_LORA_CHANNEL_32_39;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_6:
            mask = SERVICE_LORA_CHANNEL_40_47;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_7:
            mask = SERVICE_LORA_CHANNEL_48_55;
            break;
        case SERVICE_LORA_CH_EIGHT_MODE_8:
            mask = SERVICE_LORA_CHANNEL_56_63;
            break;
        default:
            return -UDRV_WRONG_ARG;
        }
        break;

    case SERVICE_LORA_CN470:
        if (sub_band == 0)
            mask = SERVICE_LORA_CHANNEL_ALL;
        else if (sub_band == 1)
            mask = SERVICE_LORA_CHANNEL_80_87;
        else if (sub_band == 2)
            mask = SERVICE_LORA_CHANNEL_88_95;
        else
            return -UDRV_WRONG_ARG;
        break;

    default:
        return -UDRV_WRONG_ARG;
        break;
    }

    return service_lora_set_mask(&mask, 1);
}

beacon_bgw_t service_lora_get_beacon_gwspecific(void)
{
    return beacon_bgw;
}

int32_t service_lora_set_chs(uint32_t frequency)
{
    uint8_t i, max_nb_ch, j;
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    uint16_t channel_mask[REGION_NVM_CHANNELS_MASK_SIZE] = {0};
    SERVICE_LORA_BAND band = service_lora_get_band();
    MibRequestConfirm_t mibReq;

    if ((band != SERVICE_LORA_AU915) && (band != SERVICE_LORA_US915) && (band != SERVICE_LORA_CN470))
    {
        return -UDRV_INTERNAL_ERR;
    }
    else
    {
        if (frequency == 0)
        {
            uint16_t lora_service_channel_mask = 0;
            uint8_t *p_mask;
            if (service_nvm_get_mask_from_nvm(channel_mask) != UDRV_RETURN_OK)
            {
                return -UDRV_INTERNAL_ERR;
            }
            p_mask = (uint8_t *)channel_mask;
            for (uint8_t i = 0; i < REGION_NVM_CHANNELS_MASK_SIZE * 2; i++)
            {
                if (p_mask[i])
                    lora_service_channel_mask |= (1 << i);
            }
            if (service_lora_set_mask(&lora_service_channel_mask, false) != UDRV_RETURN_OK)
            {
                return -UDRV_INTERNAL_ERR;
            }
            service_rui_set_chs_to_nvm(frequency);
            return UDRV_RETURN_OK;
        }

        getPhy.Attribute = PHY_MAX_NB_CHANNELS;
        phyParam = RegionGetPhyParam(band, &getPhy);
        max_nb_ch = phyParam.Value;
        mibReq.Type = MIB_CHANNELS;
        LoRaMacMibGetRequestConfirm(&mibReq);

        for (i = 0; i < max_nb_ch; i++)
        {
            if (frequency == mibReq.Param.ChannelList[i].Frequency)
            {
                channel_mask[i / 16] = 1 << (i % 16);
                mibReq.Type = MIB_CHANNELS_MASK;
                mibReq.Param.ChannelsMask = channel_mask;
                if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
                {
                    return -UDRV_INTERNAL_ERR;
                }

                mibReq.Type = MIB_CHANNELS_DEFAULT_MASK;
                mibReq.Param.ChannelsMask = channel_mask;
                if (LoRaMacMibSetRequestConfirm(&mibReq) != LORAMAC_STATUS_OK)
                {
                    return -UDRV_INTERNAL_ERR;
                }
                service_rui_set_chs_to_nvm(frequency);
                return UDRV_RETURN_OK;
            }
        }
        if (i == max_nb_ch)
        {
            return -UDRV_WRONG_ARG;
        }
    }
    return UDRV_RETURN_OK;
}

int32_t service_lora_get_chs(void)
{
    SERVICE_LORA_BAND band = service_lora_get_band();
    if ((band != SERVICE_LORA_AU915) && (band != SERVICE_LORA_US915) && (band != SERVICE_LORA_CN470))
    {
        return -UDRV_INTERNAL_ERR;
    }
    return service_rui_get_chs_from_nvm();
}

void service_lora_linkcheck_callback(void)
{
    if (linkcheck_flag)
    {
        linkcheck_flag = 0;
        if (!linkcheck_state)
        {
            // Check DemodMargin
            // Check NbGateways
            udrv_serial_log_printf("+EVT: LINKCHECK : 0,%d,%d,%d,%d\r\n", DemodMargin, NbGateways, rssi, snr);
        }
    }
}

int32_t service_lora_register_recv_cb(service_lora_recv_cb callback)
{
    service_lora_recv_callback = callback;
    return UDRV_RETURN_OK;
}

int32_t service_lora_register_join_cb(service_lora_join_cb callback)
{
    service_lora_join_callback = callback;
    return UDRV_RETURN_OK;
}

int32_t service_lora_register_send_cb(service_lora_send_cb callback)
{
    service_lora_send_callback = callback;
    return UDRV_RETURN_OK;
}

SERVICE_LORA_CLASS_B_STATE service_lora_get_class_b_state(void)
{
    return class_b_state;
}
