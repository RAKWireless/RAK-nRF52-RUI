#ifndef _UHAL_WDT_H_
#define _UHAL_WDT_H_

#include "udrv_wdt.h"
#include "app_timer.h"
#include "nrf_drv_wdt.h"
#include "nrf_log.h"

void uhal_wdt_feed(void);

void uhal_wdt_init(uint32_t period);

#endif
