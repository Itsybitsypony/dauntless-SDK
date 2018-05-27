#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_VIDEO_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.SetQualityLevel
struct UOptions_Menu_VIDEO_bpw_C_SetQualityLevel_Params
{
	int                                                NewQualityLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSubOption;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateQualityLevel
struct UOptions_Menu_VIDEO_bpw_C_UpdateQualityLevel_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.AreSettingsCustom
struct UOptions_Menu_VIDEO_bpw_C_AreSettingsCustom_Params
{
	bool                                               Custom;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.EnsureResolutionIsValid
struct UOptions_Menu_VIDEO_bpw_C_EnsureResolutionIsValid_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateChildWidgetsforResolution
struct UOptions_Menu_VIDEO_bpw_C_UpdateChildWidgetsforResolution_Params
{
	int                                                fullscreen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ApplyState
struct UOptions_Menu_VIDEO_bpw_C_ApplyState_Params
{
	class UArchonOptionUserWidget*                     RootMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.HasStateChanged
struct UOptions_Menu_VIDEO_bpw_C_HasStateChanged_Params
{
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateUI
struct UOptions_Menu_VIDEO_bpw_C_UpdateUI_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.OnKeyDown
struct UOptions_Menu_VIDEO_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Get_ResolutionScale_Visibility
struct UOptions_Menu_VIDEO_bpw_C_Get_ResolutionScale_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Get_ResolutionPicker_Visibility
struct UOptions_Menu_VIDEO_bpw_C_Get_ResolutionPicker_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ResetToDefault
struct UOptions_Menu_VIDEO_bpw_C_ResetToDefault_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.SaveState
struct UOptions_Menu_VIDEO_bpw_C_SaveState_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.RestoreState
struct UOptions_Menu_VIDEO_bpw_C_RestoreState_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_75_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_75_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_123_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_123_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_131_SliderValueChanged__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_131_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_442_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__VSYNC_K2Node_ComponentBoundEvent_442_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Gamepad Cancel
struct UOptions_Menu_VIDEO_bpw_C_Gamepad_Cancel_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_25_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_25_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_244_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_244_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_110_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__FullscreenMode_K2Node_ComponentBoundEvent_110_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_122_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_122_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_138_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__ResolutionPicker_K2Node_ComponentBoundEvent_138_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_152_SliderValueChanged__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__BrightnessScale_K2Node_ComponentBoundEvent_152_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_167_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__ADV_GraphicQuality_K2Node_ComponentBoundEvent_167_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_183_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_183_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_203_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_ViewDistance_K2Node_ComponentBoundEvent_203_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_AA_K2Node_ComponentBoundEvent_221_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_AA_K2Node_ComponentBoundEvent_221_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_AA_K2Node_ComponentBoundEvent_243_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_AA_K2Node_ComponentBoundEvent_243_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_263_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_263_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_287_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_PostProcess_K2Node_ComponentBoundEvent_287_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Textures_K2Node_ComponentBoundEvent_309_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Textures_K2Node_ComponentBoundEvent_309_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Textures_K2Node_ComponentBoundEvent_335_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Textures_K2Node_ComponentBoundEvent_335_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Effects_K2Node_ComponentBoundEvent_359_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Effects_K2Node_ComponentBoundEvent_359_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Effects_K2Node_ComponentBoundEvent_387_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Effects_K2Node_ComponentBoundEvent_387_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.Construct
struct UOptions_Menu_VIDEO_bpw_C_Construct_Params
{
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_292_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_292_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_319_PickerUpdated__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__adv_Shadows_K2Node_ComponentBoundEvent_319_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_391_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_419_FocusReceived__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_419_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.ExecuteUbergraph_Options_Menu_VIDEO_bpw
struct UOptions_Menu_VIDEO_bpw_C_ExecuteUbergraph_Options_Menu_VIDEO_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.FullScreenModeChanged__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_FullScreenModeChanged__DelegateSignature_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_VIDEO_bpw.Options_Menu_VIDEO_bpw_C.BackFrom_VideoOptions__DelegateSignature
struct UOptions_Menu_VIDEO_bpw_C_BackFrom_VideoOptions__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
