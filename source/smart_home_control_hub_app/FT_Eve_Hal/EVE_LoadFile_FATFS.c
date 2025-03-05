/**
 * This source code ("the Software") is provided by Bridgetek Pte Ltd
 * ("Bridgetek") subject to the licence terms set out
 *   http://brtchip.com/BRTSourceCodeLicenseAgreement/ ("the Licence Terms").
 * You must read the Licence Terms before downloading or using the Software.
 * By installing or using the Software you agree to the Licence Terms. If you
 * do not agree to the Licence Terms then do not download or use the Software.
 *
 * Without prejudice to the Licence Terms, here is a summary of some of the key
 * terms of the Licence Terms (and in the event of any conflict between this
 * summary and the Licence Terms then the text of the Licence Terms will
 * prevail).
 *
 * The Software is provided "as is".
 * There are no warranties (or similar) in relation to the quality of the
 * Software. You use it at your own risk.
 * The Software should not be used in, or for, any medical device, system or
 * appliance. There are exclusions of Bridgetek liability for certain types of loss
 * such as: special loss or damage; incidental loss or damage; indirect or
 * consequential loss or damage; loss of income; loss of business; loss of
 * profits; loss of revenue; loss of contracts; business interruption; loss of
 * the use of money or anticipated savings; loss of information; loss of
 * opportunity; loss of goodwill or reputation; and/or loss of, damage to or
 * corruption of data.
 * There is a monetary cap on Bridgetek's liability.
 * The Software may have subsequently been amended by another user and then
 * distributed by that other user ("Adapted Software").  If so that user may
 * have additional licence terms that apply to those amendments. However, Bridgetek
 * has no liability in relation to those amendments.
 */

#include "EVE_LoadFile.h"
#include "EVE_Platform.h"

/**
 * @brief Mount the SDcard
 *
 * @param phost Pointer to Hal context
 * @return true True if ok
 * @return false False if error
 */
bool EVE_Util_loadSdCard(EVE_HalContext *phost)
{

	return false;

}

EVE_HAL_EXPORT bool EVE_Util_sdCardReady(EVE_HalContext *phost)
{
	/* no-op */
	return false;
}

/**
 * @brief Load a raw file into RAM_G
 *
 * @param phost  Pointer to Hal context
 * @param address Address in RAM_G
 * @param filename File to load
 * @return true True if ok
 * @return false False if error
 */
bool EVE_Util_loadRawFile(EVE_HalContext *phost, uint32_t address, const char *filename)
{

	eve_printf_debug("No filesystem support, cannot open: \"%s\"\n", filename);
	return false;
}

/**
 * @brief Load file into RAM_G by CMD_INFLATE
 *
 * @param phost  Pointer to Hal context
 * @param address Address to write
 * @param filename File to load
 * @return true True if ok
 * @return false False if error
 */
bool EVE_Util_loadInflateFile(EVE_HalContext *phost, uint32_t address, const char *filename)
{

	eve_printf_debug("No filesystem support, cannot open: \"%s\"\n", filename);
	return false;
}

/**
 * @brief Load image into RAM_G
 *
 * @param phost  Pointer to Hal context
 * @param address Address in RAM_G
 * @param filename File to load
 * @param format Target format of image
 * @return true True if ok
 * @return false False if error
 */
bool EVE_Util_loadImageFile(EVE_HalContext *phost, uint32_t address, const char *filename, uint32_t *format)
{

	eve_printf_debug("No filesystem support, cannot open: \"%s\"\n", filename);
	return false;
}

bool EVE_Util_loadCmdFile(EVE_HalContext *phost, const char *filename, uint32_t *transfered)
{

	eve_printf_debug("No filesystem support, cannot open: \"%s\"\n", filename);
	return false;
}

size_t EVE_Util_readFile(EVE_HalContext *phost, uint8_t *buffer, size_t size, const char *filename)
{
	// Read up to `size` number of bytes from the file into `buffer`, then return the number of read bytes
	eve_printf_debug("No filesystem support, cannot open: \"%s\"\n", filename);
	return 0;
}

bool EVE_Util_loadMediaFile(EVE_HalContext *phost, const char *filename, uint32_t *transfered)
{

	eve_printf_debug("No filesystem support, cannot open: \"%s\"\n", filename);
	return false;
}

void EVE_Util_closeFile(EVE_HalContext *phost)
{
}

// pico sd simple test

/**
 * @brief Mount the SDcard
 *
 * @param phost Pointer to Hal context
 * @return true True if ok
 * @return false False if error
 */


/* end of file */
