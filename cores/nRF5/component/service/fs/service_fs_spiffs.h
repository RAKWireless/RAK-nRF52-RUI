/**
 * @file        service_fs_spiffs.h
 * @brief       Provide spiffs interface.
 * @author      Rakwireless
 * @version     0.0.0
 * @date        2021.7
 */

#ifndef __SERVICE_FILESYSTEM_SPIFFS_H__
#define __SERVICE_FILESYSTEM_SPIFFS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "service_fs.h"
#include "spiffs_nucleus.h"

#define MAX_NUM_OF_O_FILE 16

SERVICE_FS service_fs_spiffs_init(void);
SERVICE_FS service_fs_spiffs_reset(void);
int32_t service_fs_spiffs_list(SERVICE_FS fs, SERVICE_FS_DIR *d, SERVICE_FS_DIRENT *entry);
SERVICE_FS_FILE service_fs_spiffs_open(SERVICE_FS fs, const char *path, uint32_t flags, uint32_t mode);
int32_t service_fs_spiffs_read(SERVICE_FS fs, SERVICE_FS_FILE file, uint8_t *buf, uint32_t len);
int32_t service_fs_spiffs_write(SERVICE_FS fs, SERVICE_FS_FILE file, uint8_t *buf, uint32_t len);
int32_t service_fs_spiffs_close(SERVICE_FS fs, SERVICE_FS_FILE file);
int32_t service_fs_spiffs_opendir(SERVICE_FS fs, const char *name, SERVICE_FS_DIR *d);
int32_t service_fs_spiffs_closedir(SERVICE_FS fs, SERVICE_FS_DIR *d);
int32_t service_fs_spiffs_lseek(SERVICE_FS fs, SERVICE_FS_FILE file, int32_t offs, uint32_t whence);
int32_t service_fs_spiffs_remove(SERVICE_FS fs, const char* path);
int32_t service_fs_spiffs_fremove(SERVICE_FS fs, SERVICE_FS_FILE file);
int32_t service_fs_spiffs_stat(SERVICE_FS fs, const char* path, SERVICE_FS_FILE_STAT* stat);
int32_t service_fs_spiffs_fstat(SERVICE_FS fs, SERVICE_FS_FILE file, SERVICE_FS_FILE_STAT* stat);
SERVICE_FS_DIRENT* service_fs_spiffs_readdir(SERVICE_FS fs, SERVICE_FS_DIR* d, SERVICE_FS_DIRENT* e);
int32_t service_fs_spiffs_feof(SERVICE_FS fs, SERVICE_FS_FILE file);

#ifdef __cplusplus
}
#endif

#endif  // __SERVICE_FILESYSTEM_SPIFFS_H__

