#include <stdarg.h>
#include "uhal_usb.h"
#include "udrv_system.h"
#include "udrv_serial.h"

#ifdef SUPPORT_USB

extern void app_usbd_event_add(app_usbd_internal_evt_t const * const p_event_input);

#ifndef RUI_BOOTLOADER
extern bool udrv_powersave_in_sleep;
static udrv_system_event_t rui_usb_event = {.request = UDRV_SYS_EVT_OP_SERIAL_USB, .p_context = NULL};
#endif

/*************************usbd begin*****************************/

#ifndef USBD_POWER_DETECTION
#define USBD_POWER_DETECTION true
#endif

static void cdc_acm_user_ev_handler(app_usbd_class_inst_t const * p_inst,
                                    app_usbd_cdc_acm_user_event_t event);

#define CDC_ACM_COMM_INTERFACE  0
#define CDC_ACM_COMM_EPIN       NRF_DRV_USBD_EPIN2

#define CDC_ACM_DATA_INTERFACE  1
#define CDC_ACM_DATA_EPIN       NRF_DRV_USBD_EPIN1
#define CDC_ACM_DATA_EPOUT      NRF_DRV_USBD_EPOUT1


/**
 * @brief CDC_ACM class instance
 * */
APP_USBD_CDC_ACM_GLOBAL_DEF(m_app_cdc_acm,
                            cdc_acm_user_ev_handler,
                            CDC_ACM_COMM_INTERFACE,
                            CDC_ACM_DATA_INTERFACE,
                            CDC_ACM_COMM_EPIN,
                            CDC_ACM_DATA_EPIN,
                            CDC_ACM_DATA_EPOUT,
                            APP_USBD_CDC_COMM_PROTOCOL_NONE
);

#define READ_SIZE 1

static char m_rx_buffer[READ_SIZE] __attribute__ ((aligned (32)));
static char m_tx_buffer[NRF_DRV_USBD_EPSIZE] __attribute__ ((aligned (32)));
NRF_QUEUE_DEF(uint8_t, usb_rxq, 512, NRF_QUEUE_MODE_NO_OVERFLOW);

static volatile bool tx_done = true;
static volatile bool usb_opened = false;

/**
 * @brief User event handler @ref app_usbd_cdc_acm_user_ev_handler_t (headphones)
 * */
static void cdc_acm_user_ev_handler(app_usbd_class_inst_t const * p_inst,
                                    app_usbd_cdc_acm_user_event_t event)
{
    app_usbd_cdc_acm_t const * p_cdc_acm = app_usbd_cdc_acm_class_get(p_inst);

    switch (event)
    {
        case APP_USBD_CDC_ACM_USER_EVT_PORT_OPEN:
        {
            NRF_LOG_INFO("APP_USBD_CDC_ACM_USER_EVT_PORT_OPEN");
            /*Setup first transfer*/
            ret_code_t ret = app_usbd_cdc_acm_read(&m_app_cdc_acm,
                                                   m_rx_buffer,
                                                   READ_SIZE);
            UNUSED_VARIABLE(ret);
            usb_opened = true;
            break;
        }
        case APP_USBD_CDC_ACM_USER_EVT_PORT_CLOSE:
            NRF_LOG_INFO("APP_USBD_CDC_ACM_USER_EVT_PORT_CLOSE");
            usb_opened = false;
            break;
        case APP_USBD_CDC_ACM_USER_EVT_TX_DONE:
            //NRF_LOG_INFO("APP_USBD_CDC_ACM_USER_EVT_TX_DONE"); //remove logging for the performance 
            tx_done = true;
            break;
        case APP_USBD_CDC_ACM_USER_EVT_RX_DONE:
        {
            ret_code_t ret = NRF_SUCCESS;
#ifndef RUI_BOOTLOADER
            udrv_powersave_in_sleep = false;
#endif
            NRF_LOG_INFO("Bytes waiting: %d", app_usbd_cdc_acm_bytes_stored(p_cdc_acm));
            //NRF_LOG_INFO("RX queue utilization: %d (before RX)", nrf_queue_utilization_get(&usb_rxq));
            while (nrf_queue_available_get(&usb_rxq) >= READ_SIZE && ret == NRF_SUCCESS)
            {
                /*Get amount of data transfered*/
                size_t size = app_usbd_cdc_acm_rx_size(p_cdc_acm);
                NRF_LOG_INFO("RX: size: %lu char: 0x%x", size, m_rx_buffer[0]);
#ifndef RUI_BOOTLOADER
                {
                    for (int i = 0 ; i < READ_SIZE ; i++) {
                        serial_fallback_handler(SERIAL_USB0, m_rx_buffer[i]);
                    }
                }
#endif
                nrf_queue_in(&usb_rxq, m_rx_buffer, READ_SIZE);

                /* Fetch data until internal buffer is empty */
                ret = app_usbd_cdc_acm_read(&m_app_cdc_acm,
                                            m_rx_buffer,
                                            READ_SIZE);
            }
            //NRF_LOG_INFO("RX queue utilization: %d (after RX)", nrf_queue_utilization_get(&usb_rxq));
            while (ret == NRF_SUCCESS)
            {
                /*Get amount of data transfered*/
                size_t size = app_usbd_cdc_acm_rx_size(p_cdc_acm);
                NRF_LOG_INFO("Drop: size: %lu char: %c(0x%x)", size, m_rx_buffer[0], m_rx_buffer[0]);

                /* Fetch data until internal buffer is empty */
                ret = app_usbd_cdc_acm_read(&m_app_cdc_acm,
                                            m_rx_buffer,
                                            READ_SIZE);
            }
            udrv_system_event_produce(&rui_usb_event);
            break;
        }
        default:
            break;
    }
}

static void usbd_user_ev_handler(app_usbd_event_type_t event)
{
    switch (event)
    {
        case APP_USBD_EVT_DRV_SUSPEND:
            break;
        case APP_USBD_EVT_DRV_RESUME:
            break;
        case APP_USBD_EVT_STARTED:
            break;
        case APP_USBD_EVT_STOPPED:
            app_usbd_disable();

            break;
        case APP_USBD_EVT_POWER_DETECTED:
            NRF_LOG_INFO("USB power detected");
            nrf_drv_clock_hfclk_request(NULL);
            while (!nrf_drv_clock_hfclk_is_running());/* Just waiting */
            if (!nrf_drv_usbd_is_enabled())
            {
                app_usbd_enable();
            }
            break;
        case APP_USBD_EVT_POWER_REMOVED:
            NRF_LOG_INFO("USB power removed");
            app_usbd_stop();
            nrf_queue_reset(&usb_rxq);
            if (nrf_drv_clock_hfclk_is_running())
               nrf_drv_clock_hfclk_release();
            break;
        case APP_USBD_EVT_POWER_READY:
            NRF_LOG_INFO("USB ready");
            app_usbd_start();
            break;
        default:
            break;
    }
}

void usbd_send(uint8_t *pdata, uint16_t len)
{
    int i = 0;
    uint16_t remaining = len;
    uint32_t retcode;

    if (len > NRF_DRV_USBD_EPSIZE) {
        for (i = 0 ; i < len/NRF_DRV_USBD_EPSIZE ; i++) {
            memset(m_tx_buffer, 0, NRF_DRV_USBD_EPSIZE);
            memcpy(m_tx_buffer, pdata + NRF_DRV_USBD_EPSIZE*i, NRF_DRV_USBD_EPSIZE);
            if(usb_opened)
                tx_done = false;
            else
                tx_done = true;
            while ((retcode = app_usbd_cdc_acm_write(&m_app_cdc_acm, m_tx_buffer, NRF_DRV_USBD_EPSIZE)) == NRFX_ERROR_BUSY) {
                //NRF_LOG_INFO("USB write failed because of busy %s(0x%x): %u", m_tx_buffer, m_tx_buffer[0], retcode);
                nrf_delay_ms(5);
            }
            if (retcode == NRFX_SUCCESS) {
                //FIXME: Should wait APP_USBD_CDC_ACM_USER_EVT_TX_DONE, but it doesn't come. Delay instead.
                //while (tx_done == false) {
                //    uhal_mcu_sleep();
                //}
                //nrf_delay_ms(5);
                while (tx_done == false && usb_opened == true);
            } else {
                //NRF_LOG_INFO("USB write ret: %u", retcode);
            }
            remaining -= NRF_DRV_USBD_EPSIZE;
        }
    }
    if (remaining) {
        memset(m_tx_buffer, 0, NRF_DRV_USBD_EPSIZE);
        memcpy(m_tx_buffer, pdata + NRF_DRV_USBD_EPSIZE*i, remaining);
        if(usb_opened)
            tx_done = false;
        else
            tx_done = true;
        while ((retcode = app_usbd_cdc_acm_write(&m_app_cdc_acm, m_tx_buffer, remaining)) == NRFX_ERROR_BUSY) {
            //NRF_LOG_INFO("USB write failed because of busy %s(0x%x): %u", m_tx_buffer, m_tx_buffer[0], retcode);
            nrf_delay_ms(5);
        }
        if (retcode == NRFX_SUCCESS) {
            //FIXME: Should wait APP_USBD_CDC_ACM_USER_EVT_TX_DONE, but it doesn't come. Delay instead.
            //while (tx_done == false) {
            //    uhal_mcu_sleep();
            //}
            //nrf_delay_ms(5);
            while (tx_done == false && usb_opened == true);
        } else {
            //NRF_LOG_INFO("USB write ret: %u", retcode);
        }
    }
}

void usbd_printf (const char *fmt, ...)
{
    char print_buf[512];
    va_list aptr;
 
    va_start (aptr, fmt);
    vsprintf (print_buf, fmt, aptr);
    va_end (aptr);
 
    usbd_send(print_buf, strlen(print_buf));
}
/*************************usbd end*****************************/

void uhal_usb_register_cli_handler (SERIAL_CLI_HANDLER handler) {
}

void uhal_usb_init (SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode) {
    ret_code_t ret;

    nrf_queue_reset(&usb_rxq);

    static const app_usbd_config_t usbd_config = {
        .ev_state_proc = usbd_user_ev_handler
    };

    app_usbd_serial_num_generate();
    ret = app_usbd_init(&usbd_config);
    APP_ERROR_CHECK(ret);
    app_usbd_class_inst_t const * class_cdc_acm = app_usbd_cdc_acm_class_inst_get(&m_app_cdc_acm);
    ret = app_usbd_class_append(class_cdc_acm);
    APP_ERROR_CHECK(ret);

}
void uhal_usb_enable(SERIAL_PORT Port)
{
    ret_code_t ret;
    if (USBD_POWER_DETECTION)
    {   
        ret = app_usbd_power_events_enable();
        APP_ERROR_CHECK(ret);
        
        if (nrf_power_usbregstatus_get() & POWER_USBREGSTATUS_VBUSDETECT_Msk)
        {       
        //    nrfx_power_usb_event_handler_t usbevt_handler = nrfx_power_usb_handler_get();
        //    ASSERT(usbevt_handler != NULL);
        //    usbevt_handler(NRFX_POWER_USB_EVT_DETECTED);
            static const app_usbd_internal_evt_t ev = {
                .type = APP_USBD_EVT_POWER_DETECTED
            };  
            app_usbd_event_add(&ev);
        }   
    }   
    else
    {
        NRF_LOG_INFO("No USB power detection enabled\r\nStarting USB now");

        app_usbd_enable();
        app_usbd_start();
    }   

}


void uhal_usb_deinit (SERIAL_PORT Port) {
    ret_code_t ret;

    if (USBD_POWER_DETECTION)
    {
        nrf_drv_power_usbevt_uninit();
        nrf_drv_power_uninit();
        app_usbd_stop();
        app_usbd_disable();
        ret = app_usbd_uninit();
        APP_ERROR_CHECK(ret);
    }
    else
    {
        app_usbd_stop();
        app_usbd_disable();
        app_usbd_uninit();
    }
}

int32_t uhal_usb_write (SERIAL_PORT Port, uint8_t const *Buffer, int32_t NumberOfBytes, uint32_t Timeout) {
    usbd_send(Buffer, NumberOfBytes);
    return UDRV_RETURN_OK;
}

int32_t uhal_usb_read (SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout) {
    return (int32_t)nrf_queue_out(&usb_rxq, Buffer, NumberOfBytes);
}

int32_t uhal_usb_peek (SERIAL_PORT Port) {
    uint8_t ch;
    if (nrf_queue_generic_pop(&usb_rxq, &ch, true) == NRF_SUCCESS) {
        return (int32_t)ch;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

void uhal_usb_flush (SERIAL_PORT Port, uint32_t Timeout) {
}

size_t uhal_usb_read_available(SERIAL_PORT Port) {
    return (size_t)nrf_queue_utilization_get(&usb_rxq);
}

bool uhal_usb_opened(SERIAL_PORT Port)
{
    return usb_opened;
}

void uhal_usb_suspend(void) {
    app_usbd_suspend_req();
}

void uhal_usb_resume(void) {
    app_usbd_wakeup_req();
}

#endif
