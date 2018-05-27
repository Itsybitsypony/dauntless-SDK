// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_keyword_text_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_keyword_text.w_keyword_text_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_keyword_text_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.OnFocusReceived");

	Uw_keyword_text_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_keyword_text.w_keyword_text_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_keyword_text_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.Construct");

	Uw_keyword_text_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_text.w_keyword_text_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_keyword_text_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	Uw_keyword_text_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_text.w_keyword_text_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_keyword_text_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature");

	Uw_keyword_text_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_text.w_keyword_text_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_keyword_text_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.Refresh");

	Uw_keyword_text_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_text.w_keyword_text_C.ExecuteUbergraph_w_keyword_text
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_keyword_text_C::ExecuteUbergraph_w_keyword_text(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.ExecuteUbergraph_w_keyword_text");

	Uw_keyword_text_C_ExecuteUbergraph_w_keyword_text_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_text.w_keyword_text_C.OnHoveredFocusedOrSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CellEffectID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_keyword_text_C::OnHoveredFocusedOrSelected__DelegateSignature(const struct FName& CellEffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_text.w_keyword_text_C.OnHoveredFocusedOrSelected__DelegateSignature");

	Uw_keyword_text_C_OnHoveredFocusedOrSelected__DelegateSignature_Params params;
	params.CellEffectID = CellEffectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
