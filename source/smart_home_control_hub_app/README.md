# Overview

**Smart home control hub app** is a software package created by EVE Screen Designer (ESD), specifically designed for the IDM2040-21R platform.

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
cd smart_home_control_hub_app
mkdir build
cd build
[path to cmake] -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=Debug ..
nmake
```
4. SmartHomeControlHub.uf2 file will be generated in build folder

### Program board
1. While holding the **BOOTSEL** button(SW1), connect the board to computer via the USB cable, or alternatively, press the **RESET** button(SW2) while holding the **BOOTSEL** button(SW1), then release the **RESET** button(SW2).
2. Release the **BOOTSEL** button(SW1). the board will enter bootloader modeand appear as a removable storage device (RPI-RP2) on computer.
3. Simply drag and drop the generated .uf2 firmware file onto the RPI-RP2 storage device.

# Hardware specific support

This product includes specialized hardware, such as an rotary encoder and button. The support for these product-specific hardware components can be found in the file *FT_Eve_Hal/EVE_IDM2040_21R_RP2040.c*.

### Button
The hardware features a button, offering an alternative method to exit the current page instead of using the touchscreen.

The button is connected as a GPIO in the hardware design, with a rising edge detected as a release and a falling edge as a press. In this project, only the release event is used as input by ESD, so the 'button' parameter is updated only when a release occurs. During the ESD loop, the button status is checked by comparing the current 'button' value with the previous loop cycle’s value to determine if a release happened between the two cycles.

### Rotary encoder
The hardware includes a rotary encoder, which provides an alternative method for turning pages or adjusting settings like light brightness and air conditioning temperature, instead of using the touchscreen.

The encoder operates with two GPIOs, allowing us to determine the direction of rotation based on the signal pattern. When the encoder turns right, GPIO_A goes low before GPIO_B, and the status (B's level << 1 | A's level) follows the sequence 3 → 2 → 0. A turn is detected when both GPIOs go low. Conversely, when the encoder turns left, GPIO_B goes low before GPIO_A, and the status follows the sequence 3 → 1 → 0.

A___        _______
    |______|       |______
B_______         ______
        |_______|      |__
  3   2  [0]  1  3   2  [0]  (B<<1|A)
[0] is the positions where rotary switch detects
==> right, count up
<== left, count down


A counter parameter, 'encoder', is introduced similarly to the 'button'. In the ESD loop, the encoder status is read by comparing the current 'encoder' value with the previous cycle’s value to determine if a turn has occurred.