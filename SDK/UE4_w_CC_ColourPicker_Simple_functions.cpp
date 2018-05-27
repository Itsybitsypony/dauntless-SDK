// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPicker_Simple_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Revert Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::Revert_Colour()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Revert Colour");

	Uw_CC_ColourPicker_Simple_C_Revert_Colour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Setup Revert Colours
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::Setup_Revert_Colours()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Setup Revert Colours");

	Uw_CC_ColourPicker_Simple_C_Setup_Revert_Colours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPicker_Simple_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.OnKeyDown");

	Uw_CC_ColourPicker_Simple_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPicker_Simple_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.OnFocusReceived");

	Uw_CC_ColourPicker_Simple_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.HairColourSwitch_Assigner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            EyeIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPicker_Simple_C::HairColourSwitch_Assigner(const struct FLinearColor& Value, int EyeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.HairColourSwitch_Assigner");

	Uw_CC_ColourPicker_Simple_C_HairColourSwitch_Assigner_Params params;
	params.Value = Value;
	params.EyeIndex = EyeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Refresh Iris Toggle
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::Refresh_Iris_Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Refresh Iris Toggle");

	Uw_CC_ColourPicker_Simple_C_Refresh_Iris_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Construct");

	Uw_CC_ColourPicker_Simple_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Cancel");

	Uw_CC_ColourPicker_Simple_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Save
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.Save");

	Uw_CC_ColourPicker_Simple_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On Left Selected__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On_Left_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On Left Selected__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On_Left_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On Right Selected__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On_Right_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On Right Selected__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On_Right_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.SetPrimaryColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_CC_ColourPicker_Simple_C::SetPrimaryColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.SetPrimaryColor");

	Uw_CC_ColourPicker_Simple_C_SetPrimaryColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.SetSecondaryColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_CC_ColourPicker_Simple_C::SetSecondaryColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.SetSecondaryColor");

	Uw_CC_ColourPicker_Simple_C_SetSecondaryColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ExecuteUbergraph_w_CC_ColourPicker_Simple
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPicker_Simple_C::ExecuteUbergraph_w_CC_ColourPicker_Simple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ExecuteUbergraph_w_CC_ColourPicker_Simple");

	Uw_CC_ColourPicker_Simple_C_ExecuteUbergraph_w_CC_ColourPicker_Simple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ColourPicker_SelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::ColourPicker_SelectionChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ColourPicker_SelectionChanged__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_ColourPicker_SelectionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ColourPicker_Saved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::ColourPicker_Saved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ColourPicker_Saved__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_ColourPicker_Saved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ColourPicker_Cancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Simple_C::ColourPicker_Cancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C.ColourPicker_Cancelled__DelegateSignature");

	Uw_CC_ColourPicker_Simple_C_ColourPicker_Cancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
