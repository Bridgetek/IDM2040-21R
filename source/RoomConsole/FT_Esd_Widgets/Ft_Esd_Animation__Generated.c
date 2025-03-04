/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Animation
C Source
*/

#include "Ft_Esd_Animation.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
Esd_AnimationInfo * Ft_Esd_Animation_AnimationInfo__Default(void *context) { return 0; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Animation__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Animation_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Animation_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Animation_End,
};


void Ft_Esd_Animation__Initializer(Ft_Esd_Animation *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Animation_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Animation__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->RenderComplete = Esd_Noop;
	context->Color = 0xffffffffUL;
	context->AnimationInfo = Ft_Esd_Animation_AnimationInfo__Default;
	context->Align = ESD_ALIGN_TOPLEFT;
	context->AutoResize = ESD_AUTORESIZE_BOTH;
	context->AutoPlay = 0;
	context->Loop = ANIM_LOOP;
	context->Frame = 0L;
	context->LastAddr = 3UL;
	context->Playing = 0;
	context->IsSingle = 1;
	context->Counter = 0;
	context->Channel = -1;
}

void Ft_Esd_Animation_Render_Impl(Ft_Esd_Animation *context);
bool Ft_Esd_Animation_GetActiveImpl(Ft_Esd_Animation *context);
void Ft_Esd_Animation_Play_Signal(Ft_Esd_Animation *context);
void Ft_Esd_Animation_Stop_Signal(Ft_Esd_Animation *context);
void Ft_Esd_Animation_Slot_Signal(Ft_Esd_Animation *context);
void Ft_Esd_Animation_Enable_Signal(Ft_Esd_Animation *context);
void Ft_Esd_Animation_End_Signal(Ft_Esd_Animation *context);

void Ft_Esd_Animation_Render(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Ft_Esd_Animation_Render_Impl(context);
	context->RenderComplete(owner);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

int Ft_Esd_Animation_NumFrames(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Esd_AnimationInfo * animationInfo = context->AnimationInfo(owner);
	return Esd_AnimationInfo_NumFrames(animationInfo);
}

bool Ft_Esd_Animation_Active(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	return Ft_Esd_Animation_GetActiveImpl(context);
}

void Ft_Esd_Animation_Play(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Ft_Esd_Animation_Play_Signal(context);
}

void Ft_Esd_Animation_Stop(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Ft_Esd_Animation_Stop_Signal(context);
}

void Ft_Esd_Animation_Single(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Ft_Esd_Animation_Slot_Signal(context);
}

void Ft_Esd_Animation_Enable(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Enable((Ft_Esd_Widget *)context); 
	Ft_Esd_Animation_Enable_Signal(context);
}

void Ft_Esd_Animation_End(Ft_Esd_Animation *context)
{
	void *owner = context->Owner;
	Ft_Esd_Animation_End_Signal(context);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context); 
}


/* end of file */
