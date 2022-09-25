#ifndef __BOARD_BASIC_H__
#define __BOARD_BASIC_H__

#include <stdbool.h>
#include <stdint.h>
#include "pin_define.h"
#include "service_mode.h"
#include "udrv_serial.h"

#ifdef SUPPORT_USB
#define DEFAULT_SERIAL_CONSOLE		SERIAL_USB0
#else
#define DEFAULT_SERIAL_CONSOLE		SERIAL_UART0
#endif

#define DEFAULT_SERIAL_UART0_MODE       SERVICE_MODE_TYPE_CLI
#define DEFAULT_SERIAL_UART1_MODE       SERVICE_MODE_TYPE_CUSTOM
#define DEFAULT_SERIAL_UART2_MODE       SERVICE_MODE_TYPE_CUSTOM
#ifdef SUPPORT_USB
#define DEFAULT_SERIAL_USB0_MODE        SERVICE_MODE_TYPE_CLI
#endif
#ifdef SUPPORT_BLE
#define DEFAULT_SERIAL_BLE0_MODE        SERVICE_MODE_TYPE_CLI
#endif
#ifdef SUPPORT_NFC
#define DEFAULT_SERIAL_NFC_MODE         SERVICE_MODE_TYPE_CLI
#endif

#define DEFAULT_SERIAL_BAUDRATE		115200

/* nRF52840's TWI & SPI use the same register, so we can't use the same ID for TWI & SPI at the same time because of hardware conflict.
   Therefore, we choose TWI0, SPI1, TWI2 and SPI3 to avoid conflict.
   SPI1 is used by LoRa chip, so RAK4631 provides SPI3 for users to use. */
#define DEFAULT_SPIMST_PORT         UDRV_SPIMST_3

typedef struct {
        uint8_t server_ip[20];
        uint8_t server_port[20];    	
        uint8_t operator_long_data[20]; 
        uint8_t operator_short_data[20]; 
        uint8_t operator_apn_data[20];
        uint8_t operator_net_data[20];
        uint8_t hologram_card_num[20];
} cellular_cfg_t;


typedef struct{
    uint8_t work_mode;  // 0:ble peripheral  1:ble central  2:ble observer 
    uint8_t long_range_enable;
    uint8_t mac[12];
    uint8_t reserve[2];
}ble_central_cfg_t;

typedef struct{
    uint32_t seconds;
    uint32_t subseconds;
}rtc_delta_t;

typedef struct {
    // If you want to add a new variable to this structure, add its store handler in service_nvm.c. 
    // Note the points the file "service_nvm.c": 
    // structure :STORE_REOGANIZED fountion: service_nvm_store_config, service_nvm_read_config
    uint32_t magic_num;
    uint32_t version_code;
#ifdef SUPPORT_BLE
    ble_central_cfg_t g_ble_cfg_t;
#endif
    rtc_delta_t g_rtc_delta_t;
    SERVICE_MODE_TYPE mode_type[SERIAL_MAX];
    SERIAL_WLOCK_STATE serial_lock_status[SERIAL_MAX];
    uint32_t baudrate;
    uint8_t atcmd_echo;
    uint8_t serial_passwd[9];
    uint32_t auto_sleep_time;
    uint8_t sn[18];
    uint8_t alias[16];
    uint8_t debug_level;
    uint8_t firmware_ver[32];
    uint8_t hwmodel[32];
    uint8_t cli_ver[32];
} rui_cfg_t;

uint32_t get_batt_table_size(void);
#endif
