#ifndef _UHAL_NFC_H_
#define _UHAL_NFC_H_

#include <stdint.h>
#include "nfc_t4t_lib.h"
#include "nfc_ndef_msg.h"
#include "nfc_text_rec.h"
#include "nfc_uri_msg.h"
#include "nfc_uri_rec.h"
#include "nfc_launchapp_msg.h"
#include "nfc_launchapp_rec.h"
#include "nrf_queue.h"

#include "boards.h"
#include "app_error.h"
#include "hardfault.h"
#include "udrv_nfc.h"
#include "udrv_serial.h"
#include "sdk_macros.h"

#include "nrf_log.h"

void uhal_nfc_init(bool wakeup, bool atMode, udrv_nfc_t4t_callback callback);

void uhal_nfc_send_txt(const uint8_t* language,uint32_t l_size, const uint8_t* message,uint32_t m_size);

void uhal_nfc_send_uri(UDRV_NFC_URI_ID type, const uint8_t* url, uint32_t url_size);

void uhal_nfc_send_app(const uint8_t* android_app, uint32_t android_size, const uint8_t* windows_app, uint32_t windows_size);

void uhal_nfc_close();

void uhal_nfc_serial_init(SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode);

void uhal_nfc_serial_deinit(SERIAL_PORT Port);

int32_t uhal_nfc_serial_write(SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout);

int32_t uhal_nfc_serial_read(SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout);

int32_t uhal_nfc_serial_peek(SERIAL_PORT Port);

void uhal_nfc_serial_flush(SERIAL_PORT Port, uint32_t Timeout);

size_t uhal_nfc_serial_read_available(SERIAL_PORT Port);

#endif // BLE_CFG_H__
