#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_AUDIO_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.ApplyState
struct UOptions_Menu_AUDIO_bpw_C_ApplyState_Params
{
	class UArchonOptionUserWidget*                     RootMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.UpdateUI
struct UOptions_Menu_AUDIO_bpw_C_UpdateUI_Params
{
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.HasStateChanged
struct UOptions_Menu_AUDIO_bpw_C_HasStateChanged_Params
{
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.RestoreState
struct UOptions_Menu_AUDIO_bpw_C_RestoreState_Params
{
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.SaveState
struct UOptions_Menu_AUDIO_bpw_C_SaveState_Params
{
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.OnKeyDown
struct UOptions_Menu_AUDIO_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.Gamepad_Cancel
struct UOptions_Menu_AUDIO_bpw_C_Gamepad_Cancel_Params
{
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Slider_bpw_K2Node_ComponentBoundEvent_2_FocusReceived__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Slider_bpw_K2Node_ComponentBoundEvent_2_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Slider_bpw_0_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Slider_bpw_0_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Slider_bpw_1_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Slider_bpw_1_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Toggle_bpw_K2Node_ComponentBoundEvent_5_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Toggle_bpw_K2Node_ComponentBoundEvent_5_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Toggle_bpw_0_K2Node_ComponentBoundEvent_6_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Toggle_bpw_0_K2Node_ComponentBoundEvent_6_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_969_ButtonBack__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_969_ButtonBack__DelegateSignature_Params
{
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Slider_bpw_K2Node_ComponentBoundEvent_41_SliderValueChanged__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Slider_bpw_K2Node_ComponentBoundEvent_41_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Slider_bpw_0_K2Node_ComponentBoundEvent_75_SliderValueChanged__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Slider_bpw_0_K2Node_ComponentBoundEvent_75_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_Entry_Slider_bpw_1_K2Node_ComponentBoundEvent_88_SliderValueChanged__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_Entry_Slider_bpw_1_K2Node_ComponentBoundEvent_88_SliderValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_DynamicRange_Toggle_bpw_K2Node_ComponentBoundEvent_849_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_DynamicRange_Toggle_bpw_K2Node_ComponentBoundEvent_849_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BndEvt__w_Options_HeadphoneMode_Toggle_bpw_0_K2Node_ComponentBoundEvent_861_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BndEvt__w_Options_HeadphoneMode_Toggle_bpw_0_K2Node_ComponentBoundEvent_861_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.ExecuteUbergraph_Options_Menu_AUDIO_bpw
struct UOptions_Menu_AUDIO_bpw_C_ExecuteUbergraph_Options_Menu_AUDIO_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C.BacktoRoot__DelegateSignature
struct UOptions_Menu_AUDIO_bpw_C_BacktoRoot__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
