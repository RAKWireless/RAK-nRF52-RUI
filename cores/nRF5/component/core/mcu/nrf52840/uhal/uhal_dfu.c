#include "uhal_dfu.h"

void uhal_enter_dfu (void)
{
    nrf_power_gpregret_set(BOOTLOADER_DFU_START);

    while (nrf_power_gpregret_get() != BOOTLOADER_DFU_START);

    NVIC_SystemReset();
}

