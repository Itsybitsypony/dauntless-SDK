#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Chat_MenuRoot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.RefreshHintText
struct UChat_MenuRoot_bpw_C_RefreshHintText_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Is Valid Channel
struct UChat_MenuRoot_bpw_C_Is_Valid_Channel_Params
{
	class FString                                      Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnPaint
struct UChat_MenuRoot_bpw_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Set Whisper Reply Player Name
struct UChat_MenuRoot_bpw_C_Set_Whisper_Reply_Player_Name_Params
{
	struct FBPChatClientMessage                        InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Scroll To End Next Frame
struct UChat_MenuRoot_bpw_C_Scroll_To_End_Next_Frame_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Should Show Message
struct UChat_MenuRoot_bpw_C_Should_Show_Message_Params
{
	struct FBPChatClientMessage                        InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Is Chat System Ready
struct UChat_MenuRoot_bpw_C_Is_Chat_System_Ready_Params
{
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Get Player Context
struct UChat_MenuRoot_bpw_C_Get_Player_Context_Params
{
	bool                                               Is_In_City;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isinlobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Get Party Chat Channel
struct UChat_MenuRoot_bpw_C_Get_Party_Chat_Channel_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Construct
struct UChat_MenuRoot_bpw_C_Construct_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Join Chat Rooms
struct UChat_MenuRoot_bpw_C_Join_Chat_Rooms_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnChatClientMessageAdded
struct UChat_MenuRoot_bpw_C_OnChatClientMessageAdded_Params
{
	struct FBPChatClientMessage                        Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Escape Chat Window
struct UChat_MenuRoot_bpw_C_Escape_Chat_Window_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Focus Chat Window
struct UChat_MenuRoot_bpw_C_Focus_Chat_Window_Params
{
	bool                                               GameplayMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Tick
struct UChat_MenuRoot_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Escape to Normal Chat
struct UChat_MenuRoot_bpw_C_Escape_to_Normal_Chat_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Destruct
struct UChat_MenuRoot_bpw_C_Destruct_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Exit Chat Rooms
struct UChat_MenuRoot_bpw_C_Exit_Chat_Rooms_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnBroadcastMessagesUpdated
struct UChat_MenuRoot_bpw_C_OnBroadcastMessagesUpdated_Params
{
	TArray<struct FArchonBroadcastMessage>             Messages;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Focus to Whisper Mode
struct UChat_MenuRoot_bpw_C_Focus_to_Whisper_Mode_Params
{
	class FString                                      Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_7_FakeFocusReceived__DelegateSignature
struct UChat_MenuRoot_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_7_FakeFocusReceived__DelegateSignature_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.Create New Chat Window
struct UChat_MenuRoot_bpw_C_Create_New_Chat_Window_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.OnKeyMappingUpdate
struct UChat_MenuRoot_bpw_C_OnKeyMappingUpdate_Params
{
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.ExecuteUbergraph_Chat_MenuRoot_bpw
struct UChat_MenuRoot_bpw_C_ExecuteUbergraph_Chat_MenuRoot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chat_MenuRoot_bpw.Chat_MenuRoot_bpw_C.FocusReturn__DelegateSignature
struct UChat_MenuRoot_bpw_C_FocusReturn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
