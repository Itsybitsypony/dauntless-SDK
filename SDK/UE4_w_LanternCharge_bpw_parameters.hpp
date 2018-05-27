#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_LanternCharge_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Get_SecondaryMeter_Visibility_1
struct Uw_LanternCharge_bpw_C_Get_SecondaryMeter_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Get_SecondaryLanternCharge_Count
struct Uw_LanternCharge_bpw_C_Get_SecondaryLanternCharge_Count_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.GetbIsEnabled_1
struct Uw_LanternCharge_bpw_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Get_SecondaryLanternCharge_Percent
struct Uw_LanternCharge_bpw_C_Get_SecondaryLanternCharge_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.SetupChargeMeters
struct Uw_LanternCharge_bpw_C_SetupChargeMeters_Params
{
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Get_ForegroundCharged_ColorAndOpacity_1
struct Uw_LanternCharge_bpw_C_Get_ForegroundCharged_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Get_PrimaryLanternCharge_Percent
struct Uw_LanternCharge_bpw_C_Get_PrimaryLanternCharge_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Construct
struct Uw_LanternCharge_bpw_C_Construct_Params
{
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.Tick
struct Uw_LanternCharge_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.InputSwap
struct Uw_LanternCharge_bpw_C_InputSwap_Params
{
	bool                                               Gamepad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LanternCharge_bpw.w_LanternCharge_bpw_C.ExecuteUbergraph_w_LanternCharge_bpw
struct Uw_LanternCharge_bpw_C_ExecuteUbergraph_w_LanternCharge_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
