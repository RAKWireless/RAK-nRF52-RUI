#include "uhal_adc.h"
#include "variant.h"
static nrf_saadc_resolution_t     adc_resolution = NRFX_SAADC_CONFIG_RESOLUTION;
static nrf_saadc_gain_t           adc_gain       = NRF_SAADC_GAIN1_6;
static nrf_saadc_reference_t      adc_reference  = NRF_SAADC_REFERENCE_INTERNAL;

static UDRV_ADC_RESOLUTION        uhal_adc_resolution = UDRV_ADC_RESOLUTION_10BIT;
static UDRV_ADC_MODE              uhal_adc_mode       = UDRV_ADC_MODE_DEFAULT;
static bool saadcBurst = SAADC_CH_CONFIG_BURST_Disabled;



static nrf_saadc_input_t get_nrf_adc_pin(uint32_t pin) {
    switch (pin) {
        case P0_02: return NRF_SAADC_INPUT_AIN0;
        case P0_03: return NRF_SAADC_INPUT_AIN1;
        case P0_04: return NRF_SAADC_INPUT_AIN2;
        case P0_05: return NRF_SAADC_INPUT_AIN3;
        case P0_28: return NRF_SAADC_INPUT_AIN4;
        case P0_29: return NRF_SAADC_INPUT_AIN5;
        case P0_30: return NRF_SAADC_INPUT_AIN6;
        case P0_31: return NRF_SAADC_INPUT_AIN7;
        case 255:   return NRF_SAADC_INPUT_VDD;
        default: return NRF_SAADC_INPUT_DISABLED;
    }
}

static void saadc_callback(nrf_drv_saadc_evt_t const *p_event){
}

void uhal_adc_set_resolution (UDRV_ADC_RESOLUTION resolution) {
    switch (resolution) {
        case UDRV_ADC_RESOLUTION_6BIT:
        case UDRV_ADC_RESOLUTION_8BIT:
        {
            uhal_adc_resolution = UDRV_ADC_RESOLUTION_8BIT;
            adc_resolution = NRF_SAADC_RESOLUTION_8BIT;
            break;
        }
        case UDRV_ADC_RESOLUTION_10BIT:
        {
            uhal_adc_resolution = UDRV_ADC_RESOLUTION_10BIT;
            adc_resolution = NRF_SAADC_RESOLUTION_10BIT;
            break;
        }
        case UDRV_ADC_RESOLUTION_12BIT:
        {
            uhal_adc_resolution = UDRV_ADC_RESOLUTION_12BIT;
            adc_resolution = NRF_SAADC_RESOLUTION_12BIT;
            break;
        }
        case UDRV_ADC_RESOLUTION_14BIT:
        {
            uhal_adc_resolution = UDRV_ADC_RESOLUTION_14BIT;
            adc_resolution = NRF_SAADC_RESOLUTION_14BIT;
            break;
        }
        default:
        {
            uhal_adc_resolution = UDRV_ADC_RESOLUTION_10BIT;
            adc_resolution = NRF_SAADC_RESOLUTION_10BIT;
            break;
        }
    }
}

UDRV_ADC_RESOLUTION uhal_adc_get_resolution (void) {
    return uhal_adc_resolution;
}

void uhal_adc_set_mode (UDRV_ADC_MODE mode) {
    uhal_adc_mode = mode;
    switch (mode) {
        case UDRV_ADC_MODE_3_3:
        {
            adc_gain = SAADC_CH_CONFIG_GAIN_Gain1_4;
            adc_reference = SAADC_CH_CONFIG_REFSEL_VDD1_4;
            break;
        }
        case UDRV_ADC_MODE_3_0:
        {
            adc_gain = NRF_SAADC_GAIN1_5;
            adc_reference = NRF_SAADC_REFERENCE_INTERNAL;
            break;
        }
        case UDRV_ADC_MODE_2_4:
        {
            adc_gain = NRF_SAADC_GAIN1_4;
            adc_reference = NRF_SAADC_REFERENCE_INTERNAL;
            break;
        }
        case UDRV_ADC_MODE_1_8:
        {
            adc_gain = NRF_SAADC_GAIN1_3;
            adc_reference = NRF_SAADC_REFERENCE_INTERNAL;
            break;
        }
        case UDRV_ADC_MODE_1_2:
        {
            adc_gain = NRF_SAADC_GAIN1_2;
            adc_reference = NRF_SAADC_REFERENCE_INTERNAL;
            break;
        }
        case UDRV_ADC_MODE_DEFAULT:
        default:
        {
            adc_gain = NRF_SAADC_GAIN1_6;
            adc_reference = NRF_SAADC_REFERENCE_INTERNAL;
            break;
        }
    }
}

UDRV_ADC_MODE uhal_adc_get_mode (void) {
    return uhal_adc_mode;
}
void uhal_adc_oversampling(uint32_t oversampling)
{
	saadcBurst = SAADC_CH_CONFIG_BURST_Enabled;

	switch (oversampling) {
		case 0:
		case 1:
			saadcBurst = SAADC_CH_CONFIG_BURST_Disabled;
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Bypass;
			return;
			break;
		case 2:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over2x;
			break;
		case 4:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over4x;
			break;
		case 8:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over8x;
			break;
		case 16:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over16x;
			break;
		case 32:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over32x;
			break;
		case 64:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over64x;
			break;
		case 128:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over128x;
			break;
		case 256:
			NRF_SAADC->OVERSAMPLE = SAADC_OVERSAMPLE_OVERSAMPLE_Over256x;
			break;
	}
}
int32_t uhal_adc_read (uint32_t pin, int16_t *value) {
    nrfx_saadc_config_t uhal_adc_config = NRFX_SAADC_DEFAULT_CONFIG;

    uhal_adc_config.resolution = adc_resolution;

    nrf_drv_saadc_init(&uhal_adc_config, saadc_callback);

    nrf_saadc_channel_config_t mmysaadc = NRF_DRV_SAADC_DEFAULT_CHANNEL_CONFIG_SE(get_nrf_adc_pin(pin));

    mmysaadc.gain = adc_gain;
    mmysaadc.reference = adc_reference;

    nrfx_err_t err_code = nrf_drv_saadc_channel_init(0, &mmysaadc);
    APP_ERROR_CHECK(err_code);

    if (nrf_drv_saadc_sample_convert(0, (nrf_saadc_value_t *)value) != NRFX_SUCCESS) {
        nrfx_saadc_channel_uninit(0);
        nrf_drv_saadc_uninit();
        return -UDRV_BUSY;
    }

    if (*value < 0) {
        *value = 0;
    }

    nrfx_saadc_channel_uninit(0);
    nrf_drv_saadc_uninit();
    return UDRV_RETURN_OK;
}

void uhal_adc_suspend (void) {
}

void uhal_adc_resume (void) {
}

