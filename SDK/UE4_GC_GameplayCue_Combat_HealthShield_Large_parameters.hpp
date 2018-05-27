#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_HealthShield_Large_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.UserConstructionScript
struct AGC_GameplayCue_Combat_HealthShield_Large_C_UserConstructionScript_Params
{
};

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.Timeline_0__FinishedFunc
struct AGC_GameplayCue_Combat_HealthShield_Large_C_Timeline_0__FinishedFunc_Params
{
};

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.Timeline_0__UpdateFunc
struct AGC_GameplayCue_Combat_HealthShield_Large_C_Timeline_0__UpdateFunc_Params
{
};

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.K2_HandleGameplayCue
struct AGC_GameplayCue_Combat_HealthShield_Large_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.ReceiveTick
struct AGC_GameplayCue_Combat_HealthShield_Large_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.ExecuteUbergraph_GC_GameplayCue_Combat_HealthShield_Large
struct AGC_GameplayCue_Combat_HealthShield_Large_C_ExecuteUbergraph_GC_GameplayCue_Combat_HealthShield_Large_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
