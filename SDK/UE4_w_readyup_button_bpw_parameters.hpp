#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_readyup_button_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.SetReadyUpState
struct Uw_readyup_button_bpw_C_SetReadyUpState_Params
{
	TEnumAsByte<ELobbyReadyState>                      NewReadyState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnKeyDown
struct Uw_readyup_button_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.GamepadSetAlpha
struct Uw_readyup_button_bpw_C_GamepadSetAlpha_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.GamepadVisibilty
struct Uw_readyup_button_bpw_C_GamepadVisibilty_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ButtonVisibility
struct Uw_readyup_button_bpw_C_ButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnFocusReceived
struct Uw_readyup_button_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF91B0B2EBD3
struct Uw_readyup_button_bpw_C_OnLoaded_A058EA6248D678A919D5DF91B0B2EBD3_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Construct
struct Uw_readyup_button_bpw_C_Construct_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Tick
struct Uw_readyup_button_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Show Hover
struct Uw_readyup_button_bpw_C_Show_Hover_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Hide Hover
struct Uw_readyup_button_bpw_C_Hide_Hover_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Input Swap
struct Uw_readyup_button_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.OnSynchronizeProperties
struct Uw_readyup_button_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Refresh
struct Uw_readyup_button_bpw_C_Refresh_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.GameKey Pressed
struct Uw_readyup_button_bpw_C_GameKey_Pressed_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ReadyUpStateChanged
struct Uw_readyup_button_bpw_C_ReadyUpStateChanged_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.Refresh Material
struct Uw_readyup_button_bpw_C_Refresh_Material_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.BndEvt__Clicker_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct Uw_readyup_button_bpw_C_BndEvt__Clicker_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ExecuteUbergraph_w_readyup_button_bpw
struct Uw_readyup_button_bpw_C_ExecuteUbergraph_w_readyup_button_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_readyup_button_bpw.w_readyup_button_bpw_C.ClickedReadyUP__DelegateSignature
struct Uw_readyup_button_bpw_C_ClickedReadyUP__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
