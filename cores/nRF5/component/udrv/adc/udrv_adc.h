/**
 * @file        udrv_adc.h
 * @brief       Provide a hardware independent ADC driver layer for API layer to use.
 * @author      Rakwireless
 * @version     0.0.0
 * @date        2021.3
 */

#ifndef _UDRV_ADC_H_
#define _UDRV_ADC_H_

#ifdef __cplusplus
extern "C" {
#endif 

#include <stdint.h>
#include <stddef.h>

#define UDRV_ADC_SAMPLE_CNT 16

typedef enum{
    UDRV_ADC_RESOLUTION_8BIT  = (0UL),  //< 8 bit resolution.
    UDRV_ADC_RESOLUTION_10BIT = (1UL),  //< 10 bit resolution.
    UDRV_ADC_RESOLUTION_12BIT = (2UL),  //< 12 bit resolution.
    UDRV_ADC_RESOLUTION_14BIT = (3UL)   //< 14 bit resolution.
}UDRV_ADC_RESOLUTION ;

typedef enum{
    UDRV_ADC_CHANNEL_0 = 0,
    UDRV_ADC_CHANNEL_1 = 1,
    UDRV_ADC_CHANNEL_2 = 2,
    UDRV_ADC_CHANNEL_3 = 3,
    UDRV_ADC_CHANNEL_4 = 4,
    UDRV_ADC_CHANNEL_5 = 5,
    UDRV_ADC_CHANNEL_6 = 6,
    UDRV_ADC_CHANNEL_7 = 7,
    UDRV_ADC_CHANNEL_MAX = 8,
}UDRV_ADC_CHANNEL;

typedef enum{
    UDRV_ADC_PIN_0 = 0,
    UDRV_ADC_PIN_1 = 1,
    UDRV_ADC_PIN_2 = 2,
    UDRV_ADC_PIN_3 = 3,
    UDRV_ADC_PIN_4 = 4,
    UDRV_ADC_PIN_5 = 5,
    UDRV_ADC_PIN_6 = 6,
    UDRV_ADC_PIN_7 = 7,
    UDRV_ADC_PIN_MAX = 8,
}UDRV_ADC_PIN;

typedef enum{
    UDRV_ADC_REFERENCE_INTERNAL,
    UDRV_ADC_REFERENCE_VDD_DIVIDED_BY_4,
} UDRV_ADC_REF;

/**
 *  Set resolutions.
 * @param  resolution              The resolution to be set.
 * 0 - 8 bit resolution.
 * 1 - 10 bit resolution.
 * 2 - 12 bit resolution.
 * 3 - 14 bit resolution.
 *
 */

void udrv_adc_set_resolution (UDRV_ADC_RESOLUTION resolution);

/**
 * Initialize the ADC channel.
 * @param  chan                     The ADC channel to be initialized.
 * @param  pin                      The analog input pin.
 * @param  ref                      The reference voltage.
 *
 */

void udrv_adc_enable_channel (UDRV_ADC_CHANNEL chan, UDRV_ADC_PIN pin, UDRV_ADC_REF ref);

/**
 * Deinitialize the ADC channel.
 * @param  chann                    The ADC channel to be deinitialized.
 *
 */

void udrv_adc_disable_channel (UDRV_ADC_CHANNEL chann);

/**
 * Read out the ADC value.
 * @param  chann                    The ADC channel to be read.
 * @param  value                    The read out value
 */

int32_t udrv_adc_read (UDRV_ADC_CHANNEL chann, uint16_t *value);

/**
 * Disable and save all the active ADC channel for power saving
 *
 */
void udrv_adc_suspend(void);

/**
 * Restore all the active ADC channel after power saving
 *
 */
void udrv_adc_resume(void);

#ifdef __cplusplus
}
#endif

#endif //_UDRV_ADC_H_
