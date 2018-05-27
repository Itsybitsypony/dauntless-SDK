// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_mainMenuNav_store_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.GetVisibility_enabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_mainMenuNav_store_C::GetVisibility_enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.GetVisibility_enabled");

	Uw_mainMenuNav_store_C_GetVisibility_enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_mainMenuNav_store_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.OnFocusReceived");

	Uw_mainMenuNav_store_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.GetVisibility_hover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_mainMenuNav_store_C::GetVisibility_hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.GetVisibility_hover");

	Uw_mainMenuNav_store_C_GetVisibility_hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_mainMenuNav_store_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.Construct");

	Uw_mainMenuNav_store_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_mainMenuNav_store_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.OnSynchronizeProperties");

	Uw_mainMenuNav_store_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.BndEvt__BU_Signout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_mainMenuNav_store_C::BndEvt__BU_Signout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.BndEvt__BU_Signout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_mainMenuNav_store_C_BndEvt__BU_Signout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.ExecuteUbergraph_w_mainMenuNav_store
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_mainMenuNav_store_C::ExecuteUbergraph_w_mainMenuNav_store(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.ExecuteUbergraph_w_mainMenuNav_store");

	Uw_mainMenuNav_store_C_ExecuteUbergraph_w_mainMenuNav_store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_mainMenuNav_store.w_mainMenuNav_store_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_mainMenuNav_store_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_mainMenuNav_store.w_mainMenuNav_store_C.ButtonClicked__DelegateSignature");

	Uw_mainMenuNav_store_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
