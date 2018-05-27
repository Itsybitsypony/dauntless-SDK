#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_hud_danger_meter_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.GetVisibility_1
struct Uw_hud_danger_meter_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Get_TextBlock_0_Text_1
struct Uw_hud_danger_meter_bpw_C_Get_TextBlock_0_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.UpdateDanger_Level
struct Uw_hud_danger_meter_bpw_C_UpdateDanger_Level_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Get_DangerValue_Text_1
struct Uw_hud_danger_meter_bpw_C_Get_DangerValue_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Construct
struct Uw_hud_danger_meter_bpw_C_Construct_Params
{
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Tick
struct Uw_hud_danger_meter_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.DangerANimTimeline
struct Uw_hud_danger_meter_bpw_C_DangerANimTimeline_Params
{
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.OnAnimationFinished
struct Uw_hud_danger_meter_bpw_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.OnAnimationStarted
struct Uw_hud_danger_meter_bpw_C_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.ExecuteUbergraph_w_hud_danger_meter_bpw
struct Uw_hud_danger_meter_bpw_C_ExecuteUbergraph_w_hud_danger_meter_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
