// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_TitleEntry_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_Button_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_TitleEntry_Button_C::Get_Button_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_Button_ToolTipWidget_1");

	Uw_TitleEntry_Button_C_Get_Button_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_TitleEntry_Button_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnKeyDown");

	Uw_TitleEntry_Button_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_ButtonLabel_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Uw_TitleEntry_Button_C::Get_ButtonLabel_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_ButtonLabel_ColorAndOpacity_1");

	Uw_TitleEntry_Button_C_Get_ButtonLabel_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.GetVisibility_IsEquipShowCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_TitleEntry_Button_C::GetVisibility_IsEquipShowCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.GetVisibility_IsEquipShowCheck");

	Uw_TitleEntry_Button_C_GetVisibility_IsEquipShowCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_BGImage_OwnedColour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_TitleEntry_Button_C::Get_BGImage_OwnedColour()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_BGImage_OwnedColour");

	Uw_TitleEntry_Button_C_Get_BGImage_OwnedColour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.GetColorAndOpacity_BGImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_TitleEntry_Button_C::GetColorAndOpacity_BGImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.GetColorAndOpacity_BGImage");

	Uw_TitleEntry_Button_C_GetColorAndOpacity_BGImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_TitleEntry_Button_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Set Button Label");

	Uw_TitleEntry_Button_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_TitleEntry_Button_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnFocusReceived");

	Uw_TitleEntry_Button_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TitleEntry_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Tick");

	Uw_TitleEntry_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_TitleEntry_Button_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_TitleEntry_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_TitleEntry_Button_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Show Hover");

	Uw_TitleEntry_Button_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_TitleEntry_Button_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Hide Hover");

	Uw_TitleEntry_Button_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_TitleEntry_Button_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnSynchronizeProperties");

	Uw_TitleEntry_Button_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_TitleEntry_Button_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	Uw_TitleEntry_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Gamepad X  Pressed
// (BlueprintCallable, BlueprintEvent)

void Uw_TitleEntry_Button_C::Gamepad_X__Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.Gamepad X  Pressed");

	Uw_TitleEntry_Button_C_Gamepad_X__Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.ExecuteUbergraph_w_TitleEntry_Button
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_TitleEntry_Button_C::ExecuteUbergraph_w_TitleEntry_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.ExecuteUbergraph_w_TitleEntry_Button");

	Uw_TitleEntry_Button_C_ExecuteUbergraph_w_TitleEntry_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.EquipButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_TitleEntry_Button_C::EquipButtonClicked__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.EquipButtonClicked__DelegateSignature");

	Uw_TitleEntry_Button_C_EquipButtonClicked__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_TitleEntry_Button.w_TitleEntry_Button_C.EmoteButton Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_TitleEntry_Button_C::EmoteButton_Clicked__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_TitleEntry_Button.w_TitleEntry_Button_C.EmoteButton Clicked__DelegateSignature");

	Uw_TitleEntry_Button_C_EmoteButton_Clicked__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
