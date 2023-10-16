#include "uhal_nfc.h"
#include "udrv_serial.h"
#include "udrv_system.h"
#include "atcmd.h"

#ifdef SUPPORT_NFC

#define NDEF_PAYLOAD_MAX 500
#define NDEF_LONG_MESSAGE_HEADER_LEN 10
#define NDEF_SHORT_MESSAGE_HEADER_LEN 10
#define NDEF_PAYLOAD_HEADER_LEN 3

static uint8_t m_ndef_msg_buf[512];
static uint8_t m_ndef_msg_len;
static uint8_t nfc_atcmd_len;

static bool isUpdate = false;
static int print_counter = 0;

static udrv_system_event_t rui_nfc_event = {
	.request = UDRV_SYS_EVT_OP_SERIAL_NFC,
	.p_context = NULL };

nfc_t4t_callback_t nfc_cb;

#define READ_SIZE 1

NRF_QUEUE_DEF(uint8_t, nfc_rxq, 512, NRF_QUEUE_MODE_NO_OVERFLOW);

const char *atcmd_err_tbl_uhal[] =
{
    "OK",
    "AT_ERROR",
    "AT_PARAM_ERROR",
    "AT_BUSY_ERROR",
    "AT_TEST_PARAM_OVERFLOW",
    "AT_NO_CLASSB_ENABLE",
    "AT_NO_NETWORK_JOINED",
    "AT_RX_ERROR",
    "AT_MODE_NO_SUPPORT",
};

typedef struct ndef_txt_long
{
    uint8_t ndef_start;           
    uint8_t ndef_message_length;  // NDEF_LONG_MESSAGE_HEADER + sizeof(ndef_payload)
    uint8_t ndef_flag;            //
    uint8_t ndef_type_length;     // 0x01
    uint8_t ndef_payload_length[4];  // NDEF_PAYLOAD_HEADER + sizeof(ndef_payload)
    uint8_t ndef_type_name;       // 0x54
    uint8_t ndef_id;              // 0x02
    uint8_t ndef_language[2];     // 
    uint8_t ndef_payload[NDEF_PAYLOAD_MAX];    //
} ndef_txt_long_t;

typedef struct ndef_txt_short
{
    uint8_t ndef_start;           // 0x00
    uint8_t ndef_message_length;  // NDEF_SHORT_MESSAGE_HEADER + sizeof(ndef_payload)
    uint8_t ndef_flag;            //
    uint8_t ndef_type_length;     // 0x01
    uint8_t ndef_payload_length;  // NDEF_PAYLOAD_HEADER + sizeof(ndef_payload)
    uint8_t ndef_type_name;       // 0x54
    uint8_t ndef_id;              // 0x02
    uint8_t ndef_language[2];     // 
    uint8_t ndef_payload[256];    //
} ndef_txt_short_t;


/**
 * @brief Callback function for handling NFC events.
 */
static void nfc_callback(void          * context,
                         nfc_t4t_event_t event,
                         const uint8_t * data,
                         size_t          dataLength,
                         uint32_t        flags)
{
    (void)context;

    switch (event)
    {
        case NFC_T4T_EVENT_FIELD_ON:
            break;

        case NFC_T4T_EVENT_FIELD_OFF:
            break;

        case NFC_T4T_EVENT_NDEF_READ:
            break;

        case NFC_T4T_EVENT_NDEF_UPDATED:
            if (dataLength > 0)
            {
                isUpdate = true;
                print_counter = 0;

                ndef_txt_short_t *ndef_short = (ndef_txt_short_t *)m_ndef_msg_buf;
                nfc_atcmd_len = ndef_short->ndef_payload_length - NDEF_PAYLOAD_HEADER_LEN + 1;
                ndef_short->ndef_payload[nfc_atcmd_len - 1] = 0x0A;

                size_t rx_available = nrf_queue_available_get(&nfc_rxq);
                if(rx_available >= nfc_atcmd_len) {
#ifndef RUI_BOOTLOADER
                    {
                        for (int i = 0 ; i < nfc_atcmd_len ; i++) {
                            serial_fallback_handler(SERIAL_NFC, ndef_short->ndef_payload[i]);
                        }
                    }
#endif
                    nrf_queue_in(&nfc_rxq, ndef_short->ndef_payload, nfc_atcmd_len);
                } else {
                    NRF_LOG_ERROR("%u available is less than %u received!", rx_available, nfc_atcmd_len);
#ifndef RUI_BOOTLOADER
                    {
                        for (int i = 0 ; i < rx_available ; i++) {
                            serial_fallback_handler(SERIAL_NFC, ndef_short->ndef_payload[i]);
                        }
                    }
#endif
                    nrf_queue_in(&nfc_rxq, ndef_short->ndef_payload, rx_available);
                }

                uint8_t NDEF_LONG_HEADER[12] = {0x00, 0x0A, 0xC1, 0x01, 0x00, 0x00, 0x00, 0x03, 0x54, 0x02, 0x65, 0x6E};
                memcpy(m_ndef_msg_buf, NDEF_LONG_HEADER, sizeof(NDEF_LONG_HEADER));

                udrv_system_event_produce(&rui_nfc_event);
            }
            break;

        default:
            break;
    }

    if (nfc_cb != NULL) {
        nfc_cb(context, event, data, dataLength, flags);
    }
}

/**
 * @brief Function for application main entry.
 */
void uhal_nfc_init(bool wakeup, bool atMode, udrv_nfc_t4t_callback callback)
{
    uint32_t  err_code;

    /* Set up NFC */
    if(atMode) {
        nfc_cb = (nfc_t4t_callback_t)callback;
        err_code = nfc_t4t_setup((nfc_t4t_callback_t)nfc_callback, NULL);
    } else { 
        err_code = nfc_t4t_setup(callback, NULL);
    }
    APP_ERROR_CHECK(err_code);
}

void uhal_nfc_send_txt(const uint8_t* language, uint32_t l_size, const uint8_t* message, uint32_t m_size)
{
    uint32_t err_code;
    uint32_t message_len = sizeof(m_ndef_msg_buf);

    NFC_NDEF_MSG_DEF(rak_nfc_msg, 1);

    NFC_NDEF_TEXT_RECORD_DESC_DEF(nfc_txt,
                                  UTF_8,
                                  language,
                                  l_size,
                                  message,
                                  m_size);

    err_code = nfc_ndef_msg_record_add(&NFC_NDEF_MSG(rak_nfc_msg),
                                       &NFC_NDEF_TEXT_RECORD_DESC(nfc_txt));
    APP_ERROR_CHECK(err_code);

    err_code = nfc_ndef_msg_encode(&NFC_NDEF_MSG(rak_nfc_msg),
                                   m_ndef_msg_buf,
                                   &message_len);

    APP_ERROR_CHECK(err_code);

    err_code = nfc_t4t_ndef_rwpayload_set(m_ndef_msg_buf, 512);
    APP_ERROR_CHECK(err_code);

    /* Start sensing NFC field */
    err_code = nfc_t4t_emulation_start();
    APP_ERROR_CHECK(err_code);
}

void uhal_nfc_send_uri(UDRV_NFC_URI_ID type, const uint8_t* url, uint32_t url_size)
{
    uint8_t err_code;
    memset(m_ndef_msg_buf, 0, 512);

    uint32_t message_len = sizeof(m_ndef_msg_buf);

    nfc_uri_msg_encode((nfc_uri_id_t)type,
		       url,
		       url_size,
		       m_ndef_msg_buf,
		       &message_len);
    err_code = nfc_t4t_ndef_rwpayload_set(m_ndef_msg_buf, 512);

    /* Start sensing NFC field */
    err_code = nfc_t4t_emulation_start();
    APP_ERROR_CHECK(err_code);
}

void uhal_nfc_send_app(const uint8_t* android_app, uint32_t android_size, const uint8_t* windows_app, uint32_t windows_size)
{
    uint8_t err_code;
    uint32_t message_len = sizeof(m_ndef_msg_buf);

    nfc_launchapp_msg_encode(android_app,
		             android_size,
			     windows_app,
			     windows_size,
			     m_ndef_msg_buf,
			     &message_len);

    err_code = nfc_t4t_ndef_rwpayload_set(m_ndef_msg_buf, 512);

    /* Start sensing NFC field */
    err_code = nfc_t4t_emulation_start();
    APP_ERROR_CHECK(err_code);
}

void uhal_nfc_close(void) 
{
    uint8_t err_code;

    err_code = nfc_t4t_emulation_stop();
    APP_ERROR_CHECK(err_code);
}

void uhal_nfc_serial_init(SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode)
{
    return;
}

void uhal_nfc_serial_deinit(SERIAL_PORT port)
{
    return;
}

int32_t uhal_nfc_serial_write(SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout)
{
    if(print_counter + NumberOfBytes > NDEF_PAYLOAD_MAX)
        return;
    if(isUpdate) {
        ndef_txt_long_t *ndef_long = (ndef_txt_short_t *)m_ndef_msg_buf;
        memcpy(ndef_long->ndef_payload + print_counter, Buffer, NumberOfBytes);
        print_counter += NumberOfBytes;
        
        ndef_long->ndef_message_length += NumberOfBytes;
        ndef_long->ndef_payload_length[3] += NumberOfBytes;

        for(int i=0; i<sizeof(atcmd_err_tbl_uhal)/sizeof(char *); i++)
        {
            if(strncmp(Buffer+2 ,atcmd_err_tbl_uhal[i], strlen(atcmd_err_tbl_uhal[i])) == 0)
            {
                if(print_counter > 0xFF) {
                    ndef_long->ndef_start = 0x01;
                    ndef_long->ndef_payload_length[2] = 0x01;
                }
                isUpdate = false;
            }
        }
    }
}

int32_t uhal_nfc_serial_read(SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout)
{
    return (int32_t)nrf_queue_out(&nfc_rxq, Buffer, NumberOfBytes);
}

int32_t uhal_nfc_serial_peek(SERIAL_PORT Port)
{
}

void uhal_nfc_serial_flush(SERIAL_PORT Port, uint32_t Timeout) 
{
}
 
size_t uhal_nfc_serial_read_available(SERIAL_PORT Port)
{
    return (size_t)nrf_queue_utilization_get(&nfc_rxq);
}

#endif
