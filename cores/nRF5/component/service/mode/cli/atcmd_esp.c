#include "atcmd.h"
#include <string.h>
#include <ctype.h>
#include "atcmd.h"
#include "atcmd_cellular.h"
#include "udrv_serial.h"
#include "udrv_errno.h"
#include "udrv_rtc.h"
#include "board_basic.h"
#include "board.h"

#ifdef RAK11160


int At_Esp (SERIAL_PORT port, char *cmd, stParam *param)
{
    uint8_t mode;

    if (param->argc == 1 && !strcmp(param->argv[0], "?")) {
        atcmd_printf("%s=%d\r\n", cmd,getCurrentATMode());
        return AT_OK;
    } else if (param->argc == 1) {

        mode = atoi(param->argv[0]);

        if(mode > 1)
        {
            return AT_PARAM_ERROR;
        }

        setCurrentATMode(mode);
        
        return AT_OK;
    } else {
        return AT_PARAM_ERROR;
    }
}

int At_EspPower (SERIAL_PORT port, char *cmd, stParam *param)
{
    uint8_t mode;

    if (param->argc == 1 && !strcmp(param->argv[0], "?")) {
        atcmd_printf("%s=%d\r\n", cmd,getEspPowerMode());
        return AT_OK;
    } else if (param->argc == 1) {

        mode = atoi(param->argv[0]);

        if(mode > 1)
        {
            return AT_PARAM_ERROR;
        }

        setEspPowerMode(mode);
    
        return AT_OK;
    } else {
        return AT_PARAM_ERROR;
    }
}

#endif




