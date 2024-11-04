/*!
 * \file      spi-board.c
 *
 * \brief     Target board SPI driver implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2017 Semtech
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 */
#include <stddef.h>
#include "utilities.h"
#include "board.h"
#include "gpio.h"
#include "spi-board.h"
#include "udrv_spimst.h"
#include "pin_define.h"

static udrv_spimst_port get_udrv_spimst_id(SpiId_t spiId) {
    //configured by feature.mk
    return LORA_IO_SPI_PORT;
}

void SpiInit( Spi_t *obj, SpiId_t spiId, PinNames mosi, PinNames miso, PinNames sclk, PinNames nss )
{
    //CRITICAL_SECTION_BEGIN( );

    obj->SpiId = spiId;

    GpioInit( &obj->Mosi, mosi, PIN_ALTERNATE_FCT, PIN_PUSH_PULL, PIN_PULL_DOWN, 0 );
    GpioInit( &obj->Miso, miso, PIN_ALTERNATE_FCT, PIN_PUSH_PULL, PIN_PULL_DOWN, 0 );
    GpioInit( &obj->Sclk, sclk, PIN_ALTERNATE_FCT, PIN_PUSH_PULL, PIN_PULL_DOWN, 0 );
    //GpioInit( &obj->Nss, nss, PIN_OUTPUT, PIN_PUSH_PULL, PIN_NO_PULL, 1 );

    udrv_spimst_init(get_udrv_spimst_id(spiId));

    //CRITICAL_SECTION_END( );
}

void SpiDeInit( Spi_t *obj )
{
    udrv_spimst_deinit(get_udrv_spimst_id(obj->SpiId));
}

void SpiFormat( Spi_t *obj, int8_t bits, int8_t cpol, int8_t cpha, int8_t slave )
{
    udrv_spimst_setup_mode(get_udrv_spimst_id(obj->SpiId), (ENUM_SPI_MST_CPHA_T)cpha, (ENUM_SPI_MST_CPOL_T)cpol);
}

void SpiFrequency( Spi_t *obj, uint32_t hz )
{
    udrv_spimst_setup_freq(get_udrv_spimst_id(obj->SpiId), hz);
}

uint16_t SpiInOut( Spi_t *obj, uint16_t outData )
{
    uint8_t rxData = 0;

    if( ( obj == NULL ) )
    {
        assert_param( FAIL );
    }

    //CRITICAL_SECTION_BEGIN( );

    udrv_spimst_trx(get_udrv_spimst_id(obj->SpiId), (uint8_t *)&outData, 1, (uint8_t *)&rxData, 1, 0);

    //CRITICAL_SECTION_END( );

    return( rxData );
}

