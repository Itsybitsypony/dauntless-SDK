// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_SelectableButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_SelectableButton.w_SelectableButton_C.Unselect
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_SelectableButton_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.Unselect");

	Uw_SelectableButton_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.Select
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_SelectableButton_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.Select");

	Uw_SelectableButton_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.Set Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Selected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SelectableButton_C::Set_Selected(bool Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.Set Selected");

	Uw_SelectableButton_C_Set_Selected_Params params;
	params.Is_Selected = Is_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.Set Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_SelectableButton_C::Set_Label(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.Set Label");

	Uw_SelectableButton_C_Set_Label_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_SelectableButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.OnSynchronizeProperties");

	Uw_SelectableButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_SelectableButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Uw_SelectableButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_SelectableButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Uw_SelectableButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_SelectableButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Uw_SelectableButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.ExecuteUbergraph_w_SelectableButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SelectableButton_C::ExecuteUbergraph_w_SelectableButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.ExecuteUbergraph_w_SelectableButton");

	Uw_SelectableButton_C_ExecuteUbergraph_w_SelectableButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SelectableButton.w_SelectableButton_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_SelectableButton_C::On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SelectableButton.w_SelectableButton_C.On Clicked__DelegateSignature");

	Uw_SelectableButton_C_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
