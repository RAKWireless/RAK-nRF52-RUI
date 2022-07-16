#ifndef _UDRV_NFC_H_
#define _UDRV_NFC_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef enum
{
    UDRV_NFC_T4T_EVENT_NONE,
    UDRV_NFC_T4T_EVENT_FIELD_ON,
    UDRV_NFC_T4T_EVENT_FIELD_OFF,
    UDRV_NFC_T4T_EVENT_NDEF_READ,
    UDRV_NFC_T4T_EVENT_NDEF_UPDATED,
    UDRV_NFC_T4T_EVENT_DATA_TRANSMITTED,
    UDRV_NFC_T4T_EVENT_DATA_IND,
} UDRV_NFC_T4T_EVENT;

typedef void (*udrv_nfc_t4t_callback)(void*               p_context,
		                              UDRV_NFC_T4T_EVENT  event,
                                      const uint8_t*      p_data,
                                      size_t              data_size,
                                      uint32_t            flags);

typedef enum
{
    UDRV_NFC_URI_NONE          = 0x00,  /**< No prepending is done. */
    UDRV_NFC_URI_HTTP_WWW      = 0x01,  /**< "http://www." */
    UDRV_NFC_URI_HTTPS_WWW     = 0x02,  /**< "https://www." */
    UDRV_NFC_URI_HTTP          = 0x03,  /**< "http:" */
    UDRV_NFC_URI_HTTPS         = 0x04,  /**< "https:" */
    UDRV_NFC_URI_TEL           = 0x05,  /**< "tel:" */
    UDRV_NFC_URI_MAILTO        = 0x06,  /**< "mailto:" */
    UDRV_NFC_URI_FTP_ANONYMOUS = 0x07,  /**< "ftp://anonymous:anonymous@" */
    UDRV_NFC_URI_FTP_FTP       = 0x08,  /**< "ftp://ftp." */
    UDRV_NFC_URI_FTPS          = 0x09,  /**< "ftps://" */
    UDRV_NFC_URI_SFTP          = 0x0A,  /**< "sftp://" */
    UDRV_NFC_URI_SMB           = 0x0B,  /**< "smb://" */
    UDRV_NFC_URI_NFS           = 0x0C,  /**< "nfs://" */
    UDRV_NFC_URI_FTP           = 0x0D,  /**< "ftp://" */
    UDRV_NFC_URI_DAV           = 0x0E,  /**< "dav://" */
    UDRV_NFC_URI_NEWS          = 0x0F,  /**< "news:" */
    UDRV_NFC_URI_TELNET        = 0x10,  /**< "telnet://" */
    UDRV_NFC_URI_IMAP          = 0x11,  /**< "imap:" */
    UDRV_NFC_URI_RTSP          = 0x12,  /**< "rtsp://" */
    UDRV_NFC_URI_URN           = 0x13,  /**< "urn:" */
    UDRV_NFC_URI_POP           = 0x14,  /**< "pop:" */
    UDRV_NFC_URI_SIP           = 0x15,  /**< "sip:" */
    UDRV_NFC_URI_SIPS          = 0x16,  /**< "sips:" */
    UDRV_NFC_URI_TFTP          = 0x17,  /**< "tftp:" */
    UDRV_NFC_URI_BTSPP         = 0x18,  /**< "btspp://" */
    UDRV_NFC_URI_BTL2CAP       = 0x19,  /**< "btl2cap://" */
    UDRV_NFC_URI_BTGOEP        = 0x1A,  /**< "btgoep://" */
    UDRV_NFC_URI_TCPOBEX       = 0x1B,  /**< "tcpobex://" */
    UDRV_NFC_URI_IRDAOBEX      = 0x1C,  /**< "irdaobex://" */
    UDRV_NFC_URI_FILE          = 0x1D,  /**< "file://" */
    UDRV_NFC_URI_URN_EPC_ID    = 0x1E,  /**< "urn:epc:id:" */
    UDRV_NFC_URI_URN_EPC_TAG   = 0x1F,  /**< "urn:epc:tag:" */
    UDRV_NFC_URI_URN_EPC_PAT   = 0x20,  /**< "urn:epc:pat:" */
    UDRV_NFC_URI_URN_EPC_RAW   = 0x21,  /**< "urn:epc:raw:" */
    UDRV_NFC_URI_URN_EPC       = 0x22,  /**< "urn:epc:" */
    UDRV_NFC_URI_URN_NFC       = 0x23,  /**< "urn:nfc:" */
    UDRV_NFC_URI_RFU           = 0xFF   /**< No prepending is done. Reserved for future use. */
} UDRV_NFC_URI_ID;

void udrv_nfc_init(bool wakeup_setting, bool atMode,udrv_nfc_t4t_callback callback);

void udrv_nfc_send_txt(const uint8_t* language,uint32_t l_size, const uint8_t* message,uint32_t m_size);

void udrv_nfc_send_uri(UDRV_NFC_URI_ID type, const uint8_t* url, uint32_t url_size);

void udrv_nfc_send_app(const uint8_t* android_app, uint32_t android_size, const uint8_t* windows_app, uint32_t windows_size);

void udrv_nfc_close(void);


#ifdef __cplusplus
}
#endif

#endif // #ifndef _UDRV_NFC_H_
