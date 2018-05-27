// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options__MenuRoot_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetActiveOptionsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::SetActiveOptionsPanel(class UWidget* PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetActiveOptionsPanel");

	UOptions__MenuRoot_bpw_C_SetActiveOptionsPanel_Params params;
	params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetActiveResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::SetActiveResolution(int Resolution, bool Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetActiveResolution");

	UOptions__MenuRoot_bpw_C_SetActiveResolution_Params params;
	params.Resolution = Resolution;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Keybinding
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Keybinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Keybinding");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Keybinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UOptions__MenuRoot_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GetDefaultFocusedWidget");

	UOptions__MenuRoot_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.RestoreActiveSettingsStageState
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::RestoreActiveSettingsStageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.RestoreActiveSettingsStageState");

	UOptions__MenuRoot_bpw_C_RestoreActiveSettingsStageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Online
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Online()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Online");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Online_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Controls
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Controls()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Controls");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Controls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Interface
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Interface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Interface");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Gameplay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Gameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Gameplay");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Gameplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Video
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Video()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Video");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Video_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Audio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UOptions__MenuRoot_bpw_C::Get_Cat_button_Colour_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Audio");

	UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_CatButton_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UOptions__MenuRoot_bpw_C::Get_CatButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_CatButton_Visibility");

	UOptions__MenuRoot_bpw_C_Get_CatButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadHelmVisibilitySettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadHelmVisibilitySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadHelmVisibilitySettings");

	UOptions__MenuRoot_bpw_C_LoadHelmVisibilitySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadOnlineSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadOnlineSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadOnlineSettings");

	UOptions__MenuRoot_bpw_C_LoadOnlineSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadControlsSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadControlsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadControlsSettings");

	UOptions__MenuRoot_bpw_C_LoadControlsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadInterfaceSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadInterfaceSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadInterfaceSettings");

	UOptions__MenuRoot_bpw_C_LoadInterfaceSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadGameplaySettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadGameplaySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadGameplaySettings");

	UOptions__MenuRoot_bpw_C_LoadGameplaySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadAudioSettings");

	UOptions__MenuRoot_bpw_C_LoadAudioSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::ApplyChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ApplyChanges");

	UOptions__MenuRoot_bpw_C_ApplyChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CreateBindings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::CreateBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CreateBindings");

	UOptions__MenuRoot_bpw_C_CreateBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadVideoSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::LoadVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadVideoSettings");

	UOptions__MenuRoot_bpw_C_LoadVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.PopulateVideoResolutions
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::PopulateVideoResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.PopulateVideoResolutions");

	UOptions__MenuRoot_bpw_C_PopulateVideoResolutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ConfirmationPopUpCategorySorting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::ConfirmationPopUpCategorySorting(TEnumAsByte<EMenu_Options_Stage> InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ConfirmationPopUpCategorySorting");

	UOptions__MenuRoot_bpw_C_ConfirmationPopUpCategorySorting_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ShowConfirmationPopup
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::ShowConfirmationPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ShowConfirmationPopup");

	UOptions__MenuRoot_bpw_C_ShowConfirmationPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptions__MenuRoot_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.OnKeyDown");

	UOptions__MenuRoot_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UOptions__MenuRoot_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GetVisibility_1");

	UOptions__MenuRoot_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetScrollBoxContentFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget*            WidgetFocus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::SetScrollBoxContentFocus(class UWidget* ActiveWidget, class UPanelWidget* WidgetFocus, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetScrollBoxContentFocus");

	UOptions__MenuRoot_bpw_C_SetScrollBoxContentFocus_Params params;
	params.ActiveWidget = ActiveWidget;
	params.WidgetFocus = WidgetFocus;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CategoryClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> OptionsStage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::CategoryClicked(TEnumAsByte<EMenu_Options_Stage> OptionsStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CategoryClicked");

	UOptions__MenuRoot_bpw_C_CategoryClicked_Params params;
	params.OptionsStage = OptionsStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SaveChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> OptionsStage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::SaveChanges(TEnumAsByte<EMenu_Options_Stage> OptionsStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SaveChanges");

	UOptions__MenuRoot_bpw_C_SaveChanges_Params params;
	params.OptionsStage = OptionsStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Construct");

	UOptions__MenuRoot_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetFocus
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetFocus");

	UOptions__MenuRoot_bpw_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Category_Focus_hoverStage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> OptionCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::Category_Focus_hoverStage(TEnumAsByte<EMenu_Options_Stage> OptionCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Category_Focus_hoverStage");

	UOptions__MenuRoot_bpw_C_Category_Focus_hoverStage_Params params;
	params.OptionCategory = OptionCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Set Active Options Content
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::Set_Active_Options_Content(TEnumAsByte<EMenu_Options_Stage> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Set Active Options Content");

	UOptions__MenuRoot_bpw_C_Set_Active_Options_Content_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1143_BacktoRoot__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1143_BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1143_BacktoRoot__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1143_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1597_UpdateTooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1597_UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1597_UpdateTooltip__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1597_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_1655_UpdateTooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_1655_UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_1655_UpdateTooltip__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_1655_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_1673_UpdateTooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_1673_UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_1673_UpdateTooltip__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_1673_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_1691_UpdateTooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_1691_UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_1691_UpdateTooltip__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_1691_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_1729_UpdateTooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_1729_UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_1729_UpdateTooltip__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_1729_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_1769_UpdateTooltip__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_1769_UpdateTooltip__DelegateSignature(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_1769_UpdateTooltip__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_1769_UpdateTooltip__DelegateSignature_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_2462_BackFrom_VideoOptions__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_2462_BackFrom_VideoOptions__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_2462_BackFrom_VideoOptions__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_2462_BackFrom_VideoOptions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_2483_BacktoRoot__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_2483_BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_2483_BacktoRoot__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_2483_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_2505_BacktoRoot__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_2505_BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_2505_BacktoRoot__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_2505_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_2528_BackToRoot__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_2528_BackToRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_2528_BackToRoot__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_2528_BackToRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_2552_BacktoRoot__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_2552_BacktoRoot__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_2552_BacktoRoot__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_2552_BacktoRoot__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_481_ButtonBack__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_481_ButtonBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_481_ButtonBack__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_481_ButtonBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GTFO");

	UOptions__MenuRoot_bpw_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GamepadBack
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::GamepadBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GamepadBack");

	UOptions__MenuRoot_bpw_C_GamepadBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ConfirmChanges_ViaPopup
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::ConfirmChanges_ViaPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ConfirmChanges_ViaPopup");

	UOptions__MenuRoot_bpw_C_ConfirmChanges_ViaPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CancelChanges
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::CancelChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CancelChanges");

	UOptions__MenuRoot_bpw_C_CancelChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.FullScreenModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::FullScreenModeChanged(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.FullScreenModeChanged");

	UOptions__MenuRoot_bpw_C_FullScreenModeChanged_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__TEMPBG_K2Node_ComponentBoundEvent_83_On Back__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__TEMPBG_K2Node_ComponentBoundEvent_83_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__TEMPBG_K2Node_ComponentBoundEvent_83_On Back__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__TEMPBG_K2Node_ComponentBoundEvent_83_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_617_ButtonApplyChanges__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_617_ButtonApplyChanges__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_617_ButtonApplyChanges__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_617_ButtonApplyChanges__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GamePadX
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::GamePadX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GamePadX");

	UOptions__MenuRoot_bpw_C_GamePadX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.HoverCat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> OptionCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::HoverCat(TEnumAsByte<EMenu_Options_Stage> OptionCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.HoverCat");

	UOptions__MenuRoot_bpw_C_HoverCat_Params params;
	params.OptionCategory = OptionCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__Cat_AUDIO_K2Node_ComponentBoundEvent_57_Option Cat Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::BndEvt__Cat_AUDIO_K2Node_ComponentBoundEvent_57_Option_Cat_Clicked__DelegateSignature(TEnumAsByte<EMenu_Options_Stage> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__Cat_AUDIO_K2Node_ComponentBoundEvent_57_Option Cat Clicked__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__Cat_AUDIO_K2Node_ComponentBoundEvent_57_Option_Cat_Clicked__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__Options_Menu_Keybinding_K2Node_ComponentBoundEvent_0_BackFrom_VideoOptions__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__Options_Menu_Keybinding_K2Node_ComponentBoundEvent_0_BackFrom_VideoOptions__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__Options_Menu_Keybinding_K2Node_ComponentBoundEvent_0_BackFrom_VideoOptions__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__Options_Menu_Keybinding_K2Node_ComponentBoundEvent_0_BackFrom_VideoOptions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_35_ButtonRESET__DelegateSignature
// (BlueprintEvent)

void UOptions__MenuRoot_bpw_C::BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_35_ButtonRESET__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_35_ButtonRESET__DelegateSignature");

	UOptions__MenuRoot_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_35_ButtonRESET__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ResetKeybindings
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::ResetKeybindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ResetKeybindings");

	UOptions__MenuRoot_bpw_C_ResetKeybindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.OnResetDefaultsHotkey
// (BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::OnResetDefaultsHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.OnResetDefaultsHotkey");

	UOptions__MenuRoot_bpw_C_OnResetDefaultsHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ExecuteUbergraph_Options__MenuRoot_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::ExecuteUbergraph_Options__MenuRoot_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ExecuteUbergraph_Options__MenuRoot_bpw");

	UOptions__MenuRoot_bpw_C_ExecuteUbergraph_Options__MenuRoot_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CloseOptionsMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions__MenuRoot_bpw_C::CloseOptionsMenu__DelegateSignature(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CloseOptionsMenu__DelegateSignature");

	UOptions__MenuRoot_bpw_C_CloseOptionsMenu__DelegateSignature_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.RemoveFromOldOptions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOptions__MenuRoot_bpw_C::RemoveFromOldOptions__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.RemoveFromOldOptions__DelegateSignature");

	UOptions__MenuRoot_bpw_C_RemoveFromOldOptions__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
