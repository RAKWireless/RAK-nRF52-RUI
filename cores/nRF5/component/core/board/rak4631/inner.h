#ifndef _INNER_H_
#define _INNER_H_

#include "nrf_assert.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "board_basic.h"
#include <stddef.h>
#include "app_error.h"
#include "nrf_soc.h"
#include "sensor.h"
#include "nrf_bootloader_app_start.h"
#include "nrf_bootloader_info.h"
#include "nrf_log.h"
#include "nrf_dfu_mbr.h"
#include "nrf_log_ctrl.h"
#include "nrf_bootloader_info.h"
#include "rui.h"
#ifdef USBD_CDC
#include "app_usbd_core.h"
#include "app_usbd.h"
#include "app_usbd_string_desc.h"
#include "app_usbd_cdc_acm.h"
#include "app_usbd_serial_num.h"
#endif
//#include "version.h"
#ifdef BG96_TEST
#include "bg96.h"
#endif
#ifdef BC95G_TEST
#include "bc95-g.h"
#endif
#ifdef M35_TEST
#include "m35.h"
#endif

#ifdef L70R_TEST
extern void Gps_standby(void);
#endif

#if defined(LORA_4600_TEST)
void SX1276SetOpMode( uint8_t opMode );
#include "p2p.h"
#endif



#endif
