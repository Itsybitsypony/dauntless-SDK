#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_FailScreen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.GetText_1
struct UEndOfHunt_FailScreen_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.DecreaseTimeLeft
struct UEndOfHunt_FailScreen_bpw_C_DecreaseTimeLeft_Params
{
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Get_Time_Text_1
struct UEndOfHunt_FailScreen_bpw_C_Get_Time_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.SetFightDuration
struct UEndOfHunt_FailScreen_bpw_C_SetFightDuration_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Set Success State
struct UEndOfHunt_FailScreen_bpw_C_Set_Success_State_Params
{
	bool                                               Success_State;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Get Mission End Text
struct UEndOfHunt_FailScreen_bpw_C_Get_Mission_End_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Tick
struct UEndOfHunt_FailScreen_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Construct
struct UEndOfHunt_FailScreen_bpw_C_Construct_Params
{
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Destruct
struct UEndOfHunt_FailScreen_bpw_C_Destruct_Params
{
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.BndEvt__w_EndOfHunt_Buttons_K2Node_ComponentBoundEvent_79_RateMatch__DelegateSignature
struct UEndOfHunt_FailScreen_bpw_C_BndEvt__w_EndOfHunt_Buttons_K2Node_ComponentBoundEvent_79_RateMatch__DelegateSignature_Params
{
	int                                                MatchRating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.ExecuteUbergraph_EndOfHunt_FailScreen_bpw
struct UEndOfHunt_FailScreen_bpw_C_ExecuteUbergraph_EndOfHunt_FailScreen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
