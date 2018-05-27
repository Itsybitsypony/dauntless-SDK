#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_ChatMessage_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Debug Message
struct Uw_ChatMessage_bpw_C_Debug_Message_Params
{
	class FString                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Build Status Message
struct Uw_ChatMessage_bpw_C_Build_Status_Message_Params
{
	struct FText                                       Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Message;                                                  // (Parm, OutParm)
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Get Party Message Color
struct Uw_ChatMessage_bpw_C_Get_Party_Message_Color_Params
{
	bool                                               Is_From_Self;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Get Global Message Color
struct Uw_ChatMessage_bpw_C_Get_Global_Message_Color_Params
{
	bool                                               Is_From_Self;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Setup Message
struct Uw_ChatMessage_bpw_C_Setup_Message_Params
{
	struct FBPChatClientMessage                        InMessage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Set Text
struct Uw_ChatMessage_bpw_C_Set_Text_Params
{
	struct FArchonChatMessageStruct                    Chat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Me;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Whisper;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.Show Message
struct Uw_ChatMessage_bpw_C_Show_Message_Params
{
};

// Function w_ChatMessage_bpw.w_ChatMessage_bpw_C.ExecuteUbergraph_w_ChatMessage_bpw
struct Uw_ChatMessage_bpw_C_ExecuteUbergraph_w_ChatMessage_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
