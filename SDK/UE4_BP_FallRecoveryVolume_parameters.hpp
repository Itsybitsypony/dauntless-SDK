#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FallRecoveryVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.UserConstructionScript
struct ABP_FallRecoveryVolume_C_UserConstructionScript_Params
{
};

// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.ReceiveBeginPlay
struct ABP_FallRecoveryVolume_C_ReceiveBeginPlay_Params
{
};

// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.OnActorBeginOverlap_Event_1
struct ABP_FallRecoveryVolume_C_OnActorBeginOverlap_Event_1_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.ExecuteUbergraph_BP_FallRecoveryVolume
struct ABP_FallRecoveryVolume_C_ExecuteUbergraph_BP_FallRecoveryVolume_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
