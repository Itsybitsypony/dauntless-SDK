// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ConfirmPopup_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UConfirmPopup_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.GetDefaultFocusedWidget");

	UConfirmPopup_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Set Button Labels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Confirm                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Cancel                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UConfirmPopup_bpw_C::Set_Button_Labels(const struct FText& Confirm, const struct FText& Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Set Button Labels");

	UConfirmPopup_bpw_C_Set_Button_Labels_Params params;
	params.Confirm = Confirm;
	params.Cancel = Cancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Visible for Keyboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConfirmPopup_bpw_C::Visible_for_Keyboard(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Visible for Keyboard");

	UConfirmPopup_bpw_C_Visible_for_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Visible for Gamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConfirmPopup_bpw_C::Visible_for_Gamepad(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Visible for Gamepad");

	UConfirmPopup_bpw_C_Visible_for_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Enabled for Keyboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConfirmPopup_bpw_C::Enabled_for_Keyboard(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Enabled for Keyboard");

	UConfirmPopup_bpw_C_Enabled_for_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Enabled for Gamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConfirmPopup_bpw_C::Enabled_for_Gamepad(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Enabled for Gamepad");

	UConfirmPopup_bpw_C_Enabled_for_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Show Popup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UConfirmPopup_bpw_C::Show_Popup(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Show Popup");

	UConfirmPopup_bpw_C_Show_Popup_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UConfirmPopup_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.OnKeyDown");

	UConfirmPopup_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmPopup_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Construct");

	UConfirmPopup_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmPopup_bpw_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Input Swap");

	UConfirmPopup_bpw_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UConfirmPopup_bpw_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Cancel");

	UConfirmPopup_bpw_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Confirm
// (BlueprintCallable, BlueprintEvent)

void UConfirmPopup_bpw_C::Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Confirm");

	UConfirmPopup_bpw_C_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UConfirmPopup_bpw_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UConfirmPopup_bpw_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
// (BlueprintEvent)

void UConfirmPopup_bpw_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature");

	UConfirmPopup_bpw_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.ExecuteUbergraph_ConfirmPopup_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmPopup_bpw_C::ExecuteUbergraph_ConfirmPopup_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.ExecuteUbergraph_ConfirmPopup_bpw");

	UConfirmPopup_bpw_C_ExecuteUbergraph_ConfirmPopup_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.On Confirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfirmPopup_bpw_C::On_Confirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.On Confirmed__DelegateSignature");

	UConfirmPopup_bpw_C_On_Confirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.On Canceled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UConfirmPopup_bpw_C::On_Canceled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.On Canceled__DelegateSignature");

	UConfirmPopup_bpw_C_On_Canceled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
