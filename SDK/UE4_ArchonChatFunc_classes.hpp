#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonChatFunc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArchonChatFunc.ArchonChatFunc_C
// 0x0000 (0x0028 - 0x0028)
class UArchonChatFunc_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArchonChatFunc.ArchonChatFunc_C");
		return ptr;
	}


	void STATIC_Get_Guild_Chat_Color(class UObject* __WorldContext, struct FSlateColor* Color);
	void STATIC_Set_Text_Opacity(class UTextBlock* Text, float Opacity, float Shadow_Opacity, class UObject* __WorldContext);
	void STATIC_Get_Status_Message_Color(class UObject* __WorldContext, struct FSlateColor* Color);
	void STATIC_Get_Whisper_Chat_Color(class UObject* __WorldContext, struct FSlateColor* Color);
	void STATIC_Get_Party_Chat_Color(class UObject* __WorldContext, struct FSlateColor* Color);
	void STATIC_Get_Lobby_Client(class APlayerController* Player_Controller, class UObject* __WorldContext, class AArchonLobbyClient** Lobby_Client);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
