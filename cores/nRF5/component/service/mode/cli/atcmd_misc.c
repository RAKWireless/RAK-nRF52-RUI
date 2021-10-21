#include <string.h>

#include "atcmd.h"
#include "atcmd_misc.h"
#include "udrv_errno.h"
#ifdef RUI_BOOTLOADER
#include "service_nvm.h"
#endif

#ifdef RUI_BOOTLOADER
int At_Bootstatus (SERIAL_PORT port, char *cmd, stParam *param) {
    if (param->argc == 1 && !strcmp(param->argv[0], "?")) {
        atcmd_printf("%s=DFU mode\r\n", cmd);
        return AT_OK;
    } else {
        return AT_PARAM_ERROR;
    }
}

int At_Factory (SERIAL_PORT port, char *cmd, stParam *param) {
    if (param->argc == 0) {
        uint8_t buff[4096];

        uhal_flash_read(SERVICE_NVM_CONFIG_NVM_ADDR, buff, 4096);
        uhal_flash_erase(FACTORY_DEFAULT_NVM_ADDR, 4096);
        uhal_flash_write(FACTORY_DEFAULT_NVM_ADDR, buff, 4096);
        return AT_OK;
    } else {
        return AT_PARAM_ERROR;
    }
}
#endif
