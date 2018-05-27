// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPicker_Eyes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Revert Eye Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::Revert_Eye_Colour()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Revert Eye Colour");

	Uw_CC_ColourPicker_Eyes_C_Revert_Eye_Colour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Setup Revert Colours
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::Setup_Revert_Colours()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Setup Revert Colours");

	Uw_CC_ColourPicker_Eyes_C_Setup_Revert_Colours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Set EyeColourSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_Index                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPicker_Eyes_C::Set_EyeColourSwitch(int Tab_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Set EyeColourSwitch");

	Uw_CC_ColourPicker_Eyes_C_Set_EyeColourSwitch_Params params;
	params.Tab_Index = Tab_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPicker_Eyes_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.OnKeyDown");

	Uw_CC_ColourPicker_Eyes_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPicker_Eyes_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.OnFocusReceived");

	Uw_CC_ColourPicker_Eyes_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.EyeColourSwitch_Assigner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            EyeIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPicker_Eyes_C::EyeColourSwitch_Assigner(const struct FLinearColor& Value, int EyeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.EyeColourSwitch_Assigner");

	Uw_CC_ColourPicker_Eyes_C_EyeColourSwitch_Assigner_Params params;
	params.Value = Value;
	params.EyeIndex = EyeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Refresh Iris Toggle
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::Refresh_Iris_Toggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Refresh Iris Toggle");

	Uw_CC_ColourPicker_Eyes_C_Refresh_Iris_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Set Eye Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_CC_ColourPicker_Eyes_C::Set_Eye_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Set Eye Color");

	Uw_CC_ColourPicker_Eyes_C_Set_Eye_Color_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Construct");

	Uw_CC_ColourPicker_Eyes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Cancel");

	Uw_CC_ColourPicker_Eyes_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Save
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Save");

	Uw_CC_ColourPicker_Eyes_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On Left Selected__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On_Left_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On Left Selected__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On_Left_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On Right Selected__DelegateSignature
// (BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On_Right_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On Right Selected__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On_Right_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__EyesSelector_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPicker_Eyes_C::BndEvt__EyesSelector_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__EyesSelector_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_BndEvt__EyesSelector_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ExecuteUbergraph_w_CC_ColourPicker_Eyes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPicker_Eyes_C::ExecuteUbergraph_w_CC_ColourPicker_Eyes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ExecuteUbergraph_w_CC_ColourPicker_Eyes");

	Uw_CC_ColourPicker_Eyes_C_ExecuteUbergraph_w_CC_ColourPicker_Eyes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_SelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::ColourPicker_SelectionChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_SelectionChanged__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_ColourPicker_SelectionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_Saved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::ColourPicker_Saved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_Saved__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_ColourPicker_Saved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_Cancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPicker_Eyes_C::ColourPicker_Cancelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_Cancelled__DelegateSignature");

	Uw_CC_ColourPicker_Eyes_C_ColourPicker_Cancelled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
