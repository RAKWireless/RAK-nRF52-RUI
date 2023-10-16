#include "uhal_rtc.h"
#ifdef SUPPORT_LORA
#include "service_lora.h"
#endif

#if RTC0_ENABLED
nrf_drv_rtc_t uhal_rtc0 = NRF_DRV_RTC_INSTANCE(0);
nrf_drv_rtc_config_t uhal_rtc_config0 = {                                           \
    .prescaler          = RTC_FREQ_TO_PRESCALER(SYS_RTC_FREQ), \
    .interrupt_priority = NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY,                     \
    .reliable           = NRFX_RTC_DEFAULT_CONFIG_RELIABLE,                         \
    .tick_latency       = NRFX_RTC_US_TO_TICKS(NRFX_RTC_MAXIMUM_LATENCY_US,         \
                                               NRFX_RTC_DEFAULT_CONFIG_FREQUENCY),  \
};
#endif
#if RTC1_ENABLED
nrf_drv_rtc_t uhal_rtc1 = NRF_DRV_RTC_INSTANCE(1);
nrf_drv_rtc_config_t uhal_rtc_config1 = {                                           \
    .prescaler          = RTC_FREQ_TO_PRESCALER(SYS_RTC_FREQ), \
    .interrupt_priority = NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY,                     \
    .reliable           = NRFX_RTC_DEFAULT_CONFIG_RELIABLE,                         \
    .tick_latency       = NRFX_RTC_US_TO_TICKS(NRFX_RTC_MAXIMUM_LATENCY_US,         \
                                               NRFX_RTC_DEFAULT_CONFIG_FREQUENCY),  \
};
#endif
#if RTC2_ENABLED
nrf_drv_rtc_t uhal_rtc2 = NRF_DRV_RTC_INSTANCE(2);
nrf_drv_rtc_config_t uhal_rtc_config2 = {                                           \
    .prescaler          = RTC_FREQ_TO_PRESCALER(SYS_RTC_FREQ), \
    .interrupt_priority = NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY,                     \
    .reliable           = NRFX_RTC_DEFAULT_CONFIG_RELIABLE,                         \
    .tick_latency       = NRFX_RTC_US_TO_TICKS(NRFX_RTC_MAXIMUM_LATENCY_US,         \
                                               NRFX_RTC_DEFAULT_CONFIG_FREQUENCY),  \
};
#endif

typedef struct uhal_rtc_status {
    bool enabled;
    uint32_t hz;
} uhal_rtc_status_t;

static uhal_rtc_status_t rtc_status[UDRV_RTC_MAX];

extern bool udrv_powersave_in_sleep;

static uint64_t time_base = 0;
static uint64_t counter_base = 0;
static uint32_t max_ticks;
static rtc_handler compare0_handler;
static uint32_t alarm_cnt = 0;
static bool change_freq;
static udrv_system_event_t rui_rtc_event = {.request = UDRV_SYS_EVT_OP_RTC, .p_context = NULL};

uint32_t uhal_rtc_tick2ms(uint32_t tick) {
    return (uint32_t)((float)tick*(float)1000/(float)SYS_RTC_FREQ);
}

uint32_t uhal_rtc_tick2us(uint32_t tick) {
    return (uint32_t)((float)tick*(float)1000000/(float)SYS_RTC_FREQ);
}

uint32_t uhal_rtc_ms2tick(uint32_t ms) {
    return (uint32_t)((float)ms*(float)SYS_RTC_FREQ/(float)1000);
}

static uint32_t uhal_rtc_sleep_mode_tick2ms(uint32_t tick) {
    return (uint32_t)((float)tick*(float)1000/(float)UHAL_RTC_SLEEP_MODE_FREQ);
}

static uint32_t uhal_rtc_sleep_mode_tick2tick(uint32_t tick) {
    return (uint32_t)((float)tick*(float)SYS_RTC_FREQ/(float)UHAL_RTC_SLEEP_MODE_FREQ);
}

uint32_t uhal_rtc_sleep_mode_ms2tick(uint32_t ms) {
    return (uint32_t)((float)ms*(float)UHAL_RTC_SLEEP_MODE_FREQ/(float)1000);
}

void uhal_rtc_handler_handler(void *pdata)
{
    nrf_drv_rtc_int_type_t int_type = NRF_DRV_RTC_INT_COMPARE0;
    if (compare0_handler) {
        compare0_handler((nrf_drv_rtc_int_type_t *)&int_type);
    }
}

static void uhal_rtc_handler(nrf_drv_rtc_int_type_t int_type)
{
    if (int_type == NRF_DRV_RTC_INT_OVERFLOW)
    {
        if (udrv_powersave_in_sleep) {
            #ifdef SUPPORT_LORA
            if(service_lora_get_class() == SERVICE_LORA_CLASS_B )
            {
                time_base += uhal_rtc_tick2ms(max_ticks);
            }
            else
            {
                time_base += uhal_rtc_sleep_mode_tick2ms(max_ticks);
            }
            #else
            time_base += uhal_rtc_sleep_mode_tick2ms(max_ticks);
            #endif
            counter_base += max_ticks;
        } else {
            time_base += uhal_rtc_tick2ms(max_ticks);
            counter_base += max_ticks;
        }
    }
    if (int_type == NRF_DRV_RTC_INT_COMPARE0)
    {
        if (compare0_handler) {
            udrv_powersave_in_sleep = false;
            udrv_system_event_produce(&rui_rtc_event);
        }
        alarm_cnt = 0;
    }
}

static nrf_drv_rtc_t *get_nrf_rtc_inst(RtcID_E timer_id)
{
    switch(timer_id)
    {
#if RTC0_ENABLED
        case UDRV_RTC_0: return &uhal_rtc0;
#endif
#if RTC1_ENABLED
        case UDRV_RTC_1: return &uhal_rtc1;
#endif
#if RTC2_ENABLED
        case UDRV_RTC_2: return &uhal_rtc2;
#endif
        default: return NULL;
    }
}

static nrf_drv_rtc_config_t *get_nrf_rtc_config(RtcID_E timer_id)
{
    switch(timer_id)
    {
#if RTC0_ENABLED
        case UDRV_RTC_0: return &uhal_rtc_config0;
#endif
#if RTC1_ENABLED
        case UDRV_RTC_1: return &uhal_rtc_config1;
#endif
#if RTC2_ENABLED
        case UDRV_RTC_2: return &uhal_rtc_config2;
#endif
        default: return NULL;
    }
}

static int32_t rtc_init (RtcID_E timer_id, rtc_handler handler, uint32_t hz) {
    ret_code_t err_code;
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    nrf_drv_rtc_config_t *nrf_rtc_config_p = get_nrf_rtc_config(timer_id);

    nrf_rtc_config_p->prescaler = RTC_FREQ_TO_PRESCALER(hz);

    err_code = nrf_drv_rtc_init(nrf_rtc_inst_p, nrf_rtc_config_p, (nrfx_rtc_handler_t)uhal_rtc_handler);
    APP_ERROR_CHECK(err_code);

    // Enable tick event - no interrupt, we need tick just to drive ADC
    nrf_drv_rtc_tick_enable(nrf_rtc_inst_p, false);
    nrf_drv_rtc_overflow_enable(nrf_rtc_inst_p, true);

    max_ticks = nrf_drv_rtc_max_ticks_get(nrf_rtc_inst_p);
    compare0_handler = handler;

    // Sometimes prescaler setting is not correctly configured. Double check it.
    while (rtc_prescaler_get(nrf_rtc_inst_p->p_reg) != nrf_rtc_config_p->prescaler) {
        nrf_rtc_prescaler_set(nrf_rtc_inst_p->p_reg, nrf_rtc_config_p->prescaler);
    }

    // Power on RTC instance
    nrf_drv_rtc_enable(nrf_rtc_inst_p);

    return err_code;
}

int32_t uhal_rtc_init (RtcID_E timer_id, rtc_handler handler, uint32_t hz) {
    ret_code_t err_code;

    err_code = rtc_init(timer_id, handler, hz);

    rtc_status[timer_id].enabled = true;
    rtc_status[timer_id].hz = hz;

    return err_code;
}


int32_t uhal_rtc_set_alarm (RtcID_E timer_id, uint32_t count, void *m_data) {
    uint32_t err_code;
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    uint32_t compare_val = 0;
    uint32_t timeout_ticks = count + *(uint32_t*)m_data;

    if(timeout_ticks < max_ticks)
    {
        compare_val = timeout_ticks;
    }
    else
    {
        compare_val =  count - (max_ticks -  *(uint32_t*)m_data);
    }
    err_code = nrf_drv_rtc_cc_set(nrf_rtc_inst_p, 0, compare_val, true);
    APP_ERROR_CHECK(err_code);

    alarm_cnt = 1;

    return 0;
}

int32_t uhal_rtc_cancel_alarm (RtcID_E timer_id) {
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);

    alarm_cnt = 0;

    return nrf_drv_rtc_cc_disable(nrf_rtc_inst_p, 0);
}

uint64_t uhal_rtc_get_counter (RtcID_E timer_id) {
    uint32_t now_counter = 0;
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    now_counter = nrf_drv_rtc_counter_get(nrf_rtc_inst_p);
    return  now_counter;
}

uint32_t uhal_rtc_get_counter_calculation_overflow(RtcID_E timer_id) {

    uint32_t now_counter = 0;
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    now_counter = nrf_drv_rtc_counter_get(nrf_rtc_inst_p);
    
    return  now_counter + counter_base;
}

uint64_t uhal_rtc_get_timestamp(RtcID_E timer_id)
{
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    uint32_t ticks = nrf_drv_rtc_counter_get(nrf_rtc_inst_p);

    return (uint64_t)(time_base + uhal_rtc_tick2ms(ticks));
}

uint64_t uhal_rtc_get_us_timestamp(RtcID_E timer_id)
{
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    uint32_t ticks = nrf_drv_rtc_counter_get(nrf_rtc_inst_p);

    return (uint64_t)(time_base + uhal_rtc_tick2us(ticks));
}

uint32_t uhal_rtc_get_elapsed_time (RtcID_E timer_id, uint32_t old_ts) {
    nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(timer_id);
    uint32_t ts = uhal_rtc_get_counter(timer_id);
    if(ts >= old_ts)
    {
        return (uint32_t)(ts - old_ts);
    }
    else
    {
        return  max_ticks - old_ts + ts;
    }
}

uint32_t uhal_rtc_get_max_ticks()
{
    return  max_ticks;
}

void uhal_rtc_suspend(void){
    
    #ifdef SUPPORT_LORA
    if(service_lora_get_class() == SERVICE_LORA_CLASS_B ){
       return ;
    }
    #endif

    for (int i = UDRV_RTC_0 ; i < UDRV_RTC_MAX ; i++) {
        if (rtc_status[i].enabled == true) {
            nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(i);

            if (i == SYS_RTC_COUNTER_PORT) {
                if (alarm_cnt == 0) {
                    nrf_drv_rtc_disable(nrf_rtc_inst_p);
                    time_base += uhal_rtc_tick2ms(nrf_drv_rtc_counter_get(nrf_rtc_inst_p));
                    counter_base += nrf_drv_rtc_counter_get(nrf_rtc_inst_p);
                    while (nrf_drv_rtc_counter_get(nrf_rtc_inst_p) != 0) {
                        nrf_drv_rtc_counter_clear(nrf_rtc_inst_p);
                    }
                    nrf_drv_rtc_uninit(nrf_rtc_inst_p);
                    rtc_init(SYS_RTC_COUNTER_PORT, compare0_handler, UHAL_RTC_SLEEP_MODE_FREQ);
                    change_freq = true;
                } else {
                    change_freq = false;
                }
	    } else {
                nrf_drv_rtc_disable(nrf_rtc_inst_p);
	    }
	}
    }
}

void uhal_rtc_resume(void){

    #ifdef SUPPORT_LORA
    if(service_lora_get_class() == SERVICE_LORA_CLASS_B ){
       return ;
    }
    #endif

    for (int i = UDRV_RTC_0 ; i < UDRV_RTC_MAX ; i++) {
        if (rtc_status[i].enabled == true) {
            nrf_drv_rtc_t *nrf_rtc_inst_p = get_nrf_rtc_inst(i);

            if (i == SYS_RTC_COUNTER_PORT) {
                if (change_freq) {
                    nrf_drv_rtc_disable(nrf_rtc_inst_p);
                    time_base += uhal_rtc_sleep_mode_tick2ms(nrf_drv_rtc_counter_get(nrf_rtc_inst_p));
                    counter_base += uhal_rtc_sleep_mode_tick2tick(nrf_drv_rtc_counter_get(nrf_rtc_inst_p));
                    while (nrf_drv_rtc_counter_get(nrf_rtc_inst_p) != 0) {
                        nrf_drv_rtc_counter_clear(nrf_rtc_inst_p);
                    }
                    nrf_drv_rtc_uninit(nrf_rtc_inst_p);
                    rtc_init(SYS_RTC_COUNTER_PORT, compare0_handler, SYS_RTC_FREQ);
                }
	    } else {
                nrf_drv_rtc_enable(nrf_rtc_inst_p);
            }
	}
    }
}
