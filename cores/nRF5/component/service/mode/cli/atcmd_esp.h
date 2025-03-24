#ifndef _ATCMD_ESP_H_
#define _ATCMD_ESP_H_

#ifdef RAK11160

#define ATCMD_ESP             "AT+ESP"
#define ATCMD_ESPPOWER        "AT+ESPPOWER"

int At_Esp (SERIAL_PORT port, char *cmd, stParam *param);
int At_EspPower (SERIAL_PORT port, char *cmd, stParam *param);

#endif

#endif //_ATCMD_CLASS_B_MODE_H_