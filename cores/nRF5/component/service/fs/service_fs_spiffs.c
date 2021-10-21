#include <spiffs.h>
#include "service_fs_spiffs.h"
#include "udrv_flash.h"
#include "service_nvm.h"
#include "service_fs.h"
#include "udrv_serial.h"
#include "udrv_flash.h"

extern bool udrv_flash_initialized;
static spiffs fs;

static _SERVICE_FS_FILE service_fs_spiffs_files[MAX_NUM_OF_O_FILE];

#define LOG_PAGE_SIZE       256

static u8_t spiffs_work_buf[LOG_PAGE_SIZE*2];
static u8_t spiffs_fds[32*4];
static u8_t spiffs_cache_buf[(LOG_PAGE_SIZE+32)*4];

SERVICE_FS service_fs_spiffs_init(void) {
    int res;

    if (udrv_flash_initialized == false) {
        udrv_flash_init();
    }

    spiffs_config cfg;
    cfg.phys_size = SERVICE_NVM_CONFIG_NVM_ADDR - USER_DATA_NVM_ADDR;
    cfg.phys_addr = USER_DATA_NVM_ADDR;
    cfg.phys_erase_block = 4096;
    cfg.log_block_size = 4096;
    cfg.log_page_size = LOG_PAGE_SIZE;

    cfg.hal_read_f = udrv_flash_read;
    cfg.hal_write_f = udrv_flash_write;
    cfg.hal_erase_f = udrv_flash_erase;

    res = SPIFFS_mount(&fs,
      &cfg,
      spiffs_work_buf,
      spiffs_fds,
      sizeof(spiffs_fds),
      spiffs_cache_buf,
      sizeof(spiffs_cache_buf),
      0);

    udrv_serial_log_printf("mount res: %d\r\n", res);

    if( (res != SPIFFS_OK) && (SPIFFS_errno(&fs) == SPIFFS_ERR_NOT_A_FS) )
    {
        udrv_serial_log_printf("formatting spiffs...\r\n");

        if (SPIFFS_format(&fs) != SPIFFS_OK)
        {
            udrv_serial_log_printf("SPIFFS format failed: %d\r\n", SPIFFS_errno(&fs));
            return NULL;
        }

        res = SPIFFS_mount(&fs,
          &cfg,
          spiffs_work_buf,
          spiffs_fds,
          sizeof(spiffs_fds),
          spiffs_cache_buf,
          sizeof(spiffs_cache_buf),
          0);
    }

    if (res != SPIFFS_OK)
    {
        udrv_serial_log_printf("SPIFFS init failed: %d\r\n", SPIFFS_errno(&fs));
        return NULL;
    }

    return (SERVICE_FS)&fs;
}

SERVICE_FS service_fs_spiffs_reset(void) {
    int res;

    if (udrv_flash_initialized == false) {
        udrv_flash_init();
    }

    SPIFFS_unmount(&fs);

    if (SPIFFS_format(&fs) != SPIFFS_OK)
    {
        udrv_serial_log_printf("SPIFFS format failed: %d\r\n", SPIFFS_errno(&fs));
        return NULL;
    }

    return service_fs_spiffs_init();
}

int32_t service_fs_spiffs_list(SERVICE_FS fs, SERVICE_FS_DIR *d, SERVICE_FS_DIRENT *entry) {
    uint32_t total,used;
    struct spiffs_dirent *pe = &entry->dirent;
    int32_t ret;

    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    SPIFFS_info(fs, &entry->total, &entry->used);
    //udrv_serial_log_printf("total %lu, used %lu\r\n", entry->total, entry->used);
    if ((pe = SPIFFS_readdir(&d->dir, pe))) {
        //udrv_serial_log_printf("%s size:%u\r\n", pe->name, pe->size);
	ret = SERVICE_FS_ERR_CONTINUE;
    } else {
        ret = SERVICE_FS_OK;
    }

    return ret;
}

SERVICE_FS_FILE service_fs_spiffs_open(SERVICE_FS fs, const char *path, uint32_t flags, uint32_t mode) {
    SERVICE_FS_FILE file = NULL;

    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return NULL;
    }

    for (int i = 0 ; i < MAX_NUM_OF_O_FILE ; i++) {
        if (service_fs_spiffs_files[i].active == false) {
            file = &service_fs_spiffs_files[i];
	    file->active = true;
            break;
        }
    }

    if (file) {
        strncpy(file->path, path, SERVICE_FS_PATH_MAX_LEN);
        file->path[SERVICE_FS_PATH_MAX_LEN-1] = '\0';

        file->ftype = SERVICE_FS_FLASH_TYPE;
        file->file = SPIFFS_open((spiffs *)fs, path, flags, mode);
        if (file->file >= 0) {
            file->ferrno = SERVICE_FS_OK;
        } else {
            file->active = false;
            file = NULL;
        }
    }

    return file;
}

int32_t service_fs_spiffs_read(SERVICE_FS fs, SERVICE_FS_FILE file, uint8_t* buf, uint32_t len) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    return SPIFFS_read((spiffs *)fs, file->file, buf, len);
}

int32_t service_fs_spiffs_write(SERVICE_FS fs, SERVICE_FS_FILE file, uint8_t* buf, uint32_t len) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    return SPIFFS_write((spiffs *)fs, file->file, buf, len);
}

int32_t service_fs_spiffs_close(SERVICE_FS fs, SERVICE_FS_FILE file) {
    int32_t res;

    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (file == NULL) {
        return SERVICE_FS_ERR_BAD_DESCRIPTOR;
    }

    res = SPIFFS_close((spiffs *)fs, file->file);
    if (res == SPIFFS_OK) {
        file->active = false;
    } else {
        file->ferrno = (s32_t)res;
        udrv_serial_log_printf("%s(): Failed to close file. res=%d\n", __func__, res);
    }

    return res;
}

int32_t service_fs_spiffs_opendir(SERVICE_FS fs, const char *name, SERVICE_FS_DIR *d) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (SPIFFS_opendir(fs, name, &d->dir)) {
        d->dtype = SERVICE_FS_FLASH_TYPE;
        return SERVICE_FS_OK;
    } else {
        return SERVICE_FS_ERR_INTERNAL;
    }
}

int32_t service_fs_spiffs_closedir(SERVICE_FS fs, SERVICE_FS_DIR *d) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (SPIFFS_closedir(&d->dir) == SPIFFS_OK) {
        return SERVICE_FS_OK;
    } else {
        return SERVICE_FS_ERR_INTERNAL;
    }
}

int32_t service_fs_spiffs_lseek(SERVICE_FS fs, SERVICE_FS_FILE file, int32_t offs, uint32_t whence) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (SPIFFS_lseek(fs, file->file, offs, whence) == SPIFFS_OK) {
        return SERVICE_FS_OK;
    } else {
        return SERVICE_FS_ERR_INTERNAL;
    }
}

int32_t service_fs_spiffs_remove(SERVICE_FS fs, const char* path) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

#if SPIFFS_READ_ONLY
    (void)fs;
    (void)path;
    return SERVICE_FS_ERR_RO_NOT_IMPL;
#else
    SPIFFS_API_CHECK_CFG((spiffs *)fs);
    SPIFFS_API_CHECK_MOUNT((spiffs *)fs);
    if (strlen(path) > SPIFFS_OBJ_NAME_LEN - 1) {
        SPIFFS_API_CHECK_RES((spiffs *)fs, SPIFFS_ERR_NAME_TOO_LONG);
    }
    SPIFFS_LOCK((spiffs *)fs);

    spiffs_fd *fd;
    spiffs_page_ix pix;
    s32_t res;

    res = spiffs_fd_find_new((spiffs *)fs, &fd, 0);
    SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);

    res = spiffs_object_find_object_index_header_by_name((spiffs *)fs, (const u8_t*)path, &pix);
    if (res != SPIFFS_OK) {
        spiffs_fd_return((spiffs *)fs, fd->file_nbr);
    }
    SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);

    res = spiffs_object_open_by_page((spiffs *)fs, pix, fd, 0,0);
    if (res != SPIFFS_OK) {
        spiffs_fd_return((spiffs *)fs, fd->file_nbr);
    }
    SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);

    res = spiffs_object_truncate(fd, 0, 1);
    if (res != SPIFFS_OK) {
        spiffs_fd_return((spiffs *)fs, fd->file_nbr);
    }
    SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);

    SPIFFS_UNLOCK((spiffs *)fs);
    return SERVICE_FS_OK;
#endif // SPIFFS_READ_ONLY
}

int32_t service_fs_spiffs_fremove(SERVICE_FS fs, SERVICE_FS_FILE file) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

#if SPIFFS_READ_ONLY
    (void)fs;
    (void)file;
    return SERVICE_FS_ERR_RO_NOT_IMPL;
#else
    SPIFFS_API_CHECK_CFG((spiffs *)fs);
    SPIFFS_API_CHECK_MOUNT((spiffs *)fs);
    SPIFFS_LOCK((spiffs *)fs);

    spiffs_file fh = file->file;
    spiffs_fd *fd;
    s32_t res;
    fh = SPIFFS_FH_UNOFFS((spiffs *)fs, fh);
    res = spiffs_fd_get((spiffs *)fs, fh, &fd);
    SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);

    if ((fd->flags & SPIFFS_O_WRONLY) == 0) {
        res = SPIFFS_ERR_NOT_WRITABLE;
        SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);
    }

#if SPIFFS_CACHE_WR
    spiffs_cache_fd_release((spiffs *)fs, fd->cache_page);
#endif

    res = spiffs_object_truncate(fd, 0, 1);

    SPIFFS_API_CHECK_RES_UNLOCK((spiffs *)fs, res);

    SPIFFS_UNLOCK((spiffs *)fs);

    return SERVICE_FS_OK;
#endif // SPIFFS_READ_ONLY

}

int32_t service_fs_spiffs_stat(SERVICE_FS fs, const char* path, SERVICE_FS_FILE_STAT* stat) {
    int32_t res;

    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (stat == NULL) {
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    stat->ftype = SERVICE_FS_FLASH_TYPE;
    stat->fsize = (unsigned long)stat->fstat.size;

    res = SPIFFS_stat((spiffs *)fs, path, &stat->fstat);
    if (res == SPIFFS_OK) {
        stat->fsize = (unsigned long)stat->fstat.size;
    } else {
        stat->fsize = (unsigned long)0;
    }
    return res; 
}

int32_t service_fs_spiffs_fstat(SERVICE_FS fs, SERVICE_FS_FILE file, SERVICE_FS_FILE_STAT* stat) {
    int32_t res;

    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (stat == NULL) {
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    stat->ftype = SERVICE_FS_FLASH_TYPE;

    res = SPIFFS_fstat((spiffs *)fs, file->file, &stat->fstat);
    file->ferrno = (s32_t)res;
    if (res == SPIFFS_OK) {
        stat->fsize = (unsigned long)stat->fstat.size;
    } else {
        stat->fsize = (unsigned long)0;
    }
    return res;
}

SERVICE_FS_DIRENT* service_fs_spiffs_readdir(SERVICE_FS fs, SERVICE_FS_DIR* d, SERVICE_FS_DIRENT* e) {
    if(udrv_flash_initialized == false)
    {
        udrv_serial_log_printf("invalid setting, filesystem not support\r\n");
        return SERVICE_FS_ERR_NOT_FOUND;
    }

    if (d == NULL || e == NULL) {
        return NULL;
    }
    e->type = SERVICE_FS_FLASH_TYPE;

    while (SPIFFS_readdir(&d->dir,&e->dirent)) {
        if (strncmp(d->path, (char *)e->dirent.name, strlen(d->path))) {
            continue;
        }
        d->derrno = (s32_t)SPIFFS_OK;
        e->name = (char *)e->dirent.name;
        e->size = (unsigned long)e->dirent.size;
        return e;
    }

    d->derrno = (s32_t)SPIFFS_errno(d->dir.fs);

    return NULL;
}

int32_t service_fs_spiffs_feof(SERVICE_FS fs, SERVICE_FS_FILE file) {
    return SPIFFS_eof((spiffs *)fs, file->file);
}

