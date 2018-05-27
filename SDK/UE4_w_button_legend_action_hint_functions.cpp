// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_legend_action_hint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_legend_action_hint.w_button_legend_action_hint_C.Bind Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_button_legend_action_hint_C::Bind_Action(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.Bind Action");

	Uw_button_legend_action_hint_C_Bind_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function w_button_legend_action_hint.w_button_legend_action_hint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_action_hint_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.PreConstruct");

	Uw_button_legend_action_hint_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_action_hint.w_button_legend_action_hint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_legend_action_hint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.Construct");

	Uw_button_legend_action_hint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_action_hint.w_button_legend_action_hint_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_action_hint_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.InputSwap");

	Uw_button_legend_action_hint_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_action_hint.w_button_legend_action_hint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_button_legend_action_hint_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_button_legend_action_hint_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_action_hint.w_button_legend_action_hint_C.ExecuteUbergraph_w_button_legend_action_hint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_action_hint_C::ExecuteUbergraph_w_button_legend_action_hint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.ExecuteUbergraph_w_button_legend_action_hint");

	Uw_button_legend_action_hint_C_ExecuteUbergraph_w_button_legend_action_hint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_action_hint.w_button_legend_action_hint_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_button_legend_action_hint_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_action_hint.w_button_legend_action_hint_C.OnClicked__DelegateSignature");

	Uw_button_legend_action_hint_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
