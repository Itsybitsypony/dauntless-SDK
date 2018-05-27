#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternactive_base_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lanternactive_base_ab.lanternactive_base_ab_C.CanUseInMontage
struct Ulanternactive_base_ab_C_CanUseInMontage_Params
{
	class UAnimMontage*                                ActiveMontage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lanternactive_base_ab.lanternactive_base_ab_C.K2_CanActivateAbility
struct Ulanternactive_base_ab_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lanternactive_base_ab.lanternactive_base_ab_C.K2_ActivateAbilityFromEvent
struct Ulanternactive_base_ab_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function lanternactive_base_ab.lanternactive_base_ab_C.OnFinish_C21894154EC4604DD4EC4081A5A5C8BB
struct Ulanternactive_base_ab_C_OnFinish_C21894154EC4604DD4EC4081A5A5C8BB_Params
{
};

// Function lanternactive_base_ab.lanternactive_base_ab_C.StartDischarge
struct Ulanternactive_base_ab_C_StartDischarge_Params
{
	float                                              DischargeDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lanternactive_base_ab.lanternactive_base_ab_C.ExecuteUbergraph_lanternactive_base_ab
struct Ulanternactive_base_ab_C_ExecuteUbergraph_lanternactive_base_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
