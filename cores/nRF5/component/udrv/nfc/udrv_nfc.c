#include <stddef.h>
#include "udrv_serial.h"
#include "udrv_nfc.h"
#include "uhal_nfc.h"
#include "udrv_serial.h"

#ifdef SUPPORT_NFC

extern bool udrv_powersave_in_sleep;

bool wakeup, isRead;
bool firstRead = true;
udrv_nfc_t4t_callback cb;

void *big_callback(void              * p_context,
		                      UDRV_NFC_T4T_EVENT  event,
				      const uint8_t     * p_data,
				      size_t              data_size,
				      uint32_t            flags) {
    if(isRead || firstRead) {
	firstRead = false;
        udrv_powersave_in_sleep = !wakeup;
    }

    switch (event)
    {
        case UDRV_NFC_T4T_EVENT_FIELD_OFF:
	        if(isRead) {
		        isRead = false;
		        firstRead = true;
		        udrv_powersave_in_sleep = !wakeup;
		        break;
	        }
            break;
        case UDRV_NFC_T4T_EVENT_NDEF_READ:
	        isRead = true;
            break;
        case UDRV_NFC_T4T_EVENT_NDEF_UPDATED:
	        isRead = true;
            break;
    }

    if (cb != NULL) {
        cb(p_context, event, p_data+2, data_size, flags);
    }
}

void udrv_nfc_init(bool wakeup_setting, bool atMode, udrv_nfc_t4t_callback callback)
{
    wakeup = wakeup_setting;
    cb = callback;
    uhal_nfc_init(wakeup, atMode, big_callback);
}

void udrv_nfc_send_txt(const uint8_t* language,uint32_t l_size, const uint8_t* message,uint32_t m_size)
{
    uhal_nfc_send_txt(language, l_size, message, m_size);
}

void udrv_nfc_send_uri(UDRV_NFC_URI_ID type, const uint8_t* url, uint32_t url_size)
{
    uhal_nfc_send_uri(type, url, url_size);
}

void udrv_nfc_send_app(const uint8_t* android_app, uint32_t android_size, const uint8_t* windows_app, uint32_t windows_size)
{
    uhal_nfc_send_app(android_app, android_size, windows_app, windows_size);
}

void udrv_nfc_close(void)
{
    uhal_nfc_close();
}

#endif
