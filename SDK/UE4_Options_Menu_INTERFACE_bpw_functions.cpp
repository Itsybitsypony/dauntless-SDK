// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_INTERFACE_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.ApplyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonOptionUserWidget* RootMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::ApplyState(class UArchonOptionUserWidget* RootMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.ApplyState");

	UOptions_Menu_INTERFACE_bpw_C_ApplyState_Params params;
	params.RootMenu = RootMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.HasStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasChanged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::HasStateChanged(bool* HasChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.HasStateChanged");

	UOptions_Menu_INTERFACE_bpw_C_HasStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasChanged != nullptr)
		*HasChanged = params.HasChanged;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.RestoreState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_INTERFACE_bpw_C::RestoreState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.RestoreState");

	UOptions_Menu_INTERFACE_bpw_C_RestoreState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.SaveState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_INTERFACE_bpw_C::SaveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.SaveState");

	UOptions_Menu_INTERFACE_bpw_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_INTERFACE_bpw_C::UpdateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.UpdateUI");

	UOptions_Menu_INTERFACE_bpw_C_UpdateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptions_Menu_INTERFACE_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.OnKeyDown");

	UOptions_Menu_INTERFACE_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.GamepadCancel
// (BlueprintCallable, BlueprintEvent)

void UOptions_Menu_INTERFACE_bpw_C::GamepadCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.GamepadCancel");

	UOptions_Menu_INTERFACE_bpw_C_GamepadCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECheckBoxState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature(ECheckBoxState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            PickerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature(int PickerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature_Params params;
	params.PickerValue = PickerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.ExecuteUbergraph_Options_Menu_INTERFACE_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Menu_INTERFACE_bpw_C::ExecuteUbergraph_Options_Menu_INTERFACE_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.ExecuteUbergraph_Options_Menu_INTERFACE_bpw");

	UOptions_Menu_INTERFACE_bpw_C_ExecuteUbergraph_Options_Menu_INTERFACE_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BacktoRoot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions_Menu_INTERFACE_bpw_C::BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BacktoRoot__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.UpdateTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions_Menu_INTERFACE_bpw_C::UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.UpdateTooltip__DelegateSignature");

	UOptions_Menu_INTERFACE_bpw_C_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
