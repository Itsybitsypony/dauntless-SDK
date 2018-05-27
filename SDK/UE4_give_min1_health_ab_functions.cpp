// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_give_min1_health_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function give_min1_health_ab.give_min1_health_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ugive_min1_health_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function give_min1_health_ab.give_min1_health_ab_C.K2_ActivateAbility");

	Ugive_min1_health_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function give_min1_health_ab.give_min1_health_ab_C.ExecuteUbergraph_give_min1_health_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugive_min1_health_ab_C::ExecuteUbergraph_give_min1_health_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function give_min1_health_ab.give_min1_health_ab_C.ExecuteUbergraph_give_min1_health_ab");

	Ugive_min1_health_ab_C_ExecuteUbergraph_give_min1_health_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
