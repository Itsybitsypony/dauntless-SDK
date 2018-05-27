#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanterninstant_base_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.CallForDischarge
struct Ulanterninstant_base_ab_C_CallForDischarge_Params
{
	class AArchonLantern*                              LanternObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.CanUseInMontage
struct Ulanterninstant_base_ab_C_CanUseInMontage_Params
{
	class UAnimMontage*                                ActiveMontage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_CanActivateAbility
struct Ulanterninstant_base_ab_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_ActivateAbilityFromEvent
struct Ulanterninstant_base_ab_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.OnFinish_A45B31B54C10BA2832BD18960165C25E
struct Ulanterninstant_base_ab_C_OnFinish_A45B31B54C10BA2832BD18960165C25E_Params
{
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.StartDischarge
struct Ulanterninstant_base_ab_C_StartDischarge_Params
{
	float                                              DischargeDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_ActivateAbility
struct Ulanterninstant_base_ab_C_K2_ActivateAbility_Params
{
};

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.ExecuteUbergraph_lanterninstant_base_ab
struct Ulanterninstant_base_ab_C_ExecuteUbergraph_lanterninstant_base_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
