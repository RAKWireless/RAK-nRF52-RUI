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

void uhal_sys_reboot(void);

void uhal_sys_board_critical_section_begin(uint32_t *mask);

void uhal_sys_board_critical_section_end(uint32_t *mask);

void uhal_sys_randomseed(unsigned long seed);

unsigned long uhal_sys_random (unsigned long maxvalue);

int32_t uhal_sys_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode);

int32_t uhal_sys_user_app_timer_start (uint32_t count, void *m_data);

int32_t uhal_sys_user_app_timer_stop (void);
#endif  // #ifndef _UHAL_SYSTEM_H_
