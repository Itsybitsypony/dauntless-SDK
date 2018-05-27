// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_skinpicksquare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Hide Hover
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_skinpicksquare_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Hide Hover");

	Ubpw_skinpicksquare_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Show Hover
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_skinpicksquare_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Show Hover");

	Ubpw_skinpicksquare_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_skinpicksquare_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnFocusReceived");

	Ubpw_skinpicksquare_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Get Dye Info Row Name
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Row_Name                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_skinpicksquare_C::Get_Dye_Info_Row_Name(struct FName* Row_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Get Dye Info Row Name");

	Ubpw_skinpicksquare_C_Get_Dye_Info_Row_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Row_Name != nullptr)
		*Row_Name = params.Row_Name;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Get Button Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Button_Color                   (Parm, OutParm, IsPlainOldData)

void Ubpw_skinpicksquare_C::Get_Button_Color(struct FLinearColor* Button_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Get Button Color");

	Ubpw_skinpicksquare_C_Get_Button_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Color != nullptr)
		*Button_Color = params.Button_Color;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnLoaded_AEF31BCC491E10D4B44BBD8389FC88FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_skinpicksquare_C::OnLoaded_AEF31BCC491E10D4B44BBD8389FC88FD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnLoaded_AEF31BCC491E10D4B44BBD8389FC88FD");

	Ubpw_skinpicksquare_C_OnLoaded_AEF31BCC491E10D4B44BBD8389FC88FD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_skinpicksquare_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Construct");

	Ubpw_skinpicksquare_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_skinpicksquare_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Tick");

	Ubpw_skinpicksquare_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_skinpicksquare_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature");

	Ubpw_skinpicksquare_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Select
// (BlueprintCallable, BlueprintEvent)

void Ubpw_skinpicksquare_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.Select");

	Ubpw_skinpicksquare_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_skinpicksquare_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnFocusLost");

	Ubpw_skinpicksquare_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.HideSelector
// (BlueprintCallable, BlueprintEvent)

void Ubpw_skinpicksquare_C::HideSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.HideSelector");

	Ubpw_skinpicksquare_C_HideSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.ShowSelector
// (BlueprintCallable, BlueprintEvent)

void Ubpw_skinpicksquare_C::ShowSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.ShowSelector");

	Ubpw_skinpicksquare_C_ShowSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.ExecuteUbergraph_bpw_skinpicksquare
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_skinpicksquare_C::ExecuteUbergraph_bpw_skinpicksquare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.ExecuteUbergraph_bpw_skinpicksquare");

	Ubpw_skinpicksquare_C_ExecuteUbergraph_bpw_skinpicksquare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_skinpicksquare.bpw_skinpicksquare_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_skinpicksquare_C*   Color_Picker_Reference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectedSwatch                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_skinpicksquare_C::ButtonPressed__DelegateSignature(class Ubpw_skinpicksquare_C* Color_Picker_Reference, int SelectedSwatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_skinpicksquare.bpw_skinpicksquare_C.ButtonPressed__DelegateSignature");

	Ubpw_skinpicksquare_C_ButtonPressed__DelegateSignature_Params params;
	params.Color_Picker_Reference = Color_Picker_Reference;
	params.SelectedSwatch = SelectedSwatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
