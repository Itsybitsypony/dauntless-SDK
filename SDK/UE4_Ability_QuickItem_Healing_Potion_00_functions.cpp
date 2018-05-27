// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Potion_00_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.ApplyEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::ApplyEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.ApplyEffect");

	UAbility_QuickItem_Healing_Potion_00_C_ApplyEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.CustomCanActivateAbility
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 ActorInfoOwnerActor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorInfoAvatarActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ActorInfoPlayerController      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent** ActorInfoAbilitySystemComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance**          ActorInfoAnimInstance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMovementComponent**     ActorInfoMovementComponent     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_00_C::CustomCanActivateAbility(class AActor** ActorInfoOwnerActor, class AActor** ActorInfoAvatarActor, class APlayerController** ActorInfoPlayerController, class UAbilitySystemComponent** ActorInfoAbilitySystemComponent, class UAnimInstance** ActorInfoAnimInstance, class UMovementComponent** ActorInfoMovementComponent, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.CustomCanActivateAbility");

	UAbility_QuickItem_Healing_Potion_00_C_CustomCanActivateAbility_Params params;
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


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnFinish_BA3D35C64AABDD82810668838FFBF1D6
// (BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::OnFinish_BA3D35C64AABDD82810668838FFBF1D6()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnFinish_BA3D35C64AABDD82810668838FFBF1D6");

	UAbility_QuickItem_Healing_Potion_00_C_OnFinish_BA3D35C64AABDD82810668838FFBF1D6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E
// (BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E");

	UAbility_QuickItem_Healing_Potion_00_C_OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E
// (BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E");

	UAbility_QuickItem_Healing_Potion_00_C_OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E
// (BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E");

	UAbility_QuickItem_Healing_Potion_00_C_OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E
// (BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E");

	UAbility_QuickItem_Healing_Potion_00_C_OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_00_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.K2_ActivateAbility");

	UAbility_QuickItem_Healing_Potion_00_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_00_C::ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C.ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00");

	UAbility_QuickItem_Healing_Potion_00_C_ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
