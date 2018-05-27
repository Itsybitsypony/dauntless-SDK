#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_rateMatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_button_rateMatch.w_button_rateMatch_C.Get_Button_Rate_ToolTipText_1
struct Uw_button_rateMatch_C_Get_Button_Rate_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_rateMatch.w_button_rateMatch_C.GetColorAndOpacity_1
struct Uw_button_rateMatch_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_rateMatch.w_button_rateMatch_C.Get_Glow_Visibility_1
struct Uw_button_rateMatch_C_Get_Glow_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_button_rateMatch.w_button_rateMatch_C.GetContentColorAndOpacity_1
struct Uw_button_rateMatch_C_GetContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_button_rateMatch.w_button_rateMatch_C.OnFocusReceived
struct Uw_button_rateMatch_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_rateMatch.w_button_rateMatch_C.GetText_1
struct Uw_button_rateMatch_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_rateMatch.w_button_rateMatch_C.Construct
struct Uw_button_rateMatch_C_Construct_Params
{
};

// Function w_button_rateMatch.w_button_rateMatch_C.Input Swap
struct Uw_button_rateMatch_C_Input_Swap_Params
{
	bool                                               Using_Gampad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_rateMatch.w_button_rateMatch_C.BndEvt__Button_Rate0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct Uw_button_rateMatch_C_BndEvt__Button_Rate0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_button_rateMatch.w_button_rateMatch_C.Show Hover
struct Uw_button_rateMatch_C_Show_Hover_Params
{
};

// Function w_button_rateMatch.w_button_rateMatch_C.Hide Hover
struct Uw_button_rateMatch_C_Hide_Hover_Params
{
};

// Function w_button_rateMatch.w_button_rateMatch_C.Tick
struct Uw_button_rateMatch_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_rateMatch.w_button_rateMatch_C.ExecuteUbergraph_w_button_rateMatch
struct Uw_button_rateMatch_C_ExecuteUbergraph_w_button_rateMatch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_rateMatch.w_button_rateMatch_C.RateButtonClicked__DelegateSignature
struct Uw_button_rateMatch_C_RateButtonClicked__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
