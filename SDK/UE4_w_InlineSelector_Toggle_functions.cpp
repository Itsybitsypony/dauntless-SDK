// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_InlineSelector_Toggle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Select Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::Select_Item(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Select Item");

	Uw_InlineSelector_Toggle_C_Select_Item_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Show Button Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_SelectableButton_C*   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::Show_Button_Selected(class Uw_SelectableButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Show Button Selected");

	Uw_InlineSelector_Toggle_C_Show_Button_Selected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Show Button Unselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_SelectableButton_C*   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::Show_Button_Unselected(class Uw_SelectableButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Show Button Unselected");

	Uw_InlineSelector_Toggle_C_Show_Button_Unselected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Get Selected Button
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Uw_SelectableButton_C*   Button                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::Get_Selected_Button(class Uw_SelectableButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Get Selected Button");

	Uw_InlineSelector_Toggle_C_Get_Selected_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Select Next Item
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_InlineSelector_Toggle_C::Select_Next_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Select Next Item");

	Uw_InlineSelector_Toggle_C_Select_Next_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.OnLoaded_A058EA6248D678A919D5DF91C635B70D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::OnLoaded_A058EA6248D678A919D5DF91C635B70D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.OnLoaded_A058EA6248D678A919D5DF91C635B70D");

	Uw_InlineSelector_Toggle_C_OnLoaded_A058EA6248D678A919D5DF91C635B70D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_InlineSelector_Toggle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Construct");

	Uw_InlineSelector_Toggle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_InlineSelector_Toggle_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.OnSynchronizeProperties");

	Uw_InlineSelector_Toggle_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_InlineSelector_Toggle_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Refresh");

	Uw_InlineSelector_Toggle_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.Input Swap");

	Uw_InlineSelector_Toggle_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_InlineSelector_Toggle_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On Clicked__DelegateSignature");

	Uw_InlineSelector_Toggle_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_226_On Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_InlineSelector_Toggle_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_226_On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_226_On Clicked__DelegateSignature");

	Uw_InlineSelector_Toggle_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_226_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.ExecuteUbergraph_w_InlineSelector_Toggle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_InlineSelector_Toggle_C::ExecuteUbergraph_w_InlineSelector_Toggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.ExecuteUbergraph_w_InlineSelector_Toggle");

	Uw_InlineSelector_Toggle_C_ExecuteUbergraph_w_InlineSelector_Toggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.On Right Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_InlineSelector_Toggle_C::On_Right_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.On Right Selected__DelegateSignature");

	Uw_InlineSelector_Toggle_C_On_Right_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.On Left Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_InlineSelector_Toggle_C::On_Left_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_InlineSelector_Toggle.w_InlineSelector_Toggle_C.On Left Selected__DelegateSignature");

	Uw_InlineSelector_Toggle_C_On_Left_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
