// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_frost_damage_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.IsFreezeUser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AArchonCharacter*        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFreezeUser                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udot_frost_damage_ab_C::IsFreezeUser(class AArchonCharacter* Player, bool* IsFreezeUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_frost_damage_ab.dot_frost_damage_ab_C.IsFreezeUser");

	Udot_frost_damage_ab_C_IsFreezeUser_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFreezeUser != nullptr)
		*IsFreezeUser = params.IsFreezeUser;
}


// Function dot_frost_damage_ab.dot_frost_damage_ab_C.ScaleFreezeThresholdByFrostWeaponUsers
// (Public, BlueprintCallable, BlueprintEvent)

void Udot_frost_damage_ab_C::ScaleFreezeThresholdByFrostWeaponUsers()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_frost_damage_ab.dot_frost_damage_ab_C.ScaleFreezeThresholdByFrostWeaponUsers");

	Udot_frost_damage_ab_C_ScaleFreezeThresholdByFrostWeaponUsers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_frost_damage_ab.dot_frost_damage_ab_C.DisableOtherParts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Udot_frost_damage_ab_C::DisableOtherParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_frost_damage_ab.dot_frost_damage_ab_C.DisableOtherParts");

	Udot_frost_damage_ab_C_DisableOtherParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_frost_damage_ab.dot_frost_damage_ab_C.ApplyEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContectHandle            (BlueprintVisible, BlueprintReadOnly, Parm)

void Udot_frost_damage_ab_C::ApplyEffect(class AActor* TargetActor, const struct FGameplayEffectContextHandle& EffectContectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_frost_damage_ab.dot_frost_damage_ab_C.ApplyEffect");

	Udot_frost_damage_ab_C_ApplyEffect_Params params;
	params.TargetActor = TargetActor;
	params.EffectContectHandle = EffectContectHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_frost_damage_ab.dot_frost_damage_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Udot_frost_damage_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_frost_damage_ab.dot_frost_damage_ab_C.K2_ActivateAbility");

	Udot_frost_damage_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_frost_damage_ab.dot_frost_damage_ab_C.ExecuteUbergraph_dot_frost_damage_ab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udot_frost_damage_ab_C::ExecuteUbergraph_dot_frost_damage_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_frost_damage_ab.dot_frost_damage_ab_C.ExecuteUbergraph_dot_frost_damage_ab");

	Udot_frost_damage_ab_C_ExecuteUbergraph_dot_frost_damage_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
