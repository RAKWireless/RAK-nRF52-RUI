/**
 * @file        service_fs.h
 * @brief       Provide filesystem service layer.
 * @author      Rakwireless
 * @version     0.0.0
 * @date        2021.7
 */

#ifndef __SERVICE_FILESYSTEM_H__
#define __SERVICE_FILESYSTEM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include "ff.h"
#include "spiffs.h"

#ifdef SUPPORT_SDC
#define SERVICE_FS_SDC_PATH_PREFIX "/sdcard/"
#endif

#define SERVICE_FS_PATH_MAX_LEN 256

#define SERVICE_FS_O_APPEND                    SPIFFS_APPEND
#define SERVICE_FS_O_TRUNC                     SPIFFS_TRUNC
#define SERVICE_FS_O_CREAT                     SPIFFS_CREAT
#define SERVICE_FS_O_RDONLY                    SPIFFS_RDONLY
#define SERVICE_FS_O_WRONLY                    SPIFFS_WRONLY
#define SERVICE_FS_O_RDWR                      SPIFFS_RDWR
#define SERVICE_FS_O_DIRECT                    SPIFFS_DIRECT
#define SERVICE_FS_O_EXCL                      SPIFFS_EXCL

#ifdef SUPPORT_SDC
#define SERVICE_FS_DISK_ERR                    FR_DISK_ERR,                    /* (1) A hard error occurred in the low level disk I/O layer */
#define SERVICE_FS_INT_ERR                     FR_INT_ERR,                     /* (2) Assertion failed */
#define SERVICE_FS_NOT_READY                   FR_NOT_READY,                   /* (3) The physical drive cannot work */
#define SERVICE_FS_NO_FILE                     FR_NO_FILE,                     /* (4) Could not find the file */
#define SERVICE_FS_NO_PATH                     FR_NO_PATH,                     /* (5) Could not find the path */
#define SERVICE_FS_INVALID_NAME                FR_INVALID_NAME,                /* (6) The path name format is invalid */
#define SERVICE_FS_DENIED                      FR_DENIED,                      /* (7) Access denied due to prohibited access or directory full */
#define SERVICE_FS_EXIST                       FR_EXIST,                       /* (8) Access denied due to prohibited access */
#define SERVICE_FS_INVALID_OBJECT              FR_INVALID_OBJECT,              /* (9) The file/directory object is invalid */
#define SERVICE_FS_WRITE_PROTECTED             FR_WRITE_PROTECTED,             /* (10) The physical drive is write protected */
#define SERVICE_FS_INVALID_DRIVE               FR_INVALID_DRIVE,               /* (11) The logical drive number is invalid */
#define SERVICE_FS_NOT_ENABLED                 FR_NOT_ENABLED,                 /* (12) The volume has no work area */
#define SERVICE_FS_NO_FILESYSTEM               FR_NO_FILESYSTEM,               /* (13) There is no valid FAT volume */
#define SERVICE_FS_MKFS_ABORTED                FR_MKFS_ABORTED,                /* (14) The f_mkfs() aborted due to any problem */
#define SERVICE_FS_TIMEOUT                     FR_TIMEOUT,                     /* (15) Could not get a grant to access the volume within defined period */
#define SERVICE_FS_LOCKED                      FR_LOCKED,                      /* (16) The operation is rejected according to the file sharing policy */
#define SERVICE_FS_NOT_ENOUGH_CORE             FR_NOT_ENOUGH_CORE,             /* (17) LFN working buffer could not be allocated */
#define SERVICE_FS_TOO_MANY_OPEN_FILES         FR_TOO_MANY_OPEN_FILES,         /* (18) Number of open files > FF_FS_LOCK */
#define SERVICE_FS_INVALID_PARAMETER           FR_INVALID_PARAMETER            /* (19) Given parameter is invalid */
#endif

#define SERVICE_FS_OK                          SPIFFS_OK                       /* (0) Succeeded */
#define SERVICE_FS_ERR_NOT_MOUNTED             SPIFFS_ERR_NOT_MOUNTED          /* -10000 */
#define SERVICE_FS_ERR_FULL                    SPIFFS_ERR_FULL                 /* -10001 */
#define SERVICE_FS_ERR_NOT_FOUND               SPIFFS_ERR_NOT_FOUND            /* -10002 */
#define SERVICE_FS_ERR_END_OF_OBJECT           SPIFFS_ERR_END_OF_OBJECT        /* -10003 */
#define SERVICE_FS_ERR_DELETED                 SPIFFS_ERR_DELETED              /* -10004 */
#define SERVICE_FS_ERR_NOT_FINALIZED           SPIFFS_ERR_NOT_FINALIZED        /* -10005 */
#define SERVICE_FS_ERR_NOT_INDEX               SPIFFS_ERR_NOT_INDEX            /* -10006 */
#define SERVICE_FS_ERR_OUT_OF_FILE_DESCS       SPIFFS_ERR_OUT_OF_FILE_DESCS    /* -10007 */
#define SERVICE_FS_ERR_FILE_CLOSED             SPIFFS_ERR_FILE_CLOSED          /* -10008 */
#define SERVICE_FS_ERR_FILE_DELETED            SPIFFS_ERR_FILE_DELETED         /* -10009 */
#define SERVICE_FS_ERR_BAD_DESCRIPTOR          SPIFFS_ERR_BAD_DESCRIPTOR       /* -10010 */
#define SERVICE_FS_ERR_IS_INDEX                SPIFFS_ERR_IS_INDEX             /* -10011 */
#define SERVICE_FS_ERR_IS_FREE                 SPIFFS_ERR_IS_FREE              /* -10012 */
#define SERVICE_FS_ERR_INDEX_SPAN_MISMATCH     SPIFFS_ERR_INDEX_SPAN_MISMATCH  /* -10013 */
#define SERVICE_FS_ERR_DATA_SPAN_MISMATCH      SPIFFS_ERR_DATA_SPAN_MISMATCH   /* -10014 */
#define SERVICE_FS_ERR_INDEX_REF_FREE          SPIFFS_ERR_INDEX_REF_FREE       /* -10015 */
#define SERVICE_FS_ERR_INDEX_REF_LU            SPIFFS_ERR_INDEX_REF_LU         /* -10016 */
#define SERVICE_FS_ERR_INDEX_REF_INVALID       SPIFFS_ERR_INDEX_REF_INVALID    /* -10017 */
#define SERVICE_FS_ERR_INDEX_FREE              SPIFFS_ERR_INDEX_FREE           /* -10018 */
#define SERVICE_FS_ERR_INDEX_LU                SPIFFS_ERR_INDEX_LU             /* -10019 */
#define SERVICE_FS_ERR_INDEX_INVALID           SPIFFS_ERR_INDEX_INVALID        /* -10020 */
#define SERVICE_FS_ERR_NOT_WRITABLE            SPIFFS_ERR_NOT_WRITABLE         /* -10021 */
#define SERVICE_FS_ERR_NOT_READABLE            SPIFFS_ERR_NOT_READABLE         /* -10022 */
#define SERVICE_FS_ERR_CONFLICTING_NAME        SPIFFS_ERR_CONFLICTING_NAME     /* -10023 */
#define SERVICE_FS_ERR_NOT_CONFIGURED          SPIFFS_ERR_NOT_CONFIGURED       /* -10024 */
#define SERVICE_FS_ERR_NOT_A_FS                SPIFFS_ERR_NOT_A_FS             /* -10025 */
#define SERVICE_FS_ERR_MOUNTED                 SPIFFS_ERR_MOUNTED              /* -10026 */
#define SERVICE_FS_ERR_ERASE_FAIL              SPIFFS_ERR_ERASE_FAIL           /* -10027 */
#define SERVICE_FS_ERR_MAGIC_NOT_POSSIBLE      SPIFFS_ERR_MAGIC_NOT_POSSIBLE   /* -10028 */
#define SERVICE_FS_ERR_NO_DELETED_BLOCKS       SPIFFS_ERR_NO_DELETED_BLOCKS    /* -10029 */
#define SERVICE_FS_ERR_FILE_EXISTS             SPIFFS_ERR_FILE_EXISTS          /* -10030 */
#define SERVICE_FS_ERR_NOT_A_FILE              SPIFFS_ERR_NOT_A_FILE           /* -10031 */
#define SERVICE_FS_ERR_RO_NOT_IMPL             SPIFFS_ERR_RO_NOT_IMPL          /* -10032 */
#define SERVICE_FS_ERR_RO_ABORTED_OPERATION    SPIFFS_ERR_RO_ABORTED_OPERATION /* -10033 */
#define SERVICE_FS_ERR_PROBE_TOO_FEW_BLOCKS    SPIFFS_ERR_PROBE_TOO_FEW_BLOCKS /* -10034 */
#define SERVICE_FS_ERR_PROBE_NOT_A_FS          SPIFFS_ERR_PROBE_NOT_A_FS       /* -10035 */
#define SERVICE_FS_ERR_NAME_TOO_LONG           SPIFFS_ERR_NAME_TOO_LONG        /* -10036 */
#define SERVICE_FS_ERR_IX_MAP_UNMAPPED         SPIFFS_ERR_IX_MAP_UNMAPPED      /* -10037 */
#define SERVICE_FS_ERR_IX_MAP_MAPPED           SPIFFS_ERR_IX_MAP_MAPPED        /* -10038 */
#define SERVICE_FS_ERR_IX_MAP_BAD_RANGE        SPIFFS_ERR_IX_MAP_BAD_RANGE     /* -10039 */
#define SERVICE_FS_ERR_SEEK_BOUNDS             SPIFFS_ERR_SEEK_BOUNDS          /* -10040 */
#define SERVICE_FS_ERR_INTERNAL                SPIFFS_ERR_INTERNAL             /* -10050 */
#define SERVICE_FS_ERR_TEST                    SPIFFS_ERR_TEST                 /* -10100 */
#define SERVICE_FS_ERR_CONTINUE                (-20000)                        /* -20000 */

typedef enum {
    SERVICE_FS_FLASH_TYPE,
#ifdef SUPPORT_SDC
    SERVICE_FS_SDC_TYPE,
#endif
} SERVICE_FS_FILE_TYPE;

typedef struct {
    int32_t ferrno;
    SERVICE_FS_FILE_TYPE ftype;
    union {
        spiffs_file file;
#ifdef SUPPORT_SDC
        FIL sdfile;
#endif
    };
    char path[SERVICE_FS_PATH_MAX_LEN];
    bool active;
} _SERVICE_FS_FILE, *SERVICE_FS_FILE;

typedef struct {
    SERVICE_FS_FILE_TYPE ftype;
    union {
        spiffs_stat fstat;
#ifdef SUPPORT_SDC
        FILINFO sdfstat;
#endif
    };
    unsigned long long fsize;
} SERVICE_FS_FILE_STAT;

typedef struct {
    int32_t derrno;
    SERVICE_FS_FILE_TYPE dtype;
    union {
        spiffs_DIR dir;
#ifdef SUPPORT_SDC
        DIR sddir;
#endif
    };
    char path[SERVICE_FS_PATH_MAX_LEN];
} SERVICE_FS_DIR;

typedef struct {
    SERVICE_FS_FILE_TYPE type;
    union {
        struct spiffs_dirent dirent;
#ifdef SUPPORT_SDC
        FILINFO sddirent;
#endif
    };
    char *name;
    unsigned long long size;
    uint32_t total;
    uint32_t used;
} SERVICE_FS_DIRENT;

typedef void* SERVICE_FS;

int32_t                service_fs_ferrno(SERVICE_FS_FILE file);
int32_t                service_fs_derrno(SERVICE_FS_DIR dir);
SERVICE_FS             service_fs_init(void);
SERVICE_FS             service_fs_reset(void);
int32_t                service_fs_list(SERVICE_FS fs, SERVICE_FS_DIR *d, SERVICE_FS_DIRENT *entry);
SERVICE_FS_FILE        service_fs_open(SERVICE_FS fs, const char* path, uint32_t flags, uint32_t mode);
int32_t                service_fs_read(SERVICE_FS fs, SERVICE_FS_FILE file, void* buf, uint32_t len);
int32_t                service_fs_write(SERVICE_FS fs, SERVICE_FS_FILE file, void* buf, uint32_t len);
int32_t                service_fs_lseek(SERVICE_FS fs, SERVICE_FS_FILE file, int32_t offs, uint32_t whence);
int32_t                service_fs_remove(SERVICE_FS fs, const char* path);
int32_t                service_fs_fremove(SERVICE_FS fs, SERVICE_FS_FILE file);
int32_t                service_fs_stat(SERVICE_FS fs, const char* path, SERVICE_FS_FILE_STAT* stat);
int32_t                service_fs_fstat(SERVICE_FS fs, SERVICE_FS_FILE file, SERVICE_FS_FILE_STAT* stat);
int32_t                service_fs_flush(SERVICE_FS fs, SERVICE_FS_FILE file);
int32_t                service_fs_close(SERVICE_FS fs, SERVICE_FS_FILE file);
int32_t                service_fs_rename(SERVICE_FS fs, const char* old_name, const char* new_name);
int32_t                service_fs_opendir(SERVICE_FS fs, const char* name, SERVICE_FS_DIR* d);
int32_t                service_fs_closedir(SERVICE_FS fs, SERVICE_FS_DIR* d);
SERVICE_FS_DIRENT*     service_fs_readdir(SERVICE_FS fs, SERVICE_FS_DIR* d, SERVICE_FS_DIRENT* e);
int32_t                service_fs_feof(SERVICE_FS fs, SERVICE_FS_FILE file);
int32_t                service_fs_ftell(SERVICE_FS fs, SERVICE_FS_FILE file);

#ifdef __cplusplus
}
#endif

#endif  // __SERVICE_FILESYSTEM_H__

