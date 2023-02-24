#ifndef _BG96_H
#define _BG96_H

#include <string.h>
#include "stdint.h"
#include "string.h"
#include "stdbool.h"
#include "nrf_delay.h"
#include "nrf_error.h"
#include "app_error.h"
#include "board_basic.h"

#define  GSM_GENER_CMD_LEN                    (128)
#define  GSM_GENER_CMD_TIMEOUT                (500)  //ms
#define  GSM_OPENSOCKET_CMD_TIMEOUT           (15000)  //ms
#define  GSM_GETDNSIP_CMD_TIMEOUT                (30*1000)  //ms

#define  GSM_CMD_RSP_OK_RF        			"OK\r\n"
#define  GSM_CMD_RSP_OK           	 		"OK"
#define  GSM_SETECHO_CMD_STR            "ATE"

#define             RAK5010_BG96_RESET                      do{\
                                                            nrf_gpio_pin_clear(BG96_RESET);\
                                                            udrv_delay_ms(200);\
                                                            nrf_gpio_pin_set(BG96_RESET);\
                                                            udrv_delay_ms(500);\
                                                            nrf_gpio_pin_clear(BG96_RESET);\
                                                            }while(0);

#define             RAK5010_BG96_POWER_ON                nrf_gpio_cfg_input(BG96_STATUS,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_output(BG96_RESET);\
    nrf_gpio_cfg_output(BG96_PWRKEY);\
    nrf_gpio_cfg_output(BG96_WDISABLE);\
    nrf_gpio_cfg_input(BG96_DTR,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_input(BG96_AP_READY,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_input(BG96_PSM,NRF_GPIO_PIN_NOPULL);\
    nrf_gpio_cfg_output(BG96_GPS_EN);\
    nrf_gpio_cfg_output(41);\
    nrf_gpio_pin_clear(BG96_RESET);\
    nrf_gpio_pin_set(BG96_PWRKEY);\
    nrf_gpio_pin_set(BG96_WDISABLE);\
    udrv_delay_ms(200);\
    nrf_gpio_pin_clear(BG96_PWRKEY);\
    nrf_gpio_pin_set(BG96_GPS_EN); \
    nrf_gpio_pin_set(41)


#define         RAK5010_BG96_POWER_DOWN  nrf_gpio_pin_set(BG96_PWRKEY);\
    udrv_delay_ms(1000); \
    nrf_gpio_pin_clear(BG96_PWRKEY); \
    udrv_delay_ms(1000); \
    nrf_gpio_cfg_default(BG96_STATUS);\
    nrf_gpio_cfg_default(BG96_PWRKEY);\
    nrf_gpio_cfg_default(BG96_RESET);\
    nrf_gpio_cfg_default(BG96_WDISABLE);\
    nrf_gpio_cfg_default(BG96_DTR);\
    nrf_gpio_cfg_default(BG96_AP_READY);\
    nrf_gpio_cfg_default(BG96_PSM);\
    nrf_gpio_pin_clear(BG96_GPS_EN);\
    nrf_gpio_cfg_default(BG96_RXD);\
    nrf_gpio_cfg_default(BG96_TXD);\
    nrf_gpio_cfg_default(BG96_CTS);\
    nrf_gpio_cfg_default(BG96_RTS);\
    nrf_gpio_cfg_default(BG96_RI);\
    nrf_gpio_cfg_default(41)


typedef enum GSM_RECEIVE_TYPE
{   
    GSM_TYPE_CHAR,
    GSM_TYPE_FILE,
}GSM_RECEIVE_TYPE;


/*
*********************************************************************************************************
*                                         EXTERN FUNCTION
*********************************************************************************************************
*/

//cmd list
void gps_config();

void bg96_send(const char *command);
bool get_bg96_status();

#endif

