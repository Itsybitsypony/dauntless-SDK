// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_Keybinding_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptions_Menu_Keybinding_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.OnKeyDown");

	UOptions_Menu_Keybinding_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ResetDefault_Keybinding
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::ResetDefault_Keybinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ResetDefault_Keybinding");

	UOptions_Menu_Keybinding_bpw_C_ResetDefault_Keybinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.StoreOrg_Keybinding
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::StoreOrg_Keybinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.StoreOrg_Keybinding");

	UOptions_Menu_Keybinding_bpw_C_StoreOrg_Keybinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Restore_Keybinding
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::Restore_Keybinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Restore_Keybinding");

	UOptions_Menu_Keybinding_bpw_C_Restore_Keybinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Construct");

	UOptions_Menu_Keybinding_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Gamepad Cancel
// (BlueprintCallable, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::Gamepad_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Gamepad Cancel");

	UOptions_Menu_Keybinding_bpw_C_Gamepad_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECheckBoxState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_Keybinding_bpw_C::BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature(ECheckBoxState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature");

	UOptions_Menu_Keybinding_bpw_C_BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ClearAllSelected
// (BlueprintCallable, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::ClearAllSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ClearAllSelected");

	UOptions_Menu_Keybinding_bpw_C_ClearAllSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ClearKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_Keybinding_bpw_C::ClearKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ClearKey");

	UOptions_Menu_Keybinding_bpw_C_ClearKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ExecuteUbergraph_Options_Menu_Keybinding_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_Keybinding_bpw_C::ExecuteUbergraph_Options_Menu_Keybinding_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ExecuteUbergraph_Options_Menu_Keybinding_bpw");

	UOptions_Menu_Keybinding_bpw_C_ExecuteUbergraph_Options_Menu_Keybinding_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_Keybinding_bpw_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.UpdateTooltip__DelegateSignature");

	UOptions_Menu_Keybinding_bpw_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.BackFrom_VideoOptions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_Keybinding_bpw_C::BackFrom_VideoOptions__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.BackFrom_VideoOptions__DelegateSignature");

	UOptions_Menu_Keybinding_bpw_C_BackFrom_VideoOptions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
