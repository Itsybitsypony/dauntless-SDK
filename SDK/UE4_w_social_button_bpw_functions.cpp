// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_button_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_social_button_bpw.w_social_button_bpw_C.ClearPendingState
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_social_button_bpw_C::ClearPendingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.ClearPendingState");

	Uw_social_button_bpw_C_ClearPendingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_button_bpw.w_social_button_bpw_C.SetPendingState
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_social_button_bpw_C::SetPendingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.SetPendingState");

	Uw_social_button_bpw_C_SetPendingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_button_bpw.w_social_button_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_social_button_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.OnFocusReceived");

	Uw_social_button_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_social_button_bpw.w_social_button_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_social_button_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.Construct");

	Uw_social_button_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_button_bpw.w_social_button_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_social_button_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.OnSynchronizeProperties");

	Uw_social_button_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_button_bpw.w_social_button_bpw_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_social_button_bpw_C::BndEvt__ActionButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	Uw_social_button_bpw_C_BndEvt__ActionButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_button_bpw.w_social_button_bpw_C.ExecuteUbergraph_w_social_button_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_button_bpw_C::ExecuteUbergraph_w_social_button_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.ExecuteUbergraph_w_social_button_bpw");

	Uw_social_button_bpw_C_ExecuteUbergraph_w_social_button_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_button_bpw.w_social_button_bpw_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_social_button_bpw_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_button_bpw.w_social_button_bpw_C.OnClicked__DelegateSignature");

	Uw_social_button_bpw_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
