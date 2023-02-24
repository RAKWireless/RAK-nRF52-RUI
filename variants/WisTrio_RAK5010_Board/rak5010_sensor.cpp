#include "rak5010_sensor.h"

RAK5010Sensor::RAK5010Sensor() {
}

RAK5010Sensor sensor;

extern bool rak5010_sensor_init();

extern "C" bool rui_rak5010_sensor_init()
{
    return rak5010_sensor_init();
}

bool rak5010_sensor_init() 
{
    bool result = true;
    Wire.begin();

    if (sensor.shtc3.init() && sensor.lps22hb.init() &&
        sensor.opt3001.init() &&  sensor.lis3dh.init()) {
        result = true;
    } else {
        result = false;
    }
    sensor.shtc3.update();
    sensor.lps22hb.pressure();
    sensor.opt3001.update();
    sensor.lis3dh.update();

    return result;
}
