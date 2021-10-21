## [Unreleased] - 2021-10-20

### Added

### Changed

### Fixed

## [8.0.0] - 2021-10-20

### Added
- Provide RF test AT commands
    - AT+TRSSI
    - AT+TTONE
    - AT+TTX
    - AT+TRX
    - AT+TCONF
    - AT+TTH
    - AT+TOFF
    - AT+CERTIF

### Changed
- Remove api.ble.setting.advertiseSlow.get()/api.ble.setting.advertiseSlow.set()/api.ble.setting.advertiseFast.get()/api.ble.setting.advertiseFast.set()
- Change the delimiter of AT+ARSSI=? from ',' to ':'

### Fixed
- Bug #529: 868Mhz CLASS B OTAA "at+bfreq" format is not correct
- Bug #606: P2P at+ppl should get AT_PARAM_ERROR instead of AT_ERROR
- Bug #613: [AT COMMAND]Continuous input AT+JOIN will cause AT_ERROR
- Bug #509: Can't begin again after Serial.end()
- Fix AT+LPSEND bugs: 1. wrong return code 2. 512 bytes limitation

## [7.1.0] - 2021-10-12

### Added
- Support AT+FSN
- Add api.lorawan.precv() for one-time P2P receiving.

### Changed
- Rename all the examples
- Change the default setting of AT+DCS to be 1.
- Remove AT+PRECV=? because it is an one-time function, just like AT+SLEEP.
- Update LoRaWan_P2P example
- Update LoRaWan_Class_B example

### Fixed
- Bug #598: Arduino Application Scenario with SmartFarm issue
- Bug #536: 868Mhz CLASS B OTAA / ABP mode dowlink with pgslot issue
- Fix ClassB multicast group default value
- Bug #453: lorawan nwm.set not working
- Bug #601: RUI API arssi cannot receive value
- Fix AT+BGW can't work issue.

## [7.0.1] - 2021-10-03

### Added
- Enhance nRF52840 bootloader: 1. Add ATR command in bootloader to restore factory default. 2. Typing "rui" within 1s after POR can enter DFU mode to recover a dead system.
- Add a mechanism for factory to flash the default keys & IDs.

### Changed
- Rearch API mode: 1. Remove Src & Dst fields. 2. Change the order of Flag & Frame Type fields. 3. Use the number of set bits as checksum instead of CRC32.
- Rearch example folders.
- Temporarily remove AT+AUTOSLEEP(AT+LPM) command.

### Fixed
- Bug #584: [API Mode] ATCMD handler's execution command to ATZ, ATDFU, ATR, AT+BOOT, not response frame and no function also
- Bug #571: [API Mode] command ID 32:AT+CLASS set value {BCD:0|1|2} mismatch with get return value {ASCII:A|B|C}
- Bug #583: [API Mode] at+recv=? could not get the latest received data
- Bug #561: 868 OTAA Class C, set appkey during join will get AT_ERROR
- Bug #581: [API Mode] : ATCMD handler for PSF, PCR, PTP command response frame's byte-order of payload length is incorrect
- Bug #582: [API mode] ATCMD Handler AT+PPL=? command ID get value error
- Bug #572: [API Mode] command ID 35:AT+JN1DL and 36:AT+JN2DL input/output length improper, it should be 1 bytes, but not 4 bytes as now
- Add the default multicast group parameters for default B mode
- Bug #570: 868 ABP when gateway set rx2dr to 4, end device can not receive downlink
- Fix min()/max()/yield()
- Fix api.lorawan.addmulc()/api.lorawan.rmvmulc()/api.lorawan.lstmulc()

## [7.0.0] - 2021-09-23

### Added
- BLE Beacon API change:
    - Add api.ble.beacon.ibeacon.power.set(param)
- Add an example for analog API.
- Add an example for LoRaWAN OTAA.
- Add an example for LED breathing.

### Changed
- BLE Beacon API change:
    - Change api.ble.beacon.payload(byte array) to api.ble.beacon.ibeacon.uuid.set()
    - Split api.ble.beacon.majorminor(param1, param2) into api.ble.beacon.ibeacon.majo.set(param) & api.ble.beacon.ibeacon.minor.set(param)
- Change the default setting of LoRaWAN confirm mode to be ON.
- Modify BLE UART example to support AT CMD.
- Remove api.system.flash.get() & api.system.flash.set().

### Fixed
- Tune the base current for one-time sleep (5uA) & auto sleep (20uA).
- Bug #538: 915Mhz CLASS B OTAA/ABP issue
- Bug #548: P2P Preamble Length setting 2 or 65535 will not receive message
- Bug #549: P2P show receive error when receive second p2p message
- Bug #565: LoRa Auto-Join Failed will cause system hang
- Bug #540: [BLE SCANNER] CONSOLE端顯示廣告有標頭無內容
- Fix the usage of byte array in BLE examples.
- Fix the byte order of AT+DADDR
- Fix AT+AUTOSLEEP can't work when changing its setting from zero to non-zero.

## [6.0.0] - 2021-09-02

### Added
- Add AT+LPSEND.
- Add api.lorawan.registerRecvCallback()
- Add api.lorawan.registerJoinCallback()
- Add api.lorawan.registerSendCallback()
- Add low power design for AT+AUTOSLEEP.
- Add api.lorawan.dcs.set()
- Add api.lorawan.addmulc()/api.lorawan.rmvmulc()/api.lorawan.lstmulc()

### Changed
- Modify the class RAKBleService to support customized 128-bit BLE UUID.
- Add asynchronous event for AT+CFM.
- Redesign API mode:
    - Always reply return code even if the request is write/execution and result is OK.
    - Don't support AT? anymore because its output is for human, but not for machine.
- Remove '#include "Arduino.h"' in every example.
- Add api.ble.beacon.custom.payload.set() to support customized payload for BLE Beacon.
- Remove sensor examples from SDK
- Remove BLE HID from SDK
- Remove AT+DELBONDS
- Remove api.lorawan.recv()

### Fixed
- Fix duplicated LoRaWAN RX data logs.
- Fix AT+CHE/AT+CHS bugs.
- Fix CFlist for AT+CHS when the band is AU915 US915.
- Bug #521: at+cfm=0 send a confirmed uplink
- Bug #508: Multicast can not receive message after change Freq.
- Bug #507: Multicast downlink message print multiple times
- Bug #509: Can't begin again after Serial.end()
- Bug #444: lorawan multicast C++ warpper not implement
- Bug #448: lorawan arssi C++ warpper not implement
- Bug #506: 868Mhz ClASS B description of S0/S1/S2/S3 state
- Bug #527: atr do not reset multicast list
- Create two instance of HardwareSerial that is Serial4 (USB) & Serial6 (BLE)
- Fix api.lorawan.ver().
- Fix api.lorawan.arssi()

## [5.3.0] - 2021-08-10

### Added
- Support API mode and operating mode switching.
- Support BLE pairing.
- Support NFC
- Support spiffs filesystem.
- Support FSK in LoRaWAN P2P mode.
- Support encryption in LoRaWAN P2P mode.

### Changed

### Fixed
- Fix ABP downlink bug.
- Fix AT+LINKCHECK & AT+SNR & AT+RSSI bugs.
- Fix the input range of periodicity.
- Fix the input range of AT+PWORD: Forbid zero length password.
- Fix the maximum number of argument of AT+CHE.
- Fix the input range of AT+SEND to be 2-500 digits.
- Fix write part of AT+DCS

## [5.2.1] - 2021-07-28

### Added
- Add example code into RUIv3 SDK.

### Changed
- Set the default value of AT+CFM to be off.
- Rewrite delay function to avoid wasting MCU time.

### Fixed
- Fix Arduino Wire library implementation to be compatible with Adafruit libraries.
- Bug #450: lorawan jn1dl, rx1dl RUI-API can input number > 15
- Bug #453: lorawan nwm.set not working
- Bug #452: RUI-API restore default not implement
- Bug #451: api.lorawan.band.get() return value not as same as at+band
- Bug #447: CLIVER, APIVER C++ warpper not implement

## [5.1.0] - 2021-07-24

### Added
- Add AT+SLEEP command.
- Add AT+RETY command.

### Changed
- Temporarily remove AT+TRSSI/AT+TTONE/AT+TTX/AT+TRX/AT+TCONF/AT+TTH/AT+TOFF commands.

### Fixed
- Add parameter sanity check for AT+PGSLOT.
- Fix api.lorawan.ver.get().
- Fix api.lorawan.join() always failure issue.
- Fix the wrong unit of api.lorawan.jn1dl.set()/api.lorawan.jn1dl.get()/api.lorawan.jn2dl.get()/api.lorawan.rx1dl.set()/api.lorawan.rx1dl.get()/api.lorawan.rx2dl.get().
- Enhance Arduino compatibility.
- Fix api.lorawan.ver.get().
- Fix api.lorawan.dr.set().

## [5.0.0] - 2021-07-23

### Added
- Support Arduino standard library - SPI.
- Add AT+TTH/AT+TTX/AT+TRX/AT+TCONF.
- Support upgrading bootloader by nrfutil.

### Changed

### Fixed
- Fix the wrong mask value when input AT+MASK=0.
- Fix the typo of api.lorawan.nwskey to be api.lorawan.nwkskey.
- Bug #417: P2P AT+PCR coding rate issue are asymmetric
- Bug #418: P2P part of all descriptions

## [4.1.0] - 2021-07-19

### Added
- Add AT+RETY/AT+LPSEND/AT+ARSSI/AT+LINKCHECK/AT+NWM/AT+PFREQ/AT+PSF/AT+PBW/AT+PCR/AT+PPL/AT+PTP/AT+P2P/AT+PSEND/AT+PRECV/AT+ENCRY/AT+ENCKEY.
- Implement Serial.printf().

### Changed
- Reduce bootloader size and align the start address of bootloader with legacy RAK4631 bootloader.
- Separate AT+BUILDINFO into 2 AT commands AT+BUILDTIME & AT+REPOINFO.
- Change the design of serial lock AT+LOCK & AT+PWORD.
- Enhance the design of AT+MASK/AT+CHE/AT+CHS to fix coexistence issue.

### Fixed
- Fix AT+BAT always display 0.0 issue.

## [4.0.0] - 2021-07-09

### Added
- Add AT+CHS/AT+CHE/AT+ARSSI/AT+BGW

### Changed
- Serial.begin() will only supports unsigned integer baudrate.

### Fixed
- Bug #410: JN2DL/RX2DL against the spec
- Bug #411: at+baud is not working properly and return AT_PARAM_ERROR

## [3.0.0] - 2021-07-08

### Added
- AT+BAUD/AT+HWMODEL/AT+HWID AT commands.
- AT+CHE AT command.
- Support transparent mode.

### Changed
- Enhance customized AT command registration.
- Change AT+NWKID to AT+NETID because it describes network identifier (NetID) of 3 octets, rather than another network identifier (NwkID) of 7 bits.
- Change the unit of AT+JN1DL/AT+JN2DL/AT+RX1DL/AT+RX2DL from milli-seconds to seconds.

### Fixed
- Fix DR10 - DR13 issues of LoRaWAN multicast feature.

## [2.1.0] - 2021-07-01

### Added
- Add AT+CLIVER & AT+APIVER commands to show AT command version & RUI API version.

### Changed

### Fixed
- Fix Nordic softdevice assertion failed issue.
- Bug #406: at+jn1dl, at+rx2dl input range only 0-15
- Bug #407: at+multicast issue
- Fix hardware watchdog timeout after software reset issue.
- Fix USB enumeration failure issue after calling api.system.sleep.all().

## [2.0.0] - 2021-06-26

### Added

### Changed
- Add AT_BUSY_ERROR handling for AT+BAND, AT+MASK & ATR.
- Refine LoRaWAN initializaiton flow to reduce flash writing.
- Remove AT+JN2DL= & AT+RX2DL= commands because jn2dl=jn1dl+1 & rx2dl=rx1dl+1.

### Fixed
- Bug #402: can not input too many command at same time
- Bug #404: rx1dl should be the same as gateway setting after connected to gateway in OTAA mode
- Bug #403: rx1dl, rx2dl, jn1dl, jn2dl should be ranged in 0-15
- Bug #390: at+class can only setting once ( A ---> C ---x---> A)
- Fix the format of AT+ADDMULC.

## [1.2.1] - 2021-06-25

### Added

### Changed
- Change AT command output format.

### Fixed
- Fix system stability issue caused by ATZ command.

## [1.2.0] - 2021-06-24

### Added
- Support recovery mode. (Add CLI into RUI v3 bootloader.)
- Add AT+MASK AT command.

### Changed

### Fixed
- Fix LoRaWAN multicast downlink message.
- Bug #397: at+rx2fq show at error if input ramdomly
- Bug #393: at+rx2dr error code not as same as document
- Bug #400: at+adr default value not same as document

## [1.1.0] - 2021-06-24

### Added

### Changed
- Temporarily remove AT+MASK command.
- Temporarily remove AT+RX2FQ= command.

### Fixed
- Fix AT+RX2DR command.
- Bug #394: at+band default value 4 switch to 5 will show at error
- Bug #395: at+band switch to 2 and then can not switch to other band
- Bug #388: get the random number after setting devaddr (at+daddr)
- Bug #389: at+send error code not as same as document
- Bug #390: at+class can only setting once ( A ---> C ---x---> A)
- Bug #392: AT+DR range should be 0-7 not 0-5
- Bug #391: AT+DR=asdfklaskjdf can accept
- Bug #396: at+txp set 8-15 will show at error in eu868
- Bug #399: device address not as same as gateway in ABP mode
- Bug #397: at+rx2fq show at error if input ramdomly
- Bug #398: command atdfu should rename to at+boot
- Bug #393: at+rx2dr error code not as same as document

## [1.0.1] - 2021-06-23

### Added
- Add AT command AT+RECV.
- Add asynchronous event log for Class A/B/C Downlink.
- Add asynchronous event log for join process.

### Changed
- Change the behavior of AT+NJM/AT+SEND/AT+ADR/AT+PNM.
- Rename the AT command AT+RESTORE to ATR.

### Fixed
- Fix Class A/B/C downlink.

## [1.0.0] - 2021-06-19

### Added
- Support customized AT command registration.
- Support read/write private user data from/to flash.

### Changed
- Support Arduino library instead of built-in sensor API.

### Fixed

## [0.2.0] - 2021-06-19

### Added
- Support LoRaWAN Class B mode for WisBlock RAK4631
- Support LoRaWAN multicast group for WisBlock RAK4631

### Changed

### Fixed
- Bug #377: Arduino IDE verify code will encounter error until open log function

## [0.1.0] - 2021-06-14

### Added
- Create a unified driver layer (UDRV) for all RAK hardware products
- Support WisBlock Sensor RAK1901/RAK1902/RAK1903/RAK1904/RAK1906/RAK1910
- Compatible with Arduino API
- Add proprietary RUI API for BLE/LoRaWAN
- Enhance power consumption in sleep mode for WisBlock RAK4631
- Upgrade to Nordic SDK 17.0.2 with BLE stack S140 7.2.0
- Support BLE Configuration/Beacon service/UART service/Customized service for WisBlock RAK4631
- Support Arduino IDE/Visual Studio IDE for WisBlock RAK4631
- Support DFU over USB/BLE/UART for WisBlock RAK4631
- Support LoRaWAN Class A/C mode for WisBlock RAK4631
- Support AT commands over USB/BLE/UART

### Changed

### Fixed

## [0.0.0] - 2021-01-21

This is the initial version of RUIv3.

### Added
- Support WisDuo RAK4200 EVB/WisTrio RAK5010/WisBlock RAK4631

### Changed

### Fixed

