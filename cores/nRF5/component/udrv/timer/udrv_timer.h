#ifndef _UDRV_TIMER_H_
#define _UDRV_TIMER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef enum {
        TIMER_0,
        TIMER_1,
        TIMER_2,
        TIMER_3,
        TIMER_4,
        TIMER_ID_MIN = TIMER_0,
        TIMER_ID_MAX = TIMER_4,
} TimerID_E;

typedef enum {
        SYSTIMER_LORAWAN,
        SYSTIMER_TRANSPARENT_MODE,
        SYSTIMER_PROTOCOL_MODE,
        SYSTIMER_ID_MIN = SYSTIMER_LORAWAN,
        SYSTIMER_ID_MAX = SYSTIMER_PROTOCOL_MODE,
} SysTimerID_E;

typedef enum hwtmr_op_mode {
    HTMR_ONESHOT = 0,
    HTMR_PERIODIC = 1,
} TimerMode_E;

typedef void (*timer_handler) (void *m_data);

//The structure of timer function 
struct udrv_timer_api {
    void (*TIMER_INIT) (void);
    int32_t (*TIMER_CREATE) (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
    int32_t (*TIMER_START) (TimerID_E timer_id, uint32_t count, void *m_data);
    int32_t (*TIMER_STOP) (TimerID_E timer_id);
};

void udrv_timer_init (void);
int32_t udrv_timer_create (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_timer_start (TimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_timer_stop (TimerID_E timer_id);

int32_t udrv_system_timer_create (SysTimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_system_timer_start (SysTimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_system_timer_stop (SysTimerID_E timer_id);

#ifdef __cplusplus
}
#endif

#endif  // #ifndef _UDRV_TIMER_H_
