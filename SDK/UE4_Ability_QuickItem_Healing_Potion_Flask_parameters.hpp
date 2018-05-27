#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Potion_Flask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.ApplyEffect
struct UAbility_QuickItem_Healing_Potion_Flask_C_ApplyEffect_Params
{
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.CustomCanActivateAbility
struct UAbility_QuickItem_Healing_Potion_Flask_C_CustomCanActivateAbility_Params
{
	class AActor**                                     ActorInfoOwnerActor;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorInfoAvatarActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          ActorInfoPlayerController;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent**                    ActorInfoAbilitySystemComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance**                              ActorInfoAnimInstance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMovementComponent**                         ActorInfoMovementComponent;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnNotifyEnd_06029CF74F6357D225967A869924061C
struct UAbility_QuickItem_Healing_Potion_Flask_C_OnNotifyEnd_06029CF74F6357D225967A869924061C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnNotifyBegin_06029CF74F6357D225967A869924061C
struct UAbility_QuickItem_Healing_Potion_Flask_C_OnNotifyBegin_06029CF74F6357D225967A869924061C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnCancelled_06029CF74F6357D225967A869924061C
struct UAbility_QuickItem_Healing_Potion_Flask_C_OnCancelled_06029CF74F6357D225967A869924061C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnInterrupted_06029CF74F6357D225967A869924061C
struct UAbility_QuickItem_Healing_Potion_Flask_C_OnInterrupted_06029CF74F6357D225967A869924061C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnBlendOut_06029CF74F6357D225967A869924061C
struct UAbility_QuickItem_Healing_Potion_Flask_C_OnBlendOut_06029CF74F6357D225967A869924061C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnCompleted_06029CF74F6357D225967A869924061C
struct UAbility_QuickItem_Healing_Potion_Flask_C_OnCompleted_06029CF74F6357D225967A869924061C_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.K2_ActivateAbility
struct UAbility_QuickItem_Healing_Potion_Flask_C_K2_ActivateAbility_Params
{
};

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask
struct UAbility_QuickItem_Healing_Potion_Flask_C_ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
