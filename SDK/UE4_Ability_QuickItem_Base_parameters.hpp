#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.CustomCanActivateAbility
struct UAbility_QuickItem_Base_C_CustomCanActivateAbility_Params
{
	class AActor*                                      ActorInfoOwnerActor;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorInfoAvatarActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ActorInfoPlayerController;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     ActorInfoAbilitySystemComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               ActorInfoAnimInstance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMovementComponent*                          ActorInfoMovementComponent;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_CanActivateAbility
struct UAbility_QuickItem_Base_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_ActivateAbility
struct UAbility_QuickItem_Base_C_K2_ActivateAbility_Params
{
};

// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_OnEndAbility
struct UAbility_QuickItem_Base_C_K2_OnEndAbility_Params
{
};

// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.ExecuteUbergraph_Ability_QuickItem_Base
struct UAbility_QuickItem_Base_C_ExecuteUbergraph_Ability_QuickItem_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
