/*
This file is automatically generated
curtain_open1
C Source
*/

#include "curtain_open1.h"

#include "Ft_Gpu.h"
#include "curtain_open1_progmem.h"

Ft_Esd_BitmapInfo curtain_open1__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 64,
	.Height = 58,
	.Format = ARGB1555,
	.Stride = 128,
	.Size = 7424,
	.ProgMem = curtain_open1_bin,
	.StorageSize = ((1882 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell curtain_open1(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &curtain_open1__Info, 
		.Cell = cell 
	};
}


/* end of file */
