#include "service_debug.h"
#include "udrv_serial.h"
#include "stdarg.h"

#define DEBUG_LEVEL_OPEN         1
#define ERROR_LEVEL_CLOSED		 0



void service_debug(const char *fmt, ...)
{
    uint8_t debug_level ;
    char debug_buf[512];
    va_list aptr;

    debug_level = service_get_debug_level();

    switch (debug_level)
    {
        case DEBUG_LEVEL_OPEN:
            va_start (aptr, fmt);
            vsprintf (debug_buf, fmt, aptr);
            va_end (aptr);
            udrv_serial_log_printf(debug_buf);
            break;
        case ERROR_LEVEL_CLOSED:
            break;
        default:
            break;
    }
}

uint32_t service_set_debug_level(uint8_t level)
{
    return service_nvm_set_debug_level_to_nvm(level); 
}

uint8_t service_get_debug_level(void)
{
    return service_nvm_get_debug_level_from_nvm();
}