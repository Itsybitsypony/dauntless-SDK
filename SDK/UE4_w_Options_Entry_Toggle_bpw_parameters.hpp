#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Options_Entry_Toggle_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.RefreshButton
struct Uw_Options_Entry_Toggle_bpw_C_RefreshButton_Params
{
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.GetVisibility_1
struct Uw_Options_Entry_Toggle_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.OnFocusReceived
struct Uw_Options_Entry_Toggle_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.SetTextButton
struct Uw_Options_Entry_Toggle_bpw_C_SetTextButton_Params
{
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.SetTextLabel
struct Uw_Options_Entry_Toggle_bpw_C_SetTextLabel_Params
{
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.UI_SetTextLabel
struct Uw_Options_Entry_Toggle_bpw_C_UI_SetTextLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.SetToggleState
struct Uw_Options_Entry_Toggle_bpw_C_SetToggleState_Params
{
	ECheckBoxState                                     InCheckedState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.OnSynchronizeProperties
struct Uw_Options_Entry_Toggle_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.Construct
struct Uw_Options_Entry_Toggle_bpw_C_Construct_Params
{
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.ToggleState
struct Uw_Options_Entry_Toggle_bpw_C_ToggleState_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.ExecuteUbergraph_w_Options_Entry_Toggle_bpw
struct Uw_Options_Entry_Toggle_bpw_C_ExecuteUbergraph_w_Options_Entry_Toggle_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.FocusReceived_Tooltip__DelegateSignature
struct Uw_Options_Entry_Toggle_bpw_C_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Options_Entry_Toggle_bpw.w_Options_Entry_Toggle_bpw_C.OptionToggleStateChange__DelegateSignature
struct Uw_Options_Entry_Toggle_bpw_C_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
