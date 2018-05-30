#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTService_LookAlongPath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTService_LookAlongPath.BTService_LookAlongPath_C.SetLookAheadPosition
struct UBTService_LookAlongPath_C_SetLookAheadPosition_Params
{
	class ABp_Behemoth_C*                              Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveActivation
struct UBTService_LookAlongPath_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveDeactivation
struct UBTService_LookAlongPath_C_ReceiveDeactivation_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveTick
struct UBTService_LookAlongPath_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ExecuteUbergraph_BTService_LookAlongPath
struct UBTService_LookAlongPath_C_ExecuteUbergraph_BTService_LookAlongPath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
