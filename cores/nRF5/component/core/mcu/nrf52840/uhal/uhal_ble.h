#ifndef _UHAL_BLE_H_
#define _UHAL_BLE_H_

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "nordic_common.h"
#include "nrf.h"
#include "ble_hci.h"
#include "ble_gap.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "nrf_ble_gatt.h"
#include "app_timer.h"
#include "fds.h"
#include "ble_nus.h"
#include "ble_nus_c.h"
#include "app_uart.h"
#include "app_util_platform.h"
#include "bsp_btn_ble.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#include "board_basic.h"
#include "nrf_dfu_types.h"
#include "nrf_dfu_req_handler.h"
#include "nrf_fstorage.h"
#include "crc32.h"
#include "nrf_crypto.h"
#include "nrf_crypto_init.h"
#include "nrf_crypto_hash.h"
#include "nrf_power.h"
#include "nrf_pwr_mgmt.h"
#include "nrf_nvmc.h"
#include "nrf_dfu_flash.h"
#include "nrf_fstorage.h"
#include "nrf_bootloader_info.h"
#include "nrf_queue.h"
#include "service_mode_cli.h"
#include "udrv_ble.h"
#include "udrv_errno.h"
#include "udrv_dfu.h"
#include "udrv_serial.h"
#include "uhal_ble_hid.h"
#include "uhal_ble_cfg.h"
#include "nrf_ble_lesc.h"
#include "nrf_ble_qwr.h"
#include "peer_manager.h"
#include "peer_manager_handler.h"

#ifdef DFU_SUPPORT
#include "ble_dfu.h"
#endif

#ifdef BLE_CENTRAL_SUPPORT
#ifdef S140
#include "nrf_ble_scan.h"
#endif
#endif // BLE_CENTRAL_SUPPORT

#define APP_BLE_CONN_CFG_TAG            1                                           /**< A tag identifying the SoftDevice BLE configuration. */
#define APP_FEATURE_NOT_SUPPORTED       BLE_GATT_STATUS_ATTERR_APP_BEGIN + 2        /**< Reply when unsupported features are requested. */
#define DEVICE_NAME                     "RAK"                                       /**< Name of device. Will be included in the advertising data. */
#define NUS_SERVICE_UUID_TYPE           BLE_UUID_TYPE_VENDOR_BEGIN                  /**< UUID type for the Nordic UART Service (vendor specific). */
#define APP_BLE_OBSERVER_PRIO           2                                           /**< Application's BLE observer priority. You shouldn't need to modify this value. */
#define APP_SOC_OBSERVER_PRIO           1                                           /**< Applications' SoC observer priority. You shouldn't need to modify this value. */
#define APP_ADV_INTERVAL                480                                         /**< The advertising interval (in units of 0.625 ms. This value corresponds to 100 ms). */
#define MIN_ADV_INTERVAL                100                                         /**< Minimum advertising interval 1000 ms */

#define MIN_CONN_ADV_INTERVAL           20                                          /**  Minimum advertising interval (in ms).*/
#define MIN_NON_CONN_ADV_INTERVAL       100                                         /**	 Minimum advertising interval for non-connectable advertisements (in ms).*/
#define MAX_ADV_INTERVAL                10240                                       /**  Maximum advertising interval (in ms).*/
#define APP_ADV_TIMEOUT_LIMITED_MAX     180                                         /**< Maximum advertising time in 10 ms units corresponding to TGAP(lim_adv_timeout) = 180 s in limited discoverable mode. */
#define MIN_CONN_INTERVAL               MSEC_TO_UNITS(20, UNIT_1_25_MS)             /**< Minimum acceptable connection interval (20 ms), Connection interval uses 1.25 ms units. */
#define MAX_CONN_INTERVAL               MSEC_TO_UNITS(75, UNIT_1_25_MS)             /**< Maximum acceptable connection interval (75 ms), Connection interval uses 1.25 ms units. */
#define SLAVE_LATENCY                   0                                           /**< Slave latency. */
#define CONN_SUP_TIMEOUT                MSEC_TO_UNITS(4000, UNIT_10_MS)             /**< Connection supervisory timeout (4 seconds), Supervision Timeout uses 10 ms units. */
#define FIRST_CONN_PARAMS_UPDATE_DELAY  APP_TIMER_TICKS(5000)                       /**< Time from initiating event (connect or start of notification) to first time sd_ble_gap_conn_param_update is called (5 seconds). */
#define NEXT_CONN_PARAMS_UPDATE_DELAY   APP_TIMER_TICKS(30000)                      /**< Time between each call to sd_ble_gap_conn_param_update after the first call (30 seconds). */
#define MAX_CONN_PARAMS_UPDATE_COUNT    3                                           /**< Number of attempts before giving up the connection parameter negotiation. */
#define DEAD_BEEF                       0xDEADBEEF                                  /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

BLE_NUS_DEF(m_nus, NRF_SDH_BLE_TOTAL_LINK_COUNT);                                   /**< BLE NUS service instance. */
NRF_BLE_GATT_DEF(m_gatt);                                                           /**< GATT module instance. */
BLE_ADVERTISING_DEF(m_advertising);                                                 /**< Advertising module instance. */

static uint16_t   m_conn_handle          = BLE_CONN_HANDLE_INVALID;                 /**< Handle of the current connection. */
static uint16_t   m_ble_nus_max_data_len = BLE_GATT_ATT_MTU_DEFAULT - 3;            /**< Maximum length of data (in bytes) that can be transmitted to the peer by the Nordic UART service module. */
static ble_uuid_t m_adv_uuids[]          =                                          /**< Universally unique service identifier. */
{
    {BLE_UUID_NUS_SERVICE, NUS_SERVICE_UUID_TYPE}
};

/*****************************************Pairing Mode*********************************/
#define LESC_MITM_NC                    1                                               /**< Use MITM (Numeric Comparison). */
#define SEC_PARAMS_BOND                 1                                               /**< Perform bonding. */
#if LESC_MITM_NC
#define SEC_PARAMS_MITM                 1                                               /**< Man In The Middle protection required. */
#define SEC_PARAMS_IO_CAPABILITIES      BLE_GAP_IO_CAPS_DISPLAY_ONLY                    /**< Display Yes/No to force Numeric Comparison. */
#else
#define SEC_PARAMS_MITM                 0                                               /**< Man In The Middle protection required. */
#define SEC_PARAMS_IO_CAPABILITIES      BLE_GAP_IO_CAPS_NONE                            /**< No I/O caps. */
#endif
#define SEC_PARAMS_LESC                 1                                               /**< LE Secure Connections pairing required. */
#define SEC_PARAMS_KEYPRESS             0                                               /**< Keypress notifications not required. */
#define SEC_PARAMS_OOB                  0                                               /**< Out Of Band data not available. */
#define SEC_PARAMS_MIN_KEY_SIZE         7                                               /**< Minimum encryption key size in octets. */
#define SEC_PARAMS_MAX_KEY_SIZE         16                                              /**< Maximum encryption key size in octets. */
/***************************************************************************************/

//extern rui_cfg_t g_rui_cfg_t;
//APP_TIMER_DEF(autosend_timer_id);   // timer ID
//int autosend_enable = 0;

//APP_TIMER_DEF(wdt_timer_id);   // timer ID
//#define WDT_FEED_PERIOD     60*1000
//int wdt_flag = 0;

//static ble_evt_connect uhal_ble_evt_connect_callback = NULL; 
//static ble_evt_disconnect uhal_ble_evt_disconnect_callback = NULL;
/*************************************Define for Beacon Mode***********************************************/
#define APP_BEACON_INFO_LENGTH          0x17                               /**< Total length of information advertised by the Beacon. */
#define APP_ADV_DATA_LENGTH             0x15                               /**< Length of manufacturer specific data in the advertisement. */
#define APP_DEVICE_TYPE                 0x02                               /**< 0x02 refers to Beacon. */
#define APP_MEASURED_RSSI               0xC3                               /**< The Beacon's measured RSSI at 1 meter distance in dBm. */
#define APP_COMPANY_IDENTIFIER          0x00FF                             /**< Company identifier for Nordic Semiconductor ASA(0x0059). as per www.bluetooth.org. */
#define APP_MAJOR_VALUE                 0x01, 0x02                         /**< Major value used to identify Beacons. */
#define APP_MINOR_VALUE                 0x03, 0x04                         /**< Minor value used to identify Beacons. */
#define APP_BEACON_UUID                 0x01, 0x12, 0x23, 0x34, \
                                        0x45, 0x56, 0x67, 0x78, \
                                        0x89, 0x9a, 0xab, 0xbc, \
                                        0xcd, 0xde, 0xef, 0xf0            /**< Proprietary UUID for Beacon. */
static ble_gap_adv_params_t m_adv_params;                                  /**< Parameters to be passed to the stack when starting advertising. */
static ble_advdata_t beacon_advdata;
static ble_advdata_t beacon_srdata;
static ble_advdata_manuf_data_t manuf_specific_data;

static uint8_t              m_adv_handle = BLE_GAP_ADV_SET_HANDLE_NOT_SET; /**< Advertising handle used to identify an advertising set. */
static uint8_t              m_enc_advdata[BLE_GAP_ADV_SET_DATA_SIZE_MAX];  /**< Buffer for storing an encoded advertising set. */
static uint8_t              m_enc_srdata[BLE_GAP_ADV_SET_DATA_SIZE_MAX];  /**< Buffer for storing an encoded scan set. */

#define UUID_VAL_OFFSET_IN_BEACON_INFO  1                                  /**< Position of the MSB of the UUID Value in m_beacon_info array. */
#define MAJ_VAL_OFFSET_IN_BEACON_INFO   18                                 /**< Position of the MSB of the Major Value in m_beacon_info array. */

/**@brief Struct that contains pointers to the encoded advertising data. */
static ble_gap_adv_data_t m_adv_data =
{
    .adv_data =
    {
        .p_data = m_enc_advdata,
        .len    = BLE_GAP_ADV_SET_DATA_SIZE_MAX
    },
    .scan_rsp_data =
    {
        .p_data = m_enc_srdata,
        .len    = BLE_GAP_ADV_SET_DATA_SIZE_MAX
    }
};

static uint8_t m_beacon_info[APP_BEACON_INFO_LENGTH] =                    /**< Information advertised by the Beacon. */
{
    APP_DEVICE_TYPE,     // Manufacturer specific information. Specifies the device type in this
                         // implementation.
    APP_ADV_DATA_LENGTH, // Manufacturer specific information. Specifies the length of the
                         // manufacturer specific data in this implementation.
    APP_BEACON_UUID,     // 128 bit UUID value.
    APP_MAJOR_VALUE,     // Major arbitrary value that can be used to distinguish between Beacons.
    APP_MINOR_VALUE,     // Minor arbitrary value that can be used to distinguish between Beacons.
    APP_MEASURED_RSSI    // Manufacturer specific information. The Beacon's measured TX power in
                         // this implementation.
};

/*************************************Define for Beacon Mode***********************************************/

#ifdef BLE_CENTRAL_SUPPORT

APP_TIMER_DEF(ble_mode_id);   // timer ID
#define BLE_MODE_SWITCH          5*1000

BLE_NUS_C_DEF(m_ble_nus_c);                                             /**< BLE NUS service client instance. */
//BLE_RCS_C_ARRAY_DEF(m_rcs_c, NRF_SDH_BLE_CENTRAL_LINK_COUNT);           /**< Rak Custom client instances. */
BLE_DB_DISCOVERY_ARRAY_DEF(m_db_disc, NRF_SDH_BLE_CENTRAL_LINK_COUNT);  /**< Database discovery module instances. */
NRF_BLE_SCAN_DEF(m_scan);                                               /**< Scanning Module instance. */
#define TARGET_UUID                                 BLE_UUID_SERVICE_PRIMARY       /**< Target device name that application is looking for. */
static char const m_target_periph_name[] = "BLE Sensor";                /**< Name of the device to try to connect to. This name is searched for in the scanning report data. */
#define BLE_GAP_SCAN_INTERVAL_MS_MIN                3                   /**< Minimum Scan interval in ms. */
#define BLE_GAP_SCAN_INTERVAL_MS_MAX                40960               /**< Maximum Scan interval in ms, i.e. 40.96 s. */
#define BLE_GAP_SCAN_WINDOW_MS_MIN                  3                   /**< Minimum Scan window in ms. */
//#define BLE_GAP_SCAN_WINDOW_1MBPS_US_MIN          1875UL                /**< Minimum Scan window in us on 1 Mbps PHY. */
#define BLE_GAP_SCAN_WINDOW_MS_MAX                  40960               /**< Maximum Scan window in ms, i.e. 40.96 s. */

#define PERIPHERAL_DEVICE_NAME   m_target_periph_name                   // <s> DEVICE_NAME - Name of device. Will be included in the advertising data.
#define SCAN_INTERVAL   160                                             // <o> SCAN_INTERVAL - Scanning interval, determines scan interval in units of 0.625 millisecond. 
#define SCAN_WINDOW     160                                             // SCAN_WINDOW - Scanning window, determines scan window in units of 0.625 millisecond. 
#define SCAN_DURATION   0x0000                                          /**< Duration of the scanning in units of 10 milliseconds. If set to 0x0000, scanning will continue until it is explicitly disabled. */
#define CENTRAL_LED      BSP_BOARD_LED_0

//uint8_t Mac_index[20][6]={0};

static void scan_start(void);

// Scan parameters requested for scanning and connection.
static ble_gap_scan_params_t m_scan_param_coded_phy =               // Long Range support
{
    .extended      = 1,                                             // must to change sdk_config "NRF_BLE_SCAN_BUFFER" 31 -> 255
    .active        = 1,
    .interval      = SCAN_INTERVAL,
    .window        = SCAN_WINDOW,                                   /**< Scan window in 625 us units. @sa BLE_GAP_SCAN_WINDOW.
                                                                        If scan_phys contains both @ref BLE_GAP_PHY_1MBPS and
                                                                        @ref BLE_GAP_PHY_CODED interval shall be larger than or
                                                                        equal to twice the scan window. */
    .timeout       = 0x0000,                                        // No timeout.
    .scan_phys     = BLE_GAP_PHY_CODED, 
    .filter_policy = BLE_GAP_SCAN_FP_ACCEPT_ALL,
};

static ble_gap_scan_params_t m_scan_param_1MBps =
{
    .active        = 1,
    .interval      = SCAN_INTERVAL,
    .window        = SCAN_WINDOW,
    .timeout       = 0x0000,                                        // No timeout.
    .scan_phys     = BLE_GAP_PHY_AUTO,                              //BLE_GAP_PHY_1MBPS,
    .filter_policy = BLE_GAP_SCAN_FP_ACCEPT_ALL,
};

// ble device running mode
typedef enum
{
    BLE_WORK_PERIPHERAL = 0,
    BLE_WORK_CENTRAL,
    BLE_WORK_OBSERVER
} ble_work_mode_t;

//extern rui_cfg_t g_rui_cfg_t;
static ble_central_cfg_t uhal_g_ble_cfg_t =
    {
        /* BLE default configuration */
        .work_mode = BLE_WORK_PERIPHERAL,
        .long_range_enable = 0,
};

static uint8_t g_ble_current_mode = BLE_WORK_PERIPHERAL;


#ifdef S132
#define SCAN_INTERVAL             0x00A0                                /**< Determines scan interval in units of 0.625 millisecond. */
#define SCAN_WINDOW               0x0050                                /**< Determines scan window in units of 0.625 millisecond. */
#define SCAN_DURATION             0x0000                                /**< Duration of the scanning in units of 10 milliseconds. If set to 0x0000, scanning will continue until it is explicitly disabled. */

#define MIN_CONNECTION_INTERVAL   MSEC_TO_UNITS(7.5, UNIT_1_25_MS)      /**< Determines minimum connection interval in milliseconds. */
#define MAX_CONNECTION_INTERVAL   MSEC_TO_UNITS(30, UNIT_1_25_MS)       /**< Determines maximum connection interval in milliseconds. */
#define SLAVE_LATENCY             0                                     /**< Determines slave latency in terms of connection events. */
#define SUPERVISION_TIMEOUT       MSEC_TO_UNITS(4000, UNIT_10_MS)       /**< Determines supervision time-out in units of 10 milliseconds. */

static uint8_t auto_connect = 0;

static uint8_t m_scan_buffer_data[BLE_GAP_SCAN_BUFFER_MIN]; /**< buffer where advertising reports will be stored by the SoftDevice. */

/**@brief Pointer to the buffer where advertising reports will be stored by the SoftDevice. */
static ble_data_t m_scan_buffer =
{
    m_scan_buffer_data,
    BLE_GAP_SCAN_BUFFER_MIN
};

/**@brief Scan parameters requested for scanning and connection. */
static ble_gap_scan_params_t const m_scan_params =
{
    .active   = 1,
    .interval = SCAN_INTERVAL,
    .window   = SCAN_WINDOW,

    .timeout           = SCAN_DURATION,
    .scan_phys         = BLE_GAP_PHY_1MBPS,
    .filter_policy     = BLE_GAP_SCAN_FP_ACCEPT_ALL,

};

/**@brief Connection parameters requested for connection. */
static ble_gap_conn_params_t const m_connection_param =
{
    (uint16_t)MIN_CONNECTION_INTERVAL,
    (uint16_t)MAX_CONNECTION_INTERVAL,
    (uint16_t)SLAVE_LATENCY,
    (uint16_t)SUPERVISION_TIMEOUT
};
#endif //S132
#endif // BLE_CENTRAL_SUPPORT


#ifdef SUPPORT_USB
#include "app_usbd_core.h"
#include "app_usbd.h"
#include "app_usbd_string_desc.h"
#include "app_usbd_cdc_acm.h"
#include "app_usbd_serial_num.h"
static uint8_t uhal_Usbd_send_buffer[256]={0};
#endif
static ble_advertising_init_t init;
static int uhal_is_scanning = 0;

void uhal_ble_stack_init(void);
void uhal_gap_params_init(void);
void uhal_gatt_init(void);
void uhal_services_init(void);
void uhal_advertising_init(void);
void uhal_conn_params_init(void);
int32_t uhal_advertising_start(uint8_t time_out);
int32_t uhal_advertising_stop(uint8_t temp_processing);
int32_t uhal_advertising_status(void);

void uhal_stop_ble(void);
size_t uhal_nus_available(void);
int32_t uhal_nus_read(uint8_t *Buffer, int32_t NumberOfBytes);
int32_t uhal_nus_write(uint8_t *pdata, uint16_t length);

int32_t uhal_ble_get_txpower(void);
void uhal_ble_set_txpower(drv_ble_tx_power_t tx_power);
int32_t uhal_ble_set_device_name(char *devic_name, uint8_t device_name_length);
char* uhal_ble_get_device_name(void);

int32_t uhal_ble_get_macaddress(uint8_t *macaddr);
int32_t uhal_ble_set_adv_interval(uint32_t adv_interval);
int32_t uhal_ble_get_adv_interval(void);
void uhal_ble_set_adv_slow_mode(uint8_t adv_mode);
uint8_t uhal_ble_get_adv_slow_mode(void);
void uhal_ble_set_adv_fast_mode(uint8_t adv_mode);
uint8_t uhal_ble_get_adv_fast_mode();
void uhal_ble_switch_service_mode(drv_ble_service_mode service_mode);
int32_t uhal_ble_set_beacon_major(uint16_t major_value);
int32_t uhal_ble_set_beacon_minor(uint16_t minor_value);
int32_t uhal_ble_set_beacon_uuid(uint8_t beaconUuid[]);
int32_t uhal_ble_set_beacon_power(int8_t beacon_power);
int32_t uhal_ble_set_beacon_custom_payload(uint8_t cus_adv_data[], uint8_t cus_adv_len);

void uhal_ble_serial_init (SERIAL_PORT Port, uint32_t BaudRate, SERIAL_WORD_LEN_E DataBits, SERIAL_STOP_BIT_E StopBits, SERIAL_PARITY_E Parity, SERIAL_WIRE_MODE_E WireMode);
void uhal_ble_serial_deinit (SERIAL_PORT Port);
int32_t uhal_ble_serial_write (SERIAL_PORT Port, uint8_t const *Buffer, int32_t NumberOfBytes, uint32_t Timeout);
int32_t uhal_ble_serial_read (SERIAL_PORT Port, uint8_t *Buffer, int32_t NumberOfBytes, uint32_t Timeout);
int32_t uhal_ble_serial_peek (SERIAL_PORT Port);
void uhal_ble_serial_flush (SERIAL_PORT Port, uint32_t Timeout);
size_t uhal_ble_serial_read_available (SERIAL_PORT Port);

void uhal_ble_set_work_mode(ble_work_mode_t mode, bool long_range_enable);
int32_t uhal_ble_set_scan_interval_window(uint16_t scan_interval, uint16_t scan_window);
void uhal_ble_scan_start(uint16_t scan_sec);
void uhal_nus_peer_manager_init(void);
int32_t uhal_nus_set_keypairing(uint8_t *pairing_key, uint8_t key_length);
int32_t uhal_nus_set_permission(uint8_t permission);
void uhal_ble_wake_lock (void);
void uhal_ble_wake_unlock (void);
void uhal_ble_wake_unlock_all (void);
#endif  // #ifndef _UHAL_BLE_H_
