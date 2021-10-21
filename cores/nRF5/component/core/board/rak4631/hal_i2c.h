#ifndef __RAK_I2C_SENSOR_H__
#define __RAK_I2C_SENSOR_H__

#include "stdint.h"
#include "nrf_drv_twi.h"

uint32_t rak_i2c_init(const nrf_drv_twi_config_t *twi_config);
uint32_t rak_i2c_write(uint8_t twi_addr, uint8_t reg, uint8_t *data, uint16_t len);
uint8_t rak_i2c_read(uint8_t twi_addr, uint8_t reg, uint8_t * data, uint16_t len);
uint8_t rak_i2c_simple_read(uint8_t twi_addr, uint8_t * data, uint16_t len);
uint32_t rak_i2c_simple_write(uint8_t twi_addr, uint8_t *data, uint16_t len);
uint32_t rak_i2c_simple_write_m(uint8_t twi_addr, uint8_t *data, uint16_t len, bool repeated);

void rak_i2c_deinit(void);

#endif
