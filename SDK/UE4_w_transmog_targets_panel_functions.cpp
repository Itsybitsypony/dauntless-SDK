// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_transmog_targets_panel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Set Source Transmog Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_transmog_targets_panel_C::Set_Source_Transmog_Item(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.Set Source Transmog Item");

	Uw_transmog_targets_panel_C_Set_Source_Transmog_Item_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Get Transmog Button
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 Button                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::Get_Transmog_Button(const class FString& ItemID, class UWidget** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.Get Transmog Button");

	Uw_transmog_targets_panel_C_Get_Transmog_Button_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Select Transmog Target Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_transmog_targets_panel_C::Select_Transmog_Target_Button(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.Select Transmog Target Button");

	Uw_transmog_targets_panel_C_Select_Transmog_Target_Button_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ChildWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::GetChild(int* ChildIndex, class UWidget** ChildWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.GetChild");

	Uw_transmog_targets_panel_C_GetChild_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidget != nullptr)
		*ChildWidget = params.ChildWidget;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.OnDataViewChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_transmog_targets_panel_C::OnDataViewChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.OnDataViewChanged");

	Uw_transmog_targets_panel_C_OnDataViewChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Add Transmog Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_transmog_targets_panel_C::Add_Transmog_Target(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.Add Transmog Target");

	Uw_transmog_targets_panel_C_Add_Transmog_Target_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Transmog Item Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::On_Transmog_Item_Clicked(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Transmog Item Clicked");

	Uw_transmog_targets_panel_C_On_Transmog_Item_Clicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Transmog Item Focused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::On_Transmog_Item_Focused(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Transmog Item Focused");

	Uw_transmog_targets_panel_C_On_Transmog_Item_Focused_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Add Transmog Clear
// (BlueprintCallable, BlueprintEvent)

void Uw_transmog_targets_panel_C::Add_Transmog_Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.Add Transmog Clear");

	Uw_transmog_targets_panel_C_Add_Transmog_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Transmog Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::On_Clear_Transmog_Clicked(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Transmog Clicked");

	Uw_transmog_targets_panel_C_On_Clear_Transmog_Clicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Transmog Focused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::On_Clear_Transmog_Focused(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Transmog Focused");

	Uw_transmog_targets_panel_C_On_Clear_Transmog_Focused_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.ExecuteUbergraph_w_transmog_targets_panel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_transmog_targets_panel_C::ExecuteUbergraph_w_transmog_targets_panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.ExecuteUbergraph_w_transmog_targets_panel");

	Uw_transmog_targets_panel_C_ExecuteUbergraph_w_transmog_targets_panel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_transmog_targets_panel_C::On_Clear_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Selected__DelegateSignature");

	Uw_transmog_targets_panel_C_On_Clear_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Target Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_transmog_targets_panel_C::On_Target_Selected__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Target Selected__DelegateSignature");

	Uw_transmog_targets_panel_C_On_Target_Selected__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
