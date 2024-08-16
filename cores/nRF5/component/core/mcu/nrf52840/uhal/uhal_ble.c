#include "uhal_ble.h"
#include "nrf_log.h"
#include "udrv_system.h"
#include "udrv_serial.h"

#ifdef SUPPORT_BLE
#define NRF_BLE_GQ_QUEUE_SIZE   4
#ifndef NRF_BLE_GQ_BLE_OBSERVER_PRIO
#define NRF_BLE_GQ_BLE_OBSERVER_PRIO 1
#endif
BLE_NUS_DEF(m_nus, NRF_SDH_BLE_TOTAL_LINK_COUNT);                                   /**< BLE NUS service instance. */
NRF_BLE_GATT_DEF(m_gatt);
BLE_ADVERTISING_DEF(m_advertising);                                                 /**< Advertising module instance. */

BLE_NUS_C_DEF(m_ble_nus_c);                                             /**< BLE NUS service client instance. */
//BLE_RCS_C_ARRAY_DEF(m_rcs_c, NRF_SDH_BLE_CENTRAL_LINK_COUNT);           /**< Rak Custom client instances. */
BLE_DB_DISCOVERY_ARRAY_DEF(m_db_disc, NRF_SDH_BLE_CENTRAL_LINK_COUNT);  /**< Database discovery module instances. */
NRF_BLE_SCAN_DEF(m_scan);                                               /**< Scanning Module instance. */
NRF_BLE_GQ_DEF(m_ble_gatt_queue, NRF_SDH_BLE_CENTRAL_LINK_COUNT, NRF_BLE_GQ_QUEUE_SIZE);

static uint16_t   m_conn_handle          = BLE_CONN_HANDLE_INVALID;                 /**< Handle of the current connection. */
static uint16_t   m_ble_nus_max_data_len = BLE_GATT_ATT_MTU_DEFAULT - 3;            /**< Maximum length of data (in bytes) that can be transmitted to the peer by the Nordic UART service module. */
static ble_uuid_t m_adv_uuids[]          =                                          /**< Universally unique service identifier. */
{
    {BLE_UUID_NUS_SERVICE, NUS_SERVICE_UUID_TYPE}
};


static ble_gap_adv_params_t m_adv_params;                                  /**< Parameters to be passed to the stack when starting advertising. */
static ble_advdata_t beacon_advdata;
static ble_advdata_t beacon_srdata;
static ble_advdata_manuf_data_t manuf_specific_data;

static uint8_t              m_adv_handle = BLE_GAP_ADV_SET_HANDLE_NOT_SET; /**< Advertising handle used to identify an advertising set. */
static uint8_t              m_enc_advdata[BLE_GAP_ADV_SET_DATA_SIZE_MAX];  /**< Buffer for storing an encoded advertising set. */
static uint8_t              m_enc_srdata[BLE_GAP_ADV_SET_DATA_SIZE_MAX];  /**< Buffer for storing an encoded scan set. */


/**@brief Struct that contains pointers to the encoded advertising data. */
static ble_gap_adv_data_t m_adv_data =
{
    .adv_data =
    {
        .p_data = m_enc_advdata,
        .len    = BLE_GAP_ADV_SET_DATA_SIZE_MAX
    },
    .scan_rsp_data =
    {
        .p_data = m_enc_srdata,
        .len    = BLE_GAP_ADV_SET_DATA_SIZE_MAX
    }
};

static uint8_t m_beacon_info[APP_BEACON_INFO_LENGTH] =                    /**< Information advertised by the Beacon. */
{
    APP_DEVICE_TYPE,     // Manufacturer specific information. Specifies the device type in this
                         // implementation.
    APP_ADV_DATA_LENGTH, // Manufacturer specific information. Specifies the length of the
                         // manufacturer specific data in this implementation.
    APP_BEACON_UUID,     // 128 bit UUID value.
    APP_MAJOR_VALUE,     // Major arbitrary value that can be used to distinguish between Beacons.
    APP_MINOR_VALUE,     // Minor arbitrary value that can be used to distinguish between Beacons.
    APP_MEASURED_RSSI    // Manufacturer specific information. The Beacon's measured TX power in
                         // this implementation.
};
// Scan parameters requested for scanning and connection.
static ble_gap_scan_params_t m_scan_param_coded_phy =               // Long Range support
{
    .extended      = 1,                                             // must to change sdk_config "NRF_BLE_SCAN_BUFFER" 31 -> 255
    .active        = 1,
    .interval      = SCAN_INTERVAL,
    .window        = SCAN_WINDOW,                                   /**< Scan window in 625 us units. @sa BLE_GAP_SCAN_WINDOW.
                                                                        If scan_phys contains both @ref BLE_GAP_PHY_1MBPS and
                                                                        @ref BLE_GAP_PHY_CODED interval shall be larger than or
                                                                        equal to twice the scan window. */
    .timeout       = 0x0000,                                        // No timeout.
    .scan_phys     = BLE_GAP_PHY_CODED,
    .filter_policy = BLE_GAP_SCAN_FP_ACCEPT_ALL,
};

static ble_gap_scan_params_t m_scan_param_1MBps =
{
    .active        = 1,
    .interval      = SCAN_INTERVAL,
    .window        = SCAN_WINDOW,
    .timeout       = 0x0000,                                        // No timeout.
    .scan_phys     = BLE_GAP_PHY_AUTO,                              //BLE_GAP_PHY_1MBPS,
    .filter_policy = BLE_GAP_SCAN_FP_ACCEPT_ALL,
};
static ble_central_cfg_t uhal_g_ble_cfg_t =
    {
        /* BLE default configuration */
        .work_mode = BLE_WORK_PERIPHERAL,
        .long_range_enable = 0,
};

static void nus_c_init(void);

static void db_discovery_init(void);

static uint8_t g_ble_current_mode = BLE_WORK_PERIPHERAL;

static uint32_t uhal_ble_wlock_cnt;

int uhal_is_advertising;

extern uint8_t ble_current_service;

static uint8_t always_advertise;

extern ble_advertising_t m_hid_advertising;

extern ble_advertising_init_t hid_adv_init;

extern bool udrv_powersave_in_sleep;
static udrv_system_event_t rui_ble_event = {.request = UDRV_SYS_EVT_OP_SERIAL_BLE, .p_context = NULL};

static ble_advertising_init_t init;
static int uhal_is_scanning = 0;

struct uhal_ble_parameter ble_parameter =
{
    .txpower = DRV_BLE_TX_POWER_0DBM,
    .custom_dev_name = {'\0'},
    .adv_interval = APP_ADV_INTERVAL,
    .adv_mode = DRV_BLE_ADV_MODE_FAST,
    .service_mode = DRV_BLE_UART_MODE,
    .adv_timeout = APP_ADV_TIMEOUT_IN_SECONDS,
    .pairing_key = {},
    .permission = SET_ENC_NO_MITM,
};

void uhal_ble_wake_lock (void) {
    uhal_ble_wlock_cnt++;
}

void uhal_ble_wake_unlock (void) {
    if (uhal_ble_wlock_cnt > 0) {
        uhal_ble_wlock_cnt--;
    }
}

void uhal_ble_wake_unlock_all (void) {
    while (uhal_ble_wlock_cnt > 0) {
        uhal_ble_wlock_cnt--;
    }
}

static void (*SCAN_DATA_HANDLER)(int8_t, uint8_t *, uint8_t *, uint16_t); //rssi, mac address, raw data, raw data length
static void (*CONNECT_HANDLER)(void);
static void (*DISCONNECT_HANDLER)(void);


void uhal_ble_connect_handler(BLE_HANDLER handler)
{
    CONNECT_HANDLER = handler;
}
    
void uhal_ble_disconnect_handler(BLE_HANDLER handler)
{
    DISCONNECT_HANDLER = handler;  
}

void uhal_ble_scan_data_handler(BLE_SCAN_DATA_HANDLER handler)
{
    SCAN_DATA_HANDLER = handler;
}

static void (*CLI_HANDLER) (void *);

void uhal_ble_register_cli_handler (SERIAL_CLI_HANDLER handler)
{
    CLI_HANDLER = handler;
}

#define READ_SIZE 1

NRF_QUEUE_DEF(uint8_t, ble_rxq, 256, NRF_QUEUE_MODE_NO_OVERFLOW);

static void uhal_nus_data_handler(ble_nus_evt_t *p_evt)
{
    if (p_evt->type == BLE_NUS_EVT_RX_DATA)
    {
        uint32_t err_code;
        size_t rx_available = nrf_queue_available_get(&ble_rxq);

        udrv_powersave_in_sleep = false;
        if (rx_available >= p_evt->params.rx_data.length)
        {
#ifndef RUI_BOOTLOADER
            {
                for (int i = 0 ; i < p_evt->params.rx_data.length ; i++) {
                    serial_fallback_handler(SERIAL_BLE0, p_evt->params.rx_data.p_data[i]);
                }
            }
#endif
            nrf_queue_in(&ble_rxq, p_evt->params.rx_data.p_data, p_evt->params.rx_data.length);
        } else {
            NRF_LOG_ERROR("%u available is less than %u received!", rx_available, p_evt->params.rx_data.length);
#ifndef RUI_BOOTLOADER
            {
                for (int i = 0 ; i < rx_available ; i++) {
                    serial_fallback_handler(SERIAL_BLE0, p_evt->params.rx_data.p_data[i]);
                }
            }
#endif
            nrf_queue_in(&ble_rxq, p_evt->params.rx_data.p_data, rx_available);
        }
        udrv_system_event_produce(&rui_ble_event);
    }
}

size_t uhal_nus_available()
{
    return (size_t)nrf_queue_utilization_get(&ble_rxq);
}

int32_t uhal_nus_read(uint8_t *Buffer, int32_t NumberOfBytes)
{
    return (int32_t)nrf_queue_out(&ble_rxq, Buffer, NumberOfBytes);
}

int32_t uhal_nus_write(uint8_t *pdata, uint16_t length)
{
    uint32_t ret;

    if (m_conn_handle != BLE_CONN_HANDLE_INVALID) {
        uint8_t *p = pdata;
        uint16_t remaining = length, chunk_len = BLE_NUS_MAX_DATA_LEN;
        while (remaining > BLE_NUS_MAX_DATA_LEN) {
            while ((ret = ble_nus_data_send(&m_nus, p, &chunk_len, m_conn_handle))) {
                if (ret == NRF_ERROR_INVALID_STATE || ret == NRF_ERROR_INVALID_PARAM) {
                    return -UDRV_INTERNAL_ERR;
                }
                NRF_LOG_ERROR("sending failed. (%u)", ret);
            }
            p += BLE_NUS_MAX_DATA_LEN;
            remaining -= BLE_NUS_MAX_DATA_LEN;
        }
        while ((ret = ble_nus_data_send(&m_nus, p, &remaining, m_conn_handle))) {
            if (ret == NRF_ERROR_INVALID_STATE || ret == NRF_ERROR_INVALID_PARAM) {
                return -UDRV_INTERNAL_ERR;
            }
            NRF_LOG_ERROR("sending failed. (%u)", ret);
        }
        return UDRV_RETURN_OK;
    }
    return -UDRV_INTERNAL_ERR;
}

static void sleep_mode_enter(void)
{
    uint32_t err_code = sd_power_system_off();
    APP_ERROR_CHECK(err_code);
}
void uhal_ble_default_config()
{
    ble_parameter.txpower = DRV_BLE_TX_POWER_0DBM; 
    strncpy(ble_parameter.custom_dev_name, (const uint8_t *)DEVICE_NAME, sizeof(ble_parameter.custom_dev_name));
    ble_parameter.adv_interval = APP_ADV_INTERVAL;
    ble_parameter.adv_mode = DRV_BLE_ADV_MODE_FAST; 
    ble_parameter.service_mode = DRV_BLE_UART_MODE;

}
static void ble_on_adv_evt(ble_adv_evt_t ble_adv_evt)
{
    uint32_t err_code;
    switch (ble_adv_evt)
    {
    case BLE_ADV_EVT_FAST:
        break;
    case BLE_ADV_EVT_IDLE:
        if (ble_parameter.service_mode == DRV_BLE_UART_MODE)
        {
            nrf_queue_reset(&ble_rxq);
            uhal_is_advertising = 0;
            uhal_ble_wake_unlock();
        }
        break;
    default:
        break;
    }
}


static void nus_pm_evt_handler(pm_evt_t const * p_evt)
{
    pm_handler_on_pm_evt(p_evt);
    pm_handler_disconnect_on_sec_failure(p_evt);
    pm_handler_flash_clean(p_evt);

    switch (p_evt->evt_id)
    {
        case PM_EVT_PEERS_DELETE_SUCCEEDED:
            uhal_advertising_start(ble_parameter.adv_timeout);
            break;
        case PM_EVT_CONN_SEC_CONFIG_REQ:
        {
            pm_conn_sec_config_t conn_sec_config = {.allow_repairing = true}; //allow repairing
            pm_conn_sec_config_reply(p_evt->conn_handle, &conn_sec_config);
            break;
        }
        default:
            break;
    }
}


void uhal_nus_peer_manager_init(void)
{
    if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
        return;
    ble_gap_sec_params_t sec_params;
    ret_code_t err_code;

    uhal_delay_ms(20); //black magic
    err_code = pm_init();
    APP_ERROR_CHECK(err_code);

    memset(&sec_params, 0, sizeof(ble_gap_sec_params_t));

    // Security parameters to be used for all security procedures.
    sec_params.bond           = SEC_PARAMS_BOND;
    if(ble_parameter.permission == SET_ENC_NO_MITM)
    {
        sec_params.mitm           = 0;
        sec_params.io_caps        = BLE_GAP_IO_CAPS_NONE;
        sec_params.lesc           = 0;
    }
    else
    { 
        sec_params.mitm           = SEC_PARAMS_MITM;
        sec_params.io_caps        = SEC_PARAMS_IO_CAPABILITIES;
        sec_params.lesc           = SEC_PARAMS_LESC;
    }
    
    sec_params.keypress       = SEC_PARAMS_KEYPRESS;
    sec_params.oob            = SEC_PARAMS_OOB;
    sec_params.min_key_size   = SEC_PARAMS_MIN_KEY_SIZE;
    sec_params.max_key_size   = SEC_PARAMS_MAX_KEY_SIZE;
    sec_params.kdist_own.enc  = 1;
    sec_params.kdist_own.id   = 1;
    sec_params.kdist_peer.enc = 1;
    sec_params.kdist_peer.id  = 1;

    err_code = pm_sec_params_set(&sec_params);
    APP_ERROR_CHECK(err_code);

    err_code = pm_register(nus_pm_evt_handler);
    APP_ERROR_CHECK(err_code);
}


void uhal_gap_params_init(void)
{
    if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
        return;
    uint32_t err_code;
    ble_gap_conn_params_t gap_conn_params;
    ble_gap_conn_sec_mode_t sec_mode;
    char set_dev_name[30];
    ble_gap_addr_t gap_addr;

    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&sec_mode);

    err_code = sd_ble_gap_addr_get(&gap_addr);
    APP_ERROR_CHECK(err_code);
#ifdef SUPPORT_LORA
    uint8_t rbuff[8] = {0};
    service_lora_get_dev_eui(rbuff, 8);
#endif
    if (strlen(ble_parameter.custom_dev_name) == 0)
        sprintf(set_dev_name, "%s.%02X%02X%02X", DEVICE_NAME,
#ifdef SUPPORT_LORA
            rbuff[5],
            rbuff[6],
            rbuff[7]
#else
            gap_addr.addr[2],
            gap_addr.addr[1],
            gap_addr.addr[0]
#endif
        );
    else
        sprintf(set_dev_name, "%s", ble_parameter.custom_dev_name);

    err_code = sd_ble_gap_device_name_set(&sec_mode,
                                          (const uint8_t *)set_dev_name,
                                          strlen(set_dev_name));
    APP_ERROR_CHECK(err_code);

    strncpy(ble_parameter.custom_dev_name, set_dev_name, sizeof(set_dev_name));
    
    memset(&gap_conn_params, 0, sizeof(gap_conn_params));

    gap_conn_params.min_conn_interval = MIN_CONN_INTERVAL;
    gap_conn_params.max_conn_interval = MAX_CONN_INTERVAL;
    gap_conn_params.slave_latency = SLAVE_LATENCY;
    gap_conn_params.conn_sup_timeout = CONN_SUP_TIMEOUT;

    err_code = sd_ble_gap_ppcp_set(&gap_conn_params);
    APP_ERROR_CHECK(err_code);

    if(ble_parameter.pairing_key[0] && (ble_parameter.permission == SET_ENC_WITH_MITM))
    {
        ble_opt_t passkey_opt;
        //uint8_t passkey[] = "123456";
        passkey_opt.gap_opt.passkey.p_passkey = ble_parameter.pairing_key;
        err_code = sd_ble_opt_set(BLE_GAP_OPT_PASSKEY, &passkey_opt);
        APP_ERROR_CHECK(err_code);
    }
    else if (ble_parameter.permission == SET_ENC_NO_MITM)
    {
        NRF_LOG_DEBUG("(NUS)BLE use none pairing.");
    }
    
}

void uhal_gatt_evt_handler(nrf_ble_gatt_t *p_gatt, nrf_ble_gatt_evt_t const *p_evt)
{
    if ((m_conn_handle == p_evt->conn_handle) && (p_evt->evt_id == NRF_BLE_GATT_EVT_ATT_MTU_UPDATED))
    {
        m_ble_nus_max_data_len = p_evt->params.att_mtu_effective - OPCODE_LENGTH - HANDLE_LENGTH;
        NRF_LOG_INFO("Data len is set to 0x%X(%d)", m_ble_nus_max_data_len, m_ble_nus_max_data_len);
    }
    NRF_LOG_DEBUG("ATT MTU exchange completed. central 0x%x peripheral 0x%x",
                  p_gatt->att_mtu_desired_central,
                  p_gatt->att_mtu_desired_periph);
}

void uhal_gatt_init(void)
{
    if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
        return;
    int32_t err_code;

    err_code = nrf_ble_gatt_init(&m_gatt, uhal_gatt_evt_handler);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_ble_gatt_att_mtu_periph_set(&m_gatt, NRF_SDH_BLE_GATT_MAX_MTU_SIZE);
    APP_ERROR_CHECK(err_code);
}

void uhal_advertising_init(void)
{
    uint32_t err_code;
    if (ble_parameter.service_mode == DRV_BLE_UART_MODE)
    {
        memset(&init, 0, sizeof(init));

        init.advdata.name_type = BLE_ADVDATA_FULL_NAME;
        init.advdata.include_appearance = false;
        init.advdata.flags = BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE;

        init.srdata.uuids_complete.uuid_cnt = sizeof(m_adv_uuids) / sizeof(m_adv_uuids[0]);
        init.srdata.uuids_complete.p_uuids = m_adv_uuids;

        init.config.ble_adv_fast_enabled = true;
        init.config.ble_adv_fast_interval = APP_ADV_INTERVAL;
        init.config.ble_adv_fast_timeout = APP_ADV_TIMEOUT_IN_SECONDS * 100;

        init.evt_handler = ble_on_adv_evt;

        err_code = ble_advertising_init(&m_advertising, &init);
        APP_ERROR_CHECK(err_code);

        ble_advertising_conn_cfg_tag_set(&m_advertising, APP_BLE_CONN_CFG_TAG);
    }
    else if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
    {

        manuf_specific_data.company_identifier = APP_COMPANY_IDENTIFIER;

#if defined(USE_UICR_FOR_MAJ_MIN_VALUES)
        // If USE_UICR_FOR_MAJ_MIN_VALUES is defined, the major and minor values will be read from the
        // UICR instead of using the default values. The major and minor values obtained from the UICR
        // are encoded into advertising data in big endian order (MSB First).
        // To set the UICR used by this example to a desired value, write to the address 0x10001080
        // using the nrfjprog tool. The command to be used is as follows.
        // nrfjprog --snr <Segger-chip-Serial-Number> --memwr 0x10001080 --val <your major/minor value>
        // For example, for a major value and minor value of 0xabcd and 0x0102 respectively, the
        // the following command should be used.
        // nrfjprog --snr <Segger-chip-Serial-Number> --memwr 0x10001080 --val 0xabcd0102
        uint16_t major_value = ((*(uint32_t *)UICR_ADDRESS) & 0xFFFF0000) >> 16;
        uint16_t minor_value = ((*(uint32_t *)UICR_ADDRESS) & 0x0000FFFF);
        uint8_t index = MAJ_VAL_OFFSET_IN_BEACON_INFO;
        m_beacon_info[index++] = MSB_16(major_value);
        m_beacon_info[index++] = LSB_16(major_value);
        m_beacon_info[index++] = MSB_16(minor_value);
        m_beacon_info[index++] = LSB_16(minor_value);
        NRF_LOG_DEBUG("USE_UICR_FOR_MAJ_MIN_VALUES");
#endif
        //uhal_ble_set_device_name(ble_parameter.custom_dev_name, strlen(ble_parameter.custom_dev_name));

        manuf_specific_data.data.p_data = (uint8_t *)m_beacon_info;
        manuf_specific_data.data.size = APP_BEACON_INFO_LENGTH;

        // Build and set advertising data.
        memset(&beacon_advdata, 0, sizeof(beacon_advdata));

        beacon_advdata.name_type = BLE_ADVDATA_NO_NAME;
        beacon_advdata.flags = BLE_GAP_ADV_FLAG_BR_EDR_NOT_SUPPORTED;
        beacon_advdata.p_manuf_specific_data = &manuf_specific_data;

        // Initialize advertising parameters (used when starting advertising).
        memset(&m_adv_params, 0, sizeof(m_adv_params));

        //m_adv_params.properties.type = BLE_GAP_ADV_TYPE_NONCONNECTABLE_NONSCANNABLE_UNDIRECTED;
        m_adv_params.properties.type = BLE_GAP_ADV_TYPE_NONCONNECTABLE_SCANNABLE_UNDIRECTED; //Beacon needs to be scannable to receive scan response
        m_adv_params.p_peer_addr = NULL; // Undirected advertisement.
        m_adv_params.filter_policy = BLE_GAP_ADV_FP_ANY;
        m_adv_params.interval = APP_ADV_INTERVAL;
        m_adv_params.duration = 0; // Never time out.

        err_code = ble_advdata_encode(&beacon_advdata, m_adv_data.adv_data.p_data, &m_adv_data.adv_data.len);
        APP_ERROR_CHECK(err_code);
        
        // Build and set scan response data.
        //memset(&beacon_srdata, 0, sizeof(beacon_srdata));
        //beacon_srdata.name_type = BLE_ADVDATA_FULL_NAME;
        
        //err_code = ble_advdata_encode(&beacon_srdata, m_adv_data.scan_rsp_data.p_data, &m_adv_data.scan_rsp_data.len);
        //APP_ERROR_CHECK(err_code);

        err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);
        APP_ERROR_CHECK(err_code);
    }
}

static void on_conn_params_evt(ble_conn_params_evt_t *p_evt)
{
    uint32_t err_code;
    if (p_evt->evt_type == BLE_CONN_PARAMS_EVT_FAILED)
    {
        err_code = sd_ble_gap_disconnect(m_conn_handle, BLE_HCI_CONN_INTERVAL_UNACCEPTABLE);
        APP_ERROR_CHECK(err_code);
    }
}

static void conn_params_error_handler(uint32_t nrf_error)
{
    NRF_LOG_ERROR("%s: %d: %s(): nrf_error=%u", __FILE__, __LINE__, __func__, nrf_error);
}

void uhal_conn_params_init(void)
{
    if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
        return;

    uint32_t err_code;
    ble_conn_params_init_t cp_init;

    memset(&cp_init, 0, sizeof(cp_init));

    cp_init.p_conn_params = NULL;
    cp_init.first_conn_params_update_delay = FIRST_CONN_PARAMS_UPDATE_DELAY;
    cp_init.next_conn_params_update_delay = NEXT_CONN_PARAMS_UPDATE_DELAY;
    cp_init.max_conn_params_update_count = MAX_CONN_PARAMS_UPDATE_COUNT;
    cp_init.start_on_notify_cccd_handle = BLE_GATT_HANDLE_INVALID;
    cp_init.disconnect_on_fail = false;
    cp_init.evt_handler = on_conn_params_evt;
    cp_init.error_handler = conn_params_error_handler;

    err_code = ble_conn_params_init(&cp_init);
    APP_ERROR_CHECK(err_code);
    db_discovery_init();
    nus_c_init();
}

#ifdef BLE_CENTRAL_SUPPORT

__WEAK uint16_t ble_advdata_search_extra(uint8_t const *p_encoded_data,
                                         uint16_t data_len,
                                         uint16_t *p_offset,
                                         uint8_t ad_type)
{
    if ((p_encoded_data == NULL) || (p_offset == NULL))
    {
        return 0;
    }

    uint16_t i = 0;

    while (((i < *p_offset) || (p_encoded_data[i + 1] != ad_type)) && (i < data_len))
    {
        // Jump to next data.
        i += (p_encoded_data[i] + 1);
    }

    if (i >= data_len)
    {
        return 0;
    }
    else
    {
        *p_offset = i + 2;
        return (p_encoded_data[i] - 1);
    }
}

__WEAK uint8_t *ble_advdata_parse_extra(uint8_t *p_encoded_data,
                                        uint16_t data_len,
                                        uint8_t ad_type)
{
    uint16_t offset = 0;
    uint16_t len = ble_advdata_search_extra(p_encoded_data, data_len, &offset, ad_type);

    if (len == 0)
    {
        return NULL;
    }
    else
    {
        return &p_encoded_data[offset];
    }
}

__WEAK bool ble_advdata_name_find_extra(uint8_t const *p_encoded_data,
                                        uint16_t data_len,
                                        char const *p_target_name)
{
    uint16_t parsed_name_len;
    uint8_t const *p_parsed_name;
    uint16_t data_offset = 0;

    if (p_target_name == NULL)
    {
        return false;
    }

    parsed_name_len = ble_advdata_search_extra(p_encoded_data,
                                               data_len,
                                               &data_offset,
                                               BLE_GAP_AD_TYPE_COMPLETE_LOCAL_NAME);

    p_parsed_name = &p_encoded_data[data_offset];

    if ((data_offset != 0) && (parsed_name_len != 0) && (strlen(p_target_name) == parsed_name_len) && (memcmp(p_target_name, p_parsed_name, parsed_name_len) == 0))
    {
        return true;
    }

    return false;
}

int32_t uhal_rui_ble_tx_data_write(uint8_t *pdata, uint16_t len)
{
    uint32_t err_code;

    err_code = ble_nus_c_tx_notif_enable(&m_ble_nus_c);
    APP_ERROR_CHECK(err_code);

    err_code = ble_nus_c_string_send(&m_ble_nus_c, pdata, len);
    if (err_code != NRF_SUCCESS)
    {
        uart_printf("ble nus send error %d.\r\n", err_code);
    }

    return err_code;
}

__WEAK void rui_ble_scan_adv(int8_t rssi_value, uint8_t *p_adv_data, uint16_t adv_data_len, uint8_t *p_device_mac)
{
    static int8_t rssi_value_bak = 0;
    //bool adv_target_name_found = ble_advdata_name_find_extra(p_adv_data, adv_data_len, m_target_periph_name);

    uint8_t manu_date[] = {0x4C, 0x00, 0x02};
    uint8_t *p_manu_date = ble_advdata_parse_extra(p_adv_data, adv_data_len, BLE_GAP_AD_TYPE_MANUFACTURER_SPECIFIC_DATA);

    /* Filter ble device by broadcast data */
    if (BLE_WORK_OBSERVER == uhal_g_ble_cfg_t.work_mode)
    {
        if (0x00 == memcmp(manu_date, p_manu_date, 3))
        {
        }
    }

    /* Filter ble device by name */
    if (BLE_WORK_CENTRAL == uhal_g_ble_cfg_t.work_mode)
    {
        //if (adv_target_name_found == true)
        //{
            if (rssi_value_bak != rssi_value)
            {
                rssi_value_bak = rssi_value;

                uint8_t msg[64] = {0};
                uint8_t *dev_name = ble_advdata_parse(p_adv_data, adv_data_len, BLE_GAP_AD_TYPE_COMPLETE_LOCAL_NAME);
                if(SCAN_DATA_HANDLER && (adv_data_len !=0))
                {
                    SCAN_DATA_HANDLER(rssi_value, p_device_mac, p_adv_data, adv_data_len);//rssi, mac address, raw data, raw data length
                }
            }
        //}
    }
}

static void on_adv_report(ble_gap_evt_adv_report_t const *p_adv_report)
{
    ret_code_t err_code;

    rui_ble_scan_adv(p_adv_report->rssi, p_adv_report->data.p_data, p_adv_report->data.len, p_adv_report->peer_addr.addr);

#ifdef S132
    //    if (ble_advdata_name_find(p_adv_report->data.p_data,
    //                              p_adv_report->data.len,
    //                              m_target_periph_name))
    if (ble_advdata_uuid_find(p_adv_report->data.p_data, p_adv_report->data.len, &m_adv_uuids[0]))
    {
        if (auto_connect)
        {
            // Name is a match, initiate connection.
            err_code = sd_ble_gap_connect(&p_adv_report->peer_addr,
                                          &m_scan_params,
                                          &m_connection_param,
                                          APP_BLE_CONN_CFG_TAG);
            if (err_code != NRF_SUCCESS)
            {
                NRF_LOG_ERROR("Connection Request Failed, reason %d", err_code);
            }
        }
    }
    else
    {
        err_code = sd_ble_gap_scan_start(NULL, &m_scan_buffer);
        uhal_is_scanning = 1;
        APP_ERROR_CHECK(err_code);
    }
#endif
}

static void db_disc_handler(ble_db_discovery_evt_t *p_evt)
{
    ble_nus_c_on_db_disc_evt(&m_ble_nus_c, p_evt);
}

static void db_discovery_init(void)
{
    ble_db_discovery_init_t db_init;

    memset(&db_init, 0, sizeof(ble_db_discovery_init_t));

    db_init.evt_handler  = db_disc_handler;
    db_init.p_gatt_queue = &m_ble_gatt_queue;

    ret_code_t err_code = ble_db_discovery_init(&db_init);
    APP_ERROR_CHECK(err_code);
}

static void ble_nus_c_evt_handler(ble_nus_c_t *p_ble_nus_c, ble_nus_c_evt_t const *p_ble_nus_evt)
{
    ret_code_t err_code;

    switch (p_ble_nus_evt->evt_type)
    {
    case BLE_NUS_C_EVT_DISCOVERY_COMPLETE:
        NRF_LOG_INFO("(NUS) Discovery complete.");
        err_code = ble_nus_c_handles_assign(p_ble_nus_c, p_ble_nus_evt->conn_handle, &p_ble_nus_evt->handles);
        APP_ERROR_CHECK(err_code);
        break;

    case BLE_NUS_C_EVT_NUS_TX_EVT:
        break;

    case BLE_NUS_C_EVT_DISCONNECTED:
        NRF_LOG_INFO("(NUS) Disconnected.");
        break;

    default:
        // No implementation needed.
        break;
    }
}
static void nus_error_handler(uint32_t nrf_error)
{
    NRF_LOG_INFO("nus_error_handler:%u",nrf_error);
    APP_ERROR_HANDLER(nrf_error);
}

static void nus_c_init(void)
{
    ret_code_t err_code;
    ble_nus_c_init_t init;

    init.evt_handler = ble_nus_c_evt_handler;
    init.error_handler = nus_error_handler;
    init.p_gatt_queue  = &m_ble_gatt_queue;

    err_code = ble_nus_c_init(&m_ble_nus_c, &init);
    APP_ERROR_CHECK(err_code); 
}


static void scan_evt_handler(scan_evt_t const * p_scan_evt)
{
    ret_code_t err_code;
    switch(p_scan_evt->scan_evt_id)
    {
        case NRF_BLE_SCAN_EVT_WHITELIST_REQUEST:
        {
        } break;

        case NRF_BLE_SCAN_EVT_CONNECTING_ERROR:
        {
            err_code = p_scan_evt->params.connecting_err.err_code;
            APP_ERROR_CHECK(err_code);
        } break;

        case NRF_BLE_SCAN_EVT_SCAN_TIMEOUT:
        {
            NRF_LOG_INFO("(BLE Scan) Scan timed out.");
            uhal_is_scanning = 0;
            uhal_ble_wake_unlock();
        } break;

        case NRF_BLE_SCAN_EVT_FILTER_MATCH:
            break;
        case NRF_BLE_SCAN_EVT_WHITELIST_ADV_REPORT:
            break;

        default:
          break;
    }
}


void uhal_scan_init(bool connect_if_match)
{

#if S132
    auto_connect = connect_if_match;
#endif

#ifdef S140
    ret_code_t err_code;
    nrf_ble_scan_init_t init_scan;

    memset(&init_scan, 0, sizeof(init_scan));

    init_scan.connect_if_match = connect_if_match;
    init_scan.conn_cfg_tag = APP_BLE_CONN_CFG_TAG;

    // config phy mode
    if (true == uhal_g_ble_cfg_t.long_range_enable)
    {
        NRF_LOG_DEBUG("(BLE Scan)Support Long Range.")
        init_scan.p_scan_param = &m_scan_param_coded_phy;
    }
    else
    {
        init_scan.p_scan_param = &m_scan_param_1MBps;
    }

    err_code = nrf_ble_scan_init(&m_scan, &init_scan, scan_evt_handler);
    APP_ERROR_CHECK(err_code);


#endif
}

static void scan_start(void)
{
    ret_code_t ret;

    if (BLE_WORK_CENTRAL == uhal_g_ble_cfg_t.work_mode)
    {
        NRF_LOG_INFO("(BLS Scan) --- Start scanning...");
    }
    else if (BLE_WORK_OBSERVER == uhal_g_ble_cfg_t.work_mode)
    {
        NRF_LOG_INFO("Start scanning for device broadcast data.");
    }

#ifdef S132
    ret = sd_ble_gap_scan_start(&m_scan_params, &m_scan_buffer);
    APP_ERROR_CHECK(ret);
#endif

#ifdef S140
    ret = nrf_ble_scan_start(&m_scan);
    APP_ERROR_CHECK(ret);
    uhal_is_scanning = 1;
#endif
}

void uhal_ble_mode_switch_timer_handler(void *p_context)
{
    uhal_app_ble_mode_switch();
}

void uhal_ble_central_config(void)
{
    uhal_app_ble_mode_switch();
    /*
    if ((BLE_WORK_CENTRAL == uhal_g_ble_cfg_t.work_mode) || (BLE_WORK_OBSERVER == uhal_g_ble_cfg_t.work_mode))
    {
        db_discovery_init();
        nus_c_init();

        app_timer_create(&ble_mode_id, APP_TIMER_MODE_SINGLE_SHOT, uhal_ble_mode_switch_timer_handler);
        app_timer_start(ble_mode_id, APP_TIMER_TICKS(BLE_MODE_SWITCH), NULL);
    }*/
}

void uhal_app_ble_mode_switch(void)
{
    // stop advertising
    /*
    if (m_conn_handle != BLE_CONN_HANDLE_INVALID)
    {
        ret_code_t err_code = sd_ble_gap_disconnect(m_conn_handle, BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
        APP_ERROR_CHECK(err_code);
    }
    sd_ble_gap_adv_stop((&m_advertising)->adv_handle);

    uhal_is_advertising = 0;*/
    // start scanning
    if (BLE_WORK_CENTRAL == uhal_g_ble_cfg_t.work_mode)
    {
        g_ble_current_mode = BLE_WORK_CENTRAL;
    }
    else
    {
        g_ble_current_mode = BLE_WORK_OBSERVER;
    }

    scan_start();

    
}

#endif // BLE_CENTRAL_SUPPORT

#ifdef DFU_SUPPORT

static void advertising_config_get(ble_adv_modes_config_t *p_config)
{
    memset(p_config, 0, sizeof(ble_adv_modes_config_t));

    p_config->ble_adv_fast_enabled = true;
    p_config->ble_adv_fast_interval = APP_ADV_INTERVAL;
    p_config->ble_adv_fast_timeout = APP_ADV_TIMEOUT_IN_SECONDS;
}

static void disconnect(uint16_t conn_handle, void *p_context)
{
    UNUSED_PARAMETER(p_context);

    ret_code_t err_code = sd_ble_gap_disconnect(conn_handle, BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
    if (err_code != NRF_SUCCESS)
    {
        NRF_LOG_WARNING("Failed to disconnect connection. Connection handle: %d Error: %d", conn_handle, err_code);
    }
    else
    {
        NRF_LOG_DEBUG("Disconnected connection handle %d", conn_handle);
    }
}

static void ble_dfu_evt_handler(ble_dfu_buttonless_evt_type_t event)
{
    NRF_LOG_DEBUG("(DFU) ble_dfu_evt_handler");
    switch (event)
    {
    case BLE_DFU_EVT_BOOTLOADER_ENTER_PREPARE:
    {
        NRF_LOG_INFO("Device is preparing to enter bootloader mode.");

        // Prevent device from advertising on disconnect.
        ble_adv_modes_config_t config;
        advertising_config_get(&config);
        config.ble_adv_on_disconnect_disabled = true;
        ble_advertising_modes_config_set(&m_advertising, &config);

        // Disconnect all other bonded devices that currently are connected.
        // This is required to receive a service changed indication
        // on bootup after a successful (or aborted) Device Firmware Update.
        uint32_t conn_count = ble_conn_state_for_each_connected(disconnect, NULL);
        NRF_LOG_INFO("Disconnected %d links.", conn_count);
        break;
    }

    case BLE_DFU_EVT_BOOTLOADER_ENTER:
        NRF_LOG_INFO("Device will enter bootloader mode...");
        break;

    case BLE_DFU_EVT_BOOTLOADER_ENTER_FAILED:
        NRF_LOG_ERROR("Request to enter bootloader mode failed asynchroneously.");
        break;

    case BLE_DFU_EVT_RESPONSE_SEND_ERROR:
        NRF_LOG_ERROR("Request to send a response to client failed.");
        APP_ERROR_CHECK(false);
        break;

    default:
        NRF_LOG_ERROR("Unknown event from ble_dfu_buttonless.");
        break;
    }
}

#endif //DFU_SUPPORT

void uhal_services_init(void)
{
    if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
        return;

    uint32_t err_code;
    ble_nus_init_t nus_init;

    nrf_queue_reset(&ble_rxq);

    memset(&nus_init, 0, sizeof(nus_init));

    nus_init.data_handler = uhal_nus_data_handler;

    err_code = ble_nus_init(&m_nus, &nus_init);
    APP_ERROR_CHECK(err_code);

#ifdef DFU_SUPPORT

    ble_dfu_buttonless_init_t dfus_init = {0};

    // Initialize the async SVCI interface to bootloader.
    err_code = ble_dfu_buttonless_async_svci_init();
    APP_ERROR_CHECK(err_code);
    NRF_LOG_INFO("(NUS) Spport BLE DFU");
    dfus_init.evt_handler = ble_dfu_evt_handler;

    err_code = ble_dfu_buttonless_init(&dfus_init);
    APP_ERROR_CHECK(err_code);

#endif
}

static void on_ble_pairing_evt(uint16_t conn_handle, ble_evt_t const * p_ble_evt)
{
    char        passkey[BLE_GAP_PASSKEY_LEN + 1];
    uint16_t    role = ble_conn_state_role(conn_handle);

    pm_handler_secure_on_connection(p_ble_evt);

    switch (p_ble_evt->header.evt_id)
    {
        case BLE_GAP_EVT_PASSKEY_DISPLAY:
            memcpy(passkey, p_ble_evt->evt.gap_evt.params.passkey_display.passkey, BLE_GAP_PASSKEY_LEN);
            passkey[BLE_GAP_PASSKEY_LEN] = 0x00;
            NRF_LOG_INFO("BLE_GAP_EVT_PASSKEY_DISPLAY: passkey=%s match_req=%d",
                         nrf_log_push(passkey),
                         p_ble_evt->evt.gap_evt.params.passkey_display.match_request);
            udrv_serial_printf(DEFAULT_SERIAL_CONSOLE, "Please input [%s] passcode to your smartphone apps.\r\n", passkey);

            break;

         case BLE_GAP_EVT_AUTH_STATUS:
             NRF_LOG_INFO("BLE_GAP_EVT_AUTH_STATUS: status=0x%x bond=0x%x lv4: %d kdist_own:0x%x kdist_peer:0x%x",
                          p_ble_evt->evt.gap_evt.params.auth_status.auth_status,
                          p_ble_evt->evt.gap_evt.params.auth_status.bonded,
                          p_ble_evt->evt.gap_evt.params.auth_status.sm1_levels.lv4,
                          *((uint8_t *)&p_ble_evt->evt.gap_evt.params.auth_status.kdist_own),
                          *((uint8_t *)&p_ble_evt->evt.gap_evt.params.auth_status.kdist_peer));
            if(p_ble_evt->evt.gap_evt.params.auth_status.auth_status == BLE_GAP_SEC_STATUS_SUCCESS)
                udrv_serial_printf(DEFAULT_SERIAL_CONSOLE, "Pairing procedure completed with success.\r\n");
            else
                udrv_serial_printf(DEFAULT_SERIAL_CONSOLE, "Pairing procedure fail.\r\n");

            break;
        default:
            // No implementation needed.
            break;
    }
}
 
static void ble_evt_handler(ble_evt_t const *p_ble_evt, void *p_context)
{
    uint32_t err_code;
    int8_t rssi_value;
    uint8_t *p_adv_data;
    uint16_t adv_data_len;
    uint8_t *p_device_mac;

    uint8_t *paddr;
    ble_gap_evt_t const *p_gap_evt = &p_ble_evt->evt.gap_evt;
    m_conn_handle = p_ble_evt->evt.gap_evt.conn_handle;

    if(ble_parameter.service_mode == DRV_BLE_UART_MODE)
        on_ble_pairing_evt(m_conn_handle, p_ble_evt);

    if(ble_parameter.service_mode == DRV_BLE_UART_MODE || ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
    {
        switch (p_ble_evt->header.evt_id)
        {
    #ifdef BLE_CENTRAL_SUPPORT
        case BLE_GAP_EVT_ADV_REPORT:
            on_adv_report(&p_gap_evt->params.adv_report);
            break;
    #endif

        case BLE_GAP_EVT_CONNECTED:
        {
            NRF_LOG_INFO("(EVT) Connected.");
            nrf_queue_reset(&ble_rxq);
            uhal_is_advertising = 0;
            udrv_serial_printf(DEFAULT_SERIAL_CONSOLE, "Connected.\r\n");
    #ifdef BLE_CENTRAL_SUPPORT
            if (BLE_WORK_CENTRAL == g_ble_current_mode)
            {
                m_conn_handle = p_gap_evt->conn_handle;
                NRF_LOG_INFO("Connection 0x%x established, starting DB discovery.",
                            p_gap_evt->conn_handle);

                paddr = (uint8_t *)p_gap_evt->params.connected.peer_addr.addr;
                NRF_LOG_INFO("MAC is %02X-%02X-%02X-%02X-%02X-%02X", paddr[5], paddr[4], paddr[3], paddr[2], paddr[1], paddr[0]);

                err_code = ble_nus_c_handles_assign(&m_ble_nus_c, p_ble_evt->evt.gap_evt.conn_handle, NULL);
                APP_ERROR_CHECK(err_code);

                // start discovery of services. The NUS Client waits for a discovery result
                err_code = ble_db_discovery_start(&m_db_disc, p_ble_evt->evt.gap_evt.conn_handle);
                APP_ERROR_CHECK(err_code);
            }
            else
            {
                if ((BLE_WORK_CENTRAL == uhal_g_ble_cfg_t.work_mode) || (BLE_WORK_OBSERVER == uhal_g_ble_cfg_t.work_mode))
                {
                    app_timer_stop(ble_mode_id);
                }
            }
    #endif // BLE_CENTRAL_SUPPORT
    /*
            if (uhal_ble_evt_connect_callback != NULL)
                uhal_ble_evt_connect_callback();
    */
            if(CONNECT_HANDLER != NULL )
            {
                CONNECT_HANDLER(); 
            }       

        }
        break;

        case BLE_GAP_EVT_DISCONNECTED:
        {
            NRF_LOG_INFO("(EVT) Disconnected.");
            nrf_queue_reset(&ble_rxq);
            m_conn_handle = BLE_CONN_HANDLE_INVALID;
            udrv_serial_printf(DEFAULT_SERIAL_CONSOLE, "Disconnected.\r\n");

    #ifdef BLE_CENTRAL_SUPPORT
            if ((BLE_WORK_PERIPHERAL == g_ble_current_mode) && ((BLE_WORK_CENTRAL == uhal_g_ble_cfg_t.work_mode) || (BLE_WORK_OBSERVER == uhal_g_ble_cfg_t.work_mode)))
            {
                app_timer_start(ble_mode_id, APP_TIMER_TICKS(BLE_MODE_SWITCH), NULL);
            }
    #endif // BLE_CENTRAL_SUPPORT
    /*
            if (uhal_ble_evt_disconnect_callback != NULL)
                uhal_ble_evt_disconnect_callback();
    */         
            if(DISCONNECT_HANDLER != NULL)
            {
                DISCONNECT_HANDLER(); 
            }
            uhal_ble_wake_unlock();
        
        }
        break;
        //#if defined(S132)
        case BLE_GAP_EVT_PHY_UPDATE_REQUEST:
        {
            NRF_LOG_INFO("(NUS)PHY update request.");
            ble_gap_phys_t const phys =
                {
                    .rx_phys = BLE_GAP_PHY_2MBPS,
                    .tx_phys = BLE_GAP_PHY_2MBPS,
                };
            err_code = sd_ble_gap_phy_update(p_ble_evt->evt.gap_evt.conn_handle, &phys);
            APP_ERROR_CHECK(err_code);
        }
        break;
        //#endif

        case BLE_GAP_EVT_SEC_PARAMS_REQUEST:
            
            NRF_LOG_INFO("(NUS)BLE_GAP_EVT_SEC_PARAMS_REQUEST.");
            // Pairing not supported
            //err_code = sd_ble_gap_sec_params_reply(m_conn_handle, BLE_GAP_SEC_STATUS_PAIRING_NOT_SUPP, NULL, NULL);
            //APP_ERROR_CHECK(err_code);
            break;

        case BLE_GAP_EVT_DATA_LENGTH_UPDATE_REQUEST:
        {
            ble_gap_data_length_params_t dl_params;
            NRF_LOG_INFO("(NUS)BLE_GAP_EVT_DATA_LENGTH_UPDATE_REQUEST.");
            // Clearing the struct will effectivly set members to @ref BLE_GAP_DATA_LENGTH_AUTO
            memset(&dl_params, 0, sizeof(ble_gap_data_length_params_t));
            err_code = sd_ble_gap_data_length_update(p_ble_evt->evt.gap_evt.conn_handle, &dl_params, NULL);
            APP_ERROR_CHECK(err_code);
        }
        break;
        case BLE_GAP_EVT_TIMEOUT:
        {
            //for ble central mode to scan and connection 
            NRF_LOG_INFO("BLE_GAP_EVT_TIMEOUT");
        }
        break;

        case BLE_GATTS_EVT_SYS_ATTR_MISSING:
            // No system attributes have been stored.
            NRF_LOG_INFO("(NUS)BLE_GATTS_EVT_SYS_ATTR_MISSING.");
            err_code = sd_ble_gatts_sys_attr_set(m_conn_handle, NULL, 0, 0);
            APP_ERROR_CHECK(err_code);
            break;

        case BLE_GATTC_EVT_TIMEOUT:
            // Disconnect on GATT Client timeout event.
            NRF_LOG_INFO("(NUS)BLE_GATTC_EVT_TIMEOUT.");
            err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                            BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
            APP_ERROR_CHECK(err_code);
            break;

        case BLE_GATTS_EVT_TIMEOUT:
            // Disconnect on GATT Server timeout event.
            NRF_LOG_INFO("(NUS)BLE_GATTS_EVT_TIMEOUT.");
            err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gatts_evt.conn_handle,
                                            BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
            APP_ERROR_CHECK(err_code);
            break;
        case BLE_GAP_EVT_ADV_SET_TERMINATED:
        {
            nrf_queue_reset(&ble_rxq);
            uhal_is_advertising = 0;
            //NRF_LOG_INFO("(NUS)BLE_GAP_EVT_ADV_SET_TERMINATED");
            if(always_advertise == 1 && ble_parameter.service_mode == DRV_BLE_UART_MODE)
            {
                ble_advertising_start(&m_advertising, ble_parameter.adv_mode);
            }
        }
        break;
        case BLE_EVT_USER_MEM_REQUEST:
            err_code = sd_ble_user_mem_reply(p_ble_evt->evt.gattc_evt.conn_handle, NULL);
            NRF_LOG_INFO("(NUS)BLE_EVT_USER_MEM_REQUEST err_code = %d" , err_code);
            APP_ERROR_CHECK(err_code);
            break;
        case BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST:
        {
            NRF_LOG_INFO("(NUS)BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST.");
            ble_gatts_evt_rw_authorize_request_t  req;
            ble_gatts_rw_authorize_reply_params_t auth_reply = {0};

            req = p_ble_evt->evt.gatts_evt.params.authorize_request;

            if (req.type != BLE_GATTS_AUTHORIZE_TYPE_INVALID)
            {
                if ((req.request.write.op == BLE_GATTS_OP_PREP_WRITE_REQ)     ||
                    (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_NOW) ||
                    (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_CANCEL))
                {
                    if (req.type == BLE_GATTS_AUTHORIZE_TYPE_WRITE)
                    {
                        auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_WRITE;
                    }
                    else
                    {
                        auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_READ;
                    }

                    auth_reply.params.write.gatt_status = APP_FEATURE_NOT_SUPPORTED;

                    if (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_CANCEL)
                    {
                        NRF_LOG_INFO("(NUS)BLE_GATTS_OP_EXEC_WRITE_REQ_CANCEL.");
                        auth_reply.params.write.gatt_status = BLE_GATT_STATUS_SUCCESS;
                    }

                    err_code = sd_ble_gatts_rw_authorize_reply(p_ble_evt->evt.gatts_evt.conn_handle,
                                                               &auth_reply);
                    APP_ERROR_CHECK(err_code);
                }
            }
        } break; // BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST
        default:
            // No implementation needed.
            break;
        }
    }
}

static void soc_evt_handler(uint32_t evt_id, void * p_context)
{
    switch (evt_id)
    {
        case NRF_EVT_FLASH_OPERATION_SUCCESS:
        /* fall through */
        case NRF_EVT_FLASH_OPERATION_ERROR:
        {
            if(evt_id == NRF_EVT_FLASH_OPERATION_SUCCESS)
            {
            }
            else
            {
            }
            if(uhal_is_advertising && (g_ble_current_mode == BLE_WORK_PERIPHERAL))
            {
                uhal_advertising_start(ble_parameter.adv_timeout);
                NRF_LOG_DEBUG("                   (SOC) reStart Advertising...");
            }
            break;
        }
        default:
            // No implementation needed.
            break;
    }
}


void uhal_ble_stack_init(void)
{
    ret_code_t err_code;

    bool res = nrf_sdh_is_enabled();
    if (res)
    {
        NRF_LOG_INFO("SD already enabled");
        APP_ERROR_CHECK(nrf_sdh_disable_request());
    } 
    NRF_LOG_INFO("SD Enabled");
    err_code = nrf_sdh_enable_request();
    APP_ERROR_CHECK(err_code);

    // Configure the BLE stack using the default settings.
    // Fetch the start address of the application RAM.
    uint32_t ram_start = 0;
    err_code = nrf_sdh_ble_default_cfg_set(APP_BLE_CONN_CFG_TAG, &ram_start);
    APP_ERROR_CHECK(err_code);

    // Enable BLE stack.
    err_code = nrf_sdh_ble_enable(&ram_start);
    APP_ERROR_CHECK(err_code);

    // Register a handler for BLE events.
    NRF_SDH_BLE_OBSERVER(m_ble_observer_1, APP_BLE_OBSERVER_PRIO, ble_evt_handler, NULL);
    NRF_SDH_SOC_OBSERVER(m_soc_observer, APP_SOC_OBSERVER_PRIO, soc_evt_handler, NULL);
}

void uhal_stop_ble(void)
{
    uhal_advertising_stop(0);
    sd_ble_gap_disconnect(m_conn_handle, BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
    nrf_queue_reset(&ble_rxq);
    uhal_is_advertising = 0;
    if(uhal_is_scanning)
    {
        nrf_ble_scan_stop();
        uhal_is_scanning=0;
    }

    uhal_ble_wake_unlock_all();
}

int32_t uhal_advertising_start(uint8_t time_out)
{
    uint32_t err_code;

    if (time_out > APP_ADV_TIMEOUT_LIMITED_MAX)
    {
        return -UDRV_INTERNAL_ERR;
    }
    
    if (ble_parameter.service_mode == DRV_BLE_UART_MODE)
    {
        err_code = sd_ble_gap_adv_stop((&m_advertising)->adv_handle);
        uhal_ble_wake_unlock();
        err_code = sd_ble_gap_tx_power_set(1, (&m_advertising)->adv_handle, ble_parameter.txpower);
        if(time_out == 0)
        {
            time_out = APP_ADV_TIMEOUT_IN_SECONDS;
            always_advertise = 1;
        }
        else
        {
            always_advertise = 0;
        }

        if (ble_parameter.adv_mode == DRV_BLE_ADV_MODE_FAST)
        {
            init.config.ble_adv_slow_enabled = false;
            init.config.ble_adv_fast_enabled = true;
            init.config.ble_adv_fast_interval = ble_parameter.adv_interval;
            init.config.ble_adv_fast_timeout = time_out * 100;
        }
        else if (ble_parameter.adv_mode == DRV_BLE_ADV_MODE_SLOW)
        {
            init.config.ble_adv_fast_enabled = false;
            init.config.ble_adv_slow_enabled = true;
            init.config.ble_adv_slow_interval = ble_parameter.adv_interval;
            init.config.ble_adv_slow_timeout = time_out * 100;
        }
        ble_parameter.adv_timeout = time_out;
        
        ble_advertising_modes_config_set(&m_advertising, &init.config);
        if(m_conn_handle == BLE_CONN_HANDLE_INVALID)
        {
            NRF_LOG_DEBUG("ble_advertising_start");
            err_code = ble_advertising_start(&m_advertising, ble_parameter.adv_mode);
            
            APP_ERROR_CHECK(err_code);
        }
        uhal_ble_wake_lock();
        
    }
    else if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
    {
        NRF_LOG_DEBUG("(Beacon) Start.");
        err_code = sd_ble_gap_adv_stop(m_adv_handle);
        uhal_ble_wake_unlock();
        m_adv_params.properties.type = BLE_GAP_ADV_TYPE_NONCONNECTABLE_SCANNABLE_UNDIRECTED; //Beacon needs to be scannable to receive scan response
        m_adv_params.p_peer_addr = NULL; // Undirected advertisement.
        m_adv_params.filter_policy = BLE_GAP_ADV_FP_ANY;
        if (ble_parameter.adv_interval >= MIN_NON_CONN_ADV_INTERVAL)
            m_adv_params.interval = ble_parameter.adv_interval;
        else
            m_adv_params.interval = MIN_NON_CONN_ADV_INTERVAL;
        m_adv_params.duration = time_out * 100;

        sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);

        err_code = sd_ble_gap_tx_power_set(1, (&m_advertising)->adv_handle, ble_parameter.txpower);

        err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);
        NRF_LOG_INFO("sd_ble_gap_adv_start:%u",err_code);
        APP_ERROR_CHECK(err_code);
        uhal_ble_wake_lock();
    }
    else if (ble_parameter.service_mode == DRV_BLE_HID_MODE)
    {
        ble_parameter.adv_timeout = time_out;
        err_code = uhal_ble_hid_advertising_start();
    }
    switch (err_code)
    {
    case NRF_SUCCESS:
    {
        uhal_is_advertising = 1;
        return UDRV_RETURN_OK;
    }
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_advertising_stop(uint8_t temp_processing)
{
    uint32_t err_code;
    if(temp_processing == 2) // There is no even handle when flash read operation, so use this solution to start advertising.
    {
        if(uhal_is_advertising && (g_ble_current_mode == BLE_WORK_PERIPHERAL))
            err_code = uhal_advertising_start(ble_parameter.adv_timeout);
        return err_code;
    }

    if (ble_parameter.service_mode == DRV_BLE_UART_MODE)
    {
        err_code = sd_ble_gap_adv_stop((&m_advertising)->adv_handle);
    }
    else if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
    {
        err_code = sd_ble_gap_adv_stop(m_adv_handle);
    }
    else if (ble_parameter.service_mode == DRV_BLE_HID_MODE)
    {
        err_code = sd_ble_gap_adv_stop((&m_hid_advertising)->adv_handle);
        NRF_LOG_DEBUG("Flash Read must close:%d",err_code);
    }

    switch (err_code)
    {
    case NRF_SUCCESS:
    {
        nrf_queue_reset(&ble_rxq);

        if(!temp_processing)
            uhal_is_advertising = 0;

        return UDRV_RETURN_OK;
    }
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

void uhal_ble_set_txpower(drv_ble_tx_power_t tx_power)
{
    if(uhal_is_advertising)
        sd_ble_gap_adv_stop(m_adv_handle);
    if(sd_ble_gap_tx_power_set(1, (&m_advertising)->adv_handle, tx_power) == NRF_SUCCESS)
        ble_parameter.txpower = tx_power;
    if(uhal_is_advertising)
        sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);
}

int32_t uhal_ble_get_txpower()
{
    return ble_parameter.txpower;
}

int32_t uhal_ble_set_device_name(char *devic_name, uint8_t device_name_length)
{
    uint32_t err_code;
    ble_gap_conn_sec_mode_t sec_mode;
    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&sec_mode);
    
    char set_dev_name[BLE_GAP_DEVNAME_DEFAULT_LEN];
    sprintf(set_dev_name, "%s", devic_name);

    if(strlen(set_dev_name) <= 30)
        set_dev_name[strlen(set_dev_name)+1] = '\0';

    err_code = sd_ble_gap_device_name_set(&sec_mode, set_dev_name, device_name_length);

    if (ble_parameter.custom_dev_name != devic_name) {
        memset(ble_parameter.custom_dev_name, 0, sizeof(ble_parameter.custom_dev_name));
        memcpy(ble_parameter.custom_dev_name, devic_name, device_name_length);
    }

    if(ble_parameter.service_mode == DRV_BLE_UART_MODE)
    {
        err_code = ble_advertising_advdata_update(&m_advertising, &init.advdata, &init.srdata);
    }
    else if(ble_parameter.service_mode == DRV_BLE_HID_MODE)
    {
        err_code = ble_advertising_advdata_update(&m_hid_advertising, &hid_adv_init.advdata, NULL);
    }
    else if (ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
    {
        if(uhal_is_advertising)
        {
            err_code = sd_ble_gap_adv_stop(m_adv_handle);

            err_code = ble_advdata_encode(&beacon_srdata, m_adv_data.scan_rsp_data.p_data, &m_adv_data.scan_rsp_data.len);
            APP_ERROR_CHECK(err_code);

            err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);
            APP_ERROR_CHECK(err_code);
            
            err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);
        }
        
    }
    switch (err_code)
    {
        case NRF_SUCCESS:
            strncpy(ble_parameter.custom_dev_name, devic_name, device_name_length);
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

char *uhal_ble_get_device_name()
{
    return ble_parameter.custom_dev_name;
}
int32_t uhal_advertising_status()
{
    return uhal_is_advertising;
}

int32_t uhal_ble_get_macaddress(uint8_t *macaddr)
{
    uint32_t err_code;

    ble_gap_addr_t gap_addr;

    err_code = sd_ble_gap_addr_get(&gap_addr);

    sprintf(macaddr, "%02X%02X%02X%02X%02X%02X",
            gap_addr.addr[5], gap_addr.addr[4], gap_addr.addr[3],
            gap_addr.addr[2], gap_addr.addr[1], gap_addr.addr[0]);

    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_ble_set_macaddress(uint8_t *macaddr)
{
    uint32_t err_code;

    ble_gap_addr_t gap_addr;

    if(sd_ble_gap_addr_get(&gap_addr) != NRF_SUCCESS)
        return -UDRV_INTERNAL_ERR;

    if(uhal_is_advertising)
        uhal_advertising_stop(0);
    int sum = 0;
    for(int i=0;i<6;i++)
    {
        sum = 0;
        if(isdigit(macaddr[i*2]))
            sum += macaddr[i*2] - '0';
        else
            sum += toupper(macaddr[i*2]) - 'A' + 10;
        sum *= 16;
        if(isdigit(macaddr[i*2+1]))
            sum += macaddr[i*2+1] - '0';
        else
            sum += toupper(macaddr[i*2+1]) - 'A' + 10;
        gap_addr.addr[5-i] = sum;
    }

    if(sd_ble_gap_addr_set(&gap_addr) != NRF_SUCCESS)
        return -UDRV_INTERNAL_ERR;
   
    if(uhal_is_advertising)
        uhal_advertising_start(ble_parameter.adv_timeout);

    return UDRV_RETURN_OK;
}

int32_t uhal_ble_set_adv_interval(uint32_t adv_interval)
{
    if(ble_parameter.service_mode == DRV_BLE_BEACON_MODE)
    {
        if (adv_interval < MIN_NON_CONN_ADV_INTERVAL || adv_interval > MAX_ADV_INTERVAL)
        {
            /* This value can vary between 100ms to 10.24s). 
             * But, modify to 1000ms ,if too aggressive ,it can affect flash or system operation
            */ 
            NRF_LOG_DEBUG("uhal_ble_set_adv_interval fail.");
            return UDRV_INTERNAL_ERR;
        }
    }
    else
    {
        if (adv_interval < MIN_CONN_ADV_INTERVAL || adv_interval > MAX_ADV_INTERVAL)
        {   
            /* This value can vary between 100ms to 10.24s). 
             * But, modify to 1000ms ,if too aggressive ,it can affect flash or system operation
            */ 
            NRF_LOG_DEBUG("uhal_ble_set_adv_interval fail.");
            return UDRV_INTERNAL_ERR;
        }
    }
    ble_parameter.adv_interval = (adv_interval / 0.625);
    return UDRV_RETURN_OK;
}

int32_t uhal_ble_get_adv_interval()
{
    return (ble_parameter.adv_interval * 0.625);
}

void uhal_ble_set_adv_slow_mode(uint8_t adv_mode)
{
    if (adv_mode)
    {
        ble_parameter.adv_mode = DRV_BLE_ADV_MODE_SLOW;
    }
    else
    {
        ble_parameter.adv_mode = DRV_BLE_ADV_MODE_FAST;
    }
}

uint8_t uhal_ble_get_adv_slow_mode()
{
    if (ble_parameter.adv_mode == DRV_BLE_ADV_MODE_SLOW)
        return true;
    else
        return false;
}

void uhal_ble_set_adv_fast_mode(uint8_t adv_mode)
{
    if (adv_mode)
    {
        ble_parameter.adv_mode = DRV_BLE_ADV_MODE_FAST;
    }
    else
    {
        ble_parameter.adv_mode = DRV_BLE_ADV_MODE_SLOW;
    }
}

uint8_t uhal_ble_get_adv_fast_mode()
{
    if (ble_parameter.adv_mode == DRV_BLE_ADV_MODE_FAST)
        return true;
    else
        return false;
}

void uhal_ble_switch_service_mode(drv_ble_service_mode service_mode)
{
    ble_parameter.service_mode = (drv_ble_service_mode)service_mode;
    ble_current_service = (drv_ble_service_mode)service_mode;
}

int32_t uhal_ble_set_beacon_major(uint16_t major_value)
{
    uint32_t err_code = NRF_SUCCESS;
    if (ble_parameter.service_mode != DRV_BLE_BEACON_MODE)
    {
        err_code = UDRV_INTERNAL_ERR;
    }
    err_code = sd_ble_gap_adv_stop(m_adv_handle);

    uint8_t index = MAJ_VAL_OFFSET_IN_BEACON_INFO;
    m_beacon_info[index++] = MSB_16(major_value);
    m_beacon_info[index++] = LSB_16(major_value);

    manuf_specific_data.data.p_data = (uint8_t *)m_beacon_info;
    //manuf_specific_data.data.size = APP_BEACON_INFO_LENGTH;

    // Build and set advertising data.
    memset(&beacon_advdata, 0, sizeof(beacon_advdata));

    beacon_advdata.name_type = BLE_ADVDATA_NO_NAME;
    beacon_advdata.flags = BLE_GAP_ADV_FLAG_BR_EDR_NOT_SUPPORTED;
    beacon_advdata.p_manuf_specific_data = &manuf_specific_data;

    err_code = ble_advdata_encode(&beacon_advdata, m_adv_data.adv_data.p_data, &m_adv_data.adv_data.len);

    err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);

    //err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);

    APP_ERROR_CHECK(err_code);
    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}
int32_t uhal_ble_set_beacon_minor(uint16_t minor_value)
{
    uint32_t err_code = NRF_SUCCESS;
    if (ble_parameter.service_mode != DRV_BLE_BEACON_MODE)
    {
        err_code = UDRV_INTERNAL_ERR;
    }
    err_code = sd_ble_gap_adv_stop(m_adv_handle);

    uint8_t index = MAJ_VAL_OFFSET_IN_BEACON_INFO + 2;
    m_beacon_info[index++] = MSB_16(minor_value);
    m_beacon_info[index++] = LSB_16(minor_value);

    manuf_specific_data.data.p_data = (uint8_t *)m_beacon_info;
    //manuf_specific_data.data.size = APP_BEACON_INFO_LENGTH;

    // Build and set advertising data.
    memset(&beacon_advdata, 0, sizeof(beacon_advdata));

    beacon_advdata.name_type = BLE_ADVDATA_NO_NAME;
    beacon_advdata.flags = BLE_GAP_ADV_FLAG_BR_EDR_NOT_SUPPORTED;
    beacon_advdata.p_manuf_specific_data = &manuf_specific_data;

    err_code = ble_advdata_encode(&beacon_advdata, m_adv_data.adv_data.p_data, &m_adv_data.adv_data.len);

    err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);

    //err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);

    APP_ERROR_CHECK(err_code);
    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_ble_set_beacon_power(int8_t beacon_power)
{
    uint32_t err_code = NRF_SUCCESS;
    if (ble_parameter.service_mode != DRV_BLE_BEACON_MODE)
    {
        err_code = UDRV_INTERNAL_ERR;
    }
    if(beacon_power < -128 || beacon_power > 0)
    {
        err_code = UDRV_INTERNAL_ERR;
    }
    
    if(err_code == NRF_SUCCESS)
    {
        err_code = sd_ble_gap_adv_stop(m_adv_handle);

        uint8_t index = MAJ_VAL_OFFSET_IN_BEACON_INFO + 4;
        m_beacon_info[index++] = beacon_power + 256 ;

        manuf_specific_data.data.p_data = (uint8_t *)m_beacon_info;
        //manuf_specific_data.data.size = APP_BEACON_INFO_LENGTH;

        // Build and set advertising data.
        memset(&beacon_advdata, 0, sizeof(beacon_advdata));

        beacon_advdata.name_type = BLE_ADVDATA_NO_NAME;
        beacon_advdata.flags = BLE_GAP_ADV_FLAG_BR_EDR_NOT_SUPPORTED;
        beacon_advdata.p_manuf_specific_data = &manuf_specific_data;

        err_code = ble_advdata_encode(&beacon_advdata, m_adv_data.adv_data.p_data, &m_adv_data.adv_data.len);

        err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);

        //err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);

        APP_ERROR_CHECK(err_code);
    }
    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}


int32_t uhal_ble_set_beacon_uuid(uint8_t beaconUuid[])
{
    uint32_t err_code = NRF_SUCCESS;
    if (ble_parameter.service_mode != DRV_BLE_BEACON_MODE)
    {
        err_code = UDRV_INTERNAL_ERR;
    }
    err_code = sd_ble_gap_adv_stop(m_adv_handle);
    
    uint8_t index = UUID_VAL_OFFSET_IN_BEACON_INFO;

    for (int i = 0; i < 16; i++)
    {
        m_beacon_info[++index] = beaconUuid[i];
    }

    manuf_specific_data.data.p_data = (uint8_t *)m_beacon_info;
    manuf_specific_data.data.size = APP_BEACON_INFO_LENGTH;

    // Build and set advertising data.
    memset(&beacon_advdata, 0, sizeof(beacon_advdata));

    beacon_advdata.name_type = BLE_ADVDATA_NO_NAME;
    beacon_advdata.flags = BLE_GAP_ADV_FLAG_BR_EDR_NOT_SUPPORTED;
    beacon_advdata.p_manuf_specific_data = &manuf_specific_data;

    err_code = ble_advdata_encode(&beacon_advdata, m_adv_data.adv_data.p_data, &m_adv_data.adv_data.len);

    err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);
    
    //err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);

    APP_ERROR_CHECK(err_code);
    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_ble_set_beacon_custom_payload(uint8_t cus_adv_data[], uint8_t cus_adv_len)
{
    uint32_t err_code = NRF_SUCCESS;
    if (ble_parameter.service_mode != DRV_BLE_BEACON_MODE)
    {
        return UDRV_INTERNAL_ERR;
    }

    if(cus_adv_len > BLE_GAP_ADV_SET_DATA_SIZE_MAX)
    {
        return UDRV_INTERNAL_ERR;
    }

    err_code = sd_ble_gap_adv_stop(m_adv_handle);
    
    memset(m_adv_data.adv_data.p_data, 0, BLE_GAP_ADV_SET_DATA_SIZE_MAX);
    memcpy(m_adv_data.adv_data.p_data, cus_adv_data, cus_adv_len);

    err_code = sd_ble_gap_adv_set_configure(&m_adv_handle, &m_adv_data, &m_adv_params);
    
    //err_code = sd_ble_gap_adv_start(m_adv_handle, APP_BLE_CONN_CFG_TAG);

    APP_ERROR_CHECK(err_code);
    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_ble_set_scan_interval_window(uint16_t scan_interval, uint16_t scan_window)
{
    uint32_t err_code = NRF_SUCCESS;

    if (scan_interval < BLE_GAP_SCAN_INTERVAL_MS_MIN || scan_interval > BLE_GAP_SCAN_INTERVAL_MS_MAX)
    {
        /* This value can vary between 3ms to 40.96s). */
        NRF_LOG_DEBUG("uhal_ble_set_scan_interval fail.");
        err_code = UDRV_INTERNAL_ERR;
    }
    else if(scan_window < BLE_GAP_SCAN_WINDOW_MS_MIN || scan_window > BLE_GAP_SCAN_WINDOW_MS_MAX)
    {
        /* This value can vary between 3ms to 40.96s). */
        NRF_LOG_DEBUG("uhal_ble_set_scan_window fail.");
        err_code = UDRV_INTERNAL_ERR;
    }

    m_scan_param_coded_phy.interval = (scan_interval / 0.625);
    m_scan_param_1MBps.interval = (scan_interval / 0.625);
    m_scan_param_coded_phy.window = (scan_window / 0.625);
    m_scan_param_1MBps.window = (scan_window / 0.625);
    

    if(uhal_is_scanning)
    {
        // config phy mode
        if (true == uhal_g_ble_cfg_t.long_range_enable)
        {
            err_code = nrf_ble_scan_params_set(&m_scan, &m_scan_param_coded_phy);
            APP_ERROR_CHECK(err_code);
        }
        else
        {
            err_code = nrf_ble_scan_params_set(&m_scan, &m_scan_param_1MBps);
            APP_ERROR_CHECK(err_code);
        }
        scan_start();
    }
    
    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}
void uhal_ble_set_work_mode(ble_work_mode_t mode, bool long_range_enable)
{
    uhal_g_ble_cfg_t.work_mode = mode;
    uhal_g_ble_cfg_t.long_range_enable = long_range_enable;
}

void uhal_ble_scan_start(uint16_t scan_sec)
{
    m_scan_param_coded_phy.timeout = ((scan_sec * 1000) / 10);
    m_scan_param_1MBps.timeout = ((scan_sec * 1000) / 10);

    uhal_ble_set_work_mode(BLE_WORK_CENTRAL, false);
    uhal_ble_central_config();
}
void uhal_ble_scan_stop(void)
{
    if(uhal_is_scanning)
    {
        nrf_ble_scan_stop();
        uhal_is_scanning = 0;
        NRF_LOG_DEBUG("(BLS Scan) Scan Stop");

    }
}

int32_t uhal_nus_set_keypairing(uint8_t *pairing_key, uint8_t key_length)
{
    uint32_t err_code = NRF_SUCCESS;
    
    if(key_length != BLE_GAP_PASSKEY_LEN)
    {
        NRF_LOG_DEBUG("uhal_nus_set_keypairing Out of Range(encryption key size define is 6).");
        return -UDRV_INTERNAL_ERR;
    }
    

    strncpy(ble_parameter.pairing_key, pairing_key, BLE_GAP_PASSKEY_LEN);
    ble_parameter.pairing_key[BLE_GAP_PASSKEY_LEN] = 0x00;
    switch (err_code)
    {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_nus_set_permission(uint8_t permission)
{
    uint32_t err_code = NRF_SUCCESS;

    if( (permission == SET_ENC_NO_MITM) || (permission == SET_ENC_WITH_MITM))
    {
        ble_parameter.permission = permission;
    }
    else
    {
        NRF_LOG_DEBUG("permission Out of Range(permission only suuport SET_ENC_NO_MITM or SET_ENC_WITH_MITM).");
        err_code = UDRV_INTERNAL_ERR;
    }
    
    
    switch (err_code)
    {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

void uhal_ble_serial_init (SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode) {
    return;
}

void uhal_ble_serial_deinit (SERIAL_PORT Port) {
    return;
}

int32_t uhal_ble_serial_write (SERIAL_PORT Port, uint8_t const *Buffer, int32_t NumberOfBytes, uint32_t Timeout) {
    return uhal_nus_write(Buffer, NumberOfBytes);
}

int32_t uhal_ble_serial_read (SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout) {
    return uhal_nus_read(Buffer, NumberOfBytes);
}

int32_t uhal_ble_serial_peek (SERIAL_PORT Port) {
    uint8_t ch;

    if (nrf_queue_generic_pop (&ble_rxq, &ch, true) == NRF_SUCCESS) {
        return (int32_t)ch;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

void uhal_ble_serial_flush (SERIAL_PORT Port, uint32_t Timeout) {
    return;
}

size_t uhal_ble_serial_read_available (SERIAL_PORT Port) {
    return (size_t)uhal_nus_available();
}

#endif
