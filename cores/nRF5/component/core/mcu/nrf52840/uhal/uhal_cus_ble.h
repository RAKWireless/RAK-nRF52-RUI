/**
 * Copyright (c) 2016 - 2019, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/** @file
 *
 * @defgroup nrf_ble_qwr Queued Writes module
 * @{
 * @ingroup ble_sdk_lib
 * @brief Module for handling Queued Write operations.
 *
 * @details This module handles prepare write, execute write, and cancel write
 * commands. It also manages memory requests related to these operations.
 *
 * @note     The application must propagate BLE stack events to this module by calling
 *           @ref nrf_ble_qwr_on_ble_evt().
 */

#ifndef BLE_CUS_H__
#define BLE_CUS_H__

#include <stdint.h>
#include <stdbool.h>
#include "ble.h"
#include "sdk_common.h"
#include <string.h>
#include "boards.h"
#include "nrf_gpio.h"
#include "nordic_common.h"
#include "nrf.h"
#include "app_error.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "app_timer.h"
#include "fds.h"
#include "peer_manager.h"
#include "peer_manager_handler.h"
#include "bsp_btn_ble.h"
#include "ble_conn_state.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_qwr.h"
#include "nrf_pwr_mgmt.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
#include "udrv_errno.h"
#include "udrv_ble.h"

#define CUSTOM_SERVICE_UUID_BASE          {0xFE, 0x10, 0xD7, 0x1C, 0x72, 0x96, 0xBE, 0xB8, \
                                          0x42, 0x5C, 0xE2, 0x3A, 0xAA, 0x03, 0x8C, 0xDD}


#define CUSTOM_SERVICE_UUID               0x1400
#define CUSTOM_VALUE_CHAR_UUID_1          0x1401
#define CUSTOM_VALUE_CHAR_UUID_2          0x1402
#define CHARACTERISTIC_MAX_NUM  3
static uint16_t custom_service_uuid = CUSTOM_SERVICE_UUID;

// Forward declaration of the ble_cus_t type.
typedef struct ble_cus_s ble_cus_t;

/**@brief   Macro for defining a ble_cus instance.
 *
 * @param   _name Name of the instance.
 * @hideinitializer
 */
#define BLE_CUS_DEF(_name)                                                                          \
static ble_cus_t _name;                                                                             \
NRF_SDH_BLE_OBSERVER(_name ## _obs,                                                                 \
                     BLE_HRS_BLE_OBSERVER_PRIO,                                                     \
                     ble_cus_on_ble_evt, &_name)


/**@brief Custom Service event type. */
typedef enum
{
    BLE_CUS_EVT_NOTIFICATION_ENABLED,                             /**< Custom value notification enabled event. */
    BLE_CUS_EVT_NOTIFICATION_DISABLED,                            /**< Custom value notification disabled event. */
    BLE_CUS_EVT_DISCONNECTED,
    BLE_CUS_EVT_CONNECTED
} ble_cus_evt_type_t;

/**@brief Custom Service event. */
typedef struct
{
    ble_cus_evt_type_t evt_type;                                  /**< Type of event. */
} ble_cus_evt_t;

/**@brief Custom Service event handler type. */
typedef void (* ble_cus_evt_handler_t) (ble_cus_t * p_cus, ble_cus_evt_t * p_evt);



/**@brief Custom Service init structure. This contains all options and data needed for
 *        initialization of the service.*/
typedef struct
{
    ble_cus_evt_handler_t         evt_handler;                    /**< Event handler to be called for handling events in the Custom Service. */
    uint8_t                       initial_custom_value;           /**< Initial custom value */
    ble_srv_cccd_security_mode_t  custom_value_char_attr_md;      /**< Initial security level for Custom characteristics attribute */
} ble_cus_init_t;

/**@brief Custom Service structure. This contains various status information for the service. */
struct ble_cus_s
{
    ble_cus_evt_handler_t         evt_handler;                    /**< Event handler to be called for handling events in the Custom Service. */
    uint16_t                      service_handle;                 /**< Handle of Custom Service (as provided by the BLE stack). */
    ble_gatts_char_handles_t      custom_value_handles[CHARACTERISTIC_MAX_NUM];           /**< Handles related to the Custom Value characteristic. */
    //ble_gatts_char_handles_t      custom_value_handles_2;         /**< Handles related to the Custom Value characteristic. */
    uint16_t                      conn_handle;                    /**< Handle of the current connection (as provided by the BLE stack, is BLE_CONN_HANDLE_INVALID if not in a connection). */
    uint8_t                       uuid_type; 
};

typedef struct
{
    uint16_t char_uuid;
    uint8_t permissions;
    uint8_t properties;
    uint8_t fixedlen;
    uint8_t *send_data;
    uint8_t *notify_data;
    uint8_t is_notify_enable;
} cus_characteristic_attribute_t;

void uhal_ble_cus_register_notify_handler (BLE_CUS_NOTIFY_HANDLER handler);
void uhal_ble_cus_register_send_handler (BLE_CUS_SEND_HANDLER handler);
void ble_cus_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_context);
void cus_timers_init(void);
void cus_ble_stack_init(void);
void cus_gap_params_init(void);
void cus_gatt_init(void);
void cus_services_init(uint8_t cus_base_uuid[]);
int32_t cus_add_char(uint16_t chars_uuid, uint32_t chars_properties, uint8_t chars_permission, uint16_t len);
void cus_advertising_init(void);
void cus_conn_params_init(void);
void cus_peer_manager_init(void);

void cus_application_timers_start(void);
void cus_advertising_start(bool erase_bonds);
void cus_notify(uint8_t *notify_data, uint16_t chars_uuid);  //send to smart phone apps
void cus_write(uint8_t *send_data, uint16_t chars_uuid);     //send to smart phone apps
uint8_t cus_is_notifyEnabled(uint16_t chars_uuid);

#endif // BLE_CUS_H__