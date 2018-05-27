// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_MenuButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_MenuButton.w_MenuButton_C.Handle Button
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_MenuButton_C::Handle_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Handle Button");

	Uw_MenuButton_C_Handle_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_MenuButton_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.OnKeyDown");

	Uw_MenuButton_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_MenuButton.w_MenuButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_MenuButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.OnFocusReceived");

	Uw_MenuButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_MenuButton.w_MenuButton_C.Show Button Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Focused                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_MenuButton_C::Show_Button_Focus(bool Is_Focused)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Show Button Focus");

	Uw_MenuButton_C_Show_Button_Focus_Params params;
	params.Is_Focused = Is_Focused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.Setup Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_MenuButton_C::Setup_Button(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Setup Button");

	Uw_MenuButton_C_Setup_Button_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.Setup Button Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_MenuButton_C::Setup_Button_Parameters(const struct FText& Label, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Setup Button Parameters");

	Uw_MenuButton_C_Setup_Button_Parameters_Params params;
	params.Label = Label;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_MenuButton_C::BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature");

	Uw_MenuButton_C_BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_MenuButton_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.OnFocusLost");

	Uw_MenuButton_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_MenuButton_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.OnMouseEnter");

	Uw_MenuButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_MenuButton_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.OnMouseLeave");

	Uw_MenuButton_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_MenuButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.OnSynchronizeProperties");

	Uw_MenuButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_MenuButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Tick");

	Uw_MenuButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_MenuButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Construct");

	Uw_MenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.ExecuteUbergraph_w_MenuButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_MenuButton_C::ExecuteUbergraph_w_MenuButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.ExecuteUbergraph_w_MenuButton");

	Uw_MenuButton_C_ExecuteUbergraph_w_MenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_MenuButton.w_MenuButton_C.Menu Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_MenuButton_C::Menu_Button_Clicked__DelegateSignature(int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_MenuButton.w_MenuButton_C.Menu Button Clicked__DelegateSignature");

	Uw_MenuButton_C_Menu_Button_Clicked__DelegateSignature_Params params;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
