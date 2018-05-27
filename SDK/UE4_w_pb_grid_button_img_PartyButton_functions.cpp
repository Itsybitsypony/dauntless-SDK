// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_pb_grid_button_img_PartyButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.GetContentColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_pb_grid_button_img_PartyButton_C::GetContentColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.GetContentColorAndOpacity_1");

	Uw_pb_grid_button_img_PartyButton_C_GetContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.SetupPartyMemberWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_partymember_button_bpw_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonPartyMember      ArchonPartyMember              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_pb_grid_button_img_PartyButton_C::SetupPartyMemberWidget(class Uw_partymember_button_bpw_C* Widget, struct FArchonPartyMember* ArchonPartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.SetupPartyMemberWidget");

	Uw_pb_grid_button_img_PartyButton_C_SetupPartyMemberWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchonPartyMember != nullptr)
		*ArchonPartyMember = params.ArchonPartyMember;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Get Party Client
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonPartyClient*      Party_Client                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_pb_grid_button_img_PartyButton_C::Get_Party_Client(class AArchonPartyClient** Party_Client)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Get Party Client");

	Uw_pb_grid_button_img_PartyButton_C_Get_Party_Client_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Party_Client != nullptr)
		*Party_Client = params.Party_Client;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Get_HotkeyLabel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_pb_grid_button_img_PartyButton_C::Get_HotkeyLabel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Get_HotkeyLabel_Visibility_1");

	Uw_pb_grid_button_img_PartyButton_C_Get_HotkeyLabel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Refresh");

	Uw_pb_grid_button_img_PartyButton_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.FocusVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_pb_grid_button_img_PartyButton_C::FocusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.FocusVisibility");

	Uw_pb_grid_button_img_PartyButton_C_FocusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.SetButton Hotkey Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_pb_grid_button_img_PartyButton_C::SetButton_Hotkey_Label(const struct FText& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.SetButton Hotkey Label");

	Uw_pb_grid_button_img_PartyButton_C_SetButton_Hotkey_Label_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_pb_grid_button_img_PartyButton_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Set Button Label");

	Uw_pb_grid_button_img_PartyButton_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_pb_grid_button_img_PartyButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.OnFocusReceived");

	Uw_pb_grid_button_img_PartyButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Construct");

	Uw_pb_grid_button_img_PartyButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_grid_button_img_PartyButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Tick");

	Uw_pb_grid_button_img_PartyButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_pb_grid_button_img_PartyButton_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Show Hover");

	Uw_pb_grid_button_img_PartyButton_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Hide Hover");

	Uw_pb_grid_button_img_PartyButton_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.OnSynchronizeProperties");

	Uw_pb_grid_button_img_PartyButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature");

	Uw_pb_grid_button_img_PartyButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Focused
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::Focused()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Focused");

	Uw_pb_grid_button_img_PartyButton_C_Focused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_grid_button_img_PartyButton_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Input Swap");

	Uw_pb_grid_button_img_PartyButton_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.OnPartyUpdated
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonParty            CurrentParty                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_pb_grid_button_img_PartyButton_C::OnPartyUpdated(const struct FArchonParty& CurrentParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.OnPartyUpdated");

	Uw_pb_grid_button_img_PartyButton_C_OnPartyUpdated_Params params;
	params.CurrentParty = CurrentParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.SetupPlayerSlot
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::SetupPlayerSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.SetupPlayerSlot");

	Uw_pb_grid_button_img_PartyButton_C_SetupPlayerSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.ExecuteUbergraph_w_pb_grid_button_img_PartyButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_grid_button_img_PartyButton_C::ExecuteUbergraph_w_pb_grid_button_img_PartyButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.ExecuteUbergraph_w_pb_grid_button_img_PartyButton");

	Uw_pb_grid_button_img_PartyButton_C_ExecuteUbergraph_w_pb_grid_button_img_PartyButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_pb_grid_button_img_PartyButton_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.UpdateTooltip__DelegateSignature");

	Uw_pb_grid_button_img_PartyButton_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_pb_grid_button_img_PartyButton_C::Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_grid_button_img_PartyButton.w_pb_grid_button_img_PartyButton_C.Button Clicked__DelegateSignature");

	Uw_pb_grid_button_img_PartyButton_C_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
