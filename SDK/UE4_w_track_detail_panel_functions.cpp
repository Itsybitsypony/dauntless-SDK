// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_track_detail_panel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_track_detail_panel.w_track_detail_panel_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_track_detail_panel_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_track_detail_panel.w_track_detail_panel_C.Refresh");

	Uw_track_detail_panel_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_track_detail_panel.w_track_detail_panel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_track_detail_panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_track_detail_panel.w_track_detail_panel_C.Construct");

	Uw_track_detail_panel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_track_detail_panel.w_track_detail_panel_C.ExecuteUbergraph_w_track_detail_panel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_track_detail_panel_C::ExecuteUbergraph_w_track_detail_panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_track_detail_panel.w_track_detail_panel_C.ExecuteUbergraph_w_track_detail_panel");

	Uw_track_detail_panel_C_ExecuteUbergraph_w_track_detail_panel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
