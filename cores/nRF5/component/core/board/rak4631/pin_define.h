
#ifndef __PIN_DEFINE_H__
#define __PIN_DEFINE_H__

#include "nrf_gpio.h"

#define ASSERT_ERROR	0xA55EA55E

#define GREEN_LED               NRF_GPIO_PIN_MAP(1,3)
#define BLUE_LED                NRF_GPIO_PIN_MAP(1,4)

#define I2C0_SDA                NRF_GPIO_PIN_MAP(0,13)
#define I2C0_SCL                NRF_GPIO_PIN_MAP(0,14)
#define I2C1_SDA                NRF_GPIO_PIN_MAP(0,24)
#define I2C1_SCL                NRF_GPIO_PIN_MAP(0,25)

#define SPIM0_NSS               NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM0_MOSI              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM0_MISO              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM0_SCK               NRF_DRV_SPI_PIN_NOT_USED 
//#define SPIM1_NSS               NRF_GPIO_PIN_MAP(1,10)//42
#define SPIM1_NSS               NRF_DRV_SPI_PIN_NOT_USED
#define SPIM1_MOSI              NRF_GPIO_PIN_MAP(1,12)//44
#define SPIM1_MISO              NRF_GPIO_PIN_MAP(1,13)//45
#define SPIM1_SCK               NRF_GPIO_PIN_MAP(1,11)//43
#define SPIM2_NSS               NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM2_MOSI              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM2_MISO              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM2_SCK               NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM3_NSS               NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM3_MOSI              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM3_MISO              NRF_DRV_SPI_PIN_NOT_USED 
#define SPIM3_SCK               NRF_DRV_SPI_PIN_NOT_USED 

#define bg96_DTR 26
#define bg96_TX 6
#define bg96_RX 8
#define bg96_RI 27
#define bg96_RTS 7
#define bg96_CTS 11
#define bg96_STATUS 31
#define bg96_AP_READY 30
#define bg96_W_DISABLE 29
#define bg96_RESET 28
#define bg96_PWRKEY 2
#define bg96_PSM 3
#define bg96_GPS_EN NRF_GPIO_PIN_MAP(1,7)
#define led 12

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
	#define assert_param(expr)	((expr) ? (void)0U : app_error_handler(ASSERT_ERROR, __LINE__, (const uint8_t *)__FILE__))
#else
	#define assert_param(expr) ((void)0U)
#endif /* USE_FULL_ASSERT */


/*
		GSM PIN Assignment
		GSM_PWR_ON		--	P0.06
		GSM_TXD			--	P0.12
		GSM_RESET		--	P0.14
		GSM_PWRKEY		--	P0.15
		GSM_RXD			--	P0.20

*/
	

#if defined(BG96_TEST)
#define             GSM_TXD_PIN                        6//4
#define             GSM_RXD_PIN                        8//5
#define             GSM_PWRKEY_PIN                     2//NRF_GPIO_PIN_MAP(1,5)
#define             GSM_RESET_PIN                      28//NRF_GPIO_PIN_MAP(1,6)
#define             GSM_W_DISABLE_PIN                  29//NRF_GPIO_PIN_MAP(1,4)
#define             GPS_EN				               NRF_GPIO_PIN_MAP(1,7)
#define             GSM_PWR_ON_PIN                     0xFF
#define             GSM_W_DISABLE_ON                   nrf_gpio_pin_write ( GSM_W_DISABLE_PIN, 0 )    
#define             GSM_W_DISABLE_OFF                  nrf_gpio_pin_write ( GSM_W_DISABLE_PIN, 1 )       
#endif

#ifdef USER_UART
#define             UART1_TXD_PIN                        16
#define             UART1_RXD_PIN                        15

#define             UART0_TXD_PIN                        20
#define             UART0_RXD_PIN                        19
#endif

#define             GSM_PWRKEY_HIGH                           nrf_gpio_pin_write ( GSM_PWRKEY_PIN, 0 )
#define             GSM_PWRKEY_LOW                            nrf_gpio_pin_write ( GSM_PWRKEY_PIN, 1 )

#define             GSM_RESET_HIGH                           nrf_gpio_pin_write ( GSM_RESET_PIN, 0 )
#define             GSM_RESET_LOW                            nrf_gpio_pin_write ( GSM_RESET_PIN, 1 )

#define             BG96_RESET                              do{\
                                                            nrf_gpio_pin_clear(bg96_RESET);\
                                                            delay_ms(200);\
                                                            nrf_gpio_pin_set(bg96_RESET);\
                                                            delay_ms(500);\
                                                            nrf_gpio_pin_clear(bg96_RESET);\
                                                            }while(0);

#define             BG96_POWER_CYCLE                        do{\
                                                            nrf_gpio_pin_clear(bg96_PWRKEY);\
                                                            delay_ms(500);\
                                                            nrf_gpio_pin_set(bg96_PWRKEY);\
                                                            delay_ms(500);\
                                                            nrf_gpio_pin_clear(bg96_PWRKEY);\
                                                            }while(0);

#define 			POWER_ON       		    nrf_gpio_cfg_input(bg96_STATUS,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_input(bg96_STATUS,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_output(bg96_RESET);\
    nrf_gpio_cfg_output(bg96_PWRKEY);\
    nrf_gpio_cfg_output(bg96_W_DISABLE);\
    nrf_gpio_cfg_input(bg96_DTR,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_input(bg96_AP_READY,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_input(bg96_PSM,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_output(bg96_GPS_EN);\
    nrf_gpio_pin_clear(bg96_RESET);\
    nrf_gpio_pin_set(bg96_PWRKEY);\
    nrf_gpio_pin_set(bg96_W_DISABLE);\
    nrf_delay_ms(2000);\
    nrf_gpio_pin_clear(bg96_PWRKEY);\
    nrf_gpio_pin_set(bg96_GPS_EN)

#define 		POWER_DOWN	nrf_gpio_pin_set(bg96_PWRKEY);\
	delay_ms(1000); \
	nrf_gpio_pin_clear(bg96_PWRKEY); \
	delay_ms(1000); \

#endif  // __PIN_DEFINE_H__
