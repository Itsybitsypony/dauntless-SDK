// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_quickslot_bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_hud_quickslot_bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.Construct");

	Ubpw_hud_quickslot_bar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Using_Gamepad               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_bar_C::Input_Swap(bool Is_Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.Input Swap");

	Ubpw_hud_quickslot_bar_C_Input_Swap_Params params;
	params.Is_Using_Gamepad = Is_Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.PushUpdateToQuickItems
// (BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_bar_C::PushUpdateToQuickItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.PushUpdateToQuickItems");

	Ubpw_hud_quickslot_bar_C_PushUpdateToQuickItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.OnPlayerLoadoutChanged
// (BlueprintCallable, BlueprintEvent)

void Ubpw_hud_quickslot_bar_C::OnPlayerLoadoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.OnPlayerLoadoutChanged");

	Ubpw_hud_quickslot_bar_C_OnPlayerLoadoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.ExecuteUbergraph_bpw_hud_quickslot_bar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_quickslot_bar_C::ExecuteUbergraph_bpw_hud_quickslot_bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.ExecuteUbergraph_bpw_hud_quickslot_bar");

	Ubpw_hud_quickslot_bar_C_ExecuteUbergraph_bpw_hud_quickslot_bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
