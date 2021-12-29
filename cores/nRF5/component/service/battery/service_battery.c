#include <stdint.h>
#include "board_basic.h"
#include "udrv_errno.h"
#include "service_battery.h"
#include "udrv_adc.h"
#include "variant.h"

extern batt_level batt_table[];

void service_battery_get_batt_level(float *bat_lvl) {
    uint16_t adc_value;

    udrv_adc_enable_channel(UDRV_ADC_CHANNEL_2, WB_A0, UDRV_ADC_REFERENCE_INTERNAL);
    udrv_adc_read(UDRV_ADC_CHANNEL_2, &adc_value);

    for (int i = 0 ; i < get_batt_table_size() ; i++) {
        *bat_lvl = batt_table[i].batt_vol;
        if (adc_value < batt_table[i].adc_val) {
            break;
	}
    }

    udrv_adc_disable_channel(UDRV_ADC_CHANNEL_2);

    return;
}
