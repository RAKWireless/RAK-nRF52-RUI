This is Arduino SDK of RUI v3, which is an unified platform designed by RAKwireless.
==========

Before You Start
--------

- Firstly, read chapter 3 "Installation of Board Support Package in Arduino IDE" of "Getting Started Guide for RAK Unified Interface (RUI) Version 3.0 Arduino Software (IDE)" to setup your development environment.
- Secondly, read CHANGELOG.md to know every added and changed features and fixed bugs of every release.
- Thirdly, you can refer to the examples provided by SDK from Arduino IDE menu to build your own application.

Software Layering and Architecture
--------

- Basically, use MVC model to separate software components:
  - Separate software components that do hardware access. (M)
  - Separate software components that are API wrappers. (V)
  - Separate software components that are reusable common code. (C)
- Besides, separate software components from other components if:
  - These software components are replaceable, that we can easily replace them in the future.
  - These software components are platform independent, that we can reuse them for different platforms.
  - These software components are from vendor or 3rd party, that we can easily upgrade them in the future.
  - These software components is proprietary, that we can use different release policy for it.

Software Component
--------

- BSP (Board Support Package) Base: This component contains two major parts: boot code and UHAL (Unified Hardware Abstraction Layer). Boot code is the low level startup code provided by MCU vendor. UHAL is responsible to adapt different MCU. All MCU dependent code is in this layer, that only includes pure hardware access, but no any complicated logic.
- Board Dependent File: Contain all the board dependent source code or board dependent configuration files.
- UDRV (Unified Driver): Provide hardware independent API to upper layers, so different hardware information is hidden from upper layers. All common software logic that can be shared among different hardware platform is in this layer.
- Service: Multiple UDRV components could be used to construct larger software components that is called Service providing more powerful API for application to use.
- RUI API: This layer is used for customers to write customized firmware. It wraps all above mentioned software layers to any higher level programming language and provide unified API across different hardwares.
- AT Command: This software component provides an interactive command line interface that can be easily used to control hardware without programming any line of code.
- API Command: This software component provides an efficient M2M (Machine to Machine) communication for a 3rd party firmware on a 3rd party hardware to remote control RUI firmware.

Operating Mode
--------

- AT Command Mode
  - It is designed for humans to configure devices interactively.
  - It can also be used for M2M communication, but transmission of big-sized human-readable text data is very inefficient.
- Transparent Mode
  - It is designed to share LoRaWAN connectivity to another device without LoRaWAN connectivity.
  - It automatically passes-through any data from another connected device to LoRaWAN network, and vice versa.
  - In this mode, users can’t configure devices.
- API Mode
  - It is designed for efficient M2M communication.
  - It uses proprietary protocol for devices to communicate with each other.
  - It can be used for both configuring devices and transmitting data.
- Custom Mode
  - The above 3 modes all have their corresponding parsers to analyze every bytes received from serial port.
  - This mode disable all serial port parsers.
  - In this mode, a customized parser MUST be written by users themselves.

