// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_FloatingButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_FloatingButton.BPW_FloatingButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBPW_FloatingButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.OnFocusReceived");

	UBPW_FloatingButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_FloatingButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.Construct");

	UBPW_FloatingButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FloatingButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.Tick");

	UBPW_FloatingButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_613_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_FloatingButton_C::BndEvt__Floating_Button_K2Node_ComponentBoundEvent_613_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_613_OnButtonClickedEvent__DelegateSignature");

	UBPW_FloatingButton_C_BndEvt__Floating_Button_K2Node_ComponentBoundEvent_613_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_FloatingButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.OnSynchronizeProperties");

	UBPW_FloatingButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_FloatingButton_C::BndEvt__Floating_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UBPW_FloatingButton_C_BndEvt__Floating_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_FloatingButton_C::BndEvt__Floating_Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");

	UBPW_FloatingButton_C_BndEvt__Floating_Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_FloatingButton_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.OnFocusLost");

	UBPW_FloatingButton_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.ExecuteUbergraph_BPW_FloatingButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_FloatingButton_C::ExecuteUbergraph_BPW_FloatingButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.ExecuteUbergraph_BPW_FloatingButton");

	UBPW_FloatingButton_C_ExecuteUbergraph_BPW_FloatingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_FloatingButton.BPW_FloatingButton_C.ButtonLostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_FloatingButton_C::ButtonLostFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_FloatingButton.BPW_FloatingButton_C.ButtonLostFocus__DelegateSignature");

	UBPW_FloatingButton_C_ButtonLostFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
