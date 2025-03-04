/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_BedroomLightPage
C Source
*/

#include "Usr_BedroomLightPage.h"

#include "Esd_Context.h"
#include "Usr_GlobalVariables.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);

static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_7_BitmapCell__Property(void *context) { return LampBase_0(); }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_6_BitmapCell__Property(void *context) { return LampNeck_0(); }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_5_BitmapCell__Property(void *context) { return LampTop_0(); }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_4_BitmapCell__Property(void *context) { return LampChasis1_0(); }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_3_BitmapCell__Property(void *context) { return LampChasis2_0(); }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_2_BitmapCell__Property(void *context) { return Lamp_0(); }
static Ft_Esd_Theme * Usr_BedroomLightPage_ESD_RangeSlider_Theme__Property(void *context) { return Ft_Esd_Theme_DarkOrange(); }
static ft_int16_t Usr_BedroomLightPage_ESD_RangeSlider_Min__Property(void *context) { return 75; }
static ft_int16_t Usr_BedroomLightPage_ESD_RangeSlider_Max__Property(void *context) { return 255; }
static ft_int16_t Usr_BedroomLightPage_ESD_RangeSlider_Step__Property(void *context) { return 10; }
static ft_int16_t Usr_BedroomLightPage_ESD_RangeSlider_Value__Property(void *context);
static uint8_t Usr_BedroomLightPage_ESD_Label_Font__Property(void *context) { return 29; }
static const char * Usr_BedroomLightPage_ESD_Label_Text__Property(void *context) { return "Bedroom Light"; }
static ft_uint16_t Usr_BedroomLightPage_ESD_Label_AlignX__Property(void *context) { return OPT_ALIGN_CENTER; }
static ft_uint8_t Usr_BedroomLightPage_ESD_Image_Button_2_MinAlpha__Property(void *context) { return 0; }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_Button_2_BitmapNormal__Property(void *context) { return power_circle_64_0(); }
static ft_uint8_t Usr_BedroomLightPage_ESD_Image_Button_MinAlpha__Property(void *context) { return 0; }
static Ft_Esd_BitmapCell Usr_BedroomLightPage_ESD_Image_Button_BitmapNormal__Property(void *context) { return return_circle_64_0(); }
static ft_int32_t Usr_BedroomLightPage_ESD_Rectangle_Widget_4_Radius__Property(void *context) { return 24L; }
static ft_argb32_t Usr_BedroomLightPage_ESD_Rectangle_Widget_4_Color__Property(void *context) { return 0x59000000UL; }
static ft_argb32_t Usr_BedroomLightPage_ESD_Gradient_Widget_color1__Property(void *context) { return 0xff414141UL; }
static ft_argb32_t Usr_BedroomLightPage_ESD_Gradient_Widget_color2__Property(void *context) { return 0xff010101UL; }
static bool Usr_BedroomLightPage_ESD_Gradient_Widget_Manual__Property(void *context) { return 1; }

static Ft_Esd_WidgetSlots s_Usr_BedroomLightPage__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Usr_BedroomLightPage_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Usr_BedroomLightPage_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Usr_BedroomLightPage_End,
};

static void Usr_BedroomLightPage_ESD_Image_Button_2_Pushed__Signal(void *context);
static void Usr_BedroomLightPage_ESD_Image_Button_Pushed__Signal(void *context);

void Usr_BedroomLightPage__Fixed_Position__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Layout_Fixed *object = (Ft_Esd_Layout_Fixed *)&context->Fixed_Position;
	Ft_Esd_Layout_Fixed__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Usr_BedroomLightPage__ESD_Image_7__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_7;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 193;
	object->Widget.LocalY = 185;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->BitmapCell = Usr_BedroomLightPage_ESD_Image_7_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_6__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_6;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 215;
	object->Widget.LocalY = 154;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->BitmapCell = Usr_BedroomLightPage_ESD_Image_6_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_5__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_5;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 226;
	object->Widget.LocalY = 53;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->BitmapCell = Usr_BedroomLightPage_ESD_Image_5_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_4__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_4;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 158;
	object->Widget.LocalY = 150;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->Color = 0xfff69616UL;
	object->BitmapCell = Usr_BedroomLightPage_ESD_Image_4_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_3__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_3;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 184;
	object->Widget.LocalY = 63;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->Color = 0xfff69616UL;
	object->BitmapCell = Usr_BedroomLightPage_ESD_Image_3_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_2__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image_2;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 160;
	object->Widget.LocalY = 68;
	object->Widget.LocalWidth = 100;
	object->Widget.LocalHeight = 100;
	object->BitmapCell = Usr_BedroomLightPage_ESD_Image_2_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_RangeSlider__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_RangeSlider *object = (Ft_Esd_RangeSlider *)&context->ESD_RangeSlider;
	Ft_Esd_RangeSlider__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 129;
	object->Widget.LocalY = 242;
	object->Widget.LocalWidth = 220;
	object->Widget.LocalHeight = 39;
	object->Theme = Usr_BedroomLightPage_ESD_RangeSlider_Theme__Property;
	object->Min = Usr_BedroomLightPage_ESD_RangeSlider_Min__Property;
	object->Max = Usr_BedroomLightPage_ESD_RangeSlider_Max__Property;
	object->Step = Usr_BedroomLightPage_ESD_RangeSlider_Step__Property;
	object->Value = Usr_BedroomLightPage_ESD_RangeSlider_Value__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Label__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 149;
	object->Widget.LocalY = 405;
	object->Widget.LocalWidth = 180;
	object->Widget.LocalHeight = 36;
	object->Font = Usr_BedroomLightPage_ESD_Label_Font__Property;
	object->Text = Usr_BedroomLightPage_ESD_Label_Text__Property;
	object->AlignX = Usr_BedroomLightPage_ESD_Label_AlignX__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_Button_2__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_ImageButton *object = (Ft_Esd_ImageButton *)&context->ESD_Image_Button_2;
	Ft_Esd_ImageButton__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 121;
	object->Widget.LocalY = 310;
	object->Widget.LocalWidth = 64;
	object->Widget.LocalHeight = 64;
	object->MinAlpha = Usr_BedroomLightPage_ESD_Image_Button_2_MinAlpha__Property;
	object->BitmapNormal = Usr_BedroomLightPage_ESD_Image_Button_2_BitmapNormal__Property;
	object->Pushed = Usr_BedroomLightPage_ESD_Image_Button_2_Pushed__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Image_Button__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_ImageButton *object = (Ft_Esd_ImageButton *)&context->ESD_Image_Button;
	Ft_Esd_ImageButton__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 293;
	object->Widget.LocalY = 310;
	object->Widget.LocalWidth = 64;
	object->Widget.LocalHeight = 64;
	object->MinAlpha = Usr_BedroomLightPage_ESD_Image_Button_MinAlpha__Property;
	object->BitmapNormal = Usr_BedroomLightPage_ESD_Image_Button_BitmapNormal__Property;
	object->Pushed = Usr_BedroomLightPage_ESD_Image_Button_Pushed__Signal;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Rectangle_Widget_4__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->ESD_Rectangle_Widget_4;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 114;
	object->Widget.LocalY = 395;
	object->Widget.LocalWidth = 242;
	object->Widget.LocalHeight = 48;
	object->Radius = Usr_BedroomLightPage_ESD_Rectangle_Widget_4_Radius__Property;
	object->Color = Usr_BedroomLightPage_ESD_Rectangle_Widget_4_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__ESD_Gradient_Widget__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Gradient *object = (Ft_Esd_Gradient *)&context->ESD_Gradient_Widget;
	Ft_Esd_Gradient__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 480;
	object->Widget.LocalHeight = 480;
	object->color1 = Usr_BedroomLightPage_ESD_Gradient_Widget_color1__Property;
	object->color2 = Usr_BedroomLightPage_ESD_Gradient_Widget_color2__Property;
	object->Manual = Usr_BedroomLightPage_ESD_Gradient_Widget_Manual__Property;
	object->Point_1_X = 0L;
	object->Point_1_Y = 240L;
	object->Point_2_X = 480L;
	object->Point_2_Y = 240L;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Usr_BedroomLightPage__Initializer(Usr_BedroomLightPage *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Usr_BedroomLightPage_CLASSID;
	context->Widget.Slots = &s_Usr_BedroomLightPage__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->SliderValue = 255L;
	context->LampColor = 0xffffa411UL;
	context->lampEffect = 0xfff69616UL;
	context->On = 1;
	context->BackPushed = Esd_Noop;
	Usr_BedroomLightPage__Fixed_Position__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_7__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_6__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_5__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_4__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_3__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_2__Initializer(context);
	Usr_BedroomLightPage__ESD_RangeSlider__Initializer(context);
	Usr_BedroomLightPage__ESD_Label__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_Button_2__Initializer(context);
	Usr_BedroomLightPage__ESD_Image_Button__Initializer(context);
	Usr_BedroomLightPage__ESD_Rectangle_Widget_4__Initializer(context);
	Usr_BedroomLightPage__ESD_Gradient_Widget__Initializer(context);
}

extern int g_BedroomLightValue;
extern int g_BedroomLightIsOn;


void Usr_BedroomLightPage_Update(Usr_BedroomLightPage *context)
{
	void *owner = context->Owner;
	int update_variable = Ft_Esd_RangeSlider_Output(&context->ESD_RangeSlider);
	g_BedroomLightValue = update_variable;
	esd_argb32_t update_variable_1 = context->lampEffect;
	context->ESD_Image_6.Color = update_variable_1;
	esd_argb32_t update_variable_2 = context->lampEffect;
	context->ESD_Image_5.Color = update_variable_2;
	esd_argb32_t update_variable_3 = context->lampEffect;
	context->ESD_Image_4.Color = update_variable_3;
	esd_argb32_t update_variable_4 = context->lampEffect;
	context->ESD_Image_3.Color = update_variable_4;
	esd_argb32_t rgb = context->LampColor;
	int a = g_BedroomLightValue;
	esd_argb32_t update_variable_5 = ESD_COMPOSE_RGB_ALPHA(rgb, a);
	context->ESD_Image_2.Color = update_variable_5;
	bool if_1 = context->On;
	esd_argb32_t update_variable_6;
	if (if_1)
	{
		update_variable_6 = 0xff5bce65UL;
	}
	else
	{
		update_variable_6 = 0xffffffffUL;
	}
	context->ESD_Image_Button_2.Color = update_variable_6;
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Usr_BedroomLightPage_End(Usr_BedroomLightPage *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Position); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_7); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_6); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_5); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_4); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_3); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_RangeSlider); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_Button_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image_Button); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Rectangle_Widget_4); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Gradient_Widget); 
}

void Usr_BedroomLightPage_Start(Usr_BedroomLightPage *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context); 
	int set_variable_2 = g_BedroomLightValue;
	context->SliderValue = set_variable_2;
	int set_variable_3 = g_BedroomLightIsOn;
	context->On = (int)set_variable_3;
	bool if_2 = context->On;
	if (if_2)
	{
		esd_argb32_t set_variable_5 = 0xffffffffUL;
		context->LampColor = set_variable_5;
		context->lampEffect = set_variable_5;
		esd_argb32_t set_variable_5_2 = 0xfff69616UL;
		context->lampEffect = set_variable_5_2;
	}
	else
	{
		esd_argb32_t set_variable_5_1 = 0xff122828UL;
		context->LampColor = set_variable_5_1;
		esd_argb32_t set_variable_5_1_1 = 0xffffffffUL;
		context->lampEffect = set_variable_5_1_1;
	}
}

void Usr_BedroomLightPage_Right(Usr_BedroomLightPage *context)
{
	void *owner = context->Owner;
	int left = Ft_Esd_RangeSlider_Output(&context->ESD_RangeSlider);
	int right = 10L;
	int set_variable_2_1 = left + right;
	context->SliderValue = set_variable_2_1;
}

void Usr_BedroomLightPage_Left(Usr_BedroomLightPage *context)
{
	void *owner = context->Owner;
	int left_1 = Ft_Esd_RangeSlider_Output(&context->ESD_RangeSlider);
	int right_1 = 10L;
	int set_variable_3_1 = left_1 - right_1;
	context->SliderValue = set_variable_3_1;
}

ft_int16_t Usr_BedroomLightPage_ESD_RangeSlider_Value__Property(void *c)
{
	Usr_BedroomLightPage *context = (Usr_BedroomLightPage *)c;
	void *owner = context->Owner;
	return context->SliderValue;
}

void Usr_BedroomLightPage_ESD_Image_Button_2_Pushed__Signal(void *c)
{
	Usr_BedroomLightPage *context = (Usr_BedroomLightPage *)c;
	void *owner = context->Owner;
	bool value = context->On;
	int set_variable = !value;
	context->On = (int)set_variable;
	g_BedroomLightIsOn = set_variable;
	bool if_3 = context->On;
	if (if_3)
	{
		esd_argb32_t set_variable_5_3 = 0xffffffffUL;
		context->LampColor = set_variable_5_3;
		context->lampEffect = set_variable_5_3;
		esd_argb32_t set_variable_5_2_1 = 0xfff69616UL;
		context->lampEffect = set_variable_5_2_1;
	}
	else
	{
		esd_argb32_t set_variable_5_1_2 = 0xff122828UL;
		context->LampColor = set_variable_5_1_2;
		esd_argb32_t set_variable_5_1_1_1 = 0xffffffffUL;
		context->lampEffect = set_variable_5_1_1_1;
	}
}

void Usr_BedroomLightPage_ESD_Image_Button_Pushed__Signal(void *c)
{
	Usr_BedroomLightPage *context = (Usr_BedroomLightPage *)c;
	void *owner = context->Owner;
	context->BackPushed(owner);
}


/* end of file */
