#ifndef __RAK_UART_H__
#define __RAK_UART_H__
#include "stdint.h"
#include "app_uart.h"

typedef enum {
    UART_IDLE=0,
    LOG_USE_UART,
    GSM_USE_UART,
    GPS_USE_UART,
    DFU_USE_UART,
    GENERAL_USE_UART,
}uart_run_t;


void rak_uart_init(uart_run_t type, uint32_t rx, uint32_t tx, uint32_t baud);

#endif
