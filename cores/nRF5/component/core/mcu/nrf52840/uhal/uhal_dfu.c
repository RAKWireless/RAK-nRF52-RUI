#include "uhal_dfu.h"
#include "uhal_uart.h"
#include "udrv_serial.h"
#include "nrf_delay.h"

void uhal_enter_dfu (void)
{
    for (int i = SERIAL_UART0 ; i < UHAL_UART_MAX ; i++) {
            uhal_uart_deinit(i);
    }

    NRF_LOG_FINAL_FLUSH();
    sd_power_gpregret_set(0, BOOTLOADER_DFU_START);

    NVIC_SystemReset();
}

