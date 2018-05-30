// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wisp_speedup_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wisp_speedup_ab.wisp_speedup_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Uwisp_speedup_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function wisp_speedup_ab.wisp_speedup_ab_C.K2_ActivateAbility");

	Uwisp_speedup_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wisp_speedup_ab.wisp_speedup_ab_C.ExecuteUbergraph_wisp_speedup_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwisp_speedup_ab_C::ExecuteUbergraph_wisp_speedup_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wisp_speedup_ab.wisp_speedup_ab_C.ExecuteUbergraph_wisp_speedup_ab");

	Uwisp_speedup_ab_C_ExecuteUbergraph_wisp_speedup_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
