// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_FullscreenContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_FullscreenContainer.w_FullscreenContainer_C.Get_Background_Upper_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_FullscreenContainer_C::Get_Background_Upper_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Get_Background_Upper_ColorAndOpacity_1");

	Uw_FullscreenContainer_C_Get_Background_Upper_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.Get_Tooltip_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_FullscreenContainer_C::Get_Tooltip_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Get_Tooltip_Visibility");

	Uw_FullscreenContainer_C_Get_Tooltip_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.SetWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Opaque                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Left_Button                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right_Button                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Vignette                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_FullscreenContainer_C::SetWidgetVisibility(bool Opaque, bool Left_Button, bool Right_Button, bool Vignette)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.SetWidgetVisibility");

	Uw_FullscreenContainer_C_SetWidgetVisibility_Params params;
	params.Opaque = Opaque;
	params.Left_Button = Left_Button;
	params.Right_Button = Right_Button;
	params.Vignette = Vignette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.Get_GamePadButton_img_L_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_FullscreenContainer_C::Get_GamePadButton_img_L_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Get_GamePadButton_img_L_Brush_1");

	Uw_FullscreenContainer_C_Get_GamePadButton_img_L_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.Get_Header_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_FullscreenContainer_C::Get_Header_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Get_Header_Visibility");

	Uw_FullscreenContainer_C_Get_Header_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.GetVisibility_UsingGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_FullscreenContainer_C::GetVisibility_UsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.GetVisibility_UsingGamepad");

	Uw_FullscreenContainer_C_GetVisibility_UsingGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_FullscreenContainer_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Refresh");

	Uw_FullscreenContainer_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.OnLoaded_A058EA6248D678A919D5DF9104AF58E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_FullscreenContainer_C::OnLoaded_A058EA6248D678A919D5DF9104AF58E0(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.OnLoaded_A058EA6248D678A919D5DF9104AF58E0");

	Uw_FullscreenContainer_C_OnLoaded_A058EA6248D678A919D5DF9104AF58E0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.OnLoaded_A058EA6248D678A919D5DF9164422D2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_FullscreenContainer_C::OnLoaded_A058EA6248D678A919D5DF9164422D2F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.OnLoaded_A058EA6248D678A919D5DF9164422D2F");

	Uw_FullscreenContainer_C_OnLoaded_A058EA6248D678A919D5DF9164422D2F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_FullscreenContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Construct");

	Uw_FullscreenContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_FullscreenContainer_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.OnSynchronizeProperties");

	Uw_FullscreenContainer_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_FullscreenContainer_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_FullscreenContainer_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_FullscreenContainer_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Uw_FullscreenContainer_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_FullscreenContainer_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.Input Swap");

	Uw_FullscreenContainer_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.SetupButtonArt
// (BlueprintCallable, BlueprintEvent)

void Uw_FullscreenContainer_C::SetupButtonArt()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.SetupButtonArt");

	Uw_FullscreenContainer_C_SetupButtonArt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.ExecuteUbergraph_w_FullscreenContainer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_FullscreenContainer_C::ExecuteUbergraph_w_FullscreenContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.ExecuteUbergraph_w_FullscreenContainer");

	Uw_FullscreenContainer_C_ExecuteUbergraph_w_FullscreenContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.On Next__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_FullscreenContainer_C::On_Next__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.On Next__DelegateSignature");

	Uw_FullscreenContainer_C_On_Next__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_FullscreenContainer.w_FullscreenContainer_C.On Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_FullscreenContainer_C::On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FullscreenContainer.w_FullscreenContainer_C.On Back__DelegateSignature");

	Uw_FullscreenContainer_C_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
