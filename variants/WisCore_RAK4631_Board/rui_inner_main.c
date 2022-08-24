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
#include "udrv_serial.h"
#include "udrv_spimst.h"
#include "udrv_gpio.h"
#include "udrv_rtc.h"
#include "udrv_flash.h"
#include "udrv_wdt.h"
#include "udrv_system.h"
#include "service_nvm.h"
#include "nrf_pwr_mgmt.h"
#include "udrv_ble.h"
#include "service_mode_cli.h"
#include "nrf_ble_lesc.h"
#include "udrv_powersave.h"
#include "udrv_errno.h"
#ifdef SUPPORT_MULTITASK
#include "nrf_drv_systick.h"
#include "uhal_sched.h"
#include "sysIrqHandlers.h"

extern bool sched_start;
extern tcb_ thread_pool[THREAD_POOL_SIZE];
extern tcb_ *current_thread;
extern unsigned long int current_sp;
#else
bool no_busy_loop = false;
#endif

#ifdef SUPPORT_LORA
#include "radio.h"
#include "LoRaMac.h"

extern service_lora_join_cb service_lora_join_callback;
#endif

static udrv_system_event_t rui_user_app_event = {.request = UDRV_SYS_EVT_OP_USER_APP, .p_context = NULL};
static bool run_user_app = false;

extern bool udrv_powersave_in_sleep;
extern const char *sw_version;

static void on_error(void)
{
    NRF_LOG_FINAL_FLUSH();

#if NRF_MODULE_ENABLED(NRF_LOG_BACKEND_RTT)
    // To allow the buffer to be flushed by the host.
    udrv_delay_ms(100);
#endif
    HardFault_Handler();
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

#ifdef TOGGLE_LED_PER_SEC
void OnTimerEvent()
{
    udrv_gpio_toggle_logic(BLUE_LED);
}
#endif
/********************************************************************/
/* RUI handler functions                                            */
/********************************************************************/

void rui_event_handler_func(void *data, uint16_t size) {
    udrv_system_event_t *event = (udrv_system_event_t *)data;
    switch (event->request) {
        case UDRV_SYS_EVT_OP_SERIAL_FALLBACK:
        {
            SERIAL_PORT port = (SERIAL_PORT)event->p_context;
            SERVICE_MODE_TYPE mode = service_nvm_get_mode_type_from_nvm(port);

            /* escape now immediately */
            switch (mode)
            {
#ifdef SUPPORT_LORA
#ifdef SUPPORT_PASSTHRU
                case SERVICE_MODE_TYPE_TRANSPARENT:
                {
                    service_mode_transparent_deinit(port);
                    break;
                }
#endif
#endif
                case SERVICE_MODE_TYPE_PROTOCOL:
                {
                    service_mode_proto_deinit(port);
                    break;
                }
                default:
                {
                    break;
                }
            }
            service_mode_cli_init(port);
            service_nvm_set_mode_type_to_nvm(port, SERVICE_MODE_TYPE_CLI);
            break;
        }
        case UDRV_SYS_EVT_OP_SERIAL_UART:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_UART1) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_UART1) > 0) {
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
#ifdef SUPPORT_LORA
#ifdef SUPPORT_PASSTHRU
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_UART1, Buf[0]);
                            break;
                        }
#endif
#endif
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
                while (udrv_serial_read_available(SERIAL_UART0) > 0) {
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
#ifdef SUPPORT_LORA
#ifdef SUPPORT_PASSTHRU
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_UART0, Buf[0]);
                            break;
                        }
#endif
#endif
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
#ifdef SUPPORT_USB
        case UDRV_SYS_EVT_OP_SERIAL_USB:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_USB0) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_USB0) > 0) {
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
#ifdef SUPPORT_LORA
#ifdef SUPPORT_PASSTHRU
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_USB0, Buf[0]);
                            break;
                        }
#endif
#endif
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
#endif
#ifdef SUPPORT_BLE
        case UDRV_SYS_EVT_OP_SERIAL_BLE:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_BLE0) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_BLE0) > 0) {
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
#ifdef SUPPORT_LORA
#ifdef SUPPORT_PASSTHRU
                        case SERVICE_MODE_TYPE_TRANSPARENT:
                        {
                            service_mode_transparent_handler(SERIAL_BLE0, Buf[0]);
                            break;
                        }
#endif
#endif
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
#endif
#ifdef SUPPORT_LORA
        case UDRV_SYS_EVT_OP_LORAWAN:
        {
            // Process Radio IRQ
            if( Radio.IrqProcess != NULL )
            {
                Radio.IrqProcess( );
            }

            // Processes the LoRaMac events
            LoRaMacProcess( );

            // Call all packages process functions
            LmHandlerPackagesProcess( );
            break;
        }
        case UDRV_SYS_EVT_OP_LORAWAN_JOIN_CB:
        {
            if (service_lora_join_callback != NULL) {
                service_lora_join_callback(event->p_context);
            }
            break;
        }
#endif
        case UDRV_SYS_EVT_OP_USER_TIMER:
        case UDRV_SYS_EVT_OP_SYS_TIMER:
        {
            udrv_system_timer_handler_handler(event->p_context);
            break;
        }
#ifdef SUPPORT_NFC
        case UDRV_SYS_EVT_OP_SERIAL_NFC:
        {
            if (service_nvm_get_mode_type_from_nvm(SERIAL_NFC) != SERVICE_MODE_TYPE_CUSTOM) {
                while (udrv_serial_read_available(SERIAL_NFC) > 0) {
                    uint8_t Buf[1];
                    int32_t count = udrv_serial_read(SERIAL_NFC, Buf, 1);
                    SERIAL_WLOCK_STATE state;
	                switch (service_nvm_get_mode_type_from_nvm(SERIAL_NFC)) {
                        case SERVICE_MODE_TYPE_CLI:
                        {
                            service_mode_cli_handler(SERIAL_NFC, Buf[0]);
                            break;
                        }				
    	            }
                }
            }
            break;
        }
#endif
        case UDRV_SYS_EVT_OP_RTC:
        {
            udrv_rtc_timer_handler_handler(NULL);
            break;
        }
        case UDRV_SYS_EVT_OP_GPIO_INTERRUPT:
        {
            udrv_gpio_handler_handler(event->p_context);
            break;
        }
        default:
        {
            break;
        }
    }
}

void rui_init(void)
{
    SERVICE_MODE_TYPE mode;
    uint32_t baudrate;
    uint8_t set_dev_name[30];
    uint8_t mac[12];
    uint8_t rbuff[8] = {0};
    NRF_POWER->DCDCEN = 1;

    //udrv_gpio_init();

    log_init();
    NRF_LOG_INFO("RUI Version: %s", sw_version);
    udrv_sys_clock_init();

#ifdef SUPPORT_MULTITASK
    SysTick_Config(SystemCoreClock / 100);      /* Configure SysTick to generate an interrupt every 10 ms */
#endif

    udrv_timer_init();

#ifdef SUPPORT_USB
    udrv_serial_init(SERIAL_USB0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE, SERIAL_TWO_WIRE_NORMAL_MODE);
#endif
#ifdef SUPPORT_BLE
    udrv_ble_stack_start();  /* Need initialize ble service before enable the usb port. */
    udrv_ble_services_start();
#endif
#ifdef SUPPORT_USB
    uhal_usb_enable(SERIAL_USB0);
#endif

    udrv_flash_init();
    service_nvm_init_config();

    baudrate = service_nvm_get_baudrate_from_nvm();
    udrv_serial_init(SERIAL_UART0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE, SERIAL_TWO_WIRE_NORMAL_MODE);
    udrv_serial_init(SERIAL_UART1, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE, SERIAL_TWO_WIRE_NORMAL_MODE);
#ifdef SUPPORT_BLE
#ifdef SUPPORT_LORA
    service_lora_get_dev_eui(rbuff, 8);
    sprintf(set_dev_name,"RAK.%02X%02X%02X",rbuff[5],rbuff[6],rbuff[7]);
    udrv_ble_set_device_name(set_dev_name,strlen(set_dev_name));
#endif
    service_nvm_get_ble_mac_from_nvm(mac,12);
    udrv_ble_set_macaddress(mac);
    udrv_ble_advertising_start(APP_ADV_TIMEOUT_IN_SECONDS);
    udrv_serial_init(SERIAL_BLE0, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE, SERIAL_TWO_WIRE_NORMAL_MODE);
#endif
#ifdef SUPPORT_NFC
    udrv_serial_init(SERIAL_NFC, baudrate, SERIAL_WORD_LEN_8, SERIAL_STOP_BIT_1, SERIAL_PARITY_DISABLE, SERIAL_TWO_WIRE_NORMAL_MODE);
#endif

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
#ifdef SUPPORT_LORA
#ifdef SUPPORT_PASSTHRU
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
#endif
#endif
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
}

void rui_running(void)
{
    nrf_ble_lesc_request_handler();

    udrv_system_event_consume();
}

#ifdef SUPPORT_MULTITASK
void rui_system_thread(void)
{
    while (1) {
        rui_running();
        if (service_nvm_get_auto_sleep_time_from_nvm() && uhal_sched_run_queue_empty()) {
            udrv_sleep_ms(0);
        }
    }
}

void rui_user_thread(void)
{
    //user init
    rui_setup();

    while (1) {
        rui_loop();
    }
}
#endif

void main(void)
{
    //system init
    rui_init();

#ifndef SUPPORT_MULTITASK
    //user init
    rui_setup();
#endif

#ifdef TOGGLE_LED_PER_SEC
    udrv_gpio_set_dir(BLUE_LED, GPIO_DIR_OUT);
    if (udrv_system_timer_create(SYSTIMER_LED, OnTimerEvent, HTMR_PERIODIC) == UDRV_RETURN_OK)
    {
        udrv_system_timer_start(SYSTIMER_LED, 1000, NULL);
    }
#endif

#ifdef SUPPORT_LORA
    udrv_serial_log_printf("Current Work Mode: ");
    switch (service_lora_get_nwm())
    {
        case SERVICE_LORA_P2P:
        {
            udrv_serial_log_printf("LoRa P2P.\r\n");
            break;
        }
        case SERVICE_LORAWAN:
        {
            udrv_serial_log_printf("LoRaWAN.\r\n");
            break;
        }
        case SERVICE_LORA_FSK:
        {
            udrv_serial_log_printf("FSK.\r\n");
            break;
        }
    }
#endif
    if (run_user_app) {
        HardFault_Handler();
    }

#ifdef SUPPORT_MULTITASK
    memset(thread_pool, 0, sizeof(tcb_)*THREAD_POOL_SIZE);

    uhal_sched_create_sys_thread("sys thread", rui_system_thread);
    uhal_sched_create_thread("usr thread", rui_user_thread);

    uhal_sched_init();

    sched_start = true;

    while (1) {
        //__asm("WFI");
    }
#else
    while(1)
    {
        //system loop
        rui_running();

        //user loop
        if (!no_busy_loop) {
            rui_loop();
        } else {
            if (service_nvm_get_auto_sleep_time_from_nvm()) {
                udrv_sleep_ms(0);
            }
        }
    }
#endif
}
