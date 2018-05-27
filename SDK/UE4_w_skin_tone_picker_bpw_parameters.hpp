#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_skin_tone_picker_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Hide Hover Indicators
struct Uw_skin_tone_picker_bpw_C_Hide_Hover_Indicators_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Show Hover Indicators
struct Uw_skin_tone_picker_bpw_C_Show_Hover_Indicators_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnFocusReceived
struct Uw_skin_tone_picker_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnPreviewKeyDown
struct Uw_skin_tone_picker_bpw_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.IsInteractable
struct Uw_skin_tone_picker_bpw_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Get Selected Swatch
struct Uw_skin_tone_picker_bpw_C_Get_Selected_Swatch_Params
{
	class Ubpw_skinpicksquare_C*                       Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Highlight Selected Swatch
struct Uw_skin_tone_picker_bpw_C_Highlight_Selected_Swatch_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnKeyDown
struct Uw_skin_tone_picker_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Construct
struct Uw_skin_tone_picker_bpw_C_Construct_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Change Skin Color
struct Uw_skin_tone_picker_bpw_C_Change_Skin_Color_Params
{
	class Ubpw_skinpicksquare_C*                       Color_Picker;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectedSwatch;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Enter Tone Picker
struct Uw_skin_tone_picker_bpw_C_Enter_Tone_Picker_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Leave Tone Picker
struct Uw_skin_tone_picker_bpw_C_Leave_Tone_Picker_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Next Swatch
struct Uw_skin_tone_picker_bpw_C_Next_Swatch_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Previous Swatch
struct Uw_skin_tone_picker_bpw_C_Previous_Swatch_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnFocusLost
struct Uw_skin_tone_picker_bpw_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnMouseEnter
struct Uw_skin_tone_picker_bpw_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnMouseLeave
struct Uw_skin_tone_picker_bpw_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.ExecuteUbergraph_w_skin_tone_picker_bpw
struct Uw_skin_tone_picker_bpw_C_ExecuteUbergraph_w_skin_tone_picker_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnSkinColorChanged__DelegateSignature
struct Uw_skin_tone_picker_bpw_C_OnSkinColorChanged__DelegateSignature_Params
{
};

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnLeavePicker__DelegateSignature
struct Uw_skin_tone_picker_bpw_C_OnLeavePicker__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
