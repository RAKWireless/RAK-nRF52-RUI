#ifndef _UHAL_PDM_H_
#define _UHAL_PDM_H_

#include <stdint.h>
#include <stddef.h>
#include "pin_define.h"
#include "udrv_serial.h"
#include "udrv_pdm.h"
#include "nrf_pdm.h"

void uhal_pdm_enable_frequency(void);
bool uhal_pdm_set_rate(long rate);
bool uhal_pdm_set_channel(int channels);
void uhal_pdm_psel_connect(uint32_t psel_clk,uint32_t psel_din);
void uhal_pdm_event_clear(udrv_pdm_event_t event);
void uhal_pdm_int_enable(void);
void uhal_pdm_set_nvic(void);
void uhal_pdm_enable(void);
void uhal_pdm_task_trigger(udrv_pdm_task_t task);
void uhal_pdm_disable(void);
void uhal_pdm_disable_nvic(void);
void uhal_pdm_enable_nvic(void);
void uhal_pdm_psel_disconnect(void);
void uhal_pdm_set_gain(int gain);
bool uhal_pdm_event_check(udrv_pdm_event_t event);
bool uhal_pdm_buffer_set(uint32_t * p_buffer, uint32_t num);
 
#endif  // #ifndef _UHAL_PDM_H_
