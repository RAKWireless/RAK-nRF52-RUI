#include "board_basic.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "service_battery.h"
#include "nrfx_nfct.h"
#if (NRF_CRYPTO_ENABLED == 1) & (NRF_CRYPTO_BACKEND_CC310_ENABLED == 1)
#include "nrf_crypto_init.h"

extern ret_code_t cc310_backend_init(void);
extern ret_code_t cc310_backend_uninit(void);

CRYPTO_BACKEND_REGISTER(nrf_crypto_backend_info_t const cc310_backend) =
{
    .init_fn    = cc310_backend_init,
    .uninit_fn  = cc310_backend_uninit,
};
#endif

extern void nfc_platform_event_handler(nrfx_nfct_evt_t const * p_event);

typedef void (*dummy_fp1) (nrfx_nfct_evt_t const *);

dummy_fp1 fp1 = nfc_platform_event_handler;


batt_level batt_table[] = {
	{ SERVICE_BATT_2V0, 351},/* This adc value is the upper bound of 2.0V. The actual measured value is 342.5 */
	{ SERVICE_BATT_2V1, 366},/* This adc value is the upper bound of 2.1V. The actual measured value is 358.5 */
	{ SERVICE_BATT_2V2, 382},/* This adc value is the upper bound of 2.2V. The actual measured value is 374 */
	{ SERVICE_BATT_2V3, 398},/* This adc value is the upper bound of 2.3V. The actual measured value is 390 */
	{ SERVICE_BATT_2V4, 413},/* This adc value is the upper bound of 2.4V. The actual measured value is 405.5 */
	{ SERVICE_BATT_2V5, 429},/* This adc value is the upper bound of 2.5V. The actual measured value is 420.5 */
	{ SERVICE_BATT_2V6, 445},/* This adc value is the upper bound of 2.6V. The actual measured value is 437 */
	{ SERVICE_BATT_2V7, 461},/* This adc value is the upper bound of 2.7V. The actual measured value is 452.5 */
	{ SERVICE_BATT_2V8, 476},/* This adc value is the upper bound of 2.8V. The actual measured value is 468.5 */
	{ SERVICE_BATT_2V9, 494},/* This adc value is the upper bound of 2.9V. The actual measured value is 484 */
	{ SERVICE_BATT_3V0, 512},/* This adc value is the upper bound of 3.0V. The actual measured value is 504.5 */
	{ SERVICE_BATT_3V1, 526},/* This adc value is the upper bound of 3.1V. The actual measured value is 518.5 */
	{ SERVICE_BATT_3V2, 541},/* This adc value is the upper bound of 3.2V. The actual measured value is 533.5 */
	{ SERVICE_BATT_3V3, 557},/* This adc value is the upper bound of 3.3V. The actual measured value is 548.5 */
	{ SERVICE_BATT_3V4, 574},/* This adc value is the upper bound of 3.4V. The actual measured value is 565.5 */
	{ SERVICE_BATT_3V5, 590},/* This adc value is the upper bound of 3.5V. The actual measured value is 581.5 */
	{ SERVICE_BATT_3V6, 607},/* This adc value is the upper bound of 3.6V. The actual measured value is 598.5 */
	{ SERVICE_BATT_3V7, 623},/* This adc value is the upper bound of 3.7V. The actual measured value is 615 */
	{ SERVICE_BATT_3V8, 640},/* This adc value is the upper bound of 3.8V. The actual measured value is 631 */
	{ SERVICE_BATT_3V9, 657},/* This adc value is the upper bound of 3.9V. The actual measured value is 648.5 */
	{ SERVICE_BATT_4V0, 674},/* This adc value is the upper bound of 4.0V. The actual measured value is 666 */
	{ SERVICE_BATT_4V1, 691},/* This adc value is the upper bound of 4.1V. The actual measured value is 682 */
	{ SERVICE_BATT_4V2, 707},/* This adc value is the upper bound of 4.2V. The actual measured value is 699 */
	{ SERVICE_BATT_4V3, 724},/* This adc value is the upper bound of 4.3V. The actual measured value is 715.5 */
	{ SERVICE_BATT_4V4, 741},/* This adc value is the upper bound of 4.4V. The actual measured value is 732.5 */
	{ SERVICE_BATT_4V5, 758},/* This adc value is the upper bound of 4.5V. The actual measured value is 749.5 */
	{ SERVICE_BATT_4V6, 774},/* This adc value is the upper bound of 4.6V. The actual measured value is 765.5 */
	{ SERVICE_BATT_4V7, 791},/* This adc value is the upper bound of 4.7V. The actual measured value is 782.5 */
	{ SERVICE_BATT_4V8, 807},/* This adc value is the upper bound of 4.8V. The actual measured value is 798.5 */
	{ SERVICE_BATT_4V9, 824},/* This adc value is the upper bound of 4.9V. The actual measured value is 815.5 */
	{ SERVICE_BATT_5V0, 840},/* This adc value is the upper bound of 5.0V. The actual measured value is 832 */
	{ SERVICE_BATT_5V1, 857},/* This adc value is the upper bound of 5.1V. The actual measured value is 848.5 */
	{ SERVICE_BATT_5V2, 873},/* This adc value is the upper bound of 5.2V. The actual measured value is 865 */
	{ SERVICE_BATT_5V3, 890},/* This adc value is the upper bound of 5.3V. The actual measured value is 881.5 */
	{ SERVICE_BATT_5V4, 907},/* This adc value is the upper bound of 5.4V. The actual measured value is 898.5 */
	{ SERVICE_BATT_5V5, 924},/* This adc value is the upper bound of 5.5V. The actual measured value is 915.5 */
	{ SERVICE_BATT_5V6, 940},/* This adc value is the upper bound of 5.6V. The actual measured value is 932 */
	{ SERVICE_BATT_5V7, 957},/* This adc value is the upper bound of 5.7V. The actual measured value is 948.5 */
	{ SERVICE_BATT_5V8, 972},/* This adc value is the upper bound of 5.8V. The actual measured value is 964.5 */
	{ SERVICE_BATT_5V9, 984},/* This adc value is the upper bound of 5.9V. The actual measured value is 979 */
	{ SERVICE_BATT_6V0, 993},/* This adc value is the upper bound of 6.0V. The actual measured value is 989.5 */
};

uint32_t get_batt_table_size(void) {
    return (sizeof(batt_table)/sizeof(batt_level));
}

