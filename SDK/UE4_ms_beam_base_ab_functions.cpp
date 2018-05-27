// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_beam_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ms_beam_base_ab.ms_beam_base_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ums_beam_base_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_base_ab.ms_beam_base_ab_C.K2_ActivateAbility");

	Ums_beam_base_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_beam_base_ab.ms_beam_base_ab_C.ExecuteUbergraph_ms_beam_base_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ums_beam_base_ab_C::ExecuteUbergraph_ms_beam_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_base_ab.ms_beam_base_ab_C.ExecuteUbergraph_ms_beam_base_ab");

	Ums_beam_base_ab_C_ExecuteUbergraph_ms_beam_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
