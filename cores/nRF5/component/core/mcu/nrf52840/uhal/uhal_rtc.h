#ifndef _UHAL_RTC_H_
#define _UHAL_RTC_H_

#include <stdint.h>
#include <stddef.h>
#include "udrv_rtc.h"
#include "udrv_system.h"
#include "nrf_drv_rtc.h"

#define UHAL_RTC_SLEEP_MODE_FREQ 10 /* Hz */

uint32_t uhal_rtc_tick2ms(uint32_t tick);
uint32_t uhal_rtc_ms2tick(uint32_t ms);
int32_t uhal_rtc_init (RtcID_E timer_id, rtc_handler handler, uint32_t hz);
int32_t uhal_rtc_set_alarm (RtcID_E timer_id, uint32_t count, void *m_data);
int32_t uhal_rtc_cancel_alarm (RtcID_E timer_id);
uint64_t uhal_rtc_get_counter (RtcID_E timer_id);
uint32_t uhal_rtc_get_counter_calculation_overflow(RtcID_E timer_id);
uint64_t uhal_rtc_get_timestamp (RtcID_E timer_id);
uint32_t uhal_rtc_get_elapsed_time (RtcID_E timer_id, uint32_t old_ts);
void uhal_rtc_suspend(void);
void uhal_rtc_resume(void);
uint32_t uhal_rtc_get_max_ticks(void);
void uhal_rtc_handler_handler(void *pdata);

#endif  // #ifndef _UHAL_RTC_H_
