#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonChatFunc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArchonChatFunc.ArchonChatFunc_C.Get Guild Chat Color
struct UArchonChatFunc_C_Get_Guild_Chat_Color_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function ArchonChatFunc.ArchonChatFunc_C.Set Text Opacity
struct UArchonChatFunc_C_Set_Text_Opacity_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Shadow_Opacity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArchonChatFunc.ArchonChatFunc_C.Get Status Message Color
struct UArchonChatFunc_C_Get_Status_Message_Color_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function ArchonChatFunc.ArchonChatFunc_C.Get Whisper Chat Color
struct UArchonChatFunc_C_Get_Whisper_Chat_Color_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function ArchonChatFunc.ArchonChatFunc_C.Get Party Chat Color
struct UArchonChatFunc_C_Get_Party_Chat_Color_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function ArchonChatFunc.ArchonChatFunc_C.Get Lobby Client
struct UArchonChatFunc_C_Get_Lobby_Client_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonLobbyClient*                          Lobby_Client;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
