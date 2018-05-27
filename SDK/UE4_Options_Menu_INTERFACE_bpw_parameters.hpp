#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_INTERFACE_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.ApplyState
struct UOptions_Menu_INTERFACE_bpw_C_ApplyState_Params
{
	class UArchonOptionUserWidget*                     RootMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.HasStateChanged
struct UOptions_Menu_INTERFACE_bpw_C_HasStateChanged_Params
{
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.RestoreState
struct UOptions_Menu_INTERFACE_bpw_C_RestoreState_Params
{
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.SaveState
struct UOptions_Menu_INTERFACE_bpw_C_SaveState_Params
{
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.UpdateUI
struct UOptions_Menu_INTERFACE_bpw_C_UpdateUI_Params
{
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.OnKeyDown
struct UOptions_Menu_INTERFACE_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.GamepadCancel
struct UOptions_Menu_INTERFACE_bpw_C_GamepadCancel_Params
{
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.ExecuteUbergraph_Options_Menu_INTERFACE_bpw
struct UOptions_Menu_INTERFACE_bpw_C_ExecuteUbergraph_Options_Menu_INTERFACE_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.BacktoRoot__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_BacktoRoot__DelegateSignature_Params
{
};

// Function Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_INTERFACE_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
