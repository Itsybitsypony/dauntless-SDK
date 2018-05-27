// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_details_patrol_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.PopulateKnownBehemoths
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHunt_Region            HuntRegionData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_play_menu_details_patrol_bpw_C::PopulateKnownBehemoths(struct FHunt_Region* HuntRegionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.PopulateKnownBehemoths");

	Uw_play_menu_details_patrol_bpw_C_PopulateKnownBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntRegionData != nullptr)
		*HuntRegionData = params.HuntRegionData;
}


// Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_play_menu_details_patrol_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.Refresh");

	Uw_play_menu_details_patrol_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_play_menu_details_patrol_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.Construct");

	Uw_play_menu_details_patrol_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.ExecuteUbergraph_w_play_menu_details_patrol_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_details_patrol_bpw_C::ExecuteUbergraph_w_play_menu_details_patrol_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_details_patrol_bpw.w_play_menu_details_patrol_bpw_C.ExecuteUbergraph_w_play_menu_details_patrol_bpw");

	Uw_play_menu_details_patrol_bpw_C_ExecuteUbergraph_w_play_menu_details_patrol_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
