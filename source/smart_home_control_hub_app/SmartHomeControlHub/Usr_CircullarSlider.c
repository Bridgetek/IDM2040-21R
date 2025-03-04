#include "Ft_Esd.h"
#include "Usr_CircullarSlider.h"

extern ESD_CORE_EXPORT EVE_HalContext *Esd_Host;

void Usr_CircullarSlider_Update_TouchTracker_NoWrap(Usr_CircullarSlider *context)
{
	//eve_printf_debug("Usr_CircullarSlider_Update_TouchTracker_NoWrap\n");
	void *owner = context->Owner;
	int step = (context->TrackAngle - context->StartTrackAngle) / 1024;
	if (step == 0 && !context->IsReady)
		return;
	int currAngle = context->StartAngle;
	int newAngle = currAngle;
	int max = (int)(context->MaxValue) * 360 / context->UnitCircle;
	int min = 0;
	while (step > 180)
	{
		step -= 360;
	}
	while (step < -180)
	{
		step += 360;
	}

	int adjustAngle = (context->IsClockwise) ? (currAngle + step) : (currAngle - step);
	if (adjustAngle > max)
	{
		// context->ShiftedOrigin = context->Origin(owner) + (adjustAngle - max);
		adjustAngle = max;
	}

	if (adjustAngle < min)
	{
		// context->ShiftedOrigin = context->Origin(owner) + (adjustAngle - min);
		context->IsClockwise = !context->IsClockwise;
		context->ShiftedOrigin = 360 - context->ShiftedOrigin;
		adjustAngle = min;
	}

	int newValue = (context->Clockwise(owner))
	    ? (context->IsClockwise)
	        ? context->StartValue + (adjustAngle * context->UnitCircle) / 360
	        : context->StartValue - (adjustAngle * context->UnitCircle) / 360
	    : (!context->IsClockwise)
	    ? context->StartValue + (adjustAngle * context->UnitCircle) / 360
	    : context->StartValue - (adjustAngle * context->UnitCircle) / 360;

	if (newValue > context->MaxValue)
		newValue = context->MaxValue;
	if (newValue < 0)
		newValue = 0;

	if (newValue != context->Value)
	{
		// if (step != 0) 	//eve_printf_debug(" Start: %d, Track: %d, StartTrack: %d, ", context->StartAngle, context->TrackAngle, context->StartTrackAngle);
		context->NewAngle = newAngle;
		context->ClampedNewAngle = adjustAngle;
		if (context->ClampedNewAngle > 360)
		{
			context->ShiftedOrigin = context->IsClockwise ? (context->StartOrigin + context->ClampedNewAngle - 360) % 360
			                                              : ((360 - context->StartOrigin + context->ClampedNewAngle - 360) % 360);
			context->ClampedNewAngle = 360;
		}
		context->StartAngle = adjustAngle;
		context->StartTrackAngle += step * 1024;
		context->DeltaVal = newValue - context->Value;
		//eve_printf_debug("Usr_CircullarSlider_Update_TouchTracker_NoWrap %d\n", newValue);

		context->Value = newValue;
		context->ValueChanged(owner);
	}
	else if (newValue == context->MaxValue || newValue == 0)
	{
		context->StartTrackAngle += step * 1024;
	}

	// if (step != 0) 	//eve_printf_debug(" step: %d, new: %d, adjust: %d ", step, newAngle, adjustAngle);
	context->IsReady = FT_TRUE;
}

ESD_METHOD(Usr_CircullarSlider_Update_TouchTracker, Context = Usr_CircullarSlider)
ESD_PARAMETER(tag, Type = ft_int16_t, Default = 255)
void Usr_CircullarSlider_Update_TouchTracker(Usr_CircullarSlider *context, ft_int16_t tag)
{
	//eve_printf_debug("Usr_CircullarSlider_Update_TouchTracker\n");
	EVE_HalContext *phost = Esd_GetHost();

	// ...
	void *owner = context->Owner;
	int x = context->Widget.GlobalX + (context->Widget.GlobalWidth >> 1);
	int y = context->Widget.GlobalY + (context->Widget.GlobalHeight >> 1);
	// eve_printf_debug("\n x: %d, y: %d tag: %d", x, y, tag);
	Ft_Gpu_CoCmd_Track(Ft_Esd_Host, x, y, 1, 1, tag);

	ft_uint32_t tmp = Ft_Gpu_Hal_Rd32(Ft_Esd_Host, REG_TRACKER);
	int tagId = tmp & 0xFF;

	if (tagId == tag)
	{
		int angle = ((tmp >> (16 + 4)) * 90 + (90 << 10)) % (360 << 10);
		context->TrackAngle = angle;
		// eve_printf_debug(" angle: %d,[%d] tagRd: %d ", angle, tmp >> (16 + 4), tagId);
		if (context->IsTracking)
		{
			Usr_CircullarSlider_Update_TouchTracker_NoWrap(context);
		}
		else
		{
			context->IsTracking = FT_TRUE;
			context->IsClockwise = FT_TRUE;
			context->StartTrackAngle = context->TrackAngle;

			context->StartOrigin = angle / 1024;
			context->ShiftedOrigin = context->StartOrigin;
			context->StartValue = context->Value;

			context->StartAngle = 0;
			context->ClampedNewAngle = 0;
			// eve_printf_debug(" >> Start: %d, track: %d\n", context->StartAngle, context->StartTrackAngle);
		}
	}
}

/* end of file */

