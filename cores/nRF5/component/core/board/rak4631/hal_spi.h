#ifndef __RAK_SPI_SENSOR_H__
#define __RAK_SPI_SENSOR_H__

#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "nrf_drv_spi.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "app_util_platform.h"

uint32_t rak_spi_init(const nrf_drv_spi_config_t *spi_config);
uint32_t rak_spi_write(uint8_t reg, uint8_t *data, uint16_t len);
uint8_t rak_spi_read(uint8_t reg, uint8_t * data, uint16_t len);
void rak_spi_deinit(void);
uint32_t rak_spi2_init(const nrf_drv_spi_config_t *spi_config);
uint32_t rak_spi2_trans(uint8_t *tx, uint16_t tx_len, uint8_t *rx, uint16_t rx_len);
void rak_spi2_deinit(void);
#endif
