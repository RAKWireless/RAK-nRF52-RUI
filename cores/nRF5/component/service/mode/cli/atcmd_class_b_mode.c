#include <string.h>

#include "atcmd.h"
#include "atcmd_class_b_mode.h"
#include "udrv_errno.h"
#include "service_lora.h"

int At_PingSlot(SERIAL_PORT port, char *cmd, stParam *param)
{
    if(SERVICE_LORAWAN != service_lora_get_nwm())
    {
        return AT_MODE_NO_SUPPORT;
    }
    if (param->argc == 1 && !strcmp(param->argv[0], "?"))
    {
        atcmd_printf("%u\r\n", service_lora_get_ping_slot_periodicity());
        return AT_OK;
    }
    else if (param->argc == 1)
    {
        uint8_t periodicity;

        for (int i = 0; i < strlen(param->argv[0]); i++)
        {
            if (!isdigit(*(param->argv[0] + i)))
            {
                return AT_PARAM_ERROR;
            }
        }

        periodicity = strtoul(param->argv[0], NULL, 10);

        if (periodicity > 7)
        {
            return AT_PARAM_ERROR;
        }

        service_lora_set_ping_slot_periodicity(periodicity);
        return AT_OK;
    }
    else
    {
        return AT_PARAM_ERROR;
    }
}

int At_BeaconFreq(SERIAL_PORT port, char *cmd, stParam *param)
{
    uint8_t dr;
    uint32_t freq;

    if(SERVICE_LORAWAN != service_lora_get_nwm())
    {
        return AT_MODE_NO_SUPPORT;
    }

    dr = service_lora_get_beacon_dr();
    freq = service_lora_get_beacon_freq();
   
    if (param->argc == 1 && !strcmp(param->argv[0], "?"))
    {
        atcmd_printf("BCON:%d,%d.%d\r\n", dr, freq/1000000, (freq%1000000)/1000);
        return AT_OK;
    }
    else
    {
        return AT_PARAM_ERROR;
    }
}

int At_BeaconTime(SERIAL_PORT port, char *cmd, stParam *param)
{
    if(SERVICE_LORAWAN != service_lora_get_nwm())
    {
        return AT_MODE_NO_SUPPORT;
    }
    if (param->argc == 1 && !strcmp(param->argv[0], "?"))
    {
        atcmd_printf("BTIME:%u\r\n", service_lora_get_beacon_time());
        return AT_OK;
    }
    else
    {
        return AT_PARAM_ERROR;
    }
}

int At_BGW(SERIAL_PORT port, char *cmd, stParam *param)
{
    if(SERVICE_LORAWAN != service_lora_get_nwm())
    {
        return AT_MODE_NO_SUPPORT;
    }
    if (param->argc == 1 && !strcmp(param->argv[0], "?"))
    {
        beacon_bgw_t beacon_bgw = service_lora_get_beacon_gwspecific();
        atcmd_printf("BGW:%d,%d,%d,%d,%d\r\n", beacon_bgw.GPS_coordinate, beacon_bgw.net_ID, beacon_bgw.gateway_ID,
                     beacon_bgw.latitude, beacon_bgw.longitude);
        return AT_OK;
    }
    else
    {
        return AT_PARAM_ERROR;
    }
}

int At_LocalTime(SERIAL_PORT port, char *cmd, stParam *param)
{
    if(SERVICE_LORAWAN != service_lora_get_nwm())
    {
        return AT_MODE_NO_SUPPORT;
    }
    char local_time[30] = {0};

    if (param->argc == 1 && !strcmp(param->argv[0], "?"))
    {
        service_lora_get_local_time(local_time);
        atcmd_printf("LTIME:%s\r\n", local_time);
        return AT_OK;
    }
    else
    {
        return AT_PARAM_ERROR;
    }
}
