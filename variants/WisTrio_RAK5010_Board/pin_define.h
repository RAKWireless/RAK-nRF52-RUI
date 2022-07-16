
#ifndef __PIN_DEFINE_H__
#define __PIN_DEFINE_H__

#include "nrf_gpio.h"
#include "variant.h"

#define ASSERT_ERROR   0xA55EA55E

#define I2C0_SDA                P0_14
#define I2C0_SCL                P0_13

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

#define             NRF_IO1                              IO1
#define             NRF_IO2                              IO2
#define             NRF_IO3                              IO3
#define             NRF_IO4                              IO4
#define             NRF_AIN                              AIN

#define             UART0_TXD_PIN                        PIN_SERIAL0_TX//34
#define             UART0_RXD_PIN                        PIN_SERIAL0_RX//33
#define             UART1_TXD_PIN                        PIN_SERIAL1_TX//6
#define             UART1_RXD_PIN                        PIN_SERIAL1_RX//8
#define             UART2_TXD_PIN                        0xFF
#define             UART2_RXD_PIN                        0xFF

#define             BAT_PIN                              P0_04

//BG96
#define             BG96_TXD                             P0_08 
#define             BG96_RXD                             P0_06
#define             BG96_CTS                             P0_11 
#define             BG96_RTS                             P0_07
#define             BG96_RI                              P0_27
#define             BG96_STATUS                          P0_31
#define             BG96_RESET                           P0_28
#define             BG96_PWRKEY                          P0_02
#define             BG96_WDISABLE                        P0_29
#define             BG96_DTR                             P0_26 
#define             BG96_AP_READY                        P0_30 
#define             BG96_PSM                             P0_03 
#define             BG96_GPS_EN                          P1_07 

#endif  // __PIN_DEFINE_H__
