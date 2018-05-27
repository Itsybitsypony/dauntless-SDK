// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Potion_Flask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.ApplyEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_Flask_C::ApplyEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.ApplyEffect");

	UAbility_QuickItem_Healing_Potion_Flask_C_ApplyEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.CustomCanActivateAbility
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 ActorInfoOwnerActor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorInfoAvatarActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      ActorInfoPlayerController      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent** ActorInfoAbilitySystemComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance**          ActorInfoAnimInstance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMovementComponent**     ActorInfoMovementComponent     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::CustomCanActivateAbility(class AActor** ActorInfoOwnerActor, class AActor** ActorInfoAvatarActor, class APlayerController** ActorInfoPlayerController, class UAbilitySystemComponent** ActorInfoAbilitySystemComponent, class UAnimInstance** ActorInfoAnimInstance, class UMovementComponent** ActorInfoMovementComponent, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.CustomCanActivateAbility");

	UAbility_QuickItem_Healing_Potion_Flask_C_CustomCanActivateAbility_Params params;
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


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnNotifyEnd_06029CF74F6357D225967A869924061C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::OnNotifyEnd_06029CF74F6357D225967A869924061C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnNotifyEnd_06029CF74F6357D225967A869924061C");

	UAbility_QuickItem_Healing_Potion_Flask_C_OnNotifyEnd_06029CF74F6357D225967A869924061C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnNotifyBegin_06029CF74F6357D225967A869924061C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::OnNotifyBegin_06029CF74F6357D225967A869924061C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnNotifyBegin_06029CF74F6357D225967A869924061C");

	UAbility_QuickItem_Healing_Potion_Flask_C_OnNotifyBegin_06029CF74F6357D225967A869924061C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnCancelled_06029CF74F6357D225967A869924061C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::OnCancelled_06029CF74F6357D225967A869924061C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnCancelled_06029CF74F6357D225967A869924061C");

	UAbility_QuickItem_Healing_Potion_Flask_C_OnCancelled_06029CF74F6357D225967A869924061C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnInterrupted_06029CF74F6357D225967A869924061C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::OnInterrupted_06029CF74F6357D225967A869924061C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnInterrupted_06029CF74F6357D225967A869924061C");

	UAbility_QuickItem_Healing_Potion_Flask_C_OnInterrupted_06029CF74F6357D225967A869924061C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnBlendOut_06029CF74F6357D225967A869924061C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::OnBlendOut_06029CF74F6357D225967A869924061C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnBlendOut_06029CF74F6357D225967A869924061C");

	UAbility_QuickItem_Healing_Potion_Flask_C_OnBlendOut_06029CF74F6357D225967A869924061C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnCompleted_06029CF74F6357D225967A869924061C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::OnCompleted_06029CF74F6357D225967A869924061C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.OnCompleted_06029CF74F6357D225967A869924061C");

	UAbility_QuickItem_Healing_Potion_Flask_C_OnCompleted_06029CF74F6357D225967A869924061C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAbility_QuickItem_Healing_Potion_Flask_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.K2_ActivateAbility");

	UAbility_QuickItem_Healing_Potion_Flask_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_Healing_Potion_Flask_C::ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C.ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask");

	UAbility_QuickItem_Healing_Potion_Flask_C_ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
