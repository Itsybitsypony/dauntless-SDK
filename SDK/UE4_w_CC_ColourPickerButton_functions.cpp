// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPickerButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPickerButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.OnFocusReceived");

	Uw_CC_ColourPickerButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPickerButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_Button Clicked__DelegateSignature");

	Uw_CC_ColourPickerButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.ExecuteUbergraph_w_CC_ColourPickerButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerButton_C::ExecuteUbergraph_w_CC_ColourPickerButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.ExecuteUbergraph_w_CC_ColourPickerButton");

	Uw_CC_ColourPickerButton_C_ExecuteUbergraph_w_CC_ColourPickerButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.ColourPickerBUPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            PrimaryColour                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            SecondaryColour                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Primary2                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Secondary2                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_CC_ColourPickerButton_C::ColourPickerBUPressed__DelegateSignature(const struct FLinearColor& PrimaryColour, const struct FLinearColor& SecondaryColour, const struct FLinearColor& Primary2, const struct FLinearColor& Secondary2)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.ColourPickerBUPressed__DelegateSignature");

	Uw_CC_ColourPickerButton_C_ColourPickerBUPressed__DelegateSignature_Params params;
	params.PrimaryColour = PrimaryColour;
	params.SecondaryColour = SecondaryColour;
	params.Primary2 = Primary2;
	params.Secondary2 = Secondary2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
