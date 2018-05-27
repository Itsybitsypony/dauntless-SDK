#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Potion_00_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.ApplyEffect
struct UAbility_QuickItem_Healing_Potion_00_C_ApplyEffect_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.CustomCanActivateAbility
struct UAbility_QuickItem_Healing_Potion_00_C_CustomCanActivateAbility_Params
{
	class AActor**                                     ActorInfoOwnerActor;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorInfoAvatarActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ActorInfoPlayerController;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent**                    ActorInfoAbilitySystemComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance**                              ActorInfoAnimInstance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMovementComponent**                         ActorInfoMovementComponent;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnFinish_BA3D35C64AABDD82810668838FFBF1D6
struct UAbility_QuickItem_Healing_Potion_00_C_OnFinish_BA3D35C64AABDD82810668838FFBF1D6_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E
struct UAbility_QuickItem_Healing_Potion_00_C_OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E
struct UAbility_QuickItem_Healing_Potion_00_C_OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E
struct UAbility_QuickItem_Healing_Potion_00_C_OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E
struct UAbility_QuickItem_Healing_Potion_00_C_OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.K2_ActivateAbility
struct UAbility_QuickItem_Healing_Potion_00_C_K2_ActivateAbility_Params
{
};

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00
struct UAbility_QuickItem_Healing_Potion_00_C_ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
