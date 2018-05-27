#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_ActionHelper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ActionHelper.BP_ActionHelper_C.DebugShowChosenHelper
struct ABP_ActionHelper_C_DebugShowChosenHelper_Params
{
};

// Function BP_ActionHelper.BP_ActionHelper_C.UserConstructionScript
struct ABP_ActionHelper_C_UserConstructionScript_Params
{
};

// Function BP_ActionHelper.BP_ActionHelper_C.ReceiveBeginPlay
struct ABP_ActionHelper_C_ReceiveBeginPlay_Params
{
};

// Function BP_ActionHelper.BP_ActionHelper_C.ReceiveTick
struct ABP_ActionHelper_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ActionHelper.BP_ActionHelper_C.ExecuteUbergraph_BP_ActionHelper
struct ABP_ActionHelper_C_ExecuteUbergraph_BP_ActionHelper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
