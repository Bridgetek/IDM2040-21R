# Introduce

IDM2040-21R is our product based on RPi2040 and FT800Q with 480x480 round display with capacitive touch.
FT800 is by default supporting resistive touch only. However, It can support capacitive touch by downloading the special touch firmware into RAM_CMD after reboot.

# Usage

Assume that EVE boot-up sequence is properly done before this routine.
The custom firmware is a piece of code that can be executed by Eve coprocessor,
so the routine will do:
1. Read the firmware into local memory
2. Write the firmware into RAM_CMD
3. Update the register REG_CMD_WRITE to start execution
4. Wait till the execution is done (REG_CMD_READ==REG_CMD_WRITE)

```
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
> The above routine should run at every boot to enable the custom touch firmware.