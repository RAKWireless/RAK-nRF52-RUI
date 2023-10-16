#include "udrv_errno.h"
#include "uhal_timer.h"
#include "udrv_system.h"
#include "uhal_rtc.h"

extern bool udrv_powersave_in_sleep;

APP_TIMER_DEF(uhal_timer_id0);
APP_TIMER_DEF(uhal_timer_id1);
APP_TIMER_DEF(uhal_timer_id2);
APP_TIMER_DEF(uhal_timer_id3);
APP_TIMER_DEF(uhal_timer_id4);
APP_TIMER_DEF(uhal_sys_timer_id0);
APP_TIMER_DEF(uhal_sys_timer_id1);
APP_TIMER_DEF(uhal_sys_timer_id2);
APP_TIMER_DEF(uhal_sys_timer_id3);
APP_TIMER_DEF(uhal_sys_timer_id4);

static uhal_timer_data uhal_timer_pdata[TIMER_ID_MAX];
static uhal_timer_data uhal_sys_timer_pdata[SYSTIMER_ID_MAX];

static udrv_system_event_t rui_user_timer_event[TIMER_ID_MAX];
static udrv_system_event_t rui_sys_timer_event[SYSTIMER_ID_MAX];

void uhal_timer_handler_handler(void *pdata)
{
    if (((uhal_timer_data *)pdata)->timer_func) {
        ((uhal_timer_data *)pdata)->timer_func(((uhal_timer_data *)pdata)->m_data);
    }
}

static void uhal_timer_handler_dispatcher(TimerID_E timer_id)
{
    udrv_powersave_in_sleep = false;

    rui_user_timer_event[timer_id].request = UDRV_SYS_EVT_OP_USER_TIMER;
    rui_user_timer_event[timer_id].p_context = (void *)&uhal_timer_pdata[timer_id];
    udrv_system_event_produce(&rui_user_timer_event[timer_id]);
}

static void uhal_sys_timer_handler_dispatcher(SysTimerID_E timer_id)
{
    udrv_powersave_in_sleep = false;

    rui_sys_timer_event[timer_id].request = UDRV_SYS_EVT_OP_SYS_TIMER;
    rui_sys_timer_event[timer_id].p_context = (void *)&uhal_sys_timer_pdata[timer_id];
    udrv_system_event_produce(&rui_sys_timer_event[timer_id]);
}

app_timer_mode_t get_nrf_timer_mode(TimerMode_E mode)
{
    switch(mode)
    {
        case HTMR_ONESHOT: return APP_TIMER_MODE_SINGLE_SHOT;
        case HTMR_PERIODIC: return APP_TIMER_MODE_REPEATED;
        default: return APP_TIMER_MODE_REPEATED;
    }
}

static app_timer_id_t get_nrf_timer_id(TimerID_E timer_id)
{
    switch(timer_id)
    {
        case TIMER_0: return uhal_timer_id0;
        case TIMER_1: return uhal_timer_id1;
        case TIMER_2: return uhal_timer_id2;
        case TIMER_3: return uhal_timer_id3;
        case TIMER_4: return uhal_timer_id4;
        default: return NULL;
    }
}

static app_timer_id_t get_sys_nrf_timer_id(SysTimerID_E timer_id)
{
    switch(timer_id)
    {
        case SYSTIMER_LORAWAN: return uhal_sys_timer_id0;
        case SYSTIMER_TRANSPARENT_MODE: return uhal_sys_timer_id1;
        case SYSTIMER_PROTOCOL_MODE: return uhal_sys_timer_id2;
        case SYSTIMER_LED: return uhal_sys_timer_id3;
        case SYSTIMER_LCT: return uhal_sys_timer_id4;
        default: return NULL;
    }
}

void uhal_timer_init (void) {
    ret_code_t err_code = app_timer_init();
    APP_ERROR_CHECK(err_code);

    return;
}

int32_t uhal_timer_create (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode) {
    app_timer_id_t nrf_timer_id = get_nrf_timer_id(timer_id);

    uhal_timer_pdata[timer_id].timer_id = timer_id;
    uhal_timer_pdata[timer_id].timer_func = tmr_handler;

    if (app_timer_create((app_timer_id_t *)&nrf_timer_id, get_nrf_timer_mode(mode), (app_timer_timeout_handler_t)uhal_timer_handler_dispatcher) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_timer_start (TimerID_E timer_id, uint32_t count, void *m_data) {
    app_timer_id_t nrf_timer_id = get_nrf_timer_id(timer_id);

    uhal_timer_pdata[timer_id].timer_id = timer_id;
    uhal_timer_pdata[timer_id].m_data = m_data;

    if (app_timer_start((app_timer_id_t)nrf_timer_id, APP_TIMER_TICKS(count), (void *)timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_timer_stop (TimerID_E timer_id) {
    app_timer_id_t nrf_timer_id = get_nrf_timer_id(timer_id);

    uhal_timer_pdata[timer_id].m_data = NULL;

    if (app_timer_stop((app_timer_id_t)nrf_timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_sys_timer_create (SysTimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode) {
    app_timer_id_t nrf_timer_id = get_sys_nrf_timer_id(timer_id);

    uhal_sys_timer_pdata[timer_id].sys_timer_id = timer_id;
    uhal_sys_timer_pdata[timer_id].timer_func = tmr_handler;

    if (app_timer_create((app_timer_id_t *)&nrf_timer_id, mode, (app_timer_timeout_handler_t)uhal_sys_timer_handler_dispatcher) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_sys_timer_start (SysTimerID_E timer_id, uint32_t count, void *m_data) {
    app_timer_id_t nrf_timer_id = get_sys_nrf_timer_id(timer_id);

    uhal_sys_timer_pdata[timer_id].sys_timer_id = timer_id;
    uhal_sys_timer_pdata[timer_id].m_data = m_data;

    if (app_timer_start((app_timer_id_t)nrf_timer_id, APP_TIMER_TICKS(count), (void *)timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_sys_timer_stop (SysTimerID_E timer_id) {
    app_timer_id_t nrf_timer_id = get_sys_nrf_timer_id(timer_id);

    uhal_sys_timer_pdata[timer_id].m_data = NULL;

    if (app_timer_stop((app_timer_id_t)nrf_timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

uint64_t uhal_get_microsecond(void)
{
    return uhal_rtc_get_us_timestamp((RtcID_E)SYS_RTC_COUNTER_PORT);
}
