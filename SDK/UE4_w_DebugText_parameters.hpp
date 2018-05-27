#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_DebugText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_DebugText.w_DebugText_C.Show Text
struct Uw_DebugText_C_Show_Text_Params
{
	struct FText                                       In_Text;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_DebugText.w_DebugText_C.Construct
struct Uw_DebugText_C_Construct_Params
{
};

// Function w_DebugText.w_DebugText_C.OnSynchronizeProperties
struct Uw_DebugText_C_OnSynchronizeProperties_Params
{
};

// Function w_DebugText.w_DebugText_C.ExecuteUbergraph_w_DebugText
struct Uw_DebugText_C_ExecuteUbergraph_w_DebugText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
