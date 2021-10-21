#ifndef _UHAL_FLASH_H_
#define _UHAL_FLASH_H_

#include <stdint.h>
#include <stddef.h>
#include "udrv_flash.h"
#include "udrv_errno.h"
#include "nrf_fstorage.h"
#ifdef SOFTDEVICE_PRESENT
#include "nrf_fstorage_sd.h"
#else
#include "nrf_fstorage_nvmc.h"
#endif
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

void uhal_flash_init (void);

void uhal_flash_deinit (void);

int32_t uhal_flash_write (uint32_t addr, uint8_t *buff, uint32_t len);

int32_t uhal_flash_read (uint32_t addr, uint8_t *buff, uint32_t len);

int32_t uhal_flash_erase (uint32_t addr, uint32_t len);

uint32_t uhal_flash_get_page_size(void);

bool uhal_flash_check_addr_valid(uint32_t addr, uint32_t len);

void uhal_flash_suspend(void);

void uhal_flash_resume(void);

#endif  // #ifndef _UHAL_FLASH_H_
