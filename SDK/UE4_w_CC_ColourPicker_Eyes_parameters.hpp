#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPicker_Eyes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Revert Eye Colour
struct Uw_CC_ColourPicker_Eyes_C_Revert_Eye_Colour_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Setup Revert Colours
struct Uw_CC_ColourPicker_Eyes_C_Setup_Revert_Colours_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Set EyeColourSwitch
struct Uw_CC_ColourPicker_Eyes_C_Set_EyeColourSwitch_Params
{
	int                                                Tab_Index;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.OnKeyDown
struct Uw_CC_ColourPicker_Eyes_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.OnFocusReceived
struct Uw_CC_ColourPicker_Eyes_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.EyeColourSwitch_Assigner
struct Uw_CC_ColourPicker_Eyes_C_EyeColourSwitch_Assigner_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                EyeIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Refresh Iris Toggle
struct Uw_CC_ColourPicker_Eyes_C_Refresh_Iris_Toggle_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Set Eye Color
struct Uw_CC_ColourPicker_Eyes_C_Set_Eye_Color_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Construct
struct Uw_CC_ColourPicker_Eyes_C_Construct_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Cancel
struct Uw_CC_ColourPicker_Eyes_C_Cancel_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.Save
struct Uw_CC_ColourPicker_Eyes_C_Save_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On Left Selected__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On_Left_Selected__DelegateSignature_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On Right Selected__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On_Right_Selected__DelegateSignature_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.BndEvt__EyesSelector_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_BndEvt__EyesSelector_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ExecuteUbergraph_w_CC_ColourPicker_Eyes
struct Uw_CC_ColourPicker_Eyes_C_ExecuteUbergraph_w_CC_ColourPicker_Eyes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_SelectionChanged__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_ColourPicker_SelectionChanged__DelegateSignature_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_Saved__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_ColourPicker_Saved__DelegateSignature_Params
{
};

// Function w_CC_ColourPicker_Eyes.w_CC_ColourPicker_Eyes_C.ColourPicker_Cancelled__DelegateSignature
struct Uw_CC_ColourPicker_Eyes_C_ColourPicker_Cancelled__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
