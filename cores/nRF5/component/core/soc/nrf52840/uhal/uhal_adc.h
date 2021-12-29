#ifndef _UHAL_ADC_H_
#define _UHAL_ADC_H_

#include <stdint.h>
#include <stddef.h>
#include "udrv_adc.h"
#include "udrv_errno.h"
#include "nrf_drv_saadc.h"

void uhal_adc_init ();
void uhal_adc_deinit ();
void uhal_adc_enable_channel (UDRV_ADC_CHANNEL chann, uint32_t pin, UDRV_ADC_REF ref);
void uhal_adc_disable_channel (UDRV_ADC_CHANNEL chann);
int32_t uhal_adc_read (UDRV_ADC_CHANNEL chann, uint16_t *value);
void uhal_adc_suspend (void);
void uhal_adc_resume (void);
void uhal_adc_set_resolution (UDRV_ADC_RESOLUTION resolution);

#endif  // #ifndef _UHAL_ADC_H_
