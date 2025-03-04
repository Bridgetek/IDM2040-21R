/*
This file is automatically generated
DO NOT MODIFY BY HAND
Usr_Humid_Page
Header
*/

#ifndef Usr_Humid_Page__H
#define Usr_Humid_Page__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_Circle.h"
#include "Ft_Esd_Gradient_Arc_Line.h"
#include "Ft_Esd_Image.h"
#include "Ft_Esd_ImageButton.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_Line.h"
#include "Ft_Esd_Rectangle.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_TouchPanel.h"
#include "Ft_Esd_Widget.h"
#include "Usr_CircullarSlider.h"
#include "Usr_Vertical_ScrollText.h"
#include "humid_icon.h"
#include "return_circle_64.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_ARRAY_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

#define Usr_Humid_Page_CLASSID 0x92F454C8
ESD_SYMBOL(Usr_Humid_Page_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Usr_Humid_Page, Include = "Usr_Humid_Page.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	int Local_Method__Value;
	ESD_VARIABLE(NewValue, Type = int, Private)
	int NewValue;
	ESD_SIGNAL(BackPushed)
	void(* BackPushed)(void *context);
	ESD_VARIABLE(PlusAlpha, Type = int, Default = 255, Private)
	int PlusAlpha;
	ESD_VARIABLE(MinusAlpha, Type = int, Default = 255, Private)
	int MinusAlpha;
	Ft_Esd_Layout_Fixed Fixed_Position;
	Ft_Esd_TouchPanel ESD_Touch_Panel_1;
	Ft_Esd_TouchPanel ESD_Touch_Panel;
	Ft_Esd_Line ESD_Line_Widget_2;
	Ft_Esd_Line ESD_Line_Widget_1;
	Ft_Esd_Label ESD_Label;
	Ft_Esd_Line ESD_Line_Widget;
	Ft_Esd_ImageButton ESD_Image_Button;
	Ft_Esd_Image ESD_Image_2;
	Ft_Esd_Circle ESD_Circle__1;
	Ft_Esd_Circle ESD_Circle_;
	Usr_CircullarSlider Usr_CircullarSlider;
	Usr_Vertical_ScrollText Usr_Vertical_ScrollText;
	Ft_Esd_Gradient_Arc_Line ESD_Gradient_ArcLine;
	Ft_Esd_Rectangle ESD_Rectangle_Widget;
} Usr_Humid_Page;

void Usr_Humid_Page__Initializer(Usr_Humid_Page *context);

ESD_SLOT(Update)
void Usr_Humid_Page_Update(Usr_Humid_Page *context);

ESD_SLOT(End)
void Usr_Humid_Page_End(Usr_Humid_Page *context);

ESD_SLOT(Right)
void Usr_Humid_Page_Right(Usr_Humid_Page *context);

ESD_SLOT(Left)
void Usr_Humid_Page_Left(Usr_Humid_Page *context);

#endif /* Usr_Humid_Page__H */

/* end of file */
