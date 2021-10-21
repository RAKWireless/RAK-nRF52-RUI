#ifndef __RAK_UNIFIED_API_H__
#define __RAK_UNIFIEK_API_H__

#include "RAKSystem.h"
#include "RAKBle.h"
#include "RAKNfc.h"

#if WAN_TYPE == 0
#ifndef LEGACY
#include "RAKLorawan.h"
#endif

#endif

class RAKUnifiedApi {

  public:
    RAKUnifiedApi();
    class RAKSystem system;
    class RAKBle ble;
    class RAKNfc nfc;

#if WAN_TYPE == 0
#ifndef LEGACY
    class RAKLorawan lorawan;
#endif
#endif

};
extern RAKUnifiedApi api;

#endif
