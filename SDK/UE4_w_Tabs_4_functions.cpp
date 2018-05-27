// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Tabs_4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Tabs_4.w_Tabs_3_C.Select Previous Item
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Tabs_3_C::Select_Previous_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Select Previous Item");

	Uw_Tabs_3_C_Select_Previous_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Select Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::Select_Item(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Select Item");

	Uw_Tabs_3_C_Select_Item_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Show Button Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_SelectableButton_C*   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::Show_Button_Selected(class Uw_SelectableButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Show Button Selected");

	Uw_Tabs_3_C_Show_Button_Selected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Show Button Unselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_SelectableButton_C*   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::Show_Button_Unselected(class Uw_SelectableButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Show Button Unselected");

	Uw_Tabs_3_C_Show_Button_Unselected_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Get Selected Button
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Uw_SelectableButton_C*   Button                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::Get_Selected_Button(class Uw_SelectableButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Get Selected Button");

	Uw_Tabs_3_C_Get_Selected_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function w_Tabs_4.w_Tabs_3_C.Select Next Item
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Tabs_3_C::Select_Next_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Select Next Item");

	Uw_Tabs_3_C_Select_Next_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.OnLoaded_A058EA6248D678A919D5DF911E731643
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::OnLoaded_A058EA6248D678A919D5DF911E731643(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.OnLoaded_A058EA6248D678A919D5DF911E731643");

	Uw_Tabs_3_C_OnLoaded_A058EA6248D678A919D5DF911E731643_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.OnLoaded_A058EA6248D678A919D5DF91DF07D857
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::OnLoaded_A058EA6248D678A919D5DF91DF07D857(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.OnLoaded_A058EA6248D678A919D5DF91DF07D857");

	Uw_Tabs_3_C_OnLoaded_A058EA6248D678A919D5DF91DF07D857_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Tabs_3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Construct");

	Uw_Tabs_3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Tabs_3_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.OnSynchronizeProperties");

	Uw_Tabs_3_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_Tabs_3_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Refresh");

	Uw_Tabs_3_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.Input Swap");

	Uw_Tabs_3_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_Tabs_3_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On Clicked__DelegateSignature");

	Uw_Tabs_3_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.BndEvt__Tab_1_K2Node_ComponentBoundEvent_4_On Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_Tabs_3_C::BndEvt__Tab_1_K2Node_ComponentBoundEvent_4_On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.BndEvt__Tab_1_K2Node_ComponentBoundEvent_4_On Clicked__DelegateSignature");

	Uw_Tabs_3_C_BndEvt__Tab_1_K2Node_ComponentBoundEvent_4_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.BndEvt__Tab_2_K2Node_ComponentBoundEvent_5_On Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_Tabs_3_C::BndEvt__Tab_2_K2Node_ComponentBoundEvent_5_On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.BndEvt__Tab_2_K2Node_ComponentBoundEvent_5_On Clicked__DelegateSignature");

	Uw_Tabs_3_C_BndEvt__Tab_2_K2Node_ComponentBoundEvent_5_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.ExecuteUbergraph_w_Tabs_4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::ExecuteUbergraph_w_Tabs_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.ExecuteUbergraph_w_Tabs_4");

	Uw_Tabs_3_C_ExecuteUbergraph_w_Tabs_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.On Tab Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Tabs_3_C::On_Tab_Selected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.On Tab Selected__DelegateSignature");

	Uw_Tabs_3_C_On_Tab_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.On Right Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Tabs_3_C::On_Right_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.On Right Selected__DelegateSignature");

	Uw_Tabs_3_C_On_Right_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Tabs_4.w_Tabs_3_C.On Left Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Tabs_3_C::On_Left_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Tabs_4.w_Tabs_3_C.On Left Selected__DelegateSignature");

	Uw_Tabs_3_C_On_Left_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
