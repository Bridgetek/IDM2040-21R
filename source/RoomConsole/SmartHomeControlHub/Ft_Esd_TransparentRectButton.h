/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_TransparentRectButton
Header
*/

#ifndef Ft_Esd_TransparentRectButton__H
#define Ft_Esd_TransparentRectButton__H

#include "EVE_Hal.h"
#include "Esd_Base.h"
#include "FT_DataTypes.h"
#include "FT_Esd_Primitives.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_DefaultTheme.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_TouchTag.h"
#include "Ft_Esd_Widget.h"

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

#define Ft_Esd_TransparentRectButton_CLASSID 0xA65E663D
ESD_SYMBOL(Ft_Esd_TransparentRectButton_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_TransparentRectButton, Include = "Ft_Esd_TransparentRectButton.h", Callback, X = 0, Y = 0, Width = 50, Height = 50)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Primary, Type = ft_bool_t, Default = true)
	ft_bool_t(* Primary)(void *context);
	ESD_INPUT(PrimaryAlpha, Type = int, Min = 0, Max = 255, Default = 50)
	int(* PrimaryAlpha)(void *context);
	ESD_INPUT(Alpha, Type = int, Min = 0, Max = 255, Default = 150)
	int(* Alpha)(void *context);
	ESD_INPUT(BitMap, Type = Ft_Esd_BitmapCell)
	Ft_Esd_BitmapCell(* BitMap)(void *context);
	ESD_INPUT(Text, Type = const char *)
	const char *(* Text)(void *context);
	ESD_INPUT(Font, Type = int, Default = 27)
	int(* Font)(void *context);
	ESD_INPUT(AlignX, Type = Ft_AlignX_Opt, Min = 0, Max = 2, SingleStep = 1, Default = OPT_ALIGN_LEFT)
	ft_uint16_t(* AlignX)(void *context);
	ESD_INPUT(AlignY, Type = Ft_AlignY_Opt, Min = 0, Max = 2, SingleStep = 1, Default = OPT_ALIGN_TOP)
	ft_uint16_t(* AlignY)(void *context);
	ESD_SIGNAL(Down)
	void(* Down)(void *context);
	ESD_SIGNAL(Up)
	void(* Up)(void *context);
	ESD_SIGNAL(Pushed)
	void(* Pushed)(void *context);
	Ft_Esd_TouchTag Touch_Tag;
	Ft_Esd_Layout_Fixed Fixed_Position;
} Ft_Esd_TransparentRectButton;

void Ft_Esd_TransparentRectButton__Initializer(Ft_Esd_TransparentRectButton *context);

ESD_SLOT(Render)
void Ft_Esd_TransparentRectButton_Render(Ft_Esd_TransparentRectButton *context);

ESD_SLOT(Start)
void Ft_Esd_TransparentRectButton_Start(Ft_Esd_TransparentRectButton *context);

ESD_SLOT(Update)
void Ft_Esd_TransparentRectButton_Update(Ft_Esd_TransparentRectButton *context);

ESD_SLOT(End)
void Ft_Esd_TransparentRectButton_End(Ft_Esd_TransparentRectButton *context);

#endif /* Ft_Esd_TransparentRectButton__H */

/* end of file */
