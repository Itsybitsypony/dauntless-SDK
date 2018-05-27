// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_damage_aura_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.RemoveBuffFromPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_damage_aura_ab_C::RemoveBuffFromPlayer(class AArchonCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.RemoveBuffFromPlayer");

	Ulanternhold_damage_aura_ab_C_RemoveBuffFromPlayer_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.BuffPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_damage_aura_ab_C::BuffPlayer(class AArchonCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.BuffPlayer");

	Ulanternhold_damage_aura_ab_C_BuffPlayer_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ulanternhold_damage_aura_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.K2_ActivateAbility");

	Ulanternhold_damage_aura_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ulanternhold_damage_aura_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.K2_OnEndAbility");

	Ulanternhold_damage_aura_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.ExecuteUbergraph_lanternhold_damage_aura_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_damage_aura_ab_C::ExecuteUbergraph_lanternhold_damage_aura_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C.ExecuteUbergraph_lanternhold_damage_aura_ab");

	Ulanternhold_damage_aura_ab_C_ExecuteUbergraph_lanternhold_damage_aura_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
