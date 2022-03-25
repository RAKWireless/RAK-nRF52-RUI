#ifndef _UHAL_DFU_H_
#define _UHAL_DFU_H_

#include <stdint.h>
#include <stddef.h>
#include "nrf_power.h"
#include "nrf_bootloader_info.h"
#include "nrf_pwr_mgmt.h"
#include "nrf_log_ctrl.h"

void uhal_enter_dfu (void);

#endif  // #ifndef _UHAL_DFU_H_
