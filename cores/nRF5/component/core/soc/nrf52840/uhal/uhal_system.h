#ifndef _UHAL_SYSTEM_H_
#define _UHAL_SYSTEM_H_

#include <stdint.h>
#include <stddef.h>
#include "nrf52840.h"
#include "boards.h"
#include "nrf_log_default_backends.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_crypto.h"
#include "nrf_drv_rng.h"
#include "nrf_crypto_init.h"
#include "udrv_errno.h"
#include "udrv_system.h"
#include "udrv_timer.h"
#include "app_timer.h"
#include "app_scheduler.h"

#define EVENT_QUEUE_SIZE                     32
#define EVENT_DATA_SIZE                      sizeof(udrv_system_event_t)

void uhal_sys_event_init(void);

int32_t uhal_sys_event_produce(udrv_system_event_t *event);

void uhal_sys_event_consume(void);

void uhal_sys_reboot(void);

void uhal_sys_board_critical_section_begin(uint32_t *mask);

void uhal_sys_board_critical_section_end(uint32_t *mask);

int32_t uhal_sys_crypto_init(void);

int32_t uhal_sys_crypto_uninit (void);

int32_t uhal_sys_crypto_rng_init(nrf_crypto_rng_context_t * p_context, nrf_crypto_rng_temp_buffer_t * p_temp_buffer);

int32_t uhal_sys_crypto_rng_uninit(void);

int32_t uhal_sys_crypto_rng_vector_generate(uint8_t * const p_target, size_t size);

int32_t uhal_sys_crypto_rng_reseed(nrf_crypto_rng_temp_buffer_t * p_temp_buffer, uint8_t * p_input_data, size_t size);

int32_t uhal_sys_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode);

int32_t uhal_sys_user_app_timer_start (uint32_t count, void *m_data);

int32_t uhal_sys_user_app_timer_stop (void);
#endif  // #ifndef _UHAL_SYSTEM_H_
