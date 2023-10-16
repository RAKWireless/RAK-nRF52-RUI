#include "uhal_system.h"

#ifndef RUI_BOOTLOADER
static uint8_t is_seed = 0;
static uint8_t seed_data[SEED_LENGTH];
#endif

APP_TIMER_DEF(uhal_system_user_app_timer_id);

void uhal_sys_reboot(void)
{
    NVIC_SystemReset();
}

#ifndef RUI_BOOTLOADER
void uhal_sys_board_critical_section_begin(uint32_t *mask)
{
    udrv_thread_lock();
}

void uhal_sys_board_critical_section_end(uint32_t *mask)
{
    udrv_thread_unlock();
}

static int32_t uhal_sys_crypto_init(void)
{
    uint32_t err_code = NRF_ERROR_INTERNAL;
    err_code = nrf_crypto_init();
    
    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }

}

static int32_t uhal_sys_crypto_uninit(void)
{
    uint32_t err_code = NRF_ERROR_INTERNAL;
    err_code = nrf_crypto_uninit();
    
    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

static int32_t uhal_sys_crypto_rng_init(nrf_crypto_rng_context_t * p_context, nrf_crypto_rng_temp_buffer_t * p_temp_buffer)
{
    uint32_t err_code = NRF_ERROR_INTERNAL;
    err_code = nrf_crypto_rng_init(p_context, p_temp_buffer);
    
    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

static int32_t uhal_sys_crypto_rng_uninit(void)
{
    uint32_t err_code = NRF_ERROR_INTERNAL;
    err_code = nrf_crypto_rng_uninit();
    
    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

static int32_t uhal_sys_crypto_rng_vector_generate(uint8_t * const p_target, size_t size)
{
    uint32_t err_code = NRF_ERROR_INTERNAL;
    err_code = nrf_crypto_rng_vector_generate(p_target, size);

    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

static int32_t uhal_sys_crypto_rng_reseed(nrf_crypto_rng_temp_buffer_t * p_temp_buffer, uint8_t * p_input_data, size_t size)
{
    uint32_t err_code = NRF_ERROR_INTERNAL;
    err_code = nrf_crypto_rng_reseed(p_temp_buffer, p_input_data, size);

    switch (err_code) {
        case NRF_SUCCESS:
            return UDRV_RETURN_OK;
        default:
            return -UDRV_INTERNAL_ERR;
    }
}

void uhal_sys_randomseed(unsigned long seed) {
    //valye = 0x12345678;
    is_seed = 1;
    seed_data[0] = (uint8_t)((seed & 0XFF));
    seed_data[1] = (uint8_t)((seed >> 8) & 0xFF) ;
    seed_data[2] = (uint8_t)((seed >> 16) & 0xFF) ;
    seed_data[3] = (uint8_t)((seed >> 24) & 0XFF);
}

unsigned long uhal_sys_random (unsigned long maxvalue) {
    int32_t ret_val;
    uint8_t random_vector[RANDOM_LENGTH];
    unsigned long get_random;
    ret_val = uhal_sys_crypto_init();
    ret_val = uhal_sys_crypto_rng_init(NULL,NULL);

    if(is_seed)
    {
        uhal_sys_crypto_rng_reseed(NULL, seed_data, SEED_LENGTH);
    }

    ret_val = uhal_sys_crypto_rng_vector_generate(random_vector, RANDOM_LENGTH);

    get_random = ( (random_vector[0])
                   + (random_vector[1] << 8)
                   + (random_vector[2] << 16)
                   + (random_vector[3] << 24) );
    uhal_sys_crypto_rng_uninit();
    uhal_sys_crypto_uninit();
    is_seed = 0;

    get_random = get_random % maxvalue;
    return get_random;
}

int32_t uhal_sys_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode) {
    if (app_timer_create((app_timer_id_t *)&uhal_system_user_app_timer_id, get_nrf_timer_mode(mode), (app_timer_timeout_handler_t)tmr_handler) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_sys_user_app_timer_start (uint32_t count, void *m_data) {
    if (app_timer_start((app_timer_id_t)uhal_system_user_app_timer_id, APP_TIMER_TICKS(count), m_data) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}

int32_t uhal_sys_user_app_timer_stop (void) {
    if (app_timer_stop((app_timer_id_t)uhal_system_user_app_timer_id) == NRF_SUCCESS) {
        return UDRV_RETURN_OK;
    } else {
        return -UDRV_INTERNAL_ERR;
    }
}
#endif
