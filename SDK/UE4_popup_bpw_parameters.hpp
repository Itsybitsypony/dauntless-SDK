#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_popup_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function popup_bpw.popup_bpw_C.GetDefaultFocusedWidget
struct Upopup_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Refresh Dimmer Visibility
struct Upopup_bpw_C_Refresh_Dimmer_Visibility_Params
{
};

// Function popup_bpw.popup_bpw_C.Visible for Mouse
struct Upopup_bpw_C_Visible_for_Mouse_Params
{
	ESlateVisibility                                   Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Visible for Gamepad
struct Upopup_bpw_C_Visible_for_Gamepad_Params
{
	ESlateVisibility                                   Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Show Simple Popup
struct Upopup_bpw_C_Show_Simple_Popup_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Show_Spinner;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Close_Button;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Get Button Visibility
struct Upopup_bpw_C_Get_Button_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.OnKeyDown
struct Upopup_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function popup_bpw.popup_bpw_C.Get Spinner Visibility
struct Upopup_bpw_C_Get_Spinner_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Construct
struct Upopup_bpw_C_Construct_Params
{
};

// Function popup_bpw.popup_bpw_C.BndEvt__Button_104_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature
struct Upopup_bpw_C_BndEvt__Button_104_K2Node_ComponentBoundEvent_512_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function popup_bpw.popup_bpw_C.Input Swap
struct Upopup_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Tick
struct Upopup_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.OnSynchronizeProperties
struct Upopup_bpw_C_OnSynchronizeProperties_Params
{
};

// Function popup_bpw.popup_bpw_C.Close Popup
struct Upopup_bpw_C_Close_Popup_Params
{
};

// Function popup_bpw.popup_bpw_C.ExecuteUbergraph_popup_bpw
struct Upopup_bpw_C_ExecuteUbergraph_popup_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_bpw.popup_bpw_C.Ready To Close__DelegateSignature
struct Upopup_bpw_C_Ready_To_Close__DelegateSignature_Params
{
	TEnumAsByte<Eui_character_screen_mode>             Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
