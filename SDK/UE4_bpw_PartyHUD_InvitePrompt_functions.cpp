// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_PartyHUD_InvitePrompt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_PartyHUD_InvitePrompt_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.GetDefaultFocusedWidget");

	Ubpw_PartyHUD_InvitePrompt_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Visible for Keyboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_InvitePrompt_C::Visible_for_Keyboard(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Visible for Keyboard");

	Ubpw_PartyHUD_InvitePrompt_C_Visible_for_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Visible for Gamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_InvitePrompt_C::Visible_for_Gamepad(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Visible for Gamepad");

	Ubpw_PartyHUD_InvitePrompt_C_Visible_for_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Enabled for Keyboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_InvitePrompt_C::Enabled_for_Keyboard(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Enabled for Keyboard");

	Ubpw_PartyHUD_InvitePrompt_C_Enabled_for_Keyboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Enabled for Gamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_InvitePrompt_C::Enabled_for_Gamepad(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Enabled for Gamepad");

	Ubpw_PartyHUD_InvitePrompt_C_Enabled_for_Gamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_PartyHUD_InvitePrompt_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.OnKeyDown");

	Ubpw_PartyHUD_InvitePrompt_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_InvitePrompt_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Input Swap");

	Ubpw_PartyHUD_InvitePrompt_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_PartyHUD_InvitePrompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Construct");

	Ubpw_PartyHUD_InvitePrompt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.BndEvt__w_Button_Cancel_K2Node_ComponentBoundEvent_71_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_PartyHUD_InvitePrompt_C::BndEvt__w_Button_Cancel_K2Node_ComponentBoundEvent_71_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.BndEvt__w_Button_Cancel_K2Node_ComponentBoundEvent_71_Button Clicked__DelegateSignature");

	Ubpw_PartyHUD_InvitePrompt_C_BndEvt__w_Button_Cancel_K2Node_ComponentBoundEvent_71_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.BndEvt__WButton_Confirm_K2Node_ComponentBoundEvent_75_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_PartyHUD_InvitePrompt_C::BndEvt__WButton_Confirm_K2Node_ComponentBoundEvent_75_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.BndEvt__WButton_Confirm_K2Node_ComponentBoundEvent_75_Button Clicked__DelegateSignature");

	Ubpw_PartyHUD_InvitePrompt_C_BndEvt__WButton_Confirm_K2Node_ComponentBoundEvent_75_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Decline
// (BlueprintCallable, BlueprintEvent)

void Ubpw_PartyHUD_InvitePrompt_C::Decline()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Decline");

	Ubpw_PartyHUD_InvitePrompt_C_Decline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Accept
// (BlueprintCallable, BlueprintEvent)

void Ubpw_PartyHUD_InvitePrompt_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Accept");

	Ubpw_PartyHUD_InvitePrompt_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Show Pending Action
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_PartyHUD_InvitePrompt_C::Show_Pending_Action(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Show Pending Action");

	Ubpw_PartyHUD_InvitePrompt_C_Show_Pending_Action_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.ExecuteUbergraph_bpw_PartyHUD_InvitePrompt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_PartyHUD_InvitePrompt_C::ExecuteUbergraph_bpw_PartyHUD_InvitePrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.ExecuteUbergraph_bpw_PartyHUD_InvitePrompt");

	Ubpw_PartyHUD_InvitePrompt_C_ExecuteUbergraph_bpw_PartyHUD_InvitePrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Declined__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyInvite      Invite                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_PartyHUD_InvitePrompt_C::Declined__DelegateSignature(const struct FArchonPartyInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Declined__DelegateSignature");

	Ubpw_PartyHUD_InvitePrompt_C_Declined__DelegateSignature_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Accepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonPartyInvite      Invite                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_PartyHUD_InvitePrompt_C::Accepted__DelegateSignature(const struct FArchonPartyInvite& Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Accepted__DelegateSignature");

	Ubpw_PartyHUD_InvitePrompt_C_Accepted__DelegateSignature_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
