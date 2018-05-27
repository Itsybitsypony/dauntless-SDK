#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_chat_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_chat_bpw.w_chat_bpw_C.GetDefaultFocusedWidget
struct Uw_chat_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Get Chat Mode Label
struct Uw_chat_bpw_C_Get_Chat_Mode_Label_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_chat_bpw.w_chat_bpw_C.GetVisibility_1
struct Uw_chat_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.OnMouseButtonDown_1
struct Uw_chat_bpw_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_chat_bpw.w_chat_bpw_C.Get_BGWindowBacker_Opacity
struct Uw_chat_bpw_C_Get_BGWindowBacker_Opacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Has Reply Recipient
struct Uw_chat_bpw_C_Has_Reply_Recipient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Send Private Message to Recipient
struct Uw_chat_bpw_C_Send_Private_Message_to_Recipient_Params
{
	class FString                                      MsgBody;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_chat_bpw.w_chat_bpw_C.Send Normal Chat
struct Uw_chat_bpw_C_Send_Normal_Chat_Params
{
	class FString                                      MsgBody;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_chat_bpw.w_chat_bpw_C.Send Command
struct Uw_chat_bpw_C_Send_Command_Params
{
	class FString                                      Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_chat_bpw.w_chat_bpw_C.Is Pagebreak
struct Uw_chat_bpw_C_Is_Pagebreak_Params
{
	struct FBPChatClientMessage                        InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Scroll To End Next Frame
struct Uw_chat_bpw_C_Scroll_To_End_Next_Frame_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.OnPaint
struct Uw_chat_bpw_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_chat_bpw.w_chat_bpw_C.OnFocusReceived
struct Uw_chat_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_chat_bpw.w_chat_bpw_C.Set Guild Chat Visual
struct Uw_chat_bpw_C_Set_Guild_Chat_Visual_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Set Whisper Chat Visual
struct Uw_chat_bpw_C_Set_Whisper_Chat_Visual_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Set Party Chat Visual
struct Uw_chat_bpw_C_Set_Party_Chat_Visual_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Should Listen for Commands
struct Uw_chat_bpw_C_Should_Listen_for_Commands_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Set Guild Chat Mode
struct Uw_chat_bpw_C_Set_Guild_Chat_Mode_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Send Guild Chat Message
struct Uw_chat_bpw_C_Send_Guild_Chat_Message_Params
{
	class FString                                      MsgBody;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_chat_bpw.w_chat_bpw_C.Send Party Chat Message
struct Uw_chat_bpw_C_Send_Party_Chat_Message_Params
{
	class FString                                      MsgBody;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_chat_bpw.w_chat_bpw_C.Is Escapable Window Mode
struct Uw_chat_bpw_C_Is_Escapable_Window_Mode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Get Message Log Height
struct Uw_chat_bpw_C_Get_Message_Log_Height_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Can Scroll Older
struct Uw_chat_bpw_C_Can_Scroll_Older_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Get Scroll Older Icon Color
struct Uw_chat_bpw_C_Get_Scroll_Older_Icon_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Can Scroll Newer
struct Uw_chat_bpw_C_Can_Scroll_Newer_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Get Scroll Newer Icon Color
struct Uw_chat_bpw_C_Get_Scroll_Newer_Icon_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Scroll to Newest Message
struct Uw_chat_bpw_C_Scroll_to_Newest_Message_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.OnMouseWheel
struct Uw_chat_bpw_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_chat_bpw.w_chat_bpw_C.Should Show Message
struct Uw_chat_bpw_C_Should_Show_Message_Params
{
	struct FBPChatClientMessage                        InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Set Normal Mode Label
struct Uw_chat_bpw_C_Set_Normal_Mode_Label_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Get Player Context
struct Uw_chat_bpw_C_Get_Player_Context_Params
{
	bool                                               Is_In_City;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isinlobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Set Whisper Chat Mode
struct Uw_chat_bpw_C_Set_Whisper_Chat_Mode_Params
{
	class FString                                      Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_chat_bpw.w_chat_bpw_C.Set Party Chat Mode
struct Uw_chat_bpw_C_Set_Party_Chat_Mode_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Escape to Normal Mode
struct Uw_chat_bpw_C_Escape_to_Normal_Mode_Params
{
	bool                                               Did_Change_Mode;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Get Party Chat Channel
struct Uw_chat_bpw_C_Get_Party_Chat_Channel_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function w_chat_bpw.w_chat_bpw_C.Send
struct Uw_chat_bpw_C_Send_Params
{
	bool                                               Should_Exit_Input;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessagesNewest_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__ScrollMessagesNewest_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessagesOldest_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__ScrollMessagesOldest_K2Node_ComponentBoundEvent_259_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessageNewer_K2Node_ComponentBoundEvent_404_OnButtonClickedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__ScrollMessageNewer_K2Node_ComponentBoundEvent_404_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__ScrollMessageOlder_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__ScrollMessageOlder_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__Button_282_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__Message_K2Node_ComponentBoundEvent_96_OnEditableTextBoxCommittedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__Message_K2Node_ComponentBoundEvent_96_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Construct
struct Uw_chat_bpw_C_Construct_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Setup Chat
struct Uw_chat_bpw_C_Setup_Chat_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.OnChatClientMessageAdded
struct Uw_chat_bpw_C_OnChatClientMessageAdded_Params
{
	struct FBPChatClientMessage                        Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__MessageBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__MessageBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_chat_bpw.w_chat_bpw_C.Clear Input Box
struct Uw_chat_bpw_C_Clear_Input_Box_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_140_OnButtonHoverEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_140_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Refresh Message Log Visibility
struct Uw_chat_bpw_C_Refresh_Message_Log_Visibility_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct Uw_chat_bpw_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Exit Chat Input
struct Uw_chat_bpw_C_Exit_Chat_Input_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Tick
struct Uw_chat_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.Escape Text Input
struct Uw_chat_bpw_C_Escape_Text_Input_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Exit To Normal Input
struct Uw_chat_bpw_C_Exit_To_Normal_Input_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.Input Box Focus
struct Uw_chat_bpw_C_Input_Box_Focus_Params
{
};

// Function w_chat_bpw.w_chat_bpw_C.ExecuteUbergraph_w_chat_bpw
struct Uw_chat_bpw_C_ExecuteUbergraph_w_chat_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_chat_bpw.w_chat_bpw_C.ClickedOutsideChat__DelegateSignature
struct Uw_chat_bpw_C_ClickedOutsideChat__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
