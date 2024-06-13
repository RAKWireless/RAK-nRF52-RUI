#include "uhal_wdt.h"
//#include "board_basic.h"

APP_TIMER_DEF(wdt_timer_id);   // timer ID

nrf_drv_wdt_channel_id m_channel_id;

void uhal_wdt_feed(void)
{
    // feed watch dog
    nrf_drv_wdt_channel_feed(m_channel_id);
}

/**
 * @brief WDT events handler.
 */
void uhal_wdt_event_handler(void)
{
    //NOTE: The max amount of time we can spend in WDT interrupt is two cycles of 32768[Hz] clock - after that, reset occurs
    NRF_LOG_DEBUG("%s(): wdt timeout!!", __func__);
}

void uhal_wdt_timer_handler(void * p_context)
{
    uhal_wdt_feed();
}

void uhal_wdt_init(uint32_t period)
{
    uint32_t err_code = NRF_SUCCESS;

    if(period != 15 && period != 30 && period != 60 && period != 120 && period != 250 && period != 500 && period != 1000 && period != 2000 && period != 4000 && period != 8000 )
    {
        period = 8000;
    }
    // Configure WDT.
    nrf_drv_wdt_config_t config = NRF_DRV_WDT_DEAFULT_CONFIG;
	config.behaviour = NRF_WDT_BEHAVIOUR_PAUSE_SLEEP_HALT;
	config.reload_value = period;
    err_code = nrf_drv_wdt_init(&config, uhal_wdt_event_handler);
    //NRF_LOG_DEBUG("%d: %s(): err_code=%d", __LINE__, __func__, err_code);
    APP_ERROR_CHECK(err_code);
    err_code = nrf_drv_wdt_channel_alloc(&m_channel_id);
    //NRF_LOG_DEBUG("%d: %s(): err_code=%d", __LINE__, __func__, err_code);
    APP_ERROR_CHECK(err_code);
    nrf_drv_wdt_enable();
}

