#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_generic_stat_details_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_generic_stat_details.w_generic_stat_details_C.GetColorForAmount
struct Uw_generic_stat_details_C_GetColorForAmount_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function w_generic_stat_details.w_generic_stat_details_C.Construct
struct Uw_generic_stat_details_C_Construct_Params
{
};

// Function w_generic_stat_details.w_generic_stat_details_C.ExecuteUbergraph_w_generic_stat_details
struct Uw_generic_stat_details_C_ExecuteUbergraph_w_generic_stat_details_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
