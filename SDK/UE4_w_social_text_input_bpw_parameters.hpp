#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_text_input_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.MinimizeFocus
struct Uw_social_text_input_bpw_C_MinimizeFocus_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.GetText
struct Uw_social_text_input_bpw_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.SetText
struct Uw_social_text_input_bpw_C_SetText_Params
{
	struct FText                                       In_Text;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnKeyDown
struct Uw_social_text_input_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusReceived
struct Uw_social_text_input_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_56_OnEditableTextBoxChangedEvent__DelegateSignature
struct Uw_social_text_input_bpw_C_BndEvt__SearchText_K2Node_ComponentBoundEvent_56_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_67_OnEditableTextBoxCommittedEvent__DelegateSignature
struct Uw_social_text_input_bpw_C_BndEvt__SearchText_K2Node_ComponentBoundEvent_67_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct Uw_social_text_input_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.Tick
struct Uw_social_text_input_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.Construct
struct Uw_social_text_input_bpw_C_Construct_Params
{
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnSynchronizeProperties
struct Uw_social_text_input_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.ExecuteUbergraph_w_social_text_input_bpw
struct Uw_social_text_input_bpw_C_ExecuteUbergraph_w_social_text_input_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnTextCommitted__DelegateSignature
struct Uw_social_text_input_bpw_C_OnTextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           Commit_Method;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnTextChanged__DelegateSignature
struct Uw_social_text_input_bpw_C_OnTextChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusTextLost__DelegateSignature
struct Uw_social_text_input_bpw_C_OnFocusTextLost__DelegateSignature_Params
{
};

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusText__DelegateSignature
struct Uw_social_text_input_bpw_C_OnFocusText__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
