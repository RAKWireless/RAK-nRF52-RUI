#include "uhal_delay.h"

void uhal_delay_ms (uint32_t ms_time)
{
    nrf_delay_ms(ms_time);
}

void uhal_delay_us (uint32_t us_time)
{
    nrf_delay_us(us_time);
}
