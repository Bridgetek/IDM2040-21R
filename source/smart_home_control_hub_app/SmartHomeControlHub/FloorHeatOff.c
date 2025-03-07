/*
This file is automatically generated
FloorHeatOff
C Source
*/

#include "FloorHeatOff.h"

#include "Ft_Gpu.h"
#include "FloorHeatOff_progmem.h"

Ft_Esd_BitmapInfo FloorHeatOff__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 83, /* Padded to 84, REPEAT will not work as expected */
	.Height = 52,
	.Format = L4,
	.Stride = 42,
	.Size = 2184,
	.ProgMem = FloorHeatOff_bin,
	.StorageSize = ((795 + 3) >> 2),
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Type = ESD_RESOURCE_PROGMEM,
};

Ft_Esd_BitmapCell FloorHeatOff(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &FloorHeatOff__Info, 
		.Cell = cell 
	};
}


/* end of file */
