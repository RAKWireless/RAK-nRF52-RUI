#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "nrf_drv_twi.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
//#include "app_util_basic.h"
#include "hal_i2c.h"
#include "board_basic.h"

#define TWI_BUFFER_SIZE     	  256
#define TWI_TIMEOUT			10000

#if defined(LORA_4600_TEST)
/* TWI instance ID. */
#define TWI_INSTANCE_ID     1
#else
#define TWI_INSTANCE_ID     0

#endif

/* TWI instance. */
static const nrf_drv_twi_t m_twi_instance = NRF_DRV_TWI_INSTANCE(TWI_INSTANCE_ID);

volatile static bool twi_xfer_done = false;

static uint8_t twi_tx_buffer[TWI_BUFFER_SIZE];

static void nrf_drv_twi_event_handler(nrf_drv_twi_evt_t const * p_event, void * p_context)
{
    switch(p_event->type)
    {
        case NRF_DRV_TWI_EVT_DONE:
            //NRF_LOG_INFO("I2C transfer done!");
            twi_xfer_done = true;
            break;
        default:
            break;
    }
}

uint32_t rak_i2c_init(const nrf_drv_twi_config_t *twi_config)
{
    uint32_t err_code;

    err_code = nrf_drv_twi_init(&m_twi_instance, twi_config, nrf_drv_twi_event_handler, NULL);
    if(err_code != NRF_SUCCESS)
    {
        return err_code;
    }

    nrf_drv_twi_enable(&m_twi_instance);

    return NRF_SUCCESS;
}

uint32_t rak_i2c_write(uint8_t twi_addr, uint8_t reg, uint8_t *data, uint16_t len)
{
    uint32_t err_code;
    uint32_t timeout = TWI_TIMEOUT;
    memset(twi_tx_buffer,0,256);
    twi_tx_buffer[0] = reg;
    memcpy(&twi_tx_buffer[1], data, len);
    twi_xfer_done = false;
    err_code = nrf_drv_twi_tx(&m_twi_instance, twi_addr, twi_tx_buffer, len+1, false);
    APP_ERROR_CHECK(err_code);
    while (twi_xfer_done == false);
    return NRF_SUCCESS;
}


uint8_t rak_i2c_read(uint8_t twi_addr, uint8_t reg, uint8_t * data, uint16_t len)
{
    uint32_t err_code;
    uint32_t timeout = TWI_TIMEOUT;
    memset(twi_tx_buffer,0,256);
    twi_xfer_done = false;
    err_code = nrf_drv_twi_tx(&m_twi_instance, twi_addr, &reg, 1, false);
    APP_ERROR_CHECK(err_code);
    while (twi_xfer_done == false);

    twi_xfer_done = false;
    err_code = nrf_drv_twi_rx(&m_twi_instance, twi_addr, data, len);
    APP_ERROR_CHECK(err_code);
    while (twi_xfer_done == false);
    return NRF_SUCCESS;
}
uint32_t rak_i2c_simple_write(uint8_t twi_addr, uint8_t *data, uint16_t len)
{
    uint32_t err_code;
    twi_xfer_done = false;
    uint32_t timeout = TWI_TIMEOUT;
    err_code = nrf_drv_twi_tx(&m_twi_instance, twi_addr, data, len, false);
    APP_ERROR_CHECK(err_code);
    while (twi_xfer_done == false);
}

uint8_t rak_i2c_simple_read(uint8_t twi_addr, uint8_t * data, uint16_t len)
{
    uint32_t err_code;
    twi_xfer_done = false;
    uint32_t timeout = TWI_TIMEOUT;
    err_code = nrf_drv_twi_rx(&m_twi_instance, twi_addr, data, len);
    APP_ERROR_CHECK(err_code);
    while (twi_xfer_done == false);
}


void rak_i2c_deinit()
{
    nrf_drv_twi_uninit(&m_twi_instance);
}

