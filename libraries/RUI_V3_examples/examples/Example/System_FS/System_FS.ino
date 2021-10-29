#include "service_fs_spiffs.h"

SERVICE_FS fs;
uint32_t i = 0;

static void test_fs()
{
    int32_t ret;
    uint8_t buf[12];
    char fname[16];

    sprintf(fname, "my_file_%u", ++i % 10);

    SERVICE_FS_FILE file = api.system.fs.open(fs, fname, SPIFFS_CREAT | SPIFFS_TRUNC | SPIFFS_RDWR, 0);
    if ((ret = api.system.fs.write(fs, file, (uint8_t *)"Hello world", 12)) < 0)
    {
        Serial.printf("write file error! %d\r\n", ret);
        api.system.fs.close(fs, file);
        return;
    }
    api.system.fs.close(fs, file);

    file = api.system.fs.open(fs, fname, SPIFFS_RDWR, 0);
    if ((ret = api.system.fs.read(fs, file, buf, 12)) < 0)
    {
        Serial.printf("read file error! %d\r\n", ret);
        api.system.fs.close(fs, file);
        return;
    }
    api.system.fs.close(fs, file);

    Serial.printf("--> %s <--\r\n", buf);
}

void setup()
{
    delay(5000);
    Serial.println("RAKwireless File System Example");
    Serial.println("------------------------------------------------------");
    fs = api.system.fs.init();
}

void loop()
{
    int32_t ret;
    SERVICE_FS_DIRENT entry;
    SERVICE_FS_DIR dir;

    if ((ret = api.system.fs.opendir(fs, "/", &dir)) != RAK_FS_OK)
    {
        Serial.printf("open dir error! %d\r\n", ret);
        return;
    }

    while (api.system.fs.list(fs, &dir, &entry) != RAK_FS_OK)
    {
        Serial.printf("%s size:%u\r\n", entry.dirent.name, entry.dirent.size);
    }

    if ((ret = api.system.fs.closedir(fs, &dir)) != RAK_FS_OK)
    {
        Serial.printf("close dir error! %d\r\n", ret);
        return;
    }

    Serial.printf("total %lu, used %lu\r\n", entry.total, entry.used);
    delay(5000);
    test_fs();
    delay(1000);
}
