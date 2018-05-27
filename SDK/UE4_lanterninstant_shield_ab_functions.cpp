// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanterninstant_shield_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanterninstant_shield_ab.lanterninstant_shield_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ulanterninstant_shield_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_shield_ab.lanterninstant_shield_ab_C.K2_ActivateAbility");

	Ulanterninstant_shield_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanterninstant_shield_ab.lanterninstant_shield_ab_C.ExecuteUbergraph_lanterninstant_shield_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanterninstant_shield_ab_C::ExecuteUbergraph_lanterninstant_shield_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_shield_ab.lanterninstant_shield_ab_C.ExecuteUbergraph_lanterninstant_shield_ab");

	Ulanterninstant_shield_ab_C_ExecuteUbergraph_lanterninstant_shield_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
