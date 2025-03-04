/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_ProgressBar
C Source
*/

/*
Comment :
Introduction:
This widget draws a progress bar.
CMD_PROGRESS is used internally.
*/

#include "Ft_Esd_ProgressBar.h"

#include "Esd_Context.h"
#include "Ft_Esd_CoCmd.h"
#include "Ft_Esd_Dl.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
Ft_Esd_Theme * Ft_Esd_ProgressBar_Theme__Default(void *context) { return 0; }
ft_uint16_t Ft_Esd_ProgressBar_Val__Default(void *context) { return 0U; }
ft_uint16_t Ft_Esd_ProgressBar_Range__Default(void *context) { return 100U; }


static Ft_Esd_WidgetSlots s_Ft_Esd_ProgressBar__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_ProgressBar_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_ProgressBar__Initializer(Ft_Esd_ProgressBar *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_ProgressBar_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_ProgressBar__Slots;
	context->Widget.LocalX = 50;
	context->Widget.LocalY = 50;
	context->Widget.LocalWidth = 180;
	context->Widget.LocalHeight = 24;
	context->Theme = Ft_Esd_ProgressBar_Theme__Default;
	context->Style = ESD_OPT_3D;
	context->Val = Ft_Esd_ProgressBar_Val__Default;
	context->Range = Ft_Esd_ProgressBar_Range__Default;
}

void Ft_Esd_ProgressBar_CoCmd(Ft_Esd_ProgressBar *context, uint16_t, ft_uint16_t, ft_uint16_t);

void Ft_Esd_ProgressBar_Render(Ft_Esd_ProgressBar *context)
{
	void *owner = context->Owner;
	ft_uint8_t alpha = 255;
	Ft_Esd_Dl_COLOR_A(alpha);
	EVE_HalContext * phost = Ft_Esd_GetHost();
	Ft_Esd_Theme * theme = context->Theme(owner);
	ft_argb32_t c_1 = Ft_Esd_Theme_GetBackColor(theme);
	Ft_Gpu_CoCmd_BgColor(phost, c_1);
	Ft_Esd_Theme * theme_1 = context->Theme(owner);
	ft_argb32_t c_2 = Ft_Esd_Theme_GetPrimaryColor(theme_1);
	Ft_Esd_Dl_COLOR_RGB(c_2);
	ft_uint8_t value = context->Style;
	uint16_t options;
	switch (value)
	{
		case 0L:
		{
			options = 0;
			break;
		}
		case 1L:
		{
			options = OPT_FLAT;
			break;
		}
		default:
		{
			options = 0;
			break;
		}
	}
	ft_uint16_t value_1 = context->Val(owner);
	ft_uint16_t min = 0U;
	ft_uint16_t max = context->Range(owner);
	ft_uint16_t val = Ft_Esd_UInt16_ClampedValue(value_1, min, max);
	ft_uint16_t range = context->Range(owner);
	Ft_Esd_ProgressBar_CoCmd(context, options, val, range);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}


/* end of file */
