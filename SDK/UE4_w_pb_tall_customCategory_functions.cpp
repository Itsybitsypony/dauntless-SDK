// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_pb_tall_customCategory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.GetBG_OpacityifFocused
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_pb_tall_customCategory_C::GetBG_OpacityifFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.GetBG_OpacityifFocused");

	Uw_pb_tall_customCategory_C_GetBG_OpacityifFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Get_HotkeyLabel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_pb_tall_customCategory_C::Get_HotkeyLabel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Get_HotkeyLabel_Visibility_1");

	Uw_pb_tall_customCategory_C_Get_HotkeyLabel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_pb_tall_customCategory_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Refresh");

	Uw_pb_tall_customCategory_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.FocusVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_pb_tall_customCategory_C::FocusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.FocusVisibility");

	Uw_pb_tall_customCategory_C_FocusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.SetButton Hotkey Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Hotkey                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_pb_tall_customCategory_C::SetButton_Hotkey_Label(const struct FText& Hotkey)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.SetButton Hotkey Label");

	Uw_pb_tall_customCategory_C_SetButton_Hotkey_Label_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_pb_tall_customCategory_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Set Button Label");

	Uw_pb_tall_customCategory_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_pb_tall_customCategory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.OnFocusReceived");

	Uw_pb_tall_customCategory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.OnLoaded_A058EA6248D678A919D5DF91A661721C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_tall_customCategory_C::OnLoaded_A058EA6248D678A919D5DF91A661721C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.OnLoaded_A058EA6248D678A919D5DF91A661721C");

	Uw_pb_tall_customCategory_C_OnLoaded_A058EA6248D678A919D5DF91A661721C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_pb_tall_customCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Construct");

	Uw_pb_tall_customCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_tall_customCategory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Tick");

	Uw_pb_tall_customCategory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pb_tall_customCategory_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_pb_tall_customCategory_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_tall_customCategory_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Show Hover");

	Uw_pb_tall_customCategory_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_tall_customCategory_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Hide Hover");

	Uw_pb_tall_customCategory_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_pb_tall_customCategory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.OnSynchronizeProperties");

	Uw_pb_tall_customCategory_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_pb_tall_customCategory_C::BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature");

	Uw_pb_tall_customCategory_C_BndEvt__Button_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Focused
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_tall_customCategory_C::Focused()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Focused");

	Uw_pb_tall_customCategory_C_Focused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.LoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_tall_customCategory_C::LoadTexture(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.LoadTexture");

	Uw_pb_tall_customCategory_C_LoadTexture_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_tall_customCategory_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Input Swap");

	Uw_pb_tall_customCategory_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.SetButtonBGShape
// (BlueprintCallable, BlueprintEvent)

void Uw_pb_tall_customCategory_C::SetButtonBGShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.SetButtonBGShape");

	Uw_pb_tall_customCategory_C_SetButtonBGShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.ExecuteUbergraph_w_pb_tall_customCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_pb_tall_customCategory_C::ExecuteUbergraph_w_pb_tall_customCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.ExecuteUbergraph_w_pb_tall_customCategory");

	Uw_pb_tall_customCategory_C_ExecuteUbergraph_w_pb_tall_customCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_pb_tall_customCategory_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.UpdateTooltip__DelegateSignature");

	Uw_pb_tall_customCategory_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_pb_tall_customCategory_C::Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_pb_tall_customCategory.w_pb_tall_customCategory_C.Button Clicked__DelegateSignature");

	Uw_pb_tall_customCategory_C_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
