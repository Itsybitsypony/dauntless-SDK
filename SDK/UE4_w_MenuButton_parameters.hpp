#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_MenuButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_MenuButton.w_MenuButton_C.Handle Button
struct Uw_MenuButton_C_Handle_Button_Params
{
};

// Function w_MenuButton.w_MenuButton_C.OnKeyDown
struct Uw_MenuButton_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_MenuButton.w_MenuButton_C.OnFocusReceived
struct Uw_MenuButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_MenuButton.w_MenuButton_C.Show Button Focus
struct Uw_MenuButton_C_Show_Button_Focus_Params
{
	bool                                               Is_Focused;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_MenuButton.w_MenuButton_C.Setup Button
struct Uw_MenuButton_C_Setup_Button_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_MenuButton.w_MenuButton_C.Setup Button Parameters
struct Uw_MenuButton_C_Setup_Button_Parameters_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_MenuButton.w_MenuButton_C.BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature
struct Uw_MenuButton_C_BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_MenuButton.w_MenuButton_C.OnFocusLost
struct Uw_MenuButton_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_MenuButton.w_MenuButton_C.OnMouseEnter
struct Uw_MenuButton_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_MenuButton.w_MenuButton_C.OnMouseLeave
struct Uw_MenuButton_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_MenuButton.w_MenuButton_C.OnSynchronizeProperties
struct Uw_MenuButton_C_OnSynchronizeProperties_Params
{
};

// Function w_MenuButton.w_MenuButton_C.Tick
struct Uw_MenuButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_MenuButton.w_MenuButton_C.Construct
struct Uw_MenuButton_C_Construct_Params
{
};

// Function w_MenuButton.w_MenuButton_C.ExecuteUbergraph_w_MenuButton
struct Uw_MenuButton_C_ExecuteUbergraph_w_MenuButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_MenuButton.w_MenuButton_C.Menu Button Clicked__DelegateSignature
struct Uw_MenuButton_C_Menu_Button_Clicked__DelegateSignature_Params
{
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
