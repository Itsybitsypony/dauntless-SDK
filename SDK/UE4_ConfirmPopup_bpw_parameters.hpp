#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ConfirmPopup_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.GetDefaultFocusedWidget
struct UConfirmPopup_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Set Button Labels
struct UConfirmPopup_bpw_C_Set_Button_Labels_Params
{
	struct FText                                       Confirm;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Cancel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Visible for Keyboard
struct UConfirmPopup_bpw_C_Visible_for_Keyboard_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Visible for Gamepad
struct UConfirmPopup_bpw_C_Visible_for_Gamepad_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Enabled for Keyboard
struct UConfirmPopup_bpw_C_Enabled_for_Keyboard_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Enabled for Gamepad
struct UConfirmPopup_bpw_C_Enabled_for_Gamepad_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Show Popup
struct UConfirmPopup_bpw_C_Show_Popup_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.OnKeyDown
struct UConfirmPopup_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Construct
struct UConfirmPopup_bpw_C_Construct_Params
{
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Input Swap
struct UConfirmPopup_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Cancel
struct UConfirmPopup_bpw_C_Cancel_Params
{
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.Confirm
struct UConfirmPopup_bpw_C_Confirm_Params
{
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UConfirmPopup_bpw_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
struct UConfirmPopup_bpw_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params
{
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.ExecuteUbergraph_ConfirmPopup_bpw
struct UConfirmPopup_bpw_C_ExecuteUbergraph_ConfirmPopup_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.On Confirmed__DelegateSignature
struct UConfirmPopup_bpw_C_On_Confirmed__DelegateSignature_Params
{
};

// Function ConfirmPopup_bpw.ConfirmPopup_bpw_C.On Canceled__DelegateSignature
struct UConfirmPopup_bpw_C_On_Canceled__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
