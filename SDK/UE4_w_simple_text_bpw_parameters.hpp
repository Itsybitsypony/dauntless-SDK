#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_simple_text_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_simple_text_bpw.w_simple_text_bpw_C.GetText
struct Uw_simple_text_bpw_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_simple_text_bpw.w_simple_text_bpw_C.GetColorAndOpacity
struct Uw_simple_text_bpw_C_GetColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_simple_text_bpw.w_simple_text_bpw_C.Construct
struct Uw_simple_text_bpw_C_Construct_Params
{
};

// Function w_simple_text_bpw.w_simple_text_bpw_C.OnSynchronizeProperties
struct Uw_simple_text_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_simple_text_bpw.w_simple_text_bpw_C.ExecuteUbergraph_w_simple_text_bpw
struct Uw_simple_text_bpw_C_ExecuteUbergraph_w_simple_text_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
