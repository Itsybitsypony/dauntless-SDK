#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_TitleEntry_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_Button_ToolTipWidget_1
struct Uw_TitleEntry_Button_C_Get_Button_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnKeyDown
struct Uw_TitleEntry_Button_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_ButtonLabel_ColorAndOpacity_1
struct Uw_TitleEntry_Button_C_Get_ButtonLabel_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.GetVisibility_IsEquipShowCheck
struct Uw_TitleEntry_Button_C_GetVisibility_IsEquipShowCheck_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Get_BGImage_OwnedColour
struct Uw_TitleEntry_Button_C_Get_BGImage_OwnedColour_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.GetColorAndOpacity_BGImage
struct Uw_TitleEntry_Button_C_GetColorAndOpacity_BGImage_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Set Button Label
struct Uw_TitleEntry_Button_C_Set_Button_Label_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnFocusReceived
struct Uw_TitleEntry_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Tick
struct Uw_TitleEntry_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_TitleEntry_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Show Hover
struct Uw_TitleEntry_Button_C_Show_Hover_Params
{
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Hide Hover
struct Uw_TitleEntry_Button_C_Hide_Hover_Params
{
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.OnSynchronizeProperties
struct Uw_TitleEntry_Button_C_OnSynchronizeProperties_Params
{
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct Uw_TitleEntry_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.Gamepad X  Pressed
struct Uw_TitleEntry_Button_C_Gamepad_X__Pressed_Params
{
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.ExecuteUbergraph_w_TitleEntry_Button
struct Uw_TitleEntry_Button_C_ExecuteUbergraph_w_TitleEntry_Button_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.EquipButtonClicked__DelegateSignature
struct Uw_TitleEntry_Button_C_EquipButtonClicked__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_TitleEntry_Button.w_TitleEntry_Button_C.EmoteButton Clicked__DelegateSignature
struct Uw_TitleEntry_Button_C_EmoteButton_Clicked__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
