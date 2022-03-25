#ifndef _UHAL_SPIMST_H_
#define _UHAL_SPIMST_H_

#include <stdint.h>
#include <stddef.h>
#include "pin_define.h"
#include "sdk_config.h"
#include "udrv_spimst.h"
#include "nrf_drv_spi.h"
#include "nrfx.h"
#include "nrfx_spi.h"
#include "nrfx_spim.h"

void uhal_spimst_init(udrv_spimst_port port);
void uhal_spimst_setup_mode(udrv_spimst_port port, ENUM_SPI_MST_CPHA_T CPHA, ENUM_SPI_MST_CPOL_T CPOL);
void uhal_spimst_setup_freq(udrv_spimst_port port, uint32_t clk_Hz);
void uhal_spimst_setup_byte_order(udrv_spimst_port port, bool msb_first);
void uhal_spimst_deinit(udrv_spimst_port port);
int8_t uhal_spimst_trx(udrv_spimst_port port, uint8_t *write_data, uint32_t write_length, uint8_t *read_data, uint32_t read_length, uint32_t csn);
void uhal_spimst_suspend(void);
void uhal_spimst_resume(void);
#if SPI0_ENABLED
void spi0_event_handler(nrf_drv_spi_evt_t const * p_event, void * p_context);
#endif
#if SPI1_ENABLED
void spi1_event_handler(nrf_drv_spi_evt_t const * p_event, void * p_context);
#endif
#if SPI2_ENABLED
void spi2_event_handler(nrf_drv_spi_evt_t const * p_event, void * p_context);
#endif
#if SPI3_ENABLED
void spi3_event_handler(nrf_drv_spi_evt_t const * p_event, void * p_context);
#endif
#endif  // #ifndef _UHAL_SPIMST_H_
