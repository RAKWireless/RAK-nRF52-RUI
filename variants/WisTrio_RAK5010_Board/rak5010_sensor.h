#ifndef __RAK5010_SENSOR_H__
#define __RAK5010_SENSOR_H__

#include "rak1901.h"
#include "rak1902.h"
#include "rak1903.h"
#include "rak1904.h"

class RAK5010Sensor {

  public:
    RAK5010Sensor();

    class rak1901 shtc3;
    class rak1902 lps22hb;
    class rak1903 opt3001;
    class rak1904 lis3dh;

};

extern RAK5010Sensor sensor;

#endif // __RAK5010_SENSOR_H__
