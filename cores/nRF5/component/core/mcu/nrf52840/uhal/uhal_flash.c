#include "uhal_flash.h"
#ifndef RUI_BOOTLOADER
#include "uhal_powersave.h"
#endif

/**@brief   Sleep until an event is received. */
static void power_manage(void)
{
#ifndef RUI_BOOTLOADER
    uhal_mcu_sleep(1);
#endif
}

static void wait_for_flash_ready(nrf_fstorage_t const * p_fstorage)
{
    /* While fstorage is busy, sleep and wait for an event. */
    while (nrf_fstorage_is_busy(p_fstorage))
    {
        power_manage();
    }
}

static void fstorage_evt_handler(nrf_fstorage_evt_t * p_evt)
{
    if (p_evt->result != NRF_SUCCESS)
    {
        NRF_LOG_INFO("--> Event received: ERROR while executing an fstorage operation.");
        return;
    }

    switch (p_evt->id)
    {
        case NRF_FSTORAGE_EVT_WRITE_RESULT:
        {
            NRF_LOG_INFO("--> Event received: wrote %d bytes at address 0x%x.",
                         p_evt->len, p_evt->addr);
        } break;

        case NRF_FSTORAGE_EVT_ERASE_RESULT:
        {
            NRF_LOG_INFO("--> Event received: erased %d page from address 0x%x.",
                         p_evt->len, p_evt->addr);
        } break;

        default:
            break;
    }
}

NRF_FSTORAGE_DEF(nrf_fstorage_t fstorage) =
{
    /* Set a handler for fstorage events. */
    .evt_handler = fstorage_evt_handler,

    /* These below are the boundaries of the flash space assigned to this instance of fstorage.
     * You must set these manually, even at runtime, before nrf_fstorage_init() is called.
     * The function nrf5_flash_end_addr_get() can be used to retrieve the last address on the
     * last page of flash available to write data. */
    .start_addr = 0x70000,
    .end_addr   = 0xebfff,
};

void uhal_flash_init (void) {
    ret_code_t rc;
    nrf_fstorage_api_t * p_fs_api;

#ifdef SOFTDEVICE_PRESENT
    NRF_LOG_INFO("SoftDevice is present.");
    NRF_LOG_INFO("Initializing nrf_fstorage_sd implementation...");
    /* Initialize an fstorage instance using the nrf_fstorage_sd backend.
     * nrf_fstorage_sd uses the SoftDevice to write to flash. This implementation can safely be
     * used whenever there is a SoftDevice, regardless of its status (enabled/disabled). */
    p_fs_api = &nrf_fstorage_sd;
#else
    NRF_LOG_INFO("SoftDevice not present.");
    NRF_LOG_INFO("Initializing nrf_fstorage_nvmc implementation...");
    /* Initialize an fstorage instance using the nrf_fstorage_nvmc backend.
     * nrf_fstorage_nvmc uses the NVMC peripheral. This implementation can be used when the
     * SoftDevice is disabled or not present.
     *
     * Using this implementation when the SoftDevice is enabled results in a hardfault. */
    p_fs_api = &nrf_fstorage_nvmc;
#endif

    rc = nrf_fstorage_init(&fstorage, p_fs_api, NULL);
    APP_ERROR_CHECK(rc);
}

void uhal_flash_deinit (void) {
}

int32_t uhal_flash_write (uint32_t addr, uint8_t *buff, uint32_t len) {
    ret_code_t rc;
#ifndef RUI_BOOTLOADER
#ifdef SUPPORT_BLE
    uhal_advertising_stop(1);
#endif
#endif
    //if (addr_is_within_bounds(&fstorage, addr, len) == false) {
    //    NRF_LOG_ERROR("address 0x%x with %u is out of bound.", addr, len);
    //    return -UDRV_WRONG_ARG;
    //}

    rc = nrf_fstorage_write(&fstorage, addr, buff, len, NULL);
    //APP_ERROR_CHECK(rc);
    if (rc != NRF_SUCCESS)
    {
        NRF_LOG_ERROR("%s() returned: %s\n", __func__, nrf_strerror_get(rc));

	return -UDRV_INTERNAL_ERR;
    }

    wait_for_flash_ready(&fstorage);

    return UDRV_RETURN_OK;
}

int32_t uhal_flash_read (uint32_t addr, uint8_t *buff, uint32_t len) {
    ret_code_t rc;
#ifndef RUI_BOOTLOADER
#ifdef SUPPORT_BLE
    uhal_advertising_stop(1);
#endif
#endif
    rc = nrf_fstorage_read(&fstorage, addr, buff, len);
    if (rc != NRF_SUCCESS)
    {
        NRF_LOG_ERROR("%s() returned: %s\n", __func__, nrf_strerror_get(rc));

	return -UDRV_INTERNAL_ERR;
    }

    wait_for_flash_ready(&fstorage);
#ifndef RUI_BOOTLOADER
#ifdef SUPPORT_BLE
    uhal_advertising_stop(2);
#endif
#endif

    return UDRV_RETURN_OK;
}

int32_t uhal_flash_erase (uint32_t addr, uint32_t len) {
    ret_code_t rc;
#ifndef RUI_BOOTLOADER
#ifdef SUPPORT_BLE
    uhal_advertising_stop(1);
#endif
#endif
    uint32_t page_cnt = len/fstorage.p_flash_info->erase_unit;
    
    rc = nrf_fstorage_erase(&fstorage, addr, page_cnt, NULL);
    if (rc != NRF_SUCCESS)
    {
        NRF_LOG_ERROR("%s() returned: %s\n", __func__, nrf_strerror_get(rc));

	return -UDRV_INTERNAL_ERR;
    }

    wait_for_flash_ready(&fstorage);

    return UDRV_RETURN_OK;
}

uint32_t uhal_flash_get_page_size(void) {
    return fstorage.p_flash_info->erase_unit;
}

bool uhal_flash_check_addr_valid(uint32_t addr, uint32_t len) {
    return (   (addr           >= fstorage.start_addr)
            && (addr + len - 1 <= fstorage.end_addr));
}

void uhal_flash_suspend(void) {
}

void uhal_flash_resume(void) {
}
