#include "rak5010_sensor.h"

RAK5010Sensor::RAK5010Sensor() {
}

RAK5010Sensor sensor;

extern void rak5010_sensor_init();

extern "C" void rui_rak5010_sensor_init()
{
    rak5010_sensor_init();
}

void rak5010_sensor_init() 
{
    Wire.begin();
    sensor.shtc3.init();
    sensor.lps22hb.init();
    sensor.opt3001.init();
    sensor.lis3dh.init();
    sensor.shtc3.update();
    sensor.lps22hb.pressure();
    sensor.opt3001.update();
    sensor.lis3dh.update();
}
