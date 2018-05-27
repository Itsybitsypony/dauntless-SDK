// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_readyup_button_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.SetReadyUpState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELobbyReadyState>  NewReadyState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_readyup_button_bpw_C::SetReadyUpState(TEnumAsByte<ELobbyReadyState> NewReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.SetReadyUpState");

	Uw_readyup_button_bpw_C_SetReadyUpState_Params params;
	params.NewReadyState = NewReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_readyup_button_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnKeyDown");

	Uw_readyup_button_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.GamepadSetAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_readyup_button_bpw_C::GamepadSetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.GamepadSetAlpha");

	Uw_readyup_button_bpw_C_GamepadSetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.GamepadVisibilty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_readyup_button_bpw_C::GamepadVisibilty()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.GamepadVisibilty");

	Uw_readyup_button_bpw_C_GamepadVisibilty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_readyup_button_bpw_C::ButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.ButtonVisibility");

	Uw_readyup_button_bpw_C_ButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_readyup_button_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnFocusReceived");

	Uw_readyup_button_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF91B0B2EBD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_readyup_button_bpw_C::OnLoaded_A058EA6248D678A919D5DF91B0B2EBD3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF91B0B2EBD3");

	Uw_readyup_button_bpw_C_OnLoaded_A058EA6248D678A919D5DF91B0B2EBD3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_readyup_button_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Construct");

	Uw_readyup_button_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_readyup_button_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Tick");

	Uw_readyup_button_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Show Hover");

	Uw_readyup_button_bpw_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Hide Hover");

	Uw_readyup_button_bpw_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_readyup_button_bpw_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Input Swap");

	Uw_readyup_button_bpw_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_readyup_button_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnSynchronizeProperties");

	Uw_readyup_button_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Refresh");

	Uw_readyup_button_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.GameKey Pressed
// (BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::GameKey_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.GameKey Pressed");

	Uw_readyup_button_bpw_C_GameKey_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ReadyUpStateChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::ReadyUpStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.ReadyUpStateChanged");

	Uw_readyup_button_bpw_C_ReadyUpStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Refresh Material
// (BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::Refresh_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.Refresh Material");

	Uw_readyup_button_bpw_C_Refresh_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.BndEvt__Clicker_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_readyup_button_bpw_C::BndEvt__Clicker_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.BndEvt__Clicker_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	Uw_readyup_button_bpw_C_BndEvt__Clicker_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ExecuteUbergraph_w_readyup_button_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_readyup_button_bpw_C::ExecuteUbergraph_w_readyup_button_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.ExecuteUbergraph_w_readyup_button_bpw");

	Uw_readyup_button_bpw_C_ExecuteUbergraph_w_readyup_button_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ClickedReadyUP__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_readyup_button_bpw_C::ClickedReadyUP__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_readyup_button_bpw.w_readyup_button_bpw_C.ClickedReadyUP__DelegateSignature");

	Uw_readyup_button_bpw_C_ClickedReadyUP__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
