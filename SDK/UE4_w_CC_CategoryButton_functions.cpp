// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_CategoryButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_CategoryButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnFocusReceived");

	Uw_CC_CategoryButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_CategoryButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Construct");

	Uw_CC_CategoryButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_CategoryButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnSynchronizeProperties");

	Uw_CC_CategoryButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoryButton_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Refresh");

	Uw_CC_CategoryButton_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_CC_CategoryButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Uw_CC_CategoryButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Disable
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoryButton_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Disable");

	Uw_CC_CategoryButton_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Enable
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoryButton_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Enable");

	Uw_CC_CategoryButton_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoryButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Tick");

	Uw_CC_CategoryButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoryButton_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Show Hover");

	Uw_CC_CategoryButton_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoryButton_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Hide Hover");

	Uw_CC_CategoryButton_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Execute Click
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoryButton_C::Execute_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.Execute Click");

	Uw_CC_CategoryButton_C_Execute_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.ExecuteUbergraph_w_CC_CategoryButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoryButton_C::ExecuteUbergraph_w_CC_CategoryButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.ExecuteUbergraph_w_CC_CategoryButton");

	Uw_CC_CategoryButton_C_ExecuteUbergraph_w_CC_CategoryButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoryButton_C::OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnClicked__DelegateSignature");

	Uw_CC_CategoryButton_C_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
