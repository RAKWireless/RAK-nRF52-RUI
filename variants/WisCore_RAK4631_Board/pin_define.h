
#ifndef __PIN_DEFINE_H__
#define __PIN_DEFINE_H__

#include "nrf_gpio.h"
#include "variant.h"

#define ASSERT_ERROR   0xA55EA55E

#define GREEN_LED               LED_GREEN//NRF_GPIO_PIN_MAP(1,3)
#define BLUE_LED                LED_BLUE//NRF_GPIO_PIN_MAP(1,4)

#define I2C0_SDA                WB_I2C1_SDA//NRF_GPIO_PIN_MAP(0,13)
#define I2C0_SCL                WB_I2C1_SCL//NRF_GPIO_PIN_MAP(0,14)
#define I2C1_SDA                WB_I2C2_SDA//NRF_GPIO_PIN_MAP(0,24)
#define I2C1_SCL                WB_I2C2_SCL//NRF_GPIO_PIN_MAP(0,25)

#define SPIM0_NSS               NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM0_MOSI              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM0_MISO              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM0_SCK               NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM1_NSS               NRF_DRV_SPI_PIN_NOT_USED
#define SPIM1_MOSI              NRF_DRV_SPI_PIN_NOT_USED
#define SPIM1_MISO              NRF_DRV_SPI_PIN_NOT_USED
#define SPIM1_SCK               NRF_DRV_SPI_PIN_NOT_USED
//#define SPIM2_NSS               NRF_GPIO_PIN_MAP(1,10)//42
#define SPIM2_NSS               NRF_DRV_SPI_PIN_NOT_USED
#define SPIM2_MOSI              P1_12//NRF_GPIO_PIN_MAP(1,12)
#define SPIM2_MISO              P1_13//NRF_GPIO_PIN_MAP(1,13)
#define SPIM2_SCK               P1_11//NRF_GPIO_PIN_MAP(1,11)
#define SPIM3_NSS               WB_SPI_CS//NRF_GPIO_PIN_MAP(0,26)
#define SPIM3_MOSI              WB_SPI_MOSI//NRF_GPIO_PIN_MAP(0,30)
#define SPIM3_MISO              WB_SPI_MISO//NRF_GPIO_PIN_MAP(0,29)
#define SPIM3_SCK               WB_SPI_CLK//NRF_GPIO_PIN_MAP(0,3)
#define SPI_CSN_PIN             SPIM3_NSS

#define _ADC1   PIN_A0
#define _ADC2   PIN_A1
#define _ADC3   PIN_A2
#define _ADC4   PIN_A3
#define _ADC5   PIN_A4
#define _ADC6   PIN_A5
#define _ADC7   PIN_A6
#define _ADC8   PIN_A7

#define USE_FULL_ASSERT
#ifdef  USE_FULL_ASSERT
/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function
  *         which reports the name of the source file and the source
  *         line number of the call that failed.
  *         If expr is true, it returns no value.
  * @retval None
  */
       #define assert_param(expr)      ((expr) ? (void)0U : app_error_handler(ASSERT_ERROR, __LINE__, (const uint8_t *)__FILE__))
#else
       #define assert_param(expr) ((void)0U)
#endif /* USE_FULL_ASSERT */

#define             UART0_TXD_PIN                        PIN_SERIAL0_TX//20
#define             UART0_RXD_PIN                        PIN_SERIAL0_RX//19
#define             UART1_TXD_PIN                        PIN_SERIAL1_TX//16
#define             UART1_RXD_PIN                        PIN_SERIAL1_RX//15
#define             UART2_TXD_PIN                        0xFF
#define             UART2_RXD_PIN                        0xFF

#endif  // __PIN_DEFINE_H__
