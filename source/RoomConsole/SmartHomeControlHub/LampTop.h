/*
This file is automatically generated
LampTop
Header
*/

#ifndef LampTop__H
#define LampTop__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell LampTop(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo LampTop__Info;

ESD_FUNCTION(LampTop_0, Type = Ft_Esd_BitmapCell, DisplayName = "LampTop", Include = "LampTop.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define LampTop_0() ((Ft_Esd_BitmapCell){ .Info = &LampTop__Info, .Cell = 0 })

#endif /* LampTop__H */

/* end of file */
