# Introduction

The IDM2040-21R is our product featuring the RPi2040 and FT800Q, equipped with a 480x480 round display with capacitive touch. By default, the FT800Q only supports resistive touch. 

However, it can enable capacitive touch functionality by loading a specialized touch firmware (`touch.load.bin`)  into RAM_CMD after reboot.

# Usage

Assume that FT800Q boot-up sequence is properly done before this routine.
1. Read the firmware into local memory of MCU 
2. Write the firmware into RAM_CMD over SPI 
3. Update the register REG_CMD_WRITE with the size of firmware to start execution
4. Wait till the execution is done (REG_CMD_READ==REG_CMD_WRITE)

```C
// Read the custom touch firmware 'touch.load.bin' into local memory
custom_touch_content = read("touch.load.bin", "b");
// Write the custom touch firmware into RAM_CMD
EVE_Hal_wrMem(RAM_CMD, custom_touch_content, sizeof(custom_touch_content));
// Update the write pointer register to start the execution
EVE_Hal_wr32(REG_CMD_WRITE, sizeof(custom_touch_content));
// Wait till Eve completes all the commands
while (EVE_Hal_rd32(REG_CMD_READ) == EVE_Hal_rd32(REG_CMD_WRITE));
// DONE
```
*This routine must be executed at every boot to activate the custom touch firmware.*
