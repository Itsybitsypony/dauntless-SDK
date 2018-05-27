// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_member_options_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_party_menu_member_options_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.GetDefaultFocusedWidget");

	Uw_party_menu_member_options_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_party_menu_member_options_bpw_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnMouseButtonDown");

	Uw_party_menu_member_options_bpw_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_party_menu_member_options_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnKeyDown");

	Uw_party_menu_member_options_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnPromoteConfirmed
// (BlueprintCallable, BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::OnPromoteConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnPromoteConfirmed");

	Uw_party_menu_member_options_bpw_C_OnPromoteConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.Close");

	Uw_party_menu_member_options_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.On Kick Confirmed
// (BlueprintCallable, BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::On_Kick_Confirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.On Kick Confirmed");

	Uw_party_menu_member_options_bpw_C_On_Kick_Confirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.Construct");

	Uw_party_menu_member_options_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_69_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_69_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_69_Button Clicked__DelegateSignature");

	Uw_party_menu_member_options_bpw_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_69_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_74_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_74_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_74_Button Clicked__DelegateSignature");

	Uw_party_menu_member_options_bpw_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_74_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__Back_K2Node_ComponentBoundEvent_69_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::BndEvt__Back_K2Node_ComponentBoundEvent_69_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__Back_K2Node_ComponentBoundEvent_69_OnClicked__DelegateSignature");

	Uw_party_menu_member_options_bpw_C_BndEvt__Back_K2Node_ComponentBoundEvent_69_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_member_options_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.Tick");

	Uw_party_menu_member_options_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature");

	Uw_party_menu_member_options_bpw_C_BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.ExecuteUbergraph_w_party_menu_member_options_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_member_options_bpw_C::ExecuteUbergraph_w_party_menu_member_options_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.ExecuteUbergraph_w_party_menu_member_options_bpw");

	Uw_party_menu_member_options_bpw_C_ExecuteUbergraph_w_party_menu_member_options_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_party_menu_member_options_bpw_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_member_options_bpw.w_party_menu_member_options_bpw_C.OnClosed__DelegateSignature");

	Uw_party_menu_member_options_bpw_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
