// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_pickerbox_tabs_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.TogglePips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::TogglePips(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.TogglePips");

	Uw_pickerbox_tabs_bpw_C_TogglePips_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.UpdateGroupPipCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    ActiveWeaponIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::UpdateGroupPipCounter(EWeaponType ActiveWeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.UpdateGroupPipCounter");

	Uw_pickerbox_tabs_bpw_C_UpdateGroupPipCounter_Params params;
	params.ActiveWeaponIndex = ActiveWeaponIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_pickerbox_tabs_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.OnFocusReceived");

	Uw_pickerbox_tabs_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_pickerbox_tabs_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.GetText_1");

	Uw_pickerbox_tabs_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Get_StackCountofTotal_txt_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_pickerbox_tabs_bpw_C::Get_StackCountofTotal_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Get_StackCountofTotal_txt_Text_1");

	Uw_pickerbox_tabs_bpw_C_Get_StackCountofTotal_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Construct");

	Uw_pickerbox_tabs_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.OnSynchronizeProperties");

	Uw_pickerbox_tabs_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Refresh");

	Uw_pickerbox_tabs_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Input Swap");

	Uw_pickerbox_tabs_bpw_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerLeft_Clicked
// (BlueprintCallable, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::PickerLeft_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerLeft_Clicked");

	Uw_pickerbox_tabs_bpw_C_PickerLeft_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerRight_Clicked
// (BlueprintCallable, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::PickerRight_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerRight_Clicked");

	Uw_pickerbox_tabs_bpw_C_PickerRight_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__w_FakeFocusReceiveCaster_171_K2Node_ComponentBoundEvent_549_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::BndEvt__w_FakeFocusReceiveCaster_171_K2Node_ComponentBoundEvent_549_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__w_FakeFocusReceiveCaster_171_K2Node_ComponentBoundEvent_549_FakeFocusReceived__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__w_FakeFocusReceiveCaster_171_K2Node_ComponentBoundEvent_549_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip2_K2Node_ComponentBoundEvent_237_PipClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::BndEvt__groupPip2_K2Node_ComponentBoundEvent_237_PipClick__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip2_K2Node_ComponentBoundEvent_237_PipClick__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip2_K2Node_ComponentBoundEvent_237_PipClick__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip1_K2Node_ComponentBoundEvent_245_PipClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::BndEvt__groupPip1_K2Node_ComponentBoundEvent_245_PipClick__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip1_K2Node_ComponentBoundEvent_245_PipClick__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip1_K2Node_ComponentBoundEvent_245_PipClick__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip3_K2Node_ComponentBoundEvent_254_PipClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::BndEvt__groupPip3_K2Node_ComponentBoundEvent_254_PipClick__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip3_K2Node_ComponentBoundEvent_254_PipClick__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip3_K2Node_ComponentBoundEvent_254_PipClick__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip4_K2Node_ComponentBoundEvent_264_PipClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::BndEvt__groupPip4_K2Node_ComponentBoundEvent_264_PipClick__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip4_K2Node_ComponentBoundEvent_264_PipClick__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip4_K2Node_ComponentBoundEvent_264_PipClick__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip5_K2Node_ComponentBoundEvent_275_PipClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::BndEvt__groupPip5_K2Node_ComponentBoundEvent_275_PipClick__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip5_K2Node_ComponentBoundEvent_275_PipClick__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip5_K2Node_ComponentBoundEvent_275_PipClick__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.ExecuteUbergraph_w_pickerbox_tabs_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::ExecuteUbergraph_w_pickerbox_tabs_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.ExecuteUbergraph_w_pickerbox_tabs_bpw");

	Uw_pickerbox_tabs_bpw_C_ExecuteUbergraph_w_pickerbox_tabs_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::PickerFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerFocused__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_PickerFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PushFocus_Down__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_pickerbox_tabs_bpw_C::PushFocus_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PushFocus_Down__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_PushFocus_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Group Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::On_Group_Selected__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Group Selected__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_On_Group_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Right Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::On_Right_Selected__DelegateSignature(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Right Selected__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_On_Right_Selected__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Left Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pickerbox_tabs_bpw_C::On_Left_Selected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Left Selected__DelegateSignature");

	Uw_pickerbox_tabs_bpw_C_On_Left_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
