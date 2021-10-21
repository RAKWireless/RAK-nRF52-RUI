#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "app.h"
#include "nordic_common.h"
#include "nrf.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "fds.h"
#include "app_uart.h"
#include "app_util_platform.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
#include "board_basic.h"
#include "nrf_fstorage.h"
#include "crc32.h"
#include "nrf_crypto_init.h"
#include "nrf_crypto_hash.h"
#include "nrf_power.h"
#include "nrf_nvmc.h"
#include "nrf_fstorage.h"
#include "hal_uart.h"
#include "at.h"
#include "udrv_serial.h"
#include "udrv_spimst.h"
#include "udrv_gpio.h"
#include "udrv_rtc.h"
#include "udrv_flash.h"
#include "udrv_wdt.h"
#include "udrv_system.h"
#include "service_nvm.h"
#include "hal_uart.h"
#include "nrf_pwr_mgmt.h"
#include "udrv_ble.h"
#include "service_mode_cli.h"
#include "nrf_ble_lesc.h"
#include "udrv_powersave.h"
#include "udrv_errno.h"
#include "service_lora_test.h"

#ifdef SUPPORT_LORA
#include "radio.h"
#include "LoRaMac.h"
#endif

static udrv_system_event_t rui_user_app_event = {.request = UDRV_SYS_EVT_OP_USER_APP, .p_context = NULL};
uint32_t orig_auto_sleep_time;
static bool run_user_app = false;

extern bool udrv_powersave_in_sleep;
extern const char *sw_version;
extern SERVICE_LORA_CLASS_B_STATE class_b_state;

static void on_error(void)
{
    NRF_LOG_FINAL_FLUSH();

#if NRF_MODULE_ENABLED(NRF_LOG_BACKEND_RTT)
    // To allow the buffer to be flushed by the host.
    udrv_delay_ms(100);
#endif
    NVIC_SystemReset();
}

void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t *p_file_name)
{
    NRF_LOG_ERROR("%s:%d", p_file_name, line_num);
    on_error();
}

void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info)
{
    NRF_LOG_ERROR("Got a fault! id: 0x%08x, pc: 0x%08x, info: 0x%08x", id, pc, info);
    on_error();
}

void app_error_handler_bare(uint32_t error_code)
{
    NRF_LOG_ERROR("Got an error: 0x%08x!", error_code);
    on_error();
}

/**@brief Function for initializing the nrf log module.
 */
static uint32_t get_rtc_counter(void)
{
    return (uint32_t)udrv_rtc_get_counter((RtcID_E)SYS_RTC_COUNTER_PORT);
} 

void log_init(void)
{
    ret_code_t err_code = NRF_LOG_INIT(get_rtc_counter, SYS_RTC_FREQ);
    APP_ERROR_CHECK(err_code);

    NRF_LOG_DEFAULT_BACKENDS_INIT();
}

void rui_event_handler_func(void *data, uint16_t size) {
    udrv_system_event_t *event = (udrv_system_event_t *)data;
    switch (event->request) {
        case UDRV_SYS_EVT_OP_SERIAL_UART:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_UART1) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_UART1) != 0) {
                    uint8_t Buf[1];
                    int32_t count = udrv_serial_read (SERIAL_UART1, Buf, 1);
                    SERIAL_WLOCK_STATE state;
                    switch (service_nvm_get_mode_type_from_nvm(SERIAL_UART1)) {
                        case SERVICE_MODE_TYPE_CLI:
                        {
                            if ((state = udrv_serial_get_lock_state(SERIAL_UART1)) == SERIAL_WLOCK_OPEN) {
                                service_mode_cli_handler(SERIAL_UART1, Buf[0]);
                            } else if (state == SERIAL_WLOCK_LOCKED) {
                                udrv_serial_wlock_handler(SERIAL_UART1, Buf[0]);
                            }
                            break;
                        }
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_UART1, Buf[0]);
                            break;
                        }
                        case SERVICE_MODE_TYPE_PROTOCOL:
                        {
                            service_mode_proto_recv(SERIAL_UART1, Buf[0]);
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                }
            }
            if (service_nvm_get_mode_type_from_nvm(SERIAL_UART0) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_UART0) != 0) {
                    uint8_t Buf[1];
                    int32_t count = udrv_serial_read (SERIAL_UART0, Buf, 1);
                    SERIAL_WLOCK_STATE state;
                    switch (service_nvm_get_mode_type_from_nvm(SERIAL_UART0)) {
                        case SERVICE_MODE_TYPE_CLI:
                        {
                            if ((state = udrv_serial_get_lock_state(SERIAL_UART0)) == SERIAL_WLOCK_OPEN) {
                                service_mode_cli_handler(SERIAL_UART0, Buf[0]);
                            } else if (state == SERIAL_WLOCK_LOCKED) {
                                udrv_serial_wlock_handler(SERIAL_UART0, Buf[0]);
                            }
                            break;
                        }
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_UART0, Buf[0]);
                            break;
                        }
                        case SERVICE_MODE_TYPE_PROTOCOL:
                        {
                            service_mode_proto_recv(SERIAL_UART0, Buf[0]);
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                }
            }
            break;
        }
        case UDRV_SYS_EVT_OP_SERIAL_USB:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_USB0) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_USB0) != 0) {
                    uint8_t Buf[1];
                    int32_t count = udrv_serial_read (SERIAL_USB0, Buf, 1);
                    SERIAL_WLOCK_STATE state;
                    switch (service_nvm_get_mode_type_from_nvm(SERIAL_USB0)) {
                        case SERVICE_MODE_TYPE_CLI:
                        {
                            if ((state = udrv_serial_get_lock_state(SERIAL_USB0)) == SERIAL_WLOCK_OPEN) {
                                service_mode_cli_handler(SERIAL_USB0, Buf[0]);
                            } else if (state == SERIAL_WLOCK_LOCKED) {
                                udrv_serial_wlock_handler(SERIAL_USB0, Buf[0]);
                            }
                            break;
                        }
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_USB0, Buf[0]);
                            break;
                        }
                        case SERVICE_MODE_TYPE_PROTOCOL:
                        {
                            service_mode_proto_recv(SERIAL_USB0, Buf[0]);
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                }
            }
            break;
        }
        case UDRV_SYS_EVT_OP_SERIAL_BLE:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_BLE0) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_BLE0) != 0) {
                    uint8_t Buf[1];
                    int32_t count = udrv_serial_read (SERIAL_BLE0, Buf, 1);
                    SERIAL_WLOCK_STATE state;
                    switch (service_nvm_get_mode_type_from_nvm(SERIAL_BLE0)) {
                        case SERVICE_MODE_TYPE_CLI:
                        {
                            if ((state = udrv_serial_get_lock_state(SERIAL_BLE0)) == SERIAL_WLOCK_OPEN) {
                                service_mode_cli_handler(SERIAL_BLE0, Buf[0]);
                            } else if (state == SERIAL_WLOCK_LOCKED) {
                                udrv_serial_wlock_handler(SERIAL_BLE0, Buf[0]);
                            }
                            break;
                        }
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_BLE0, Buf[0]);
                            break;
                        }
                        case SERVICE_MODE_TYPE_PROTOCOL:
                        {
                            service_mode_proto_recv(SERIAL_BLE0, Buf[0]);
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                }
            }
            break;
        }
        case UDRV_SYS_EVT_OP_LORAWAN:
        {
#ifdef SUPPORT_LORA
            // Process Radio IRQ
            if( Radio.IrqProcess != NULL )
            {
                Radio.IrqProcess( );
            }

            // Processes the LoRaMac events
            LoRaMacProcess( );
#endif
            break;
        }
        case UDRV_SYS_EVT_OP_LORAWAN_AUTO_JOIN:
        {
#ifdef SUPPORT_LORA
            service_lora_join(1, -1, -1, -1);
#endif
            break;
        }
        case UDRV_SYS_EVT_OP_LORAWAN_SEND_HELLO:
        {
#ifdef SUPPORT_LORA
            SERVICE_LORA_SEND_INFO info;
            int32_t ret;
            MlmeReq_t mlmeReq;
            LoRaMacStatus_t status;

            if (class_b_state == SERVICE_LORA_CLASS_B_S0) {
                mlmeReq.Type = MLME_DEVICE_TIME;
                status = LoRaMacMlmeRequest(&mlmeReq);
            } else if (class_b_state == SERVICE_LORA_CLASS_B_S2) {
                mlmeReq.Type = MLME_PING_SLOT_INFO;
                mlmeReq.Req.PingSlotInfo.PingSlot.Fields.Periodicity = service_lora_get_ping_slot_periodicity();
                mlmeReq.Req.PingSlotInfo.PingSlot.Fields.RFU = 0;

                status = LoRaMacMlmeRequest(&mlmeReq);
            } else {
                status = LORAMAC_STATUS_OK;
            }

            if (status == LORAMAC_STATUS_OK)
            {
                info.port = 2;
                info.retry_valid = true;
                info.retry = 8;
                info.confirm_valid = false;

                if ((ret = service_lora_send("hello", 5, info, false)) == UDRV_RETURN_OK)
                {
                    //udrv_serial_log_printf("Send Hello Success\r\n");
                }
                else
                {
                    //udrv_serial_log_printf("Send Hello Fail\r\n");
                    //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

                    udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
                }
            }
            else
            {
                LORA_TEST_DEBUG("status=%d", status);
                //udrv_serial_log_printf("Send Hello Fail\r\n");
                //class_b_state = SERVICE_LORA_CLASS_B_S3;//Class B failed

                //udrv_serial_log_printf("+BC: FAILED (%d)\r\n", __LINE__);
            }
#endif
            break;
        }
        case UDRV_SYS_EVT_OP_LORAWAN_BEACON_ACQUIRE:
        {
#ifdef SUPPORT_LORA
            LoRaMacStatus_t status;
            MlmeReq_t mlmeReq;
            mlmeReq.Type = MLME_BEACON_ACQUISITION;

            status = LoRaMacMlmeRequest(&mlmeReq);

            if (status == LORAMAC_STATUS_OK)
            {
                //udrv_serial_log_printf("Acquire Beacon Success\r\n");
            }
            else
            {
                //udrv_serial_log_printf("Acquire Beacon Fail\r\n");
                udrv_serial_log_printf("+BC: ONGOING\r\n");
            }
#endif
            break;
        }
        case UDRV_SYS_EVT_OP_USER_APP:
        {
            run_user_app = true;
            break;
        }
        default:
        {
            break;
        }
    }
}

void rui_user_application_timer_handler(void *p_context)
{
    uint32_t curr_auto_sleep_time = service_nvm_get_auto_sleep_time_from_nvm();

    udrv_system_event_produce(&rui_user_app_event);

    if (curr_auto_sleep_time != orig_auto_sleep_time) {
        udrv_system_user_app_timer_stop();
        orig_auto_sleep_time = curr_auto_sleep_time;
        if (curr_auto_sleep_time != 0) {
            udrv_system_user_app_timer_start(curr_auto_sleep_time, NULL);
        }
    }

    udrv_powersave_in_sleep = false;
}

void rui_init(void)
{
    SERVICE_MODE_TYPE mode;
    uint32_t baudrate;

    NRF_POWER->DCDCEN = 1;

    udrv_gpio_init();

    log_init();
    NRF_LOG_INFO("RUI Version: %s", sw_version);
    udrv_sys_clock_init();

    udrv_timer_init();

    udrv_serial_init(SERIAL_USB0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE);
    udrv_ble_stack_start();
    udrv_ble_services_start();

    udrv_flash_init();
    service_nvm_init_config();

    baudrate = service_nvm_get_baudrate_from_nvm();
    udrv_serial_init(SERIAL_UART0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE);
    udrv_serial_init(SERIAL_UART1, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE);
    udrv_serial_init(SERIAL_BLE0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE);
    udrv_serial_init(SERIAL_USB0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE);

#ifdef SUPPORT_LORA
    service_lora_init(service_lora_get_band());
#else
    udrv_rtc_init(SYS_RTC_COUNTER_PORT, NULL);
#endif

    for (int i = 0 ; i < SERIAL_MAX ; i++) {
        if (service_nvm_get_mode_type_from_nvm((SERIAL_PORT)i) == SERVICE_MODE_TYPE_CLI) {
            service_mode_cli_init((SERIAL_PORT)i);
        }
    }
    for (int i = 0 ; i < SERIAL_MAX ; i++) {
        if (service_nvm_get_mode_type_from_nvm((SERIAL_PORT)i) == SERVICE_MODE_TYPE_TRANSPARENT) {
            if (service_lora_get_njs() == false) {
                service_nvm_set_mode_type_to_nvm((SERIAL_PORT)i, SERVICE_MODE_TYPE_CLI);
                service_mode_cli_init((SERIAL_PORT)i);
                continue;
            }
            service_mode_transparent_init((SERIAL_PORT)i);
        }
    }
    for (int i = 0 ; i < SERIAL_MAX ; i++) {
        if (service_nvm_get_mode_type_from_nvm((SERIAL_PORT)i) == SERVICE_MODE_TYPE_PROTOCOL) {
            service_mode_proto_init((SERIAL_PORT)i);
        }
    }

#ifdef WDT_SUPPORT
    udrv_wdt_init();
    udrv_wdt_feed();//Consider software reset case, reload WDT counter first.
#endif

    udrv_system_event_init();
    udrv_system_user_app_timer_create((timer_handler)rui_user_application_timer_handler, HTMR_PERIODIC);
    if ((orig_auto_sleep_time = service_nvm_get_auto_sleep_time_from_nvm()) != 0) {
        udrv_system_user_app_timer_start(orig_auto_sleep_time, NULL);
    }
}

void rui_running(void)
{
    nrf_ble_lesc_request_handler();

    udrv_system_event_consume();
}

void main(void)
{
    //system init 
    rui_init();

    //delay some time for USB enumeration
    udrv_delay_ms(1000);

    //user init
    rui_setup();

    while(1)
    {
        //system loop
        rui_running();

        //user loop
        if (run_user_app) {
            rui_loop();
            run_user_app = false;
        }

        if (orig_auto_sleep_time != 0) {
            udrv_mcu_sleep_ms(POWERSAVE_NO_TIMEOUT);
        } else {
            run_user_app = true;
        }
    }
}
