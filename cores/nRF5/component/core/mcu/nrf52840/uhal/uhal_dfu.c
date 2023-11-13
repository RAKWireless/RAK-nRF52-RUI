#include "uhal_dfu.h"

void uhal_enter_dfu (void)
{

    sd_power_gpregret_set(0, BOOTLOADER_DFU_START);

    NVIC_SystemReset();
}

