// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_VIDEO_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.SetQualityLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewQualityLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSubOption                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::SetQualityLevel(int NewQualityLevel, bool IsSubOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.SetQualityLevel");

	UOptions_Menu_VIDEO_bpw_C_SetQualityLevel_Params params;
	params.NewQualityLevel = NewQualityLevel;
	params.IsSubOption = IsSubOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateQualityLevel
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::UpdateQualityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateQualityLevel");

	UOptions_Menu_VIDEO_bpw_C_UpdateQualityLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.AreSettingsCustom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Custom                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::AreSettingsCustom(bool* Custom)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.AreSettingsCustom");

	UOptions_Menu_VIDEO_bpw_C_AreSettingsCustom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Custom != nullptr)
		*Custom = params.Custom;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.EnsureResolutionIsValid
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::EnsureResolutionIsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.EnsureResolutionIsValid");

	UOptions_Menu_VIDEO_bpw_C_EnsureResolutionIsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateChildWidgetsforResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            fullscreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::UpdateChildWidgetsforResolution(int fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateChildWidgetsforResolution");

	UOptions_Menu_VIDEO_bpw_C_UpdateChildWidgetsforResolution_Params params;
	params.fullscreen = fullscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ApplyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonOptionUserWidget* RootMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUpdate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::ApplyState(class UArchonOptionUserWidget* RootMenu, bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ApplyState");

	UOptions_Menu_VIDEO_bpw_C_ApplyState_Params params;
	params.RootMenu = RootMenu;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.HasStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasChanged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::HasStateChanged(bool* HasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.HasStateChanged");

	UOptions_Menu_VIDEO_bpw_C_HasStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasChanged != nullptr)
		*HasChanged = params.HasChanged;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::UpdateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateUI");

	UOptions_Menu_VIDEO_bpw_C_UpdateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptions_Menu_VIDEO_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.OnKeyDown");

	UOptions_Menu_VIDEO_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Get_ResolutionScale_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UOptions_Menu_VIDEO_bpw_C::Get_ResolutionScale_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Get_ResolutionScale_Visibility");

	UOptions_Menu_VIDEO_bpw_C_Get_ResolutionScale_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Get_ResolutionPicker_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UOptions_Menu_VIDEO_bpw_C::Get_ResolutionPicker_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Get_ResolutionPicker_Visibility");

	UOptions_Menu_VIDEO_bpw_C_Get_ResolutionPicker_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ResetToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::ResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ResetToDefault");

	UOptions_Menu_VIDEO_bpw_C_ResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.SaveState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::SaveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.SaveState");

	UOptions_Menu_VIDEO_bpw_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.RestoreState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::RestoreState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.RestoreState");

	UOptions_Menu_VIDEO_bpw_C_RestoreState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_75_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_75_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_75_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_75_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_123_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_123_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_123_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_123_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_131_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_131_SliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_131_SliderValueChanged__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_131_SliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_442_FocusReceived_Tooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__VSYNC_K2Node_ComponentBoundEvent_442_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_442_FocusReceived_Tooltip__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__VSYNC_K2Node_ComponentBoundEvent_442_FocusReceived_Tooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Gamepad Cancel
// (BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::Gamepad_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Gamepad Cancel");

	UOptions_Menu_VIDEO_bpw_C_Gamepad_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECheckBoxState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature(ECheckBoxState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_25_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_25_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_25_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_25_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_244_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_244_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_244_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_244_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_110_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_110_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_110_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_110_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_122_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_122_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_122_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_122_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_138_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_138_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_138_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_138_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_152_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_152_SliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_152_SliderValueChanged__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_152_SliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_167_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_167_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_167_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_167_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_183_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_183_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_183_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_183_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_203_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_203_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_203_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_203_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_AA_K2Node_ComponentBoundEvent_221_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_AA_K2Node_ComponentBoundEvent_221_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_AA_K2Node_ComponentBoundEvent_221_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_AA_K2Node_ComponentBoundEvent_221_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_AA_K2Node_ComponentBoundEvent_243_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_AA_K2Node_ComponentBoundEvent_243_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_AA_K2Node_ComponentBoundEvent_243_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_AA_K2Node_ComponentBoundEvent_243_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_263_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_263_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_263_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_263_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_287_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_287_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_287_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_287_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Textures_K2Node_ComponentBoundEvent_309_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_Textures_K2Node_ComponentBoundEvent_309_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Textures_K2Node_ComponentBoundEvent_309_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Textures_K2Node_ComponentBoundEvent_309_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Textures_K2Node_ComponentBoundEvent_335_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_Textures_K2Node_ComponentBoundEvent_335_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Textures_K2Node_ComponentBoundEvent_335_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Textures_K2Node_ComponentBoundEvent_335_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Effects_K2Node_ComponentBoundEvent_359_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_Effects_K2Node_ComponentBoundEvent_359_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Effects_K2Node_ComponentBoundEvent_359_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Effects_K2Node_ComponentBoundEvent_359_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Effects_K2Node_ComponentBoundEvent_387_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_Effects_K2Node_ComponentBoundEvent_387_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Effects_K2Node_ComponentBoundEvent_387_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Effects_K2Node_ComponentBoundEvent_387_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Construct");

	UOptions_Menu_VIDEO_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_292_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_292_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_292_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_292_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_319_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_319_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_319_PickerUpdated__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_319_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_419_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_419_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_419_FocusReceived__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_419_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ExecuteUbergraph_Options_Menu_VIDEO_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::ExecuteUbergraph_Options_Menu_VIDEO_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ExecuteUbergraph_Options_Menu_VIDEO_bpw");

	UOptions_Menu_VIDEO_bpw_C_ExecuteUbergraph_Options_Menu_VIDEO_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.FullScreenModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_VIDEO_bpw_C::FullScreenModeChanged__DelegateSignature(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.FullScreenModeChanged__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_FullScreenModeChanged__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_VIDEO_bpw_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateTooltip__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BackFrom_VideoOptions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_VIDEO_bpw_C::BackFrom_VideoOptions__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BackFrom_VideoOptions__DelegateSignature");

	UOptions_Menu_VIDEO_bpw_C_BackFrom_VideoOptions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
