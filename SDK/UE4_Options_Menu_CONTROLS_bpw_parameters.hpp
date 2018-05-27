#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_CONTROLS_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.UpdateUI
struct UOptions_Menu_CONTROLS_bpw_C_UpdateUI_Params
{
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.ApplyState
struct UOptions_Menu_CONTROLS_bpw_C_ApplyState_Params
{
	class UArchonOptionUserWidget*                     RootMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.RestoreState
struct UOptions_Menu_CONTROLS_bpw_C_RestoreState_Params
{
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.SaveState
struct UOptions_Menu_CONTROLS_bpw_C_SaveState_Params
{
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.HasStateChanged
struct UOptions_Menu_CONTROLS_bpw_C_HasStateChanged_Params
{
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.OnKeyDown
struct UOptions_Menu_CONTROLS_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__InvertYAxis-Gamepad_K2Node_ComponentBoundEvent_46_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__InvertYAxis_Gamepad_K2Node_ComponentBoundEvent_46_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__InvertxAxis-Gamepad_K2Node_ComponentBoundEvent_57_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__InvertxAxis_Gamepad_K2Node_ComponentBoundEvent_57_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__Mouse-InvertYAxis_K2Node_ComponentBoundEvent_64_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__Mouse_InvertYAxis_K2Node_ComponentBoundEvent_64_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__Mouse-InvertXAxis_K2Node_ComponentBoundEvent_68_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__Mouse_InvertXAxis_K2Node_ComponentBoundEvent_68_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_188_FocusReceived__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_188_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_248_SliderValueChanged__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_248_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.Gamepad Cancel
struct UOptions_Menu_CONTROLS_bpw_C_Gamepad_Cancel_Params
{
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__Gamepad_InvertYAxis_K2Node_ComponentBoundEvent_55_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__Gamepad_InvertYAxis_K2Node_ComponentBoundEvent_55_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__Gamepad_InvertXAxis_K2Node_ComponentBoundEvent_63_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__Gamepad_InvertXAxis_K2Node_ComponentBoundEvent_63_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__Mouse_InvertYAxis_K2Node_ComponentBoundEvent_72_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__Mouse_InvertYAxis_K2Node_ComponentBoundEvent_72_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BndEvt__Mouse_InvertXAxis_K2Node_ComponentBoundEvent_82_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BndEvt__Mouse_InvertXAxis_K2Node_ComponentBoundEvent_82_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.ExecuteUbergraph_Options_Menu_CONTROLS_bpw
struct UOptions_Menu_CONTROLS_bpw_C_ExecuteUbergraph_Options_Menu_CONTROLS_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C.BacktoRoot__DelegateSignature
struct UOptions_Menu_CONTROLS_bpw_C_BacktoRoot__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
