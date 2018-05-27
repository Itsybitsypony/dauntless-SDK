// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_ONLINE_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.ApplyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonOptionUserWidget* RootMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_ONLINE_bpw_C::ApplyState(class UArchonOptionUserWidget* RootMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.ApplyState");

	UOptions_Menu_ONLINE_bpw_C_ApplyState_Params params;
	params.RootMenu = RootMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.RestoreState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_ONLINE_bpw_C::RestoreState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.RestoreState");

	UOptions_Menu_ONLINE_bpw_C_RestoreState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.SaveState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_ONLINE_bpw_C::SaveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.SaveState");

	UOptions_Menu_ONLINE_bpw_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.HasStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasChanged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_ONLINE_bpw_C::HasStateChanged(bool* HasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.HasStateChanged");

	UOptions_Menu_ONLINE_bpw_C_HasStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasChanged != nullptr)
		*HasChanged = params.HasChanged;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_ONLINE_bpw_C::UpdateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.UpdateUI");

	UOptions_Menu_ONLINE_bpw_C_UpdateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptions_Menu_ONLINE_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.OnKeyDown");

	UOptions_Menu_ONLINE_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.Gamepad Cancel
// (BlueprintCallable, BlueprintEvent)

void UOptions_Menu_ONLINE_bpw_C::Gamepad_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.Gamepad Cancel");

	UOptions_Menu_ONLINE_bpw_C_Gamepad_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_ONLINE_bpw_C::BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature");

	UOptions_Menu_ONLINE_bpw_C_BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_ONLINE_bpw_C::BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature");

	UOptions_Menu_ONLINE_bpw_C_BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.ExecuteUbergraph_Options_Menu_ONLINE_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_ONLINE_bpw_C::ExecuteUbergraph_Options_Menu_ONLINE_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.ExecuteUbergraph_Options_Menu_ONLINE_bpw");

	UOptions_Menu_ONLINE_bpw_C_ExecuteUbergraph_Options_Menu_ONLINE_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BacktoRoot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_ONLINE_bpw_C::BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BacktoRoot__DelegateSignature");

	UOptions_Menu_ONLINE_bpw_C_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_ONLINE_bpw_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.UpdateTooltip__DelegateSignature");

	UOptions_Menu_ONLINE_bpw_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
