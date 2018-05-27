#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_PartyHUD_InvitePrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.GetDefaultFocusedWidget
struct Ubpw_PartyHUD_InvitePrompt_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Visible for Keyboard
struct Ubpw_PartyHUD_InvitePrompt_C_Visible_for_Keyboard_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Visible for Gamepad
struct Ubpw_PartyHUD_InvitePrompt_C_Visible_for_Gamepad_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Enabled for Keyboard
struct Ubpw_PartyHUD_InvitePrompt_C_Enabled_for_Keyboard_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Enabled for Gamepad
struct Ubpw_PartyHUD_InvitePrompt_C_Enabled_for_Gamepad_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.OnKeyDown
struct Ubpw_PartyHUD_InvitePrompt_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Input Swap
struct Ubpw_PartyHUD_InvitePrompt_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Construct
struct Ubpw_PartyHUD_InvitePrompt_C_Construct_Params
{
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.BndEvt__w_Button_Cancel_K2Node_ComponentBoundEvent_71_Button Clicked__DelegateSignature
struct Ubpw_PartyHUD_InvitePrompt_C_BndEvt__w_Button_Cancel_K2Node_ComponentBoundEvent_71_Button_Clicked__DelegateSignature_Params
{
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.BndEvt__WButton_Confirm_K2Node_ComponentBoundEvent_75_Button Clicked__DelegateSignature
struct Ubpw_PartyHUD_InvitePrompt_C_BndEvt__WButton_Confirm_K2Node_ComponentBoundEvent_75_Button_Clicked__DelegateSignature_Params
{
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Decline
struct Ubpw_PartyHUD_InvitePrompt_C_Decline_Params
{
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Accept
struct Ubpw_PartyHUD_InvitePrompt_C_Accept_Params
{
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Show Pending Action
struct Ubpw_PartyHUD_InvitePrompt_C_Show_Pending_Action_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.ExecuteUbergraph_bpw_PartyHUD_InvitePrompt
struct Ubpw_PartyHUD_InvitePrompt_C_ExecuteUbergraph_bpw_PartyHUD_InvitePrompt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Declined__DelegateSignature
struct Ubpw_PartyHUD_InvitePrompt_C_Declined__DelegateSignature_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_PartyHUD_InvitePrompt.bpw_PartyHUD_InvitePrompt_C.Accepted__DelegateSignature
struct Ubpw_PartyHUD_InvitePrompt_C_Accepted__DelegateSignature_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
