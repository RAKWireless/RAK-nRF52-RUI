#ifndef _UHAL_USB_H_
#define _UHAL_USB_H_

#include <stdint.h>
#include <stddef.h>
#include "udrv_serial.h"
#include "udrv_errno.h"
#include "app_usbd_core.h"
#include "app_usbd.h"
#include "app_usbd_string_desc.h"
#include "app_usbd_cdc_acm.h"
#include "app_usbd_serial_num.h"
#include "nrf_queue.h"
#include "nrf_log.h"
#include "nrf_delay.h"
#include "nrf_drv_power.h"

void uhal_usb_register_cli_handler (SERIAL_CLI_HANDLER handler);

void uhal_usb_init (SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode);

void uhal_usb_deinit (SERIAL_PORT Port);

int32_t uhal_usb_write (SERIAL_PORT Port, uint8_t const *Buffer, int32_t NumberOfBytes, uint32_t Timeout);

int32_t uhal_usb_read (SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout);

int32_t uhal_usb_peek (SERIAL_PORT Port);

void uhal_usb_flush (SERIAL_PORT Port, uint32_t Timeout);

size_t uhal_usb_read_available(SERIAL_PORT Port);

void uhal_usb_suspend(void);

void uhal_usb_resume(void);

#endif  // #ifndef _UHAL_USB_H_
