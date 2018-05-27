// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_popup_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function popup_bpw.popup_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Upopup_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.GetDefaultFocusedWidget");

	Upopup_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_bpw.popup_bpw_C.Refresh Dimmer Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void Upopup_bpw_C::Refresh_Dimmer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Refresh Dimmer Visibility");

	Upopup_bpw_C_Refresh_Dimmer_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.Visible for Mouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::Visible_for_Mouse(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Visible for Mouse");

	Upopup_bpw_C_Visible_for_Mouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function popup_bpw.popup_bpw_C.Visible for Gamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::Visible_for_Gamepad(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Visible for Gamepad");

	Upopup_bpw_C_Visible_for_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function popup_bpw.popup_bpw_C.Show Simple Popup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Show_Spinner                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Close_Button                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::Show_Simple_Popup(const struct FText& Message, bool Show_Spinner, bool Close_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Show Simple Popup");

	Upopup_bpw_C_Show_Simple_Popup_Params params;
	params.Message = Message;
	params.Show_Spinner = Show_Spinner;
	params.Close_Button = Close_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.Get Button Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Upopup_bpw_C::Get_Button_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Get Button Visibility");

	Upopup_bpw_C_Get_Button_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_bpw.popup_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Upopup_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.OnKeyDown");

	Upopup_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_bpw.popup_bpw_C.Get Spinner Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Upopup_bpw_C::Get_Spinner_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Get Spinner Visibility");

	Upopup_bpw_C_Get_Spinner_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_bpw.popup_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Upopup_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Construct");

	Upopup_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Upopup_bpw_C::BndEvt__Button_104_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature");

	Upopup_bpw_C_BndEvt__Button_104_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Input Swap");

	Upopup_bpw_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Tick");

	Upopup_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Upopup_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.OnSynchronizeProperties");

	Upopup_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.Close Popup
// (BlueprintCallable, BlueprintEvent)

void Upopup_bpw_C::Close_Popup()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Close Popup");

	Upopup_bpw_C_Close_Popup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.ExecuteUbergraph_popup_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::ExecuteUbergraph_popup_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.ExecuteUbergraph_popup_bpw");

	Upopup_bpw_C_ExecuteUbergraph_popup_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_bpw.popup_bpw_C.Ready To Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_bpw_C::Ready_To_Close__DelegateSignature(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_bpw.popup_bpw_C.Ready To Close__DelegateSignature");

	Upopup_bpw_C_Ready_To_Close__DelegateSignature_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
