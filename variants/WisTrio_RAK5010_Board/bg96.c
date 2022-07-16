/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/
#include "bg96.h"
//#include "gps.h"
#include "nrf_drv_rtc.h"
#include "nrf_rtc.h"
#include "nrf_drv_gpiote.h"
#include "app_util_platform.h"
#include "udrv_serial.h"
#include "nrf_log.h"
#define  GSM_RXBUF_MAXSIZE           1600

static uint16_t rxReadIndex  = 0;
static uint16_t rxWriteIndex = 0;
static uint16_t rxCount      = 0;
static uint8_t Gsm_RxBuf[GSM_RXBUF_MAXSIZE];


static GSM_RECEIVE_TYPE g_type = GSM_TYPE_CHAR;
char GSM_RSP[1600] = {0};


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/
extern rui_cfg_t g_rui_cfg_t;

void bg96_send(const char *command) {
    uint8_t temp;
    while(*command)
    {
        temp = *command;
        udrv_serial_write(SERIAL_UART1, &temp, 1);
        command++;
        udrv_delay_ms(50);
    }
}

void Gsm_PowerUp(void)
{
    int ret;
    int i = 0;
    udrv_serial_log_printf("BG96_PowerUp\r\n");
    // //NRF_LOG_INFO("BG96_STATUS(before ON)=%u\r\n", status);
    // if (nrf_gpio_pin_read(BG96_STATUS)) {
    //     NRF_LOG_INFO("Already ON\r\n");
    // } else {
gsm_powerup_restart:
        //RAK5010_BG96_RESET;
        RAK5010_BG96_POWER_DOWN;
        RAK5010_BG96_POWER_ON;

        //{


            while (!nrf_gpio_pin_read(BG96_STATUS)) {
                NRF_LOG_INFO("Wait ON..\r\n");
                udrv_delay_ms(100);
                if (i++ > 10) {
                    //RAK5010_BG96_RESET;
                    NRF_LOG_INFO("BG96_STATUS(after RESET)=%u\r\n", nrf_gpio_pin_read(BG96_STATUS));
                    goto gsm_powerup_restart;
                }
            }
        //}
   //}
    NRF_LOG_INFO("BG96_STATUS(after ON)=%u\r\n", nrf_gpio_pin_read(BG96_STATUS));
}


int Gsm_RxByte(void)
{
    int c = -1;

    CRITICAL_REGION_ENTER();
    if (rxCount > 0)
    {
        c = Gsm_RxBuf[rxReadIndex];

        rxReadIndex++;
        if (rxReadIndex == GSM_RXBUF_MAXSIZE)
        {
            rxReadIndex = 0;
        }
        rxCount--;
    }
    CRITICAL_REGION_EXIT();

    return c;
}

#if 0
//The shut off api is emergency cmd. For safe, please use "AT+QPOWD=1" and it will cost less than 60s.
void Gsm_PowerDown(void)
{
    int ret = -1;

    NRF_LOG_INFO("Gsm_PowerDown\r\n");
    //NRF_LOG_INFO("BG96_STATUS(before DOWN)=%u\r\n", nrf_gpio_pin_read(BG96_STATUS));

    if (!nrf_gpio_pin_read(BG96_STATUS)) {
        NRF_LOG_INFO("Already OFF\r\n");
    } else {
gsm_powerdown_restart:

        {
            int i = 0;

            while (nrf_gpio_pin_read(BG96_STATUS)) {
                NRF_LOG_INFO("Wait OFF..\r\n");
                udrv_delay_ms(100);
                if (i++ > 600) {
                    RAK5010_BG96_RESET;
                    memset(GSM_RSP, 0, GSM_GENER_CMD_LEN);
                    ret = Gsm_WaitRspOK(GSM_RSP, GSM_GENER_CMD_TIMEOUT * 4, false);
                    NRF_LOG_INFO("BG96_STATUS(after RESET)=%u\r\n", nrf_gpio_pin_read(BG96_STATUS));
                    goto gsm_powerdown_restart;
                }
            }
        }
        memset(GSM_RSP, 0, GSM_GENER_CMD_LEN);
        ret = Gsm_WaitRspOK(GSM_RSP, GSM_GENER_CMD_TIMEOUT * 4, false);
        NRF_LOG_INFO("%s(): ret= %d\r\n", __func__, ret);
    }
#ifdef S132
//    nrf_gpio_cfg_default(GSM_PWR_ON_PIN);
    nrf_gpio_cfg_default(BG96_RESET);
    nrf_gpio_cfg_default(BG96_PWRKEY);
#endif

#ifdef S140
    //BG96 gpio
    nrf_gpio_cfg_default(BG96_STATUS);
    nrf_gpio_cfg_default(BG96_PWRKEY);
    nrf_gpio_cfg_default(BG96_RESET);

     nrf_gpio_cfg_default(BG96_WDISABLE);
     nrf_gpio_cfg_default(BG96_DTR);//output 
     nrf_gpio_cfg_default(BG96_AP_READY);//output
     nrf_gpio_cfg_default(BG96_PSM);
     nrf_gpio_pin_clear(BG96_GPS_EN);
     nrf_gpio_cfg_default(BG96_RXD);
     nrf_gpio_cfg_default(BG96_TXD);
     nrf_gpio_cfg_default(BG96_CTS);
     nrf_gpio_cfg_default(BG96_RTS);
     nrf_gpio_cfg_default(BG96_RI);
#endif
    NRF_LOG_INFO("BG96_STATUS(after DOWN)=%u\r\n", nrf_gpio_pin_read(BG96_STATUS));
}
#endif

void gps_config()
{
    int ret = -1;
    uint8_t cmd_len;
    uint8_t RSP[128] = {0};
    uint8_t CMD[128] = {0};
    memset(CMD, 0, GSM_GENER_CMD_LEN);
    memset(RSP, 0, GSM_GENER_CMD_LEN);
    cmd_len = sprintf(CMD, "%s\r\n", "AT+QGPSCFG=\"gpsnmeatype\",1");
    bg96_send(CMD);
    ret = Gsm_WaitRspOK(RSP, GSM_GENER_CMD_TIMEOUT * 4, true);
    NRF_LOG_INFO("AT+QGPSCFG= ret= %d\r\n", ret);
    udrv_delay_ms(1000);

    memset(CMD, 0, GSM_GENER_CMD_LEN);
    memset(RSP, 0, GSM_GENER_CMD_LEN);
    cmd_len = sprintf(CMD, "%s\r\n", "AT+QGPS=1,1,1,1,1");
    bg96_send(CMD);
    ret = Gsm_WaitRspOK(RSP, GSM_GENER_CMD_TIMEOUT * 4, true);
    NRF_LOG_INFO("AT+QGPS ret= %d\r\n", ret);
    udrv_delay_ms(1000);
}

void Gsm_Gpio_Init(void)
{
//    nrf_gpio_cfg_output(GSM_PWR_ON_PIN);
    nrf_gpio_cfg_output(BG96_RESET);
    nrf_gpio_cfg_output(BG96_PWRKEY);
    nrf_gpio_cfg_input(BG96_STATUS,NRF_GPIO_PIN_NOPULL);
}

int Gsm_Init()
{
    Gsm_Gpio_Init();
    //check bg96 status and decide to power down first
    while (nrf_gpio_pin_read(BG96_STATUS))
    {
        RAK5010_BG96_POWER_DOWN;
    }
    //then power up
    Gsm_PowerUp();

    return 0;
}
/**
* @}
*/

bool get_bg96_status()
{
    return nrf_gpio_pin_read(BG96_STATUS);
}

void Gps_data_update(uint8_t data)
{

}



