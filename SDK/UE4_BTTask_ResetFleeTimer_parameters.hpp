#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_ResetFleeTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C.ReceiveExecute
struct UBTTask_ResetFleeTimer_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C.ExecuteUbergraph_BTTask_ResetFleeTimer
struct UBTTask_ResetFleeTimer_C_ExecuteUbergraph_BTTask_ResetFleeTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
