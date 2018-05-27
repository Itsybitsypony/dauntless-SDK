// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eqs_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.TryRegisterGameplayGUID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uweapon_eqs_base_ab_C::TryRegisterGameplayGUID(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.TryRegisterGameplayGUID");

	Uweapon_eqs_base_ab_C_TryRegisterGameplayGUID_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.GetManualTargets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SourceWeaponBoneName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Targets                        (Parm, OutParm, ZeroConstructor)

void Uweapon_eqs_base_ab_C::GetManualTargets(const struct FName& SourceWeaponBoneName, TArray<struct FVector>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.GetManualTargets");

	Uweapon_eqs_base_ab_C_GetManualTargets_Params params;
	params.SourceWeaponBoneName = SourceWeaponBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Uweapon_eqs_base_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.K2_ActivateAbility");

	Uweapon_eqs_base_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.ExecuteUbergraph_weapon_eqs_base_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_eqs_base_ab_C::ExecuteUbergraph_weapon_eqs_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.ExecuteUbergraph_weapon_eqs_base_ab");

	Uweapon_eqs_base_ab_C_ExecuteUbergraph_weapon_eqs_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
