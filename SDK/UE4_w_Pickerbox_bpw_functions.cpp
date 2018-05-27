// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Pickerbox_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Pickerbox_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.OnFocusReceived");

	Uw_Pickerbox_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.SetTextLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Pickerbox_bpw_C::SetTextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.SetTextLabel");

	Uw_Pickerbox_bpw_C_SetTextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Pickerbox_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Construct");

	Uw_Pickerbox_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Pickerbox_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.OnSynchronizeProperties");

	Uw_Pickerbox_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.SyncEditorDisplay
// (BlueprintCallable, BlueprintEvent)

void Uw_Pickerbox_bpw_C::SyncEditorDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.SyncEditorDisplay");

	Uw_Pickerbox_bpw_C_SyncEditorDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Pickerbox_bpw_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Input Swap");

	Uw_Pickerbox_bpw_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerLeft_Clicked
// (BlueprintCallable, BlueprintEvent)

void Uw_Pickerbox_bpw_C::PickerLeft_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerLeft_Clicked");

	Uw_Pickerbox_bpw_C_PickerLeft_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerRight_Clicked
// (BlueprintCallable, BlueprintEvent)

void Uw_Pickerbox_bpw_C::PickerRight_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerRight_Clicked");

	Uw_Pickerbox_bpw_C_PickerRight_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Pickerbox_bpw_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_Pickerbox_bpw_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Pickerbox_bpw_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	Uw_Pickerbox_bpw_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Pickerbox_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	Uw_Pickerbox_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_Pickerbox_bpw_C::BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature");

	Uw_Pickerbox_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_Pickerbox_bpw_C::BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature");

	Uw_Pickerbox_bpw_C_BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Pickerbox_bpw_C::Refresh(int ActiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Refresh");

	Uw_Pickerbox_bpw_C_Refresh_Params params;
	params.ActiveIndex = ActiveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__Button_Center_K2Node_ComponentBoundEvent_368_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Pickerbox_bpw_C::BndEvt__Button_Center_K2Node_ComponentBoundEvent_368_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__Button_Center_K2Node_ComponentBoundEvent_368_OnButtonHoverEvent__DelegateSignature");

	Uw_Pickerbox_bpw_C_BndEvt__Button_Center_K2Node_ComponentBoundEvent_368_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.ExecuteUbergraph_w_Pickerbox_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Pickerbox_bpw_C::ExecuteUbergraph_w_Pickerbox_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.ExecuteUbergraph_w_Pickerbox_bpw");

	Uw_Pickerbox_bpw_C_ExecuteUbergraph_w_Pickerbox_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Pickerbox_bpw_C::PickerFocused__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerFocused__DelegateSignature");

	Uw_Pickerbox_bpw_C_PickerFocused__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.On Group Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Pickerbox_bpw_C::On_Group_Selected__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.On Group Selected__DelegateSignature");

	Uw_Pickerbox_bpw_C_On_Group_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Pickerbox_bpw_C::PickerChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerChanged__DelegateSignature");

	Uw_Pickerbox_bpw_C_PickerChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
