#include "uhal_powersave.h"
#include "udrv_errno.h"
#include "nrf_soc.h"
#include "nrf_drv_clock.h"

APP_TIMER_DEF(uhal_ps_timer_id);   // timer ID

int32_t uhal_ps_timer_create (timer_handler tmr_handler, TimerMode_E mode) {
    if (app_timer_create((app_timer_id_t *)&uhal_ps_timer_id, mode, (app_timer_timeout_handler_t)tmr_handler) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_ps_timer_start (uint32_t count, void *m_data) {
    if (app_timer_start((app_timer_id_t)uhal_ps_timer_id, APP_TIMER_TICKS(count), m_data) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_ps_timer_stop () {
    if (app_timer_stop((app_timer_id_t)uhal_ps_timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

void uhal_mcu_sleep (uint32_t level)
{
#if (__FPU_USED == 1)
__set_FPSCR(__get_FPSCR() & ~(0x0000009F));
(void) __get_FPSCR();
NVIC_ClearPendingIRQ(FPU_IRQn);
#endif

    __SEV();
    __WFE();
    __WFE();
#ifdef SOFTDEVICE_PRESENT
    sd_app_evt_wait();
#endif
}

static void clock_initialization()
{
    /* Start 16 MHz crystal oscillator */
    NRF_CLOCK->EVENTS_HFCLKSTARTED = 0;
    NRF_CLOCK->TASKS_HFCLKSTART    = 1;

    /* Wait for the external oscillator to start up */
    while (NRF_CLOCK->EVENTS_HFCLKSTARTED == 0)
    {
        // Do nothing.
    }

    /* Start low frequency crystal oscillator for app_timer(used by bsp)*/
    NRF_CLOCK->LFCLKSRC            = (CLOCK_LFCLKSRC_SRC_Xtal << CLOCK_LFCLKSRC_SRC_Pos);
    NRF_CLOCK->EVENTS_LFCLKSTARTED = 0;
    NRF_CLOCK->TASKS_LFCLKSTART    = 1;

    while (NRF_CLOCK->EVENTS_LFCLKSTARTED == 0)
    {
        // Do nothing.
    }

    NRF_RTC0->TASKS_STOP = 0;
    NRF_RTC1->TASKS_STOP = 0;
    NRF_RTC2->TASKS_STOP = 0;
}

void uhal_sys_clock_init(void) {
    ret_code_t err_code;

    //[20] RTC: Register values are invalid
    //https://infocenter.nordicsemi.com/index.jsp?topic=%2Ferrata_nRF52840_Rev1%2FERR%2FnRF52840%2FRev1%2Flatest%2Fanomaly_840_20.html
    clock_initialization();

    err_code = nrf_drv_clock_init();
    ASSERT((err_code == NRF_SUCCESS) || (err_code == NRF_ERROR_MODULE_ALREADY_INITIALIZED));

    nrf_drv_clock_hfclk_request(NULL);
    while (!nrf_drv_clock_hfclk_is_running()); /* Just waiting */

    nrf_drv_clock_lfclk_request(NULL);
    while (!nrf_drv_clock_lfclk_is_running())
    {
        /* Just waiting */
    }
}

void uhal_sys_clock_on(void) {
    if (!nrf_drv_clock_hfclk_is_running()) {
        nrf_drv_clock_hfclk_request(NULL);
    }
/*
    if (!nrf_drv_clock_lfclk_is_running()) {
        nrf_drv_clock_lfclk_request(NULL);
    }
*/
}

void uhal_sys_clock_off(void) {
/*
    if (nrf_drv_clock_lfclk_is_running()) {
        nrf_drv_clock_lfclk_release();
    }
*/
    if (nrf_drv_clock_hfclk_is_running() && !app_usbd_active_check()) {
        nrf_drv_clock_hfclk_release();
    }
}
