
#include "Esd_CoWidget.h"
#include "Esd_Context.h"

void Esd_CoWidget_Spinner(void *owner, int16_t x, int16_t y, uint16_t style, uint16_t scale)
{
	Esd_CurrentContext->CmdOwner = owner;
	EVE_CoDl_vertexFormat(Esd_GetHost(), 4);
	EVE_CoCmd_spinner(Esd_GetHost(), x, y, style, scale);
}

void Esd_CoWidget_ScreenSaver(void *owner)
{
	Esd_CurrentContext->CmdOwner = owner;
	EVE_CoCmd_screenSaver(Esd_GetHost());
}

void Esd_CoWidget_Sketch(void *owner, Esd_Rect16 globalRect, uint32_t addr, uint16_t format)
{
	Esd_CurrentContext->CmdOwner = owner;
	EVE_CoCmd_sketch(Esd_GetHost(), globalRect.X, globalRect.Y, globalRect.Width, globalRect.Height, addr, format);
}

void Esd_CoWidget_Stop(void *owner)
{
	if ((owner == Esd_CurrentContext->CmdOwner) || !owner)
	{
		EVE_CoCmd_stop(Esd_GetHost());
		Esd_CurrentContext->CmdOwner = NULL;
	}
}

void Esd_CoWidget_PopupSpinner()
{
	Esd_CurrentContext->SpinnerPopup = true;
}

void Esd_CoWidget_StopBgVideo()
{
}

static void Esd_CoWidget_LoadBgVideoFrame()
{
}

void Esd_CoWidget_Render()
{
	Esd_CoWidget_LoadBgVideoFrame();
}

/* Plays the specified Esd_BitmapInfo video in the background.
Video only, not applicable to bitmap cell animation.
Only one video can play in the background at a time.
Background play will be interrupted when any other video is started, and cannot be resumed. */
bool Esd_CoWidget_PlayBgVideo(Esd_BitmapCell video)
{
	eve_printf_debug("Video is not supported\n");
	return false;
}

bool Esd_CoWidget_PlayVideoFile(const char *filename, uint16_t options)
{
	eve_printf_debug("Video is not supported\n");
	return false;
}

bool Esd_CoWidget_PlayVideoFlash(uint32_t addr, uint16_t options)
{
	eve_printf_debug("Video from flash storage is not supported\n");
	return false;
}

bool Esd_CoWidget_PlayVideo(Esd_BitmapCell video, uint16_t options)
{
	eve_printf_debug("Video is not supported\n");
	return false;
}
/* end of file */
