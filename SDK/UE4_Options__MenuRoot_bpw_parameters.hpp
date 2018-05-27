#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options__MenuRoot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetActiveOptionsPanel
struct UOptions__MenuRoot_bpw_C_SetActiveOptionsPanel_Params
{
	class UWidget*                                     PanelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetActiveResolution
struct UOptions__MenuRoot_bpw_C_SetActiveResolution_Params
{
	int                                                Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Keybinding
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Keybinding_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GetDefaultFocusedWidget
struct UOptions__MenuRoot_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.RestoreActiveSettingsStageState
struct UOptions__MenuRoot_bpw_C_RestoreActiveSettingsStageState_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Online
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Online_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Controls
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Controls_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Interface
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Interface_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Gameplay
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Gameplay_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Video
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Video_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_Cat_button_Colour_Audio
struct UOptions__MenuRoot_bpw_C_Get_Cat_button_Colour_Audio_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Get_CatButton_Visibility
struct UOptions__MenuRoot_bpw_C_Get_CatButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadHelmVisibilitySettings
struct UOptions__MenuRoot_bpw_C_LoadHelmVisibilitySettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadOnlineSettings
struct UOptions__MenuRoot_bpw_C_LoadOnlineSettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadControlsSettings
struct UOptions__MenuRoot_bpw_C_LoadControlsSettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadInterfaceSettings
struct UOptions__MenuRoot_bpw_C_LoadInterfaceSettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadGameplaySettings
struct UOptions__MenuRoot_bpw_C_LoadGameplaySettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadAudioSettings
struct UOptions__MenuRoot_bpw_C_LoadAudioSettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ApplyChanges
struct UOptions__MenuRoot_bpw_C_ApplyChanges_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CreateBindings
struct UOptions__MenuRoot_bpw_C_CreateBindings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.LoadVideoSettings
struct UOptions__MenuRoot_bpw_C_LoadVideoSettings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.PopulateVideoResolutions
struct UOptions__MenuRoot_bpw_C_PopulateVideoResolutions_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ConfirmationPopUpCategorySorting
struct UOptions__MenuRoot_bpw_C_ConfirmationPopUpCategorySorting_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ShowConfirmationPopup
struct UOptions__MenuRoot_bpw_C_ShowConfirmationPopup_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.OnKeyDown
struct UOptions__MenuRoot_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GetVisibility_1
struct UOptions__MenuRoot_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetScrollBoxContentFocus
struct UOptions__MenuRoot_bpw_C_SetScrollBoxContentFocus_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPanelWidget*                                WidgetFocus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CategoryClicked
struct UOptions__MenuRoot_bpw_C_CategoryClicked_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   OptionsStage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SaveChanges
struct UOptions__MenuRoot_bpw_C_SaveChanges_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   OptionsStage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Construct
struct UOptions__MenuRoot_bpw_C_Construct_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.SetFocus
struct UOptions__MenuRoot_bpw_C_SetFocus_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Category_Focus_hoverStage
struct UOptions__MenuRoot_bpw_C_Category_Focus_hoverStage_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   OptionCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.Set Active Options Content
struct UOptions__MenuRoot_bpw_C_Set_Active_Options_Content_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1143_BacktoRoot__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1143_BacktoRoot__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1597_UpdateTooltip__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuAUDIO_K2Node_ComponentBoundEvent_1597_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_1655_UpdateTooltip__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_1655_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_1673_UpdateTooltip__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_1673_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_1691_UpdateTooltip__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_1691_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_1729_UpdateTooltip__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_1729_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_1769_UpdateTooltip__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_1769_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_2462_BackFrom_VideoOptions__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuVIDEO_K2Node_ComponentBoundEvent_2462_BackFrom_VideoOptions__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_2483_BacktoRoot__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuGAMEPLAY_K2Node_ComponentBoundEvent_2483_BacktoRoot__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_2505_BacktoRoot__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuCONTROLS_K2Node_ComponentBoundEvent_2505_BacktoRoot__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_2528_BackToRoot__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuINTERFACE_K2Node_ComponentBoundEvent_2528_BackToRoot__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_2552_BacktoRoot__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__OptionsMenuONLINE_K2Node_ComponentBoundEvent_2552_BacktoRoot__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_481_ButtonBack__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_481_ButtonBack__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GTFO
struct UOptions__MenuRoot_bpw_C_GTFO_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GamepadBack
struct UOptions__MenuRoot_bpw_C_GamepadBack_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ConfirmChanges_ViaPopup
struct UOptions__MenuRoot_bpw_C_ConfirmChanges_ViaPopup_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CancelChanges
struct UOptions__MenuRoot_bpw_C_CancelChanges_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.FullScreenModeChanged
struct UOptions__MenuRoot_bpw_C_FullScreenModeChanged_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__TEMPBG_K2Node_ComponentBoundEvent_83_On Back__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__TEMPBG_K2Node_ComponentBoundEvent_83_On_Back__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_617_ButtonApplyChanges__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_617_ButtonApplyChanges__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.GamePadX
struct UOptions__MenuRoot_bpw_C_GamePadX_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.HoverCat
struct UOptions__MenuRoot_bpw_C_HoverCat_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   OptionCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__Cat_AUDIO_K2Node_ComponentBoundEvent_57_Option Cat Clicked__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__Cat_AUDIO_K2Node_ComponentBoundEvent_57_Option_Cat_Clicked__DelegateSignature_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__Options_Menu_Keybinding_K2Node_ComponentBoundEvent_0_BackFrom_VideoOptions__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__Options_Menu_Keybinding_K2Node_ComponentBoundEvent_0_BackFrom_VideoOptions__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_35_ButtonRESET__DelegateSignature
struct UOptions__MenuRoot_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_35_ButtonRESET__DelegateSignature_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ResetKeybindings
struct UOptions__MenuRoot_bpw_C_ResetKeybindings_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.OnResetDefaultsHotkey
struct UOptions__MenuRoot_bpw_C_OnResetDefaultsHotkey_Params
{
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.ExecuteUbergraph_Options__MenuRoot_bpw
struct UOptions__MenuRoot_bpw_C_ExecuteUbergraph_Options__MenuRoot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.CloseOptionsMenu__DelegateSignature
struct UOptions__MenuRoot_bpw_C_CloseOptionsMenu__DelegateSignature_Params
{
	TEnumAsByte<Eui_character_screen_mode>             Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options__MenuRoot_bpw.Options__MenuRoot_bpw_C.RemoveFromOldOptions__DelegateSignature
struct UOptions__MenuRoot_bpw_C_RemoveFromOldOptions__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
