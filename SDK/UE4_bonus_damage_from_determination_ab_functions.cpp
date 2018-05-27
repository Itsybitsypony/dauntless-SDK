// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bonus_damage_from_determination_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bonus_damage_from_determination_ab.bonus_damage_from_determination_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ubonus_damage_from_determination_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function bonus_damage_from_determination_ab.bonus_damage_from_determination_ab_C.K2_ActivateAbility");

	Ubonus_damage_from_determination_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bonus_damage_from_determination_ab.bonus_damage_from_determination_ab_C.ExecuteUbergraph_bonus_damage_from_determination_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubonus_damage_from_determination_ab_C::ExecuteUbergraph_bonus_damage_from_determination_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bonus_damage_from_determination_ab.bonus_damage_from_determination_ab_C.ExecuteUbergraph_bonus_damage_from_determination_ab");

	Ubonus_damage_from_determination_ab_C_ExecuteUbergraph_bonus_damage_from_determination_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
