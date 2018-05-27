// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Options_ButtonBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Options_ButtonBar.w_Options_ButtonBar_C.SetShowResetButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowResetButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_ButtonBar_C::SetShowResetButton(bool ShowResetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.SetShowResetButton");

	Uw_Options_ButtonBar_C_SetShowResetButton_Params params;
	params.ShowResetButton = ShowResetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.BndEvt__Reset_K2Node_ComponentBoundEvent_101_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_Options_ButtonBar_C::BndEvt__Reset_K2Node_ComponentBoundEvent_101_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.BndEvt__Reset_K2Node_ComponentBoundEvent_101_OnClicked__DelegateSignature");

	Uw_Options_ButtonBar_C_BndEvt__Reset_K2Node_ComponentBoundEvent_101_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.BndEvt__BU_Apply_K2Node_ComponentBoundEvent_131_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_Options_ButtonBar_C::BndEvt__BU_Apply_K2Node_ComponentBoundEvent_131_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.BndEvt__BU_Apply_K2Node_ComponentBoundEvent_131_OnClicked__DelegateSignature");

	Uw_Options_ButtonBar_C_BndEvt__BU_Apply_K2Node_ComponentBoundEvent_131_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.BndEvt__BU_Back_K2Node_ComponentBoundEvent_134_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_Options_ButtonBar_C::BndEvt__BU_Back_K2Node_ComponentBoundEvent_134_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.BndEvt__BU_Back_K2Node_ComponentBoundEvent_134_OnClicked__DelegateSignature");

	Uw_Options_ButtonBar_C_BndEvt__BU_Back_K2Node_ComponentBoundEvent_134_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.ExecuteUbergraph_w_Options_ButtonBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_ButtonBar_C::ExecuteUbergraph_w_Options_ButtonBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.ExecuteUbergraph_w_Options_ButtonBar");

	Uw_Options_ButtonBar_C_ExecuteUbergraph_w_Options_ButtonBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.ButtonBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Options_ButtonBar_C::ButtonBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.ButtonBack__DelegateSignature");

	Uw_Options_ButtonBar_C_ButtonBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.ButtonApplyChanges__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Options_ButtonBar_C::ButtonApplyChanges__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.ButtonApplyChanges__DelegateSignature");

	Uw_Options_ButtonBar_C_ButtonApplyChanges__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_ButtonBar.w_Options_ButtonBar_C.ButtonRESET__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Options_ButtonBar_C::ButtonRESET__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_ButtonBar.w_Options_ButtonBar_C.ButtonRESET__DelegateSignature");

	Uw_Options_ButtonBar_C_ButtonRESET__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
