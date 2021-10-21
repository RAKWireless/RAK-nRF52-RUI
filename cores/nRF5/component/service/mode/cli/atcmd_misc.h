#ifndef _ATCMD_MISC_H_
#define _ATCMD_MISC_H_
#include "atcmd.h"

#ifndef RUI_BOOTLOADER
int At_Lock (SERIAL_PORT port, char *cmd, stParam *param);
int At_Pword (SERIAL_PORT port, char *cmd, stParam *param);
int At_Baud (SERIAL_PORT port, char *cmd, stParam *param);
#endif
#ifdef RUI_BOOTLOADER
int At_Bootstatus(SERIAL_PORT port, char *cmd, stParam *param);
int At_Factory (SERIAL_PORT port, char *cmd, stParam *param);
#endif

#endif //_ATCMD_MISC_H_
