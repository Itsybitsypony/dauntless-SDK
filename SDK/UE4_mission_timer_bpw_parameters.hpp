#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mission_timer_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function mission_timer_bpw.mission_timer_bpw_C.Get_TimeRemaining_ShadowColorAndOpacity_1
struct Umission_timer_bpw_C_Get_TimeRemaining_ShadowColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function mission_timer_bpw.mission_timer_bpw_C.Get_TimeRemaining_ColorAndOpacity_1
struct Umission_timer_bpw_C_Get_TimeRemaining_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function mission_timer_bpw.mission_timer_bpw_C.Get_Crew Lives Remaining_Text_1
struct Umission_timer_bpw_C_Get_Crew_Lives_Remaining_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function mission_timer_bpw.mission_timer_bpw_C.Construct
struct Umission_timer_bpw_C_Construct_Params
{
};

// Function mission_timer_bpw.mission_timer_bpw_C.FadeOut
struct Umission_timer_bpw_C_FadeOut_Params
{
};

// Function mission_timer_bpw.mission_timer_bpw_C.ExecuteUbergraph_mission_timer_bpw
struct Umission_timer_bpw_C_ExecuteUbergraph_mission_timer_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
