#ifndef _UHAL_UART_H_
#define _UHAL_UART_H_

#include <stdint.h>
#include <stddef.h>
#include "pin_define.h"
#include "udrv_serial.h"
#include "udrv_errno.h"
#include "nrf_serial.h"

#ifdef RAK4600
    #define UHAL_UART_FIFO_TX_SIZE 1536
    #define UHAL_UART_FIFO_RX_SIZE 256
#else
    #define UHAL_UART_FIFO_TX_SIZE 2048
    #define UHAL_UART_FIFO_RX_SIZE 512
#endif

#define UHAL_UART_BUFF_TX_SIZE 1
#define UHAL_UART_BUFF_RX_SIZE 1

#define UHAL_UART_NO_TIMEOUT NRF_SERIAL_MAX_TIMEOUT

void uhal_uart_register_cli_handler (SERIAL_CLI_HANDLER handler);

void uhal_uart_init (SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity);

void uhal_uart_deinit (SERIAL_PORT Port);

int32_t uhal_uart_write (SERIAL_PORT Port, uint8_t const *Buffer, int32_t NumberOfBytes, uint32_t Timeout);

int32_t uhal_uart_read (SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout);

int32_t uhal_uart_peek (SERIAL_PORT Port);

void uhal_uart_flush (SERIAL_PORT Port, uint32_t Timeout);

size_t uhal_uart_read_available(SERIAL_PORT Port);

void uhal_uart_suspend(void);

void uhal_uart_resume(void);

#endif  // #ifndef _UHAL_UART_H_
