#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cinematic_overlay_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.DestroySubtitleWidget
struct Ucinematic_overlay_bpw_C_DestroySubtitleWidget_Params
{
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.CreateSubtitleWidget
struct Ucinematic_overlay_bpw_C_CreateSubtitleWidget_Params
{
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.SkipCinematic
struct Ucinematic_overlay_bpw_C_SkipCinematic_Params
{
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.OnKeyDown
struct Ucinematic_overlay_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.GetDefaultFocusedWidget
struct Ucinematic_overlay_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.ConfigureForCinematics
struct Ucinematic_overlay_bpw_C_ConfigureForCinematics_Params
{
	bool                                               Activating;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.Update Subtitle
struct Ucinematic_overlay_bpw_C_Update_Subtitle_Params
{
	struct FText                                       SubtitleText;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.ExecuteUbergraph_cinematic_overlay_bpw
struct Ucinematic_overlay_bpw_C_ExecuteUbergraph_cinematic_overlay_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
