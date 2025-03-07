/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_CircleImageButton
C Source
*/

/*
Comment :
Introduction:
This widget acts like a button.
It used two images from Resources, one for normal state and one for pressed state.

*/

#include "Usr_CircleImageButton.h"

#include "Esd_Context.h"
#include "Ft_Esd_Dl.h"
#include "Ft_Esd_Elements.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ft_uint8_t Usr_CircleImageButton_MinAlpha__Default(void *context) { return 1; }
Ft_Esd_BitmapCell Usr_CircleImageButton_BitmapNormal__Default(void *context) { return (Ft_Esd_BitmapCell){ 0 }; }

static Ft_Esd_BitmapCell Usr_CircleImageButton_ESD_Image_BitmapCell__Property(void *context);
static ft_uint8_t Usr_CircleImageButton_ESD_Image_MinAlpha__Property(void *context);

static Ft_Esd_WidgetSlots s_Usr_CircleImageButton__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Usr_CircleImageButton_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Usr_CircleImageButton_Update,
	(void(*)(void *))Usr_CircleImageButton_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Usr_CircleImageButton_End,
};

static void Usr_CircleImageButton_Touch_Tag_Down__Signal(void *context);
static void Usr_CircleImageButton_Touch_Tag_Up__Signal(void *context);
static void Usr_CircleImageButton_Touch_Tag_Tap__Signal(void *context);
static void Usr_CircleImageButton_ESD_Image_RenderComplete__Signal(void *context);

void Usr_CircleImageButton__Touch_Tag__Initializer(Usr_CircleImageButton *context)
{
	Esd_TouchTag *object = (Esd_TouchTag *)&context->Touch_Tag;
	Esd_TouchTag__Initializer(object);
	object->Owner = (void *)context;
	object->Down = Usr_CircleImageButton_Touch_Tag_Down__Signal;
	object->Up = Usr_CircleImageButton_Touch_Tag_Up__Signal;
	object->Tap = Usr_CircleImageButton_Touch_Tag_Tap__Signal;
}

void Usr_CircleImageButton__ESD_Image__Initializer(Usr_CircleImageButton *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 72;
	object->Widget.LocalHeight = 72;
	object->Color = 0xff000000UL;
	object->BitmapCell = Usr_CircleImageButton_ESD_Image_BitmapCell__Property;
	object->MinAlpha = Usr_CircleImageButton_ESD_Image_MinAlpha__Property;
	object->RenderComplete = Usr_CircleImageButton_ESD_Image_RenderComplete__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Usr_CircleImageButton__Initializer(Usr_CircleImageButton *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Usr_CircleImageButton_CLASSID;
	context->Widget.Slots = &s_Usr_CircleImageButton__Slots;
	context->Widget.LocalX = 6;
	context->Widget.LocalY = 4;
	context->Widget.LocalWidth = 72;
	context->Widget.LocalHeight = 72;
	context->Down = Esd_Noop;
	context->Up = Esd_Noop;
	context->Pushed = Esd_Noop;
	context->MinAlpha = Usr_CircleImageButton_MinAlpha__Default;
	context->Color = 0xffffffffUL;
	context->BitmapNormal = Usr_CircleImageButton_BitmapNormal__Default;
	context->BackgroundColor = 0xff000000UL;
	context->BorderColor = 0xffffffffUL;
	context->BorderWidth = 3L;
	context->Align = ESD_ALIGN_TOPLEFT;
	context->Scaling = ESD_SCALING_ORIGINAL;
	context->AutoResize = ESD_AUTORESIZE_BOTH;
	context->ScaleX = (1L * (1L << 16) + 0x0L);
	context->ScaleY = (1L * (1L << 16) + 0x0L);
	Usr_CircleImageButton__Touch_Tag__Initializer(context);
	Usr_CircleImageButton__ESD_Image__Initializer(context);
}

void Ft_Esd_Elements_CircleFlat(ft_argb32_t, ft_int16_t, ft_int16_t, ft_int16_t);

static int Usr_CircleImageButton_Local_Method(Usr_CircleImageButton *context, int Width, int Height);
static int Usr_CircleImageButton_Local_Method__Internal(Usr_CircleImageButton *context);

void Usr_CircleImageButton_Start(Usr_CircleImageButton *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context);
	Esd_TouchTag_Start(&context->Touch_Tag);
}

void Usr_CircleImageButton_Update(Usr_CircleImageButton *context)
{
	void *owner = context->Owner;
	Esd_TouchTag_Update(&context->Touch_Tag);
	ft_argb32_t update_variable = context->Color;
	context->ESD_Image.Color = update_variable;
	uint8_t update_variable_1 = context->Align;
	context->ESD_Image.Align = update_variable_1;
	uint8_t update_variable_2 = context->Scaling;
	context->ESD_Image.Scaling = update_variable_2;
	ft_uint8_t update_variable_3 = context->AutoResize;
	context->ESD_Image.AutoResize = update_variable_3;
	ft_int32_f16_t update_variable_4 = context->ScaleX;
	context->ESD_Image.ScaleX = update_variable_4;
	ft_int32_f16_t update_variable_5 = context->ScaleY;
	context->ESD_Image.ScaleY = update_variable_5;
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Usr_CircleImageButton_End(Usr_CircleImageButton *context)
{
	void *owner = context->Owner;
	Esd_TouchTag_End(&context->Touch_Tag);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image); 
}

void Usr_CircleImageButton_Render(Usr_CircleImageButton *context)
{
	void *owner = context->Owner;
	uint8_t s = Esd_TouchTag_Tag(&context->Touch_Tag);
	Ft_Esd_Dl_TAG(s);
	ft_argb32_t color = context->BorderColor;
	ft_int16_t left = context->Widget.GlobalX;
	int right = Usr_CircleImageButton_Local_Method__Internal(context);
	int x = left + right;
	ft_int16_t left_1 = context->Widget.GlobalY;
	int right_1 = Usr_CircleImageButton_Local_Method__Internal(context);
	int y = left_1 + right_1;
	int radius = Usr_CircleImageButton_Local_Method__Internal(context);
	Ft_Esd_Elements_CircleFlat(color, x, y, radius);
	ft_argb32_t color_1 = context->BackgroundColor;
	ft_int16_t left_2 = context->Widget.GlobalX;
	int right_2 = Usr_CircleImageButton_Local_Method__Internal(context);
	int x_1 = left_2 + right_2;
	ft_int16_t left_3 = context->Widget.GlobalY;
	int right_3 = Usr_CircleImageButton_Local_Method__Internal(context);
	int y_1 = left_3 + right_3;
	int left_4 = Usr_CircleImageButton_Local_Method__Internal(context);
	int right_4 = context->BorderWidth;
	int radius_1 = left_4 - right_4;
	Ft_Esd_Elements_CircleFlat(color_1, x_1, y_1, radius_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

ft_bool_t Usr_CircleImageButton_Pushing(Usr_CircleImageButton *context)
{
	void *owner = context->Owner;
	return Esd_TouchTag_Inside(&context->Touch_Tag);
}

static int Usr_CircleImageButton_Local_Method(Usr_CircleImageButton *context, int Width, int Height)
{
	void *owner = context->Owner;
	if(Width <= Height)
		return  Width/2;
	else 
		return Height/2 ;
}

static int Usr_CircleImageButton_Local_Method__Internal(Usr_CircleImageButton *context)
{
	void *owner = context->Owner;
	ft_int16_t Width = context->Widget.GlobalWidth;
	ft_int16_t Height = context->Widget.GlobalHeight;
	return Usr_CircleImageButton_Local_Method(context, Width, Height);
}

void Usr_CircleImageButton_Touch_Tag_Down__Signal(void *c)
{
	Usr_CircleImageButton *context = (Usr_CircleImageButton *)c;
	void *owner = context->Owner;
	context->Down(owner);
}

void Usr_CircleImageButton_Touch_Tag_Up__Signal(void *c)
{
	Usr_CircleImageButton *context = (Usr_CircleImageButton *)c;
	void *owner = context->Owner;
	context->Up(owner);
}

void Usr_CircleImageButton_Touch_Tag_Tap__Signal(void *c)
{
	Usr_CircleImageButton *context = (Usr_CircleImageButton *)c;
	void *owner = context->Owner;
	context->Pushed(owner);
}

Ft_Esd_BitmapCell Usr_CircleImageButton_ESD_Image_BitmapCell__Property(void *c)
{
	Usr_CircleImageButton *context = (Usr_CircleImageButton *)c;
	void *owner = context->Owner;
	return context->BitmapNormal(owner);
}

ft_uint8_t Usr_CircleImageButton_ESD_Image_MinAlpha__Property(void *c)
{
	Usr_CircleImageButton *context = (Usr_CircleImageButton *)c;
	void *owner = context->Owner;
	return context->MinAlpha(owner);
}

void Usr_CircleImageButton_ESD_Image_RenderComplete__Signal(void *c)
{
	Usr_CircleImageButton *context = (Usr_CircleImageButton *)c;
	void *owner = context->Owner;
	ft_uint8_t left_5 = context->AutoResize;
	ft_uint8_t right_5 = ESD_AUTORESIZE_WIDTH;
	ft_uint8_t if_1 = left_5 & right_5;
	if (if_1)
	{
		// Variable writer 'Set_Width' does not write to any variables
	}
	else
	{
	}
	ft_uint8_t left_6 = context->AutoResize;
	ft_uint8_t right_6 = ESD_AUTORESIZE_HEIGHT;
	ft_uint8_t if_2 = left_6 & right_6;
	if (if_2)
	{
		// Variable writer 'Set_Height' does not write to any variables
	}
	else
	{
	}
}


/* end of file */
