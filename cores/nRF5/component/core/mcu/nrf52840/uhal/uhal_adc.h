#ifndef _UHAL_ADC_H_
#define _UHAL_ADC_H_

#include <stdint.h>
#include <stddef.h>
#include "udrv_adc.h"
#include "udrv_errno.h"
#include "nrf_drv_saadc.h"

int32_t uhal_adc_read (uint32_t pin, int16_t *value);
void uhal_adc_suspend (void);
void uhal_adc_resume (void);
void uhal_adc_set_resolution (UDRV_ADC_RESOLUTION resolution);
UDRV_ADC_RESOLUTION uhal_adc_get_resolution (void);
void uhal_adc_set_mode (UDRV_ADC_MODE mode);
UDRV_ADC_MODE uhal_adc_get_mode (void);
void uhal_adc_oversampling(uint32_t oversampling);
#endif  // #ifndef _UHAL_ADC_H_
