/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Ring
Header
*/

#ifndef Ft_Esd_Ring__H
#define Ft_Esd_Ring__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_ArcLine.h"
#include "Ft_Esd_CircleLine.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_Math.h"
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

#define Ft_Esd_Ring_CLASSID 0x006A1B21
ESD_SYMBOL(Ft_Esd_Ring_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_Ring, Include = "Ft_Esd_Ring.h", Callback, DisplayName = "ESD Ring", Category = EsdWidgets, X = 1, Y = 3, Width = 311, Height = 284)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Angle, DisplayName = "Angle", Type = ft_int16_t, Min = 0, Max = 360, SingleStep = 1, Default = 50)
	ft_int16_t(* Angle)(void *context);
	ESD_INPUT(Clockwise, Type = ft_bool_t, Default = true)
	ft_bool_t(* Clockwise)(void *context);
	ESD_INPUT(Origin, Type = int, Min = 0, Max = 360, Default = 0)
	int(* Origin)(void *context);
	ESD_INPUT(RingWidth, DisplayName = "Ring Width", Type = int, Min = 0, Max = 100, Default = 40)
	int(* RingWidth)(void *context);
	ESD_INPUT(InnerBorder, Type = int, Min = -1, Max = 100, Default = 5)
	int(* InnerBorder)(void *context);
	ESD_INPUT(OuterBorder, Type = int, Min = -1, Max = 100, Default = 5)
	int(* OuterBorder)(void *context);
	/* To show start point */
	ESD_INPUT(StartPoint, DisplayName = "Start Point", Type = ft_bool_t, Default = true)
	ft_bool_t(* StartPoint)(void *context);
	/* To show end point */
	ESD_INPUT(EndPoint, DisplayName = "End Point", Type = ft_bool_t, Default = true)
	ft_bool_t(* EndPoint)(void *context);
	ESD_INPUT(BackgroundColor, DisplayName = "Background Color", Type = ft_argb32_t, Default = #181412)
	ft_argb32_t(* BackgroundColor)(void *context);
	ESD_INPUT(SelectionColor, DisplayName = "Selection Color", Type = ft_argb32_t, Default = #c55a11)
	ft_argb32_t(* SelectionColor)(void *context);
	ESD_INPUT(BorderColor, Type = ft_argb32_t, Default = #c55a11)
	ft_argb32_t(* BorderColor)(void *context);
	Ft_Esd_Layout_Fixed Fixed_Positioning;
	Ft_Esd_ArcLine ArcLine;
	Ft_Esd_CircleLine CircleLineBG;
	Ft_Esd_CircleLine CircleLineBorder;
} Ft_Esd_Ring;

void Ft_Esd_Ring__Initializer(Ft_Esd_Ring *context);

ESD_SLOT(Update)
void Ft_Esd_Ring_Update(Ft_Esd_Ring *context);

ESD_SLOT(End)
void Ft_Esd_Ring_End(Ft_Esd_Ring *context);

#endif /* Ft_Esd_Ring__H */

/* end of file */
