# Overview

RoomConsole is a software package created by EVE Screen Designer (ESD), specifically designed for the IDM2040-21R platform.

# Folder introduction
```
📂 smart_home_control_hub_app
    ├───Esd_Core                       | The application core files
    ├───FT_Esd_Framework               | The application framework files
    ├───FT_Esd_Widgets                 | The widget files
    ├───FT_Eve_Hal                     | Hardware Abstraction layer for interfacing the RP2040 platform with EVE control support
    ├───sample_binary                  | A pre-compiled binary of this application for reference
    ├───SmartHomeControlHub            | The application specific source code
    ├───ThirdPartyLib                  | Third party library
    ├───CMakeLists.txt                 | Cmake file
    ├───pico_sdk_import.cmake          | SDK import file from pico_sdk_import
```
# Usage

### Build with Visual Studio
1. Install cmake 3.19.x, Visual Studio 2019 community (must select C++), GNU Arm Embedded Toolchain for window.
2. Pico-SDK version 1.5.1 is required
3. Launch the *Developer Command Prompt for VS* in Visual Studio
```sh
set PICO_SDK_PATH=[path to pico-sdk]
set PICO_TOOLCHAIN_PATH=[path to GNU Arm Embedded Toolchain\10 2020-q4-major\bin]
cd RoomConsole
mkdir build
cd build
[path to cmake] -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=Debug ..
nmake
```
4. .uf file will be generated in build folder

### Program board
1. While holding the **BOOTSEL** button(SW1), connect the board to computer via the USB cable, or alternatively, press the **RESET** button(SW2) while holding the **BOOTSEL** button(SW1), then release the **RESET** button(SW2).
2. Release the **BOOTSEL** button(SW1). the board will enter bootloader modeand appear as a removable storage device (RPI-RP2) on computer.
3. Simply drag and drop the generated .uf2 firmware file onto the RPI-RP2 storage device.
