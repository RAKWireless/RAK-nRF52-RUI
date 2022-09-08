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


#define RUI_CFG_V85_SZ                              524
#define RUI_CFG_V87_SZ                              528
#define RUI_CFG_V99_SZ                              532

//The offset in memory of the address of the element in rui_cfg relative to the starting position of rui_cfg
#define ELEM_OFS_V85_crc_verify                     0
#define ELEM_OFS_V85_lora_work_mode                 4
#define ELEM_OFS_V85_g_lora_p2p_cfg_t               8
#define ELEM_OFS_V85_g_ble_cfg_t                    44
#define ELEM_OFS_V85_g_lora_cfg_t                   60
#define ELEM_OFS_V85_g_rtc_delta_t                  452
#define ELEM_OFS_V85_mode_type                      460
#define ELEM_OFS_V85_baudrate                       468
#define ELEM_OFS_V85_atcmd_echo                     472
#define ELEM_OFS_V85_serial_passwd                  473
#define ELEM_OFS_V85_auto_sleep_time                484
#define ELEM_OFS_V85_sn                             488
#define ELEM_OFS_V85_alias                          506

//follows are differences in version 87
//The content between crc_verify and mode_type has same offset as v85 
#define ELEM_OFS_V87_crc_verify                     ELEM_OFS_V85_crc_verify
#define ELEM_OFS_V87_lora_work_mode                 ELEM_OFS_V85_lora_work_mode
#define ELEM_OFS_V87_g_lora_p2p_cfg_t               ELEM_OFS_V85_g_lora_p2p_cfg_t
#define ELEM_OFS_V87_g_ble_cfg_t                    ELEM_OFS_V85_g_ble_cfg_t
#define ELEM_OFS_V87_g_lora_cfg_t                   ELEM_OFS_V85_g_lora_cfg_t
#define ELEM_OFS_V87_g_rtc_delta_t                  ELEM_OFS_V85_g_rtc_delta_t
#define ELEM_OFS_V87_mode_type                      ELEM_OFS_V85_mode_type
#define ELEM_OFS_V87_serial_lock_status             466
#define ELEM_OFS_V87_baudrate                       472
#define ELEM_OFS_V87_atcmd_echo                     476
#define ELEM_OFS_V87_serial_passwd                  477
#define ELEM_OFS_V87_auto_sleep_time                488
#define ELEM_OFS_V87_sn                             492
#define ELEM_OFS_V87_alias                          510


//follows are differences in version 99
//The content between crc_verify and alias has same offset as v87
#define ELEM_OFS_V99_crc_verify                     ELEM_OFS_V87_crc_verify
#define ELEM_OFS_V99_lora_work_mode                 ELEM_OFS_V87_lora_work_mode
#define ELEM_OFS_V99_g_lora_p2p_cfg_t               ELEM_OFS_V87_g_lora_p2p_cfg_t
#define ELEM_OFS_V99_g_ble_cfg_t                    ELEM_OFS_V87_g_ble_cfg_t
#define ELEM_OFS_V99_g_lora_cfg_t                   ELEM_OFS_V87_g_lora_cfg_t
#define ELEM_OFS_V99_g_rtc_delta_t                  ELEM_OFS_V87_g_rtc_delta_t
#define ELEM_OFS_V99_mode_type                      ELEM_OFS_V87_mode_type
#define ELEM_OFS_V99_serial_lock_status             ELEM_OFS_V87_serial_lock_status
#define ELEM_OFS_V99_baudrate                       ELEM_OFS_V87_baudrate
#define ELEM_OFS_V99_atcmd_echo                     ELEM_OFS_V87_atcmd_echo
#define ELEM_OFS_V99_serial_passwd                  ELEM_OFS_V87_serial_passwd
#define ELEM_OFS_V99_auto_sleep_time                ELEM_OFS_V87_auto_sleep_time
#define ELEM_OFS_V99_sn                             ELEM_OFS_V87_sn
#define ELEM_OFS_V99_alias                          ELEM_OFS_V87_alias
#define ELEM_OFS_V99_magic                          528

uint32_t get_batt_table_size(void);
#endif
