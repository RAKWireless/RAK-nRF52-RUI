#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "uhal_trng.h"


void uhal_trng_init(void)
{
    uint32_t ret_val;

    ret_val = nrf_crypto_init();
    //APP_ERROR_CHECK(ret_val);
    if(ret_val != 0)
        return ret_val;
}

void uhal_trng_get_values(uint8_t *output, uint32_t length)
{
    uint32_t ret_val;

    ret_val = nrf_crypto_rng_vector_generate(output, length);
    //APP_ERROR_CHECK(ret_val);
    if(ret_val != 0)
        return ret_val;
}
