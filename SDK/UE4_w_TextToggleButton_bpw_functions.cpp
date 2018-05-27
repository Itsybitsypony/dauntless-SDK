// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_TextToggleButton_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Get_ToggleButton_CheckedState_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState Uw_TextToggleButton_bpw_C::Get_ToggleButton_CheckedState_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Get_ToggleButton_CheckedState_1");

	Uw_TextToggleButton_bpw_C_Get_ToggleButton_CheckedState_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TextToggleButton_bpw_C::Refresh(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Refresh");

	Uw_TextToggleButton_bpw_C_Refresh_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_TextToggleButton_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.OnFocusReceived");

	Uw_TextToggleButton_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Sync_SetText
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_TextToggleButton_bpw_C::Sync_SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Sync_SetText");

	Uw_TextToggleButton_bpw_C_Sync_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_TextToggleButton_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.GetText_1");

	Uw_TextToggleButton_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_TextToggleButton_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.OnSynchronizeProperties");

	Uw_TextToggleButton_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TextToggleButton_bpw_C::BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uw_TextToggleButton_bpw_C_BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Set Toggle State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckedState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TextToggleButton_bpw_C::Set_Toggle_State(bool CheckedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Set Toggle State");

	Uw_TextToggleButton_bpw_C_Set_Toggle_State_Params params;
	params.CheckedState = CheckedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.ExecuteUbergraph_w_TextToggleButton_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TextToggleButton_bpw_C::ExecuteUbergraph_w_TextToggleButton_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.ExecuteUbergraph_w_TextToggleButton_bpw");

	Uw_TextToggleButton_bpw_C_ExecuteUbergraph_w_TextToggleButton_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.ToggleStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TextToggleButton_bpw_C::ToggleStateChange__DelegateSignature(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.ToggleStateChange__DelegateSignature");

	Uw_TextToggleButton_bpw_C_ToggleStateChange__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
