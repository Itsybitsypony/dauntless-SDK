// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_entry_hunt_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_play_menu_entry_hunt_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.OnFocusReceived");

	Uw_play_menu_entry_hunt_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_play_menu_entry_hunt_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.Construct");

	Uw_play_menu_entry_hunt_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_hunt_bpw_C::SetIsSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.SetIsSelected");

	Uw_play_menu_entry_hunt_bpw_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_play_menu_entry_hunt_bpw_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.OnMouseEnter");

	Uw_play_menu_entry_hunt_bpw_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_play_menu_entry_hunt_bpw_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.OnMouseLeave");

	Uw_play_menu_entry_hunt_bpw_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_75_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_hunt_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_75_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_75_OnArchonUserButtonAction__DelegateSignature");

	Uw_play_menu_entry_hunt_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_75_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_88_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_hunt_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_88_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_88_OnArchonUserButtonAction__DelegateSignature");

	Uw_play_menu_entry_hunt_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_88_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_102_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_hunt_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_102_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_102_OnArchonUserButtonAction__DelegateSignature");

	Uw_play_menu_entry_hunt_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_102_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.ExecuteUbergraph_w_play_menu_entry_hunt_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_hunt_bpw_C::ExecuteUbergraph_w_play_menu_entry_hunt_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_hunt_bpw.w_play_menu_entry_hunt_bpw_C.ExecuteUbergraph_w_play_menu_entry_hunt_bpw");

	Uw_play_menu_entry_hunt_bpw_C_ExecuteUbergraph_w_play_menu_entry_hunt_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
