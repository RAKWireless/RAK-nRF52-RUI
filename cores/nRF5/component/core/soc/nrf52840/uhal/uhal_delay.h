#ifndef _UHAL_DELAY_H_
#define _UHAL_DELAY_H_

#include <stdint.h>
#include <stddef.h>
#include "nrf_delay.h"

void uhal_delay_ms (uint32_t ms_time);

void uhal_delay_us (uint32_t us_time);

#endif  // #ifndef _UHAL_DELAY_H_
