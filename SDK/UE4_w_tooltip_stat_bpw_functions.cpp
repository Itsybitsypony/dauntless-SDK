// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_tooltip_stat_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_tooltip_stat_bpw.w_tooltip_stat_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_tooltip_stat_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tooltip_stat_bpw.w_tooltip_stat_bpw_C.Construct");

	Uw_tooltip_stat_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tooltip_stat_bpw.w_tooltip_stat_bpw_C.ExecuteUbergraph_w_tooltip_stat_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tooltip_stat_bpw_C::ExecuteUbergraph_w_tooltip_stat_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tooltip_stat_bpw.w_tooltip_stat_bpw_C.ExecuteUbergraph_w_tooltip_stat_bpw");

	Uw_tooltip_stat_bpw_C_ExecuteUbergraph_w_tooltip_stat_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
