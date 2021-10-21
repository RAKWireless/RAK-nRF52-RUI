#include <stdint.h>
#include "udrv_errno.h"
#include "udrv_serial.h"
#include "service_fs.h"

int32_t service_fs_ferrno(SERVICE_FS_FILE file) {
    return file->ferrno;
}

int32_t service_fs_derrno(SERVICE_FS_DIR dir) {
    return dir.derrno;
}

SERVICE_FS service_fs_init(void) {
#ifdef SUPPORT_SDC
    service_fs_fatfs_init();
#endif
    return service_fs_spiffs_init();
}

SERVICE_FS service_fs_reset(void) {
#ifdef SUPPORT_SDC
    service_fs_fatfs_reset();
#endif
    return service_fs_spiffs_reset();
}

int32_t service_fs_list(SERVICE_FS fs, SERVICE_FS_DIR *d, SERVICE_FS_DIRENT *entry) {
#ifdef SUPPORT_SDC
    service_fs_fatfs_list(fs, d, entry);
#endif
    return service_fs_spiffs_list(fs, d, entry);
}

SERVICE_FS_FILE service_fs_open(SERVICE_FS fs, const char* path, uint32_t flags, uint32_t mode) {
    SERVICE_FS_FILE ret;

#ifdef SUPPORT_SDC
    if (!strncmp(path, SERVICE_FS_SDC_PATH_PREFIX, strlen(SERVICE_FS_SDC_PATH_PREFIX))) {
        ret = service_fs_fatfs_open(path+strlen(SERVICE_FS_SDC_PATH_PREFIX), flags);
        return ret;
    }
#endif
    ret = service_fs_spiffs_open(fs, path, flags, mode);

    return ret;
}

int32_t service_fs_read(SERVICE_FS fs, SERVICE_FS_FILE file, void* buf, uint32_t len) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_read(file, buf, len);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_read(fs, file, buf, len);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

int32_t service_fs_write(SERVICE_FS fs, SERVICE_FS_FILE file, void* buf, uint32_t len) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_write(file, buf, len);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_write(fs, file, buf, len);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

int32_t service_fs_lseek(SERVICE_FS fs, SERVICE_FS_FILE file, int32_t offs, uint32_t whence) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_lseek(file, offs, whence);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_lseek(fs, file, offs, whence);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

int32_t service_fs_remove(SERVICE_FS fs, const char* path) {
    int32_t ret;

#ifdef SUPPORT_SDC
    if (!strncmp(path, SERVICE_FS_SDC_PATH_PREFIX, strlen(SERVICE_FS_SDC_PATH_PREFIX))) {
        ret = service_fs_fatfs_remove(path+strlen(SERVICE_FS_SDC_PATH_PREFIX));
        return ret;
    }
#endif
    ret = service_fs_spiffs_remove(fs, path);

    return ret;
}

int32_t service_fs_fremove(SERVICE_FS fs, SERVICE_FS_FILE file) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_fremove(file);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_fremove(fs, file);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

int32_t service_fs_stat(SERVICE_FS fs, const char* path, SERVICE_FS_FILE_STAT* stat) {
    int32_t ret;

#ifdef SUPPORT_SDC
    if (!strncmp(path, SERVICE_FS_SDC_PATH_PREFIX, strlen(SERVICE_FS_SDC_PATH_PREFIX))) {
        ret = service_fs_fatfs_stat(path+strlen(SERVICE_FS_SDC_PATH_PREFIX), stat);
        return ret;
    }
#endif
    ret = service_fs_spiffs_stat(fs, path, stat);
    return ret;
}

int32_t service_fs_fstat(SERVICE_FS fs, SERVICE_FS_FILE file, SERVICE_FS_FILE_STAT* stat) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_fstat(file);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_fstat(fs, file);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

int32_t service_fs_flush(SERVICE_FS fs, SERVICE_FS_FILE file) {
    //TODO
    return SERVICE_FS_OK;
}

int32_t service_fs_close(SERVICE_FS fs, SERVICE_FS_FILE file) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_close(file);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_close(fs, file);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

int32_t service_fs_rename(SERVICE_FS fs, const char* old_name, const char* new_name) {
    //TODO
    return SERVICE_FS_OK;
}

int32_t service_fs_opendir(SERVICE_FS fs, const char* name, SERVICE_FS_DIR* d) {
    int32_t ret;

#ifdef SUPPORT_SDC
    if (!strncmp(name, SERVICE_FS_SDC_PATH_PREFIX, strlen(SERVICE_FS_SDC_PATH_PREFIX)) ||
        !strncmp(name, SERVICE_FS_SDC_PATH_PREFIX, strlen(SERVICE_FS_SDC_PATH_PREFIX)-1)) {
        ret = service_fs_fatfs_opendir(name+strlen(SDC_PATH_PREFIX), d);
        return ret;
    }
#endif
    ret = service_fs_spiffs_opendir(fs, name, d);

    return ret;
}

int32_t service_fs_closedir(SERVICE_FS fs, SERVICE_FS_DIR* d) {
    int32_t ret;

    if (d == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (d->dtype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_closedir(fs, d);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_closedir(fs, d);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }

    return ret;
}

SERVICE_FS_DIRENT* service_fs_readdir(SERVICE_FS fs, SERVICE_FS_DIR* d, SERVICE_FS_DIRENT* e) {
    SERVICE_FS_DIRENT *ret;

    if (d == NULL) {
        return NULL;
    }

    switch (d->dtype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_readdir(d, e);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_readdir(d, e);
            break;
        default:
            ret = NULL;
            break;
    }
    return ret;
}

int32_t service_fs_feof(SERVICE_FS fs, SERVICE_FS_FILE file) {
    int32_t ret;

    if (file == NULL) {
        return SERVICE_FS_ERR_INTERNAL;
    }

    switch (file->ftype) {
#ifdef SUPPORT_SDC
        case SERVICE_FS_SDC_TYPE:
            ret = service_fs_fatfs_feof(file);
            break;
#endif
        case SERVICE_FS_FLASH_TYPE:
            ret = service_fs_spiffs_feof(fs, file);
            break;
        default:
            ret = SERVICE_FS_ERR_INTERNAL;
            break;
    }
    return ret;
}

int32_t service_fs_ftell(SERVICE_FS fs, SERVICE_FS_FILE file) {
    //TODO
    return SERVICE_FS_OK;
}
