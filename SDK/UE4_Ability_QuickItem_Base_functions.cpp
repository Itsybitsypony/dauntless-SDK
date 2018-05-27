// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.CustomCanActivateAbility
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  ActorInfoOwnerActor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorInfoAvatarActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ActorInfoPlayerController      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* ActorInfoAbilitySystemComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ActorInfoAnimInstance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMovementComponent*      ActorInfoMovementComponent     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Base_C::CustomCanActivateAbility(class AActor* ActorInfoOwnerActor, class AActor* ActorInfoAvatarActor, class APlayerController* ActorInfoPlayerController, class UAbilitySystemComponent* ActorInfoAbilitySystemComponent, class UAnimInstance* ActorInfoAnimInstance, class UMovementComponent* ActorInfoMovementComponent, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.CustomCanActivateAbility");

	UAbility_QuickItem_Base_C_CustomCanActivateAbility_Params params;
	params.ActorInfoOwnerActor = ActorInfoOwnerActor;
	params.ActorInfoAvatarActor = ActorInfoAvatarActor;
	params.ActorInfoPlayerController = ActorInfoPlayerController;
	params.ActorInfoAbilitySystemComponent = ActorInfoAbilitySystemComponent;
	params.ActorInfoAnimInstance = ActorInfoAnimInstance;
	params.ActorInfoMovementComponent = ActorInfoMovementComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbility_QuickItem_Base_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_CanActivateAbility");

	UAbility_QuickItem_Base_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAbility_QuickItem_Base_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_ActivateAbility");

	UAbility_QuickItem_Base_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UAbility_QuickItem_Base_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.K2_OnEndAbility");

	UAbility_QuickItem_Base_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.ExecuteUbergraph_Ability_QuickItem_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Base_C::ExecuteUbergraph_Ability_QuickItem_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Base.Ability_QuickItem_Base_C.ExecuteUbergraph_Ability_QuickItem_Base");

	UAbility_QuickItem_Base_C_ExecuteUbergraph_Ability_QuickItem_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
