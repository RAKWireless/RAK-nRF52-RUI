/**
 * Copyright (c) 2014 - 2019, Nordic Semiconductor ASA
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
 * @defgroup ble_sdk_app_template_main main.c
 * @{
 * @ingroup ble_sdk_app_template
 * @brief Template project main file.
 *
 * This file contains a template for creating a new application. It has the code necessary to wakeup
 * from button, advertise, get a connection restart advertising on disconnect and if no new
 * connection created go back to system-off mode.
 * It can easily be used as a starting point for creating a new application, the comments identified
 * with 'YOUR_JOB' indicates where and how you can customize.
 */

#include "uhal_cus_ble.h"

extern uint32_t uhal_ble_wlock_cnt;

#define DEVICE_NAME "RAK"                  /**< Name of device. Will be included in the advertising data. */
#define MANUFACTURER_NAME "NordicSemiconductor" /**< Manufacturer. Will be passed to Device Information Service. */
#define APP_ADV_INTERVAL 300                    /**< The advertising interval (in units of 0.625 ms. This value corresponds to 187.5 ms). */

#define APP_ADV_DURATION 18000  /**< The advertising duration (180 seconds) in units of 10 milliseconds. */
#define APP_BLE_OBSERVER_PRIO 3 /**< Application's BLE observer priority. You shouldn't need to modify this value. */
#define APP_BLE_CONN_CFG_TAG 1  /**< A tag identifying the SoftDevice BLE configuration. */

#define MIN_CONN_INTERVAL MSEC_TO_UNITS(100, UNIT_1_25_MS) /**< Minimum acceptable connection interval (0.1 seconds). */
#define MAX_CONN_INTERVAL MSEC_TO_UNITS(200, UNIT_1_25_MS) /**< Maximum acceptable connection interval (0.2 second). */
#define SLAVE_LATENCY 0                                    /**< Slave latency. */
#define CONN_SUP_TIMEOUT MSEC_TO_UNITS(4000, UNIT_10_MS)   /**< Connection supervisory timeout (4 seconds). */

#define FIRST_CONN_PARAMS_UPDATE_DELAY APP_TIMER_TICKS(5000) /**< Time from initiating event (connect or start of notification) to first time sd_ble_gap_conn_param_update is called (5 seconds). */
#define NEXT_CONN_PARAMS_UPDATE_DELAY APP_TIMER_TICKS(30000) /**< Time between each call to sd_ble_gap_conn_param_update after the first call (30 seconds). */
#define MAX_CONN_PARAMS_UPDATE_COUNT 3                       /**< Number of attempts before giving up the connection parameter negotiation. */

#define SEC_PARAM_BOND 1                               /**< Perform bonding. */
#define SEC_PARAM_MITM 0                               /**< Man In The Middle protection not required. */
#define SEC_PARAM_LESC 0                               /**< LE Secure Connections not enabled. */
#define SEC_PARAM_KEYPRESS 0                           /**< Keypress notifications not enabled. */
#define SEC_PARAM_IO_CAPABILITIES BLE_GAP_IO_CAPS_NONE /**< No I/O capabilities. */
#define SEC_PARAM_OOB 0                                /**< Out Of Band data not available. */
#define SEC_PARAM_MIN_KEY_SIZE 7                       /**< Minimum encryption key size. */
#define SEC_PARAM_MAX_KEY_SIZE 16                      /**< Maximum encryption key size. */

#define DEAD_BEEF 0xDEADBEEF /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

#define NOTIFICATION_INTERVAL APP_TIMER_TICKS(1000)
#define APP_FEATURE_NOT_SUPPORTED BLE_GATT_STATUS_ATTERR_APP_BEGIN + 2 /**< Reply when unsupported features are requested. */
APP_TIMER_DEF(m_notification_timer_id);

static uint8_t m_custom_value = 0;
static uint16_t m_ble_nus_max_data_len = BLE_GATT_ATT_MTU_DEFAULT - 3; /**< Maximum length of data (in bytes) that can be transmitted to the peer by the Nordic UART service module. */

/* YOUR_JOB: Add code to initialize the services used by the application.*/
static ble_cus_init_t cus_init;

#define OPCODE_LENGTH 1
#define HANDLE_LENGTH 2

NRF_BLE_GATT_DEF(m_cus_gatt);           /**< GATT module instance. */
NRF_BLE_QWR_DEF(m_qwr);                 /**< Context for the Queued Write module.*/
BLE_ADVERTISING_DEF(m_cus_advertising); /**< Advertising module instance. */
BLE_CUS_DEF(m_cus);

uint16_t m_cus_conn_handle = BLE_CONN_HANDLE_INVALID; /**< Handle of the current connection. */

/* YOUR_JOB: Declare all services structure your application is using
 *  BLE_XYZ_DEF(m_xyz);
 */

// YOUR_JOB: Use UUIDs for service(s) used in your application.
/**< Universally unique service identifiers. */
/*
static ble_uuid_t cus_adv_uuids[] = 
{
    {CUSTOM_SERVICE_UUID, BLE_UUID_TYPE_VENDOR_BEGIN}
};
*/

static ble_uuid_t cus_adv_uuids[1];
static cus_characteristic_attribute_t cus_char_att[CHARACTERISTIC_MAX_NUM];
static uint8_t cus_chars_num = 0;
static uint8_t chars_cccd_index = 0;
static void (*CUS_NOTIFY_HANDLER)(uint16_t, uint8_t *);
static void (*CUS_SEND_HANDLER)(uint16_t, uint8_t *);
static uint8_t  adv_uuid_type;
void uhal_ble_cus_register_notify_handler(BLE_CUS_NOTIFY_HANDLER handler)
{
    CUS_NOTIFY_HANDLER = handler;
}

void uhal_ble_cus_register_send_handler (BLE_CUS_SEND_HANDLER handler)
{
    CUS_SEND_HANDLER = handler;
}

/**@brief Function for handling the Connect event.
 *
 * @param[in]   p_cus       Custom Service structure.
 * @param[in]   p_ble_evt   Event received from the BLE stack.
 */
static void on_connect(ble_cus_t *p_cus, ble_evt_t const *p_ble_evt)
{
    p_cus->conn_handle = p_ble_evt->evt.gap_evt.conn_handle;

    ble_cus_evt_t evt;

    evt.evt_type = BLE_CUS_EVT_CONNECTED;

    p_cus->evt_handler(p_cus, &evt);
}

/**@brief Function for handling the Disconnect event.
 *
 * @param[in]   p_cus       Custom Service structure.
 * @param[in]   p_ble_evt   Event received from the BLE stack.
 */
static void on_disconnect(ble_cus_t *p_cus, ble_evt_t const *p_ble_evt)
{
    UNUSED_PARAMETER(p_ble_evt);
    p_cus->conn_handle = BLE_CONN_HANDLE_INVALID;
}

ret_code_t ble_cus_custom_value_update(ble_cus_t *p_cus, uint8_t *custom_data, uint16_t chars_uuid)
{
    if (p_cus == NULL)
    {
        return NRF_ERROR_NULL;
    }
    uint8_t cus_chars_now;
    for (cus_chars_now = 0; cus_chars_now < CHARACTERISTIC_MAX_NUM; cus_chars_now++)
    {
        if (chars_uuid == cus_char_att[cus_chars_now].char_uuid)
            break;
    }

    ret_code_t err_code = NRF_SUCCESS;
    ble_gatts_value_t gatts_value;

    // Initialize value struct.
    memset(&gatts_value, 0, sizeof(gatts_value));

    gatts_value.len = cus_char_att[cus_chars_now].fixedlen; //sizeof(uint8_t);
    gatts_value.offset = 0;
    gatts_value.p_value = custom_data;
    //NRF_LOG_INFO("&gatts_value.p_value = %s", &gatts_value.p_value);
    NRF_LOG_INFO("gatts_value.p_value = %s", gatts_value.p_value);
    //NRF_LOG_INFO("*gatts_value.p_value = %s", *gatts_value.p_value);

    // Update database.
    err_code = sd_ble_gatts_value_set(p_cus->conn_handle,
                                      p_cus->custom_value_handles[cus_chars_now].value_handle,
                                      &gatts_value);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    }

    // Send value if connected
    if ((p_cus->conn_handle != BLE_CONN_HANDLE_INVALID))
    {
        ble_gatts_hvx_params_t hvx_params;

        memset(&hvx_params, 0, sizeof(hvx_params));

        hvx_params.handle = p_cus->custom_value_handles[cus_chars_now].value_handle;
        hvx_params.type = BLE_GATT_HVX_NOTIFICATION;
        hvx_params.offset = gatts_value.offset;
        hvx_params.p_len = &gatts_value.len;
        hvx_params.p_data = gatts_value.p_value;
        //NRF_LOG_INFO("&hvx_params.p_data = %s", &hvx_params.p_data);
        NRF_LOG_INFO("hvx_params.p_data = %s", hvx_params.p_data);
        //NRF_LOG_INFO("*hvx_params.p_data = %s", *hvx_params.p_data);
        err_code = sd_ble_gatts_hvx(p_cus->conn_handle, &hvx_params);

        if (CUS_NOTIFY_HANDLER)
        {
            NRF_LOG_INFO("CUS_NOTIFY_HANDLER");
            NRF_LOG_INFO("cus_char_att[cus_chars_now].char_uuid = %X", cus_char_att[cus_chars_now].char_uuid);
            NRF_LOG_INFO("hvx_params.p_data = %s", hvx_params.p_data);
            NRF_LOG_INFO("is_notify_enable = %d", cus_char_att[cus_chars_now].is_notify_enable);
            CUS_NOTIFY_HANDLER(cus_char_att[cus_chars_now].char_uuid, hvx_params.p_data);
        }
    }
    else
    {
        err_code = NRF_ERROR_INVALID_STATE;
    }

    return err_code;
}

/**@brief Function for handling the Write event.
 *
 * @param[in]   p_cus       Custom Service structure.
 * @param[in]   p_ble_evt   Event received from the BLE stack.
 */
static void on_write(ble_cus_t *p_cus, ble_evt_t const *p_ble_evt)
{
    ble_gatts_evt_write_t *p_evt_write = &p_ble_evt->evt.gatts_evt.params.write;

    ble_gatts_evt_rw_authorize_request_t req;

    req = p_ble_evt->evt.gatts_evt.params.authorize_request;

    //NRF_LOG_DEBUG("p_evt_write-uuid :%X", p_evt_write->uuid.uuid);
    //NRF_LOG_DEBUG("req.request.read.uuid :%X", req.request.read.uuid.uuid);
    //NRF_LOG_DEBUG("req.request.read.uuid :%X", req.request.write.uuid.uuid);
    //NRF_LOG_DEBUG("p_cus->service_handle :%d", p_cus->service_handle);
    //NRF_LOG_DEBUG("p_evt_write->handle :%d", p_evt_write->handle);
    //NRF_LOG_DEBUG("p_evt_write->len :%d", p_evt_write->len);

    uint8_t cus_chars_now;
    for (cus_chars_now = 0; cus_chars_now < CHARACTERISTIC_MAX_NUM; cus_chars_now++)
    {
        //NRF_LOG_DEBUG("p_cus->custom_value_handles[cus_chars_now].value_handle :%d", p_cus->custom_value_handles[cus_chars_now].value_handle);
        //NRF_LOG_DEBUG("p_cus->custom_value_handles[cus_chars_now].cccd_handle :%d", p_cus->custom_value_handles[cus_chars_now].cccd_handle);

        if ((p_evt_write->handle == p_cus->custom_value_handles[cus_chars_now].value_handle) || (p_evt_write->handle == p_cus->custom_value_handles[cus_chars_now].cccd_handle))
            break;
    }

    if (p_evt_write->handle == p_cus->custom_value_handles[cus_chars_now].user_desc_handle)
    {
        NRF_LOG_INFO("user_desc_handle");
    }
    if (p_evt_write->handle == p_cus->custom_value_handles[cus_chars_now].sccd_handle)
    {
        NRF_LOG_INFO("sccd_handle");
    }

    // Check if the handle passed with the event matches the Custom Value Characteristic handle.
    if (p_evt_write->handle == p_cus->custom_value_handles[cus_chars_now].value_handle)
    {
        // Put specific task here.
        if (p_evt_write->data[0] == 0x01)
        {
            NRF_LOG_DEBUG("Get data 1 : %02X", p_evt_write->data[0]);
            nrf_gpio_pin_clear(LED_4);
        }
        else if (p_evt_write->data[0] == 0x00)
        {
            NRF_LOG_DEBUG("Get data 2 : %02X", p_evt_write->data[0]);
            nrf_gpio_pin_set(LED_4);
        }
        else
        {
            NRF_LOG_INFO("p_evt_write->len  : %d", p_evt_write->len);
            NRF_LOG_HEXDUMP_DEBUG(p_evt_write->data, p_evt_write->len);
        }
    }

    // Check if the Custom value CCCD is written to and that the value is the appropriate length, i.e 2 bytes.
    if ((p_evt_write->handle == p_cus->custom_value_handles[cus_chars_now].cccd_handle) && (p_evt_write->len == 2))
    {
        // CCCD written, call application event handler
        if (p_cus->evt_handler != NULL)
        {
            ble_cus_evt_t evt;

            if (ble_srv_is_notification_enabled(p_evt_write->data))
            {
                evt.evt_type = BLE_CUS_EVT_NOTIFICATION_ENABLED;
                //ble_cus_custom_value_update(&m_cus, m_custom_value, cus_char_att[cus_chars_now].char_uuid);
                cus_char_att[cus_chars_now].is_notify_enable = 1;
                ble_cus_custom_value_update(&m_cus, cus_char_att[cus_chars_now].notify_data, cus_char_att[cus_chars_now].char_uuid);
            }
            else
            {
                evt.evt_type = BLE_CUS_EVT_NOTIFICATION_DISABLED;
                cus_char_att[cus_chars_now].is_notify_enable = 0;
                if (CUS_NOTIFY_HANDLER)
                {
                    NRF_LOG_INFO("CUS_NOTIFY_HANDLER is Disabled");
                    CUS_NOTIFY_HANDLER(cus_char_att[cus_chars_now].char_uuid, 0);
                }
            }
            // Call the application event handler.
            p_cus->evt_handler(p_cus, &evt);

            //call cccd index :　chars_cccd_index
        }
    }
}

void ble_cus_on_ble_evt(ble_evt_t const *p_ble_evt, void *p_context)
{
    if (custom_service_uuid != CUSTOM_SERVICE_UUID)
    {
        ble_cus_t *p_cus = (ble_cus_t *)p_context;

        if (p_cus == NULL || p_ble_evt == NULL)
        {
            return;
        }

        switch (p_ble_evt->header.evt_id)
        {
        case BLE_GAP_EVT_CONNECTED:
            on_connect(p_cus, p_ble_evt);
            break;

        case BLE_GAP_EVT_DISCONNECTED:
            on_disconnect(p_cus, p_ble_evt);
            break;

        case BLE_GATTS_EVT_WRITE:
            NRF_LOG_INFO("Write Event");
            on_write(p_cus, p_ble_evt);
            break;
        case BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST:
        {
            ret_code_t err_code = NRF_SUCCESS;
            ble_gatts_evt_rw_authorize_request_t req;
            ble_gatts_rw_authorize_reply_params_t auth_reply;

            req = p_ble_evt->evt.gatts_evt.params.authorize_request;
            NRF_LOG_INFO("BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST");

            if (req.type != BLE_GATTS_AUTHORIZE_TYPE_INVALID)
            {
                if (req.type == BLE_GATTS_AUTHORIZE_TYPE_READ)
                {
                    NRF_LOG_DEBUG("p_evt_write-uuid :%X", req.request.read.uuid.uuid);
                    uint8_t cus_chars_now;
                    for (cus_chars_now = 0; cus_chars_now < CHARACTERISTIC_MAX_NUM; cus_chars_now++)
                    {
                        if (req.request.read.uuid.uuid == cus_char_att[cus_chars_now].char_uuid)
                            break;
                    }
                    NRF_LOG_DEBUG("send_data:%s", cus_char_att[cus_chars_now].send_data);
                    memset(&auth_reply, 0, sizeof(auth_reply));
                    auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_READ;
                    auth_reply.params.read.gatt_status = BLE_GATT_STATUS_SUCCESS;
                    auth_reply.params.read.offset = 0;
                    auth_reply.params.read.len = cus_char_att[cus_chars_now].fixedlen;     //sizeof(uint16_t);
                    auth_reply.params.read.p_data = cus_char_att[cus_chars_now].send_data; //data_array;
                    auth_reply.params.read.update = 1;

                    err_code = sd_ble_gatts_rw_authorize_reply(p_ble_evt->evt.gap_evt.conn_handle, &auth_reply);
                    //NRF_LOG_INFO("err_code = %d", err_code);
                    APP_ERROR_CHECK(err_code);
                    if (CUS_SEND_HANDLER)
                    {
                        CUS_SEND_HANDLER(cus_char_att[cus_chars_now].char_uuid, cus_char_att[cus_chars_now].send_data);
                    }
                }
                if ((req.request.write.op == BLE_GATTS_OP_PREP_WRITE_REQ) ||
                    (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_NOW) ||
                    (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_CANCEL))
                {
                    if (req.type == BLE_GATTS_AUTHORIZE_TYPE_WRITE)
                    {
                        NRF_LOG_INFO("req.type == BLE_GATTS_AUTHORIZE_TYPE_WRITE");
                        auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_WRITE;
                    }
                    else
                    {
                        NRF_LOG_INFO("req.type == BLE_GATTS_AUTHORIZE_TYPE_READ");
                        auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_READ;
                    }
                    //auth_reply.params.write.gatt_status = APP_FEATURE_NOT_SUPPORTED;
                    NRF_LOG_INFO("req.type == else");

                    err_code = sd_ble_gatts_rw_authorize_reply(p_ble_evt->evt.gatts_evt.conn_handle,
                                                               &auth_reply);
                    NRF_LOG_INFO("err_code = %d", err_code);
                    APP_ERROR_CHECK(err_code);
                }
            }
            break;
        }
        default:
            // No implementation needed.
            //NRF_LOG_INFO("p_ble_evt->header.evt_id : %d", p_ble_evt->header.evt_id);
            break;
        }
    }
}

/**@brief Function for adding the Custom Value characteristic.
 *
 * @param[in]   p_cus        Custom Service structure.
 * @param[in]   p_cus_init   Information needed to initialize the service.
 *
 * @return      NRF_SUCCESS on success, otherwise an error code.
 */
static ret_code_t custom_value_char_add(ble_cus_t *p_cus, const ble_cus_init_t *p_cus_init, uint16_t cus_UUID, uint32_t chars_properties, uint8_t chars_permission)
{
    ret_code_t err_code;
    ble_gatts_char_md_t char_md;
    ble_gatts_attr_md_t cccd_md;
    ble_gatts_attr_t attr_char_value;
    ble_uuid_t ble_uuid;
    ble_gatts_attr_md_t attr_md;

    memset(&char_md, 0, sizeof(char_md));

    NRF_LOG_DEBUG("chars_properties : %d", chars_properties);
    NRF_LOG_DEBUG("chars_permission : %d", chars_permission);
    int bitmask = chars_properties;
    int mask = 1;
    while (bitmask)
    {
        switch (bitmask & mask)
        {
        case (CHR_PROPS_BROADCAST):
            char_md.char_props.broadcast = 1;
            NRF_LOG_DEBUG("CHR_PROPS_BROADCAST : %d", CHR_PROPS_BROADCAST);
            break;
        case (CHR_PROPS_READ):
            char_md.char_props.read = 1;
            NRF_LOG_DEBUG("CHR_PROPS_READ  : %d", CHR_PROPS_READ);
            break;
        case (CHR_PROPS_WRITE_WO_RESP):
            char_md.char_props.write_wo_resp = 1;
            NRF_LOG_DEBUG("CHR_PROPS_WRITE_WO_RESP : %d", CHR_PROPS_WRITE_WO_RESP);
            break;
        case (CHR_PROPS_WRITE):
            char_md.char_props.write = 1;
            NRF_LOG_DEBUG("CHR_PROPS_WRITE : %d", CHR_PROPS_WRITE);
            break;
        case (CHR_PROPS_NOTIFY):
            char_md.char_props.notify = 1;
            NRF_LOG_DEBUG("CHR_PROPS_NOTIFY : %d", CHR_PROPS_NOTIFY);
            break;
        case (CHR_PROPS_INDICATE):
            char_md.char_props.indicate = 1;
            NRF_LOG_DEBUG("CHR_PROPS_INDICATE : %d", CHR_PROPS_INDICATE);
            break;
        }
        bitmask &= ~mask;
        mask <<= 1;
    }

    char_md.p_char_user_desc = NULL;
    char_md.p_char_pf = NULL;
    char_md.p_user_desc_md = NULL;
    if (char_md.char_props.notify)
        char_md.p_cccd_md = &cccd_md;
    char_md.p_sccd_md = NULL;

    memset(&attr_md, 0, sizeof(attr_md));
    if (char_md.char_props.read)
    {
        attr_md.read_perm = p_cus_init->custom_value_char_attr_md.read_perm;
        attr_md.rd_auth = 1;
    }
    if (char_md.char_props.write)
    {
        attr_md.write_perm = p_cus_init->custom_value_char_attr_md.write_perm;
        attr_md.wr_auth = 0;
    }
    attr_md.vloc = BLE_GATTS_VLOC_STACK;
    attr_md.vlen = 1; //  1 <- variable attribute length , 0 <- fixed attribute length

    ble_uuid.type = p_cus->uuid_type;
    ble_uuid.uuid = cus_UUID;

    memset(&attr_char_value, 0, sizeof(attr_char_value));

    attr_char_value.p_uuid = &ble_uuid;
    attr_char_value.p_attr_md = &attr_md;
    attr_char_value.init_len = sizeof(uint8_t);
    attr_char_value.init_offs = 0;
    attr_char_value.max_len = BLE_GATTS_VAR_ATTR_LEN_MAX; //sizeof(uint8_t);

    memset(&cccd_md, 0, sizeof(cccd_md));

    if (chars_permission == SET_OPEN)
    {
        NRF_LOG_DEBUG("chars_permission == SET_OPEN");
        if (char_md.char_props.read)
            BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.read_perm);
        if (char_md.char_props.write)
            BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.write_perm);
        if (char_md.char_props.notify)
        {
            NRF_LOG_DEBUG("char_md.char_props.notify");
            //  Read  operation on Cccd should be possible without authentication.
            BLE_GAP_CONN_SEC_MODE_SET_OPEN(&cccd_md.read_perm);
            BLE_GAP_CONN_SEC_MODE_SET_OPEN(&cccd_md.write_perm);
            cccd_md.vloc = BLE_GATTS_VLOC_STACK;
        }
    }

    err_code = sd_ble_gatts_characteristic_add(p_cus->service_handle, &char_md,
                                               &attr_char_value,
                                               &p_cus->custom_value_handles[cus_chars_num]);

    NRF_LOG_DEBUG("sd_ble_gatts_characteristic_add :　%X", err_code);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    }

    return NRF_SUCCESS;
}

ret_code_t ble_cus_init(uint8_t cus_base_uuid[], ble_cus_t *p_cus, const ble_cus_init_t *p_cus_init)
{
    if (p_cus == NULL || p_cus_init == NULL)
    {
        return NRF_ERROR_NULL;
    }

    ret_code_t err_code;
    ble_uuid_t ble_uuid;

    // Initialize the service structure
    p_cus->evt_handler = p_cus_init->evt_handler;
    p_cus->conn_handle = BLE_CONN_HANDLE_INVALID;

    // Add Custom Service UUID
    ble_uuid128_t base_uuid ; //{CUSTOM_SERVICE_UUID_BASE};
    memcpy(base_uuid.uuid128, cus_base_uuid, 16);
    NRF_LOG_DEBUG("---- SWAP UUID ----");
    NRF_LOG_HEXDUMP_DEBUG(base_uuid.uuid128, 16);

    err_code = sd_ble_uuid_vs_add(&base_uuid, &p_cus->uuid_type);
    VERIFY_SUCCESS(err_code);

    ble_uuid.type = p_cus->uuid_type;
    ble_uuid.uuid = custom_service_uuid;
    adv_uuid_type = p_cus->uuid_type;
    NRF_LOG_DEBUG("---- ble_cus_init-> ble_uuid.type = %d----",ble_uuid.type );

    err_code = sd_ble_gatts_service_add(BLE_GATTS_SRVC_TYPE_PRIMARY, &ble_uuid, &p_cus->service_handle);
    if (err_code != NRF_SUCCESS)
    {
        return err_code;
    }
    return err_code;
}

int32_t cus_add_char(uint16_t chars_uuid, uint32_t chars_properties, uint8_t chars_permission, uint16_t len)
{
    uint32_t err_code = UDRV_RETURN_OK;

    // Add Custom Value charracteristic
    if (cus_chars_num == CHARACTERISTIC_MAX_NUM)
    {
        err_code = UDRV_INTERNAL_ERR;
    }
    NRF_LOG_DEBUG("=============================");
    NRF_LOG_DEBUG("chars_uuid [%d]: %X", cus_chars_num, chars_uuid);

    cus_char_att[cus_chars_num].char_uuid = chars_uuid;
    cus_char_att[cus_chars_num].properties = chars_properties;
    cus_char_att[cus_chars_num].permissions = chars_permission;
    cus_char_att[cus_chars_num].fixedlen = len;

    custom_value_char_add(&m_cus, &cus_init, chars_uuid, chars_properties, chars_permission);

    cus_chars_num++;

    switch (err_code)
    {
    case NRF_SUCCESS:
        return UDRV_RETURN_OK;
    default:
        return -UDRV_INTERNAL_ERR;
    }
}

/**@brief Callback function for asserts in the SoftDevice.
 *
 * @details This function will be called in case of an assert in the SoftDevice.
 *
 * @warning This handler is an example only and does not fit a final product. You need to analyze
 *          how your product is supposed to react in case of Assert.
 * @warning On assert from the SoftDevice, the system can only recover on reset.
 *
 * @param[in] line_num   Line number of the failing ASSERT call.
 * @param[in] file_name  File name of the failing ASSERT call.
 */
void cus_assert_nrf_callback(uint16_t line_num, const uint8_t *p_file_name)
{
    app_error_handler(DEAD_BEEF, line_num, p_file_name);
}

/**@brief Function for handling Peer Manager events.
 *
 * @param[in] p_evt  Peer Manager event.
 */
static void pm_evt_handler(pm_evt_t const *p_evt)
{
    pm_handler_on_pm_evt(p_evt);
    pm_handler_flash_clean(p_evt);

    switch (p_evt->evt_id)
    {
    case PM_EVT_PEERS_DELETE_SUCCEEDED:
        cus_advertising_start(false);
        break;

    default:
        break;
    }
}

/**@brief Function for handling the Battery measurement timer timeout.
 *
 * @details This function will be called each time the battery level measurement timer expires.
 *
 * @param[in] p_context  Pointer used for passing some arbitrary information (context) from the
 *                       app_start_timer() call to the timeout handler.
 */
static void notification_timeout_handler(void *p_context)
{
    UNUSED_PARAMETER(p_context);
    ret_code_t err_code;

    // Increment the value of m_custom_value before nortifing it.
    m_custom_value++;
    //NRF_LOG_INFO("m_custom_value = %d" , m_custom_value);
    //err_code = ble_cus_custom_value_update(&m_cus, m_custom_value, CUSTOM_VALUE_CHAR_UUID_1);
    //APP_ERROR_CHECK(err_code);
}

/**@brief Function for the Timer initialization.
 *
 * @details Initializes the timer module. This creates and starts application timers.
 */
void cus_timers_init(void)
{
    // Initialize timer module.
    //ret_code_t err_code = app_timer_init();
    //APP_ERROR_CHECK(err_code);

    // Create timers.

    /* YOUR_JOB: Create any timers to be used by the application*/
    ret_code_t err_code = app_timer_create(&m_notification_timer_id, APP_TIMER_MODE_REPEATED, notification_timeout_handler);
    NRF_LOG_DEBUG("notification_timeout_handler");
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for the GAP initialization.
 *
 * @details This function sets up all the necessary GAP (Generic Access Profile) parameters of the
 *          device including the device name, appearance, and the preferred connection parameters.
 */
void cus_gap_params_init(void)
{
    ret_code_t err_code;
    ble_gap_conn_params_t gap_conn_params;
    ble_gap_conn_sec_mode_t sec_mode;

    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&sec_mode);

    err_code = sd_ble_gap_device_name_set(&sec_mode,
                                          (const uint8_t *)DEVICE_NAME,
                                          strlen(DEVICE_NAME));
    APP_ERROR_CHECK(err_code);

    /* YOUR_JOB: Use an appearance value matching the application's use case.
       err_code = sd_ble_gap_appearance_set(BLE_APPEARANCE_);
       APP_ERROR_CHECK(err_code); */

    memset(&gap_conn_params, 0, sizeof(gap_conn_params));

    gap_conn_params.min_conn_interval = MIN_CONN_INTERVAL;
    gap_conn_params.max_conn_interval = MAX_CONN_INTERVAL;
    gap_conn_params.slave_latency = SLAVE_LATENCY;
    gap_conn_params.conn_sup_timeout = CONN_SUP_TIMEOUT;

    err_code = sd_ble_gap_ppcp_set(&gap_conn_params);
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for handling events from the GATT library. */
void cus_gatt_evt_handler(nrf_ble_gatt_t *p_gatt, nrf_ble_gatt_evt_t const *p_evt)
{
    if ((m_cus_conn_handle == p_evt->conn_handle) && (p_evt->evt_id == NRF_BLE_GATT_EVT_ATT_MTU_UPDATED))
    {
        m_ble_nus_max_data_len = p_evt->params.att_mtu_effective - OPCODE_LENGTH - HANDLE_LENGTH;
        NRF_LOG_INFO("Data len is set to 0x%X(%d)", m_ble_nus_max_data_len, m_ble_nus_max_data_len);
    }
    NRF_LOG_DEBUG("ATT MTU exchange completed. central 0x%x peripheral 0x%x",
                  p_gatt->att_mtu_desired_central,
                  p_gatt->att_mtu_desired_periph);
    NRF_LOG_DEBUG("ATT MTU exchange completed. central %d peripheral %d",
                  p_gatt->att_mtu_desired_central,
                  p_gatt->att_mtu_desired_periph);
}

/**@brief Function for initializing the GATT module.
 */
void cus_gatt_init(void)
{
    ret_code_t err_code = nrf_ble_gatt_init(&m_cus_gatt, cus_gatt_evt_handler);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_ble_gatt_att_mtu_central_set(&m_cus_gatt, NRF_SDH_BLE_GATT_MAX_MTU_SIZE);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_ble_gatt_att_mtu_periph_set(&m_cus_gatt, NRF_SDH_BLE_GATT_MAX_MTU_SIZE);
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for handling Queued Write Module errors.
 *
 * @details A pointer to this function will be passed to each service which may need to inform the
 *          application about an error.
 *
 * @param[in]   nrf_error   Error code containing information about what went wrong.
 */
static void nrf_qwr_error_handler(uint32_t nrf_error)
{
    APP_ERROR_HANDLER(nrf_error);
}

/**@brief Function for handling the Custom Service Service events.
 *
 * @details This function will be called for all Custom Service events which are passed to
 *          the application.
 *
 * @param[in]   p_cus_service  Custom Service structure.
 * @param[in]   p_evt          Event received from the Custom Service.
 *
 */
static void on_cus_evt(ble_cus_t *p_cus_service,
                       ble_cus_evt_t *p_evt)
{
    ret_code_t err_code;
    switch (p_evt->evt_type)
    {
    case BLE_CUS_EVT_NOTIFICATION_ENABLED:
        err_code = app_timer_start(m_notification_timer_id, NOTIFICATION_INTERVAL, NULL);

        APP_ERROR_CHECK(err_code);
        break;

    case BLE_CUS_EVT_NOTIFICATION_DISABLED:
        err_code = app_timer_stop(m_notification_timer_id);
        APP_ERROR_CHECK(err_code);
        break;

    case BLE_CUS_EVT_CONNECTED:
        NRF_LOG_INFO("BLE_CUS_EVT_CONNECTED");
        break;

    case BLE_CUS_EVT_DISCONNECTED:
        NRF_LOG_INFO("BLE_CUS_EVT_DISCONNECTED");
        break;

    default:
        // No implementation needed.
        NRF_LOG_INFO("ble_cus_evt_type_t other");
        break;
    }
}

/**@brief Function for initializing services that will be used by the application.
 */
void cus_services_init(uint8_t cus_base_uuid[])
{
    ret_code_t err_code;
    nrf_ble_qwr_init_t qwr_init = {0};
    // Initialize Queued Write Module.
    qwr_init.error_handler = nrf_qwr_error_handler;

    err_code = nrf_ble_qwr_init(&m_qwr, &qwr_init);
    APP_ERROR_CHECK(err_code);
    
    
    char services_uuid[4];
    sprintf(services_uuid, "%02X%02X", cus_base_uuid[2], cus_base_uuid[3]);
    custom_service_uuid = strtoul(services_uuid, NULL, 16);
    NRF_LOG_DEBUG("Services uuid : %X", custom_service_uuid);

    NRF_LOG_HEXDUMP_DEBUG(cus_base_uuid, 16);
    uint8_t swap_base_uuid[16];
    for(int i=0; i<16; i++)
    {
        swap_base_uuid[i] = cus_base_uuid[(15-i)];
    }

    // Initialize XXX Service.
    memset(&cus_init, 0, sizeof(cus_init));
    // Set the cus event handler
    cus_init.evt_handler = on_cus_evt;

    err_code = ble_cus_init(swap_base_uuid, &m_cus, &cus_init);
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for handling the Connection Parameters Module.
 *
 * @details This function will be called for all events in the Connection Parameters Module which
 *          are passed to the application.
 *          @note All this function does is to disconnect. This could have been done by simply
 *                setting the disconnect_on_fail config parameter, but instead we use the event
 *                handler mechanism to demonstrate its use.
 *
 * @param[in] p_evt  Event received from the Connection Parameters Module.
 */
static void cus_on_conn_params_evt(ble_conn_params_evt_t *p_evt)
{
    ret_code_t err_code;

    if (p_evt->evt_type == BLE_CONN_PARAMS_EVT_FAILED)
    {
        err_code = sd_ble_gap_disconnect(m_cus_conn_handle, BLE_HCI_CONN_INTERVAL_UNACCEPTABLE);
        APP_ERROR_CHECK(err_code);
    }
}

/**@brief Function for handling a Connection Parameters error.
 *
 * @param[in] nrf_error  Error code containing information about what went wrong.
 */
static void cus_conn_params_error_handler(uint32_t nrf_error)
{
    APP_ERROR_HANDLER(nrf_error);
}

/**@brief Function for initializing the Connection Parameters module.
 */
void cus_conn_params_init(void)
{
    ret_code_t err_code;
    ble_conn_params_init_t cp_init;

    memset(&cp_init, 0, sizeof(cp_init));

    cp_init.p_conn_params = NULL;
    cp_init.first_conn_params_update_delay = FIRST_CONN_PARAMS_UPDATE_DELAY;
    cp_init.next_conn_params_update_delay = NEXT_CONN_PARAMS_UPDATE_DELAY;
    cp_init.max_conn_params_update_count = MAX_CONN_PARAMS_UPDATE_COUNT;
    cp_init.start_on_notify_cccd_handle = BLE_GATT_HANDLE_INVALID;
    cp_init.disconnect_on_fail = false;
    cp_init.evt_handler = cus_on_conn_params_evt;
    cp_init.error_handler = cus_conn_params_error_handler;

    err_code = ble_conn_params_init(&cp_init);
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for starting timers.
 */
void cus_application_timers_start(void)
{
    /* YOUR_JOB: Start your timers. below is an example of how to start a timer.
       ret_code_t err_code;
       err_code = app_timer_start(m_app_timer_id, TIMER_INTERVAL, NULL);
       APP_ERROR_CHECK(err_code); */
}

/**@brief Function for putting the chip into sleep mode.
 *
 * @note This function will not return.
 */
static void cus_sleep_mode_enter(void)
{
    ret_code_t err_code;

    err_code = bsp_indication_set(BSP_INDICATE_IDLE);
    APP_ERROR_CHECK(err_code);

    // Prepare wakeup buttons.
    err_code = bsp_btn_ble_sleep_mode_prepare();
    APP_ERROR_CHECK(err_code);

    // Go to system-off mode (this function will not return; wakeup will cause a reset).
    err_code = sd_power_system_off();
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for handling advertising events.
 *
 * @details This function will be called for advertising events which are passed to the application.
 *
 * @param[in] ble_adv_evt  Advertising event.
 */
static void cus_on_adv_evt(ble_adv_evt_t ble_adv_evt)
{
    ret_code_t err_code;

    switch (ble_adv_evt)
    {
    case BLE_ADV_EVT_FAST:
        NRF_LOG_INFO("CUS Fast advertising.");
        err_code = bsp_indication_set(BSP_INDICATE_ADVERTISING);
        APP_ERROR_CHECK(err_code);
        break;

    case BLE_ADV_EVT_IDLE:
        NRF_LOG_INFO("CUS BLE_ADV_EVT_IDLE.");
        //cus_sleep_mode_enter();
        NRF_LOG_DEBUG("%d: %s(): unlock:", __LINE__, __func__);
        uhal_ble_wake_unlock();
        break;

    default:
        break;
    }
}

/**@brief Function for handling BLE events.
 *
 * @param[in]   p_ble_evt   Bluetooth stack event.
 * @param[in]   p_context   Unused.
 */
static void cus_ble_evt_handler(ble_evt_t const *p_ble_evt, void *p_context)
{
    if (custom_service_uuid != CUSTOM_SERVICE_UUID)
    {
        ret_code_t err_code = NRF_SUCCESS;
        switch (p_ble_evt->header.evt_id)
        {
        case BLE_GAP_EVT_DISCONNECTED:
            NRF_LOG_INFO("Disconnected.");
            err_code = app_timer_stop(m_notification_timer_id);
            APP_ERROR_CHECK(err_code);
            // LED indication will be changed when advertising starts.
            NRF_LOG_DEBUG("%d: %s(): unlock:", __LINE__, __func__);
            uhal_ble_wake_unlock();
            break;

        case BLE_GAP_EVT_CONNECTED:
            NRF_LOG_INFO("CUS Connected.");
            err_code = bsp_indication_set(BSP_INDICATE_CONNECTED);
            APP_ERROR_CHECK(err_code);
            m_cus_conn_handle = p_ble_evt->evt.gap_evt.conn_handle;
            err_code = nrf_ble_qwr_conn_handle_assign(&m_qwr, m_cus_conn_handle);
            APP_ERROR_CHECK(err_code);
            break;

        case BLE_GAP_EVT_PHY_UPDATE_REQUEST:
        {
            NRF_LOG_DEBUG("PHY update request.");
            ble_gap_phys_t const phys =
                {
                    .rx_phys = BLE_GAP_PHY_2MBPS,
                    .tx_phys = BLE_GAP_PHY_2MBPS,
                };
            err_code = sd_ble_gap_phy_update(p_ble_evt->evt.gap_evt.conn_handle, &phys);
            if (err_code != NRF_ERROR_BUSY)
                APP_ERROR_CHECK(err_code);
        }
        break;

        case BLE_GATTC_EVT_TIMEOUT:
            // Disconnect on GATT Client timeout event.
            NRF_LOG_DEBUG("GATT Client Timeout.");
            err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
            APP_ERROR_CHECK(err_code);
            break;

        case BLE_GATTS_EVT_TIMEOUT:
            // Disconnect on GATT Server timeout event.
            NRF_LOG_DEBUG("GATT Server Timeout.");
            err_code = sd_ble_gap_disconnect(p_ble_evt->evt.gatts_evt.conn_handle,
                                             BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
            APP_ERROR_CHECK(err_code);
            break;
        /*
        case BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST:
        {
            NRF_LOG_INFO("BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST.");
            ble_gatts_evt_rw_authorize_request_t req;
            ble_gatts_rw_authorize_reply_params_t auth_reply;

            req = p_ble_evt->evt.gatts_evt.params.authorize_request;

            if (req.type != BLE_GATTS_AUTHORIZE_TYPE_INVALID)
            {
                if ((req.request.write.op == BLE_GATTS_OP_PREP_WRITE_REQ) ||
                    (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_NOW) ||
                    (req.request.write.op == BLE_GATTS_OP_EXEC_WRITE_REQ_CANCEL))
                {
                    if (req.type == BLE_GATTS_AUTHORIZE_TYPE_WRITE)
                    {
                        auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_WRITE;
                    }
                    else
                    {
                        auth_reply.type = BLE_GATTS_AUTHORIZE_TYPE_READ;
                    }
                    auth_reply.params.write.gatt_status = APP_FEATURE_NOT_SUPPORTED;
                    err_code = sd_ble_gatts_rw_authorize_reply(p_ble_evt->evt.gatts_evt.conn_handle,
                                                            &auth_reply);
                    APP_ERROR_CHECK(err_code);
                }
            }
        }
        break; // BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST
        */
        default:
            // No implementation needed.
            break;
        }
    }
}

/**@brief Function for initializing the BLE stack.
 *
 * @details Initializes the SoftDevice and the BLE event interrupt.
 */
void cus_ble_stack_init(void)
{
    ret_code_t err_code;
    bool res = nrf_sdh_is_enabled();
    if (res)
    {
        NRF_LOG_INFO("SD already Enabled");
        APP_ERROR_CHECK(nrf_sdh_disable_request()); 
    }
    NRF_LOG_INFO("SD Enable!");
    err_code = nrf_sdh_enable_request();
    APP_ERROR_CHECK(err_code);

    // Configure the BLE stack using the default settings.
    // Fetch the start address of the application RAM.
    uint32_t ram_start = 0;
    err_code = nrf_sdh_ble_default_cfg_set(APP_BLE_CONN_CFG_TAG, &ram_start);
    NRF_LOG_INFO("Fetch start: %X", ram_start);
    APP_ERROR_CHECK(err_code);

    // Enable BLE stack.
    err_code = nrf_sdh_ble_enable(&ram_start);
    NRF_LOG_INFO("Fetch after : %X", ram_start);
    APP_ERROR_CHECK(err_code);

    // Register a handler for BLE events.
    NRF_SDH_BLE_OBSERVER(m_ble_observer, APP_BLE_OBSERVER_PRIO, cus_ble_evt_handler, NULL);
    NRF_LOG_INFO("cus_ble_stack_init done");
}

/**@brief Function for the Peer Manager initialization.
 */
void cus_peer_manager_init(void)
{
    ble_gap_sec_params_t sec_param;
    ret_code_t err_code;

    err_code = pm_init();
    APP_ERROR_CHECK(err_code);

    memset(&sec_param, 0, sizeof(ble_gap_sec_params_t));

    // Security parameters to be used for all security procedures.
    sec_param.bond = SEC_PARAM_BOND;
    sec_param.mitm = SEC_PARAM_MITM;
    sec_param.lesc = SEC_PARAM_LESC;
    sec_param.keypress = SEC_PARAM_KEYPRESS;
    sec_param.io_caps = SEC_PARAM_IO_CAPABILITIES;
    sec_param.oob = SEC_PARAM_OOB;
    sec_param.min_key_size = SEC_PARAM_MIN_KEY_SIZE;
    sec_param.max_key_size = SEC_PARAM_MAX_KEY_SIZE;
    sec_param.kdist_own.enc = 1;
    sec_param.kdist_own.id = 1;
    sec_param.kdist_peer.enc = 1;
    sec_param.kdist_peer.id = 1;

    err_code = pm_sec_params_set(&sec_param);
    APP_ERROR_CHECK(err_code);

    err_code = pm_register(pm_evt_handler);
    APP_ERROR_CHECK(err_code);
}

/**@brief Clear bond information from persistent storage.
 */
static void delete_bonds(void)
{
    ret_code_t err_code;

    NRF_LOG_INFO("Erase bonds!");

    err_code = pm_peers_delete();
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for handling events from the BSP module.
 *
 * @param[in]   event   Event generated when button is pressed.
 */
static void cus_bsp_event_handler(bsp_event_t event)
{
    ret_code_t err_code;

    switch (event)
    {
    case BSP_EVENT_SLEEP:
        cus_sleep_mode_enter();
        break; // BSP_EVENT_SLEEP

    case BSP_EVENT_DISCONNECT:
        err_code = sd_ble_gap_disconnect(m_cus_conn_handle,
                                         BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
        if (err_code != NRF_ERROR_INVALID_STATE)
        {
            APP_ERROR_CHECK(err_code);
        }
        break; // BSP_EVENT_DISCONNECT

    case BSP_EVENT_WHITELIST_OFF:
        if (m_cus_conn_handle == BLE_CONN_HANDLE_INVALID)
        {
            err_code = ble_advertising_restart_without_whitelist(&m_cus_advertising);
            if (err_code != NRF_ERROR_INVALID_STATE)
            {
                APP_ERROR_CHECK(err_code);
            }
        }
        break; // BSP_EVENT_KEY_0

    default:
        break;
    }
}

/**@brief Function for initializing the Advertising functionality.
 */
void cus_advertising_init(void)
{
    ret_code_t err_code;
    ble_advertising_init_t init;

    cus_adv_uuids[0].type = adv_uuid_type;
    cus_adv_uuids[0].uuid = custom_service_uuid;

    memset(&init, 0, sizeof(init));
    init.advdata.name_type = BLE_ADVDATA_FULL_NAME;
    init.advdata.include_appearance = true;
    init.advdata.flags = BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE;
    init.advdata.uuids_complete.uuid_cnt = sizeof(cus_adv_uuids) / sizeof(cus_adv_uuids[0]);
    init.advdata.uuids_complete.p_uuids = cus_adv_uuids;

    init.config.ble_adv_fast_enabled = true;
    init.config.ble_adv_fast_interval = APP_ADV_INTERVAL;
    init.config.ble_adv_fast_timeout = APP_ADV_DURATION;

    init.evt_handler = cus_on_adv_evt;

    err_code = ble_advertising_init(&m_cus_advertising, &init);
    NRF_LOG_DEBUG("---- ble_advertising_init = %d----",err_code );
    APP_ERROR_CHECK(err_code);

    ble_advertising_conn_cfg_tag_set(&m_cus_advertising, APP_BLE_CONN_CFG_TAG);
}

/**@brief Function for initializing buttons and leds.
 *
 * @param[out] p_erase_bonds  Will be true if the clear bonding button was pressed to wake the application up.
 */
static void buttons_leds_init(bool *p_erase_bonds)
{
    ret_code_t err_code;
    bsp_event_t startup_event;

    err_code = bsp_init(BSP_INIT_LEDS | BSP_INIT_BUTTONS, cus_bsp_event_handler);
    APP_ERROR_CHECK(err_code);

    err_code = bsp_btn_ble_init(NULL, &startup_event);
    APP_ERROR_CHECK(err_code);

    *p_erase_bonds = (startup_event == BSP_EVENT_CLEAR_BONDING_DATA);
}

/**@brief Function for initializing the nrf log module.
 */
static void cus_log_init(void)
{
    ret_code_t err_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(err_code);

    NRF_LOG_DEFAULT_BACKENDS_INIT();
}

/**@brief Function for initializing power management.
 */
static void cus_power_management_init(void)
{
    ret_code_t err_code;
    err_code = nrf_pwr_mgmt_init();
    APP_ERROR_CHECK(err_code);
}

/**@brief Function for handling the idle state (main loop).
 *
 * @details If there is no pending log operation, then sleep until next the next event occurs.
 */
static void cus_idle_state_handle(void)
{
    if (NRF_LOG_PROCESS() == false)
    {
        nrf_pwr_mgmt_run();
    }
}

/**@brief Function for starting advertising.
 */
void cus_advertising_start(bool erase_bonds)
{
    if (erase_bonds == true)
    {
        delete_bonds();
        // Advertising is started by PM_EVT_PEERS_DELETED_SUCEEDED event
    }
    else
    {
        ret_code_t err_code = ble_advertising_start(&m_cus_advertising, BLE_ADV_MODE_FAST);

        APP_ERROR_CHECK(err_code);
        NRF_LOG_DEBUG("%d: %s(): lock:", __LINE__, __func__);
        uhal_ble_wake_lock();
    }
}
void cus_write(uint8_t *send_data, uint16_t chars_uuid)
{
    uint8_t cus_chars_now;
    for (cus_chars_now = 0; cus_chars_now < CHARACTERISTIC_MAX_NUM; cus_chars_now++)
    {
        if (chars_uuid == cus_char_att[cus_chars_now].char_uuid)
            break;
    }
    //cus_char_att[cus_chars_now].send_data = send_data;
    NRF_LOG_DEBUG("send_data_data input = %s ", send_data);
    NRF_LOG_HEXDUMP_DEBUG(send_data,cus_char_att[cus_chars_now].fixedlen);
    
    //cus_char_att[cus_chars_now].send_data = (uint8_t *)malloc((cus_char_att[cus_chars_now].fixedlen) + 1);
    //strncpy(cus_char_att[cus_chars_now].send_data, send_data, cus_char_att[cus_chars_now].fixedlen);
    //cus_char_att[cus_chars_now].send_data[(cus_char_att[cus_chars_now].fixedlen) + 1] = '\0';
    
    cus_char_att[cus_chars_now].send_data = (uint8_t *)malloc((cus_char_att[cus_chars_now].fixedlen));
    memcpy(cus_char_att[cus_chars_now].send_data, send_data, cus_char_att[cus_chars_now].fixedlen);
    
    //NRF_LOG_DEBUG("send_data_data save = %s ", cus_char_att[cus_chars_now].send_data);
    NRF_LOG_DEBUG("send_data_data save = ");
    NRF_LOG_HEXDUMP_DEBUG(cus_char_att[cus_chars_now].send_data,cus_char_att[cus_chars_now].fixedlen);
}
void cus_notify(uint8_t *notify_data, uint16_t chars_uuid)
{
    uint8_t cus_chars_now;
    for (cus_chars_now = 0; cus_chars_now < CHARACTERISTIC_MAX_NUM; cus_chars_now++)
    {
        if (chars_uuid == cus_char_att[cus_chars_now].char_uuid)
            break;
    }
    
    NRF_LOG_DEBUG("notify_data input = %s", notify_data);
    NRF_LOG_HEXDUMP_DEBUG(notify_data,cus_char_att[cus_chars_now].fixedlen);
    
    //cus_char_att[cus_chars_now].notify_data = (uint8_t *)malloc((cus_char_att[cus_chars_now].fixedlen) + 1);
    //strncpy(cus_char_att[cus_chars_now].notify_data, notify_data, cus_char_att[cus_chars_now].fixedlen);
    //cus_char_att[cus_chars_now].notify_data[(cus_char_att[cus_chars_now].fixedlen) + 1] = '\0';
    
    cus_char_att[cus_chars_now].notify_data = (uint8_t *)malloc((cus_char_att[cus_chars_now].fixedlen));
    memcpy(cus_char_att[cus_chars_now].notify_data, notify_data, cus_char_att[cus_chars_now].fixedlen);
    
    //NRF_LOG_DEBUG("notify_data save = %s ", cus_char_att[cus_chars_now].notify_data);
    NRF_LOG_DEBUG("notify_data save = ");
    NRF_LOG_HEXDUMP_DEBUG(cus_char_att[cus_chars_now].notify_data,cus_char_att[cus_chars_now].fixedlen);
    ble_cus_custom_value_update(&m_cus, cus_char_att[cus_chars_now].notify_data, chars_uuid);
}

uint8_t cus_is_notifyEnabled(uint16_t chars_uuid)
{
    uint8_t cus_chars_now;
    for (cus_chars_now = 0; cus_chars_now < CHARACTERISTIC_MAX_NUM; cus_chars_now++)
    {
        if (chars_uuid == cus_char_att[cus_chars_now].char_uuid)
            break;
    }
    NRF_LOG_DEBUG("cus_is_notifyEnabled chars_uuid = %X ", chars_uuid);
    NRF_LOG_DEBUG("cus_char_att[cus_chars_now].is_notify_enable = %d ", cus_char_att[cus_chars_now].is_notify_enable);
    if (cus_char_att[cus_chars_now].is_notify_enable)
        return true;
    else
        return false;
}

/**@brief Function for application main entry.

int main(void)
{
    bool erase_bonds;

    // Initialize.
    log_init();
    timers_init();
    buttons_leds_init(&erase_bonds);
    power_management_init();
    
    ble_stack_init();
    gap_params_init();
    gatt_init();
    services_init();
    advertising_init();
    conn_params_init();
    peer_manager_init();

    // Start execution.
    NRF_LOG_INFO("Template example started.");
    application_timers_start();

    advertising_start(erase_bonds);

    // Enter main loop.
    for (;;)
    {
        idle_state_handle();
    }
}
 */

/**
 * @}
 */
