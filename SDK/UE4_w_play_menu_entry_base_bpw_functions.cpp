// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_entry_base_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_base_bpw_C::SetIsSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.SetIsSelected");

	Uw_play_menu_entry_base_bpw_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.ExecuteUbergraph_w_play_menu_entry_base_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_base_bpw_C::ExecuteUbergraph_w_play_menu_entry_base_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.ExecuteUbergraph_w_play_menu_entry_base_bpw");

	Uw_play_menu_entry_base_bpw_C_ExecuteUbergraph_w_play_menu_entry_base_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntryLostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* Entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_base_bpw_C::OnPlayMenuListEntryLostFocus__DelegateSignature(class Uw_play_menu_entry_base_bpw_C* Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntryLostFocus__DelegateSignature");

	Uw_play_menu_entry_base_bpw_C_OnPlayMenuListEntryLostFocus__DelegateSignature_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntryFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* FocusedEntry                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_base_bpw_C::OnPlayMenuListEntryFocused__DelegateSignature(class Uw_play_menu_entry_base_bpw_C* FocusedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntryFocused__DelegateSignature");

	Uw_play_menu_entry_base_bpw_C_OnPlayMenuListEntryFocused__DelegateSignature_Params params;
	params.FocusedEntry = FocusedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_play_menu_entry_base_bpw_C* SelectedEntry                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_base_bpw_C::OnPlayMenuListEntrySelected__DelegateSignature(class Uw_play_menu_entry_base_bpw_C* SelectedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntrySelected__DelegateSignature");

	Uw_play_menu_entry_base_bpw_C_OnPlayMenuListEntrySelected__DelegateSignature_Params params;
	params.SelectedEntry = SelectedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
