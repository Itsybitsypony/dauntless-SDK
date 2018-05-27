// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_entry_activity_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_play_menu_entry_activity_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnFocusReceived");

	Uw_play_menu_entry_activity_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnLoaded_0A2F23CE4C4A92C4F9C26C9A65E78454
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_activity_bpw_C::OnLoaded_0A2F23CE4C4A92C4F9C26C9A65E78454(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnLoaded_0A2F23CE4C4A92C4F9C26C9A65E78454");

	Uw_play_menu_entry_activity_bpw_C_OnLoaded_0A2F23CE4C4A92C4F9C26C9A65E78454_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_activity_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.PreConstruct");

	Uw_play_menu_entry_activity_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_9_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_activity_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_9_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_9_OnArchonUserButtonAction__DelegateSignature");

	Uw_play_menu_entry_activity_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_9_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_4_OnArchonUserButtonAction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_activity_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_4_OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_4_OnArchonUserButtonAction__DelegateSignature");

	Uw_play_menu_entry_activity_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_4_OnArchonUserButtonAction__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_activity_bpw_C::SetIsSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.SetIsSelected");

	Uw_play_menu_entry_activity_bpw_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_play_menu_entry_activity_bpw_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnMouseEnter");

	Uw_play_menu_entry_activity_bpw_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_play_menu_entry_activity_bpw_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.OnMouseLeave");

	Uw_play_menu_entry_activity_bpw_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_play_menu_entry_activity_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.Construct");

	Uw_play_menu_entry_activity_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)

void Uw_play_menu_entry_activity_bpw_C::LoadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.LoadIcon");

	Uw_play_menu_entry_activity_bpw_C_LoadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_play_menu_entry_activity_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature");

	Uw_play_menu_entry_activity_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.ExecuteUbergraph_w_play_menu_entry_activity_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_play_menu_entry_activity_bpw_C::ExecuteUbergraph_w_play_menu_entry_activity_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_play_menu_entry_activity_bpw.w_play_menu_entry_activity_bpw_C.ExecuteUbergraph_w_play_menu_entry_activity_bpw");

	Uw_play_menu_entry_activity_bpw_C_ExecuteUbergraph_w_play_menu_entry_activity_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
