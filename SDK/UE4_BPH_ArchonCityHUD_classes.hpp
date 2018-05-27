#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonCityHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPH_ArchonCityHUD.BPH_ArchonCityHUD_C
// 0x0035 (0x0651 - 0x061C)
class ABPH_ArchonCityHUD_C : public ABPH_ArchonHUD_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (Transient, DuplicateTransient)
	struct FVector2D                                   MarkerSize;                                               // 0x0628(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TextOffset;                                               // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayerStateReady;                                      // 0x0634(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLobbyClientReady;                                      // 0x0635(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0636(0x0002) MISSED OFFSET
	class Ubpw_PartyHUD_Invites_C*                     PartyInvites;                                             // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReturnFocustoMenu;                                        // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bDebugWelcomeMessage;                                     // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPH_ArchonCityHUD.BPH_ArchonCityHUD_C");
		return ptr;
	}


	void TryShowWelcomeMessage(bool* bDidShow);
	bool ShouldShowWelcomeMessage();
	void DrawObjective();
	void Update_Player_Ready_Display(bool Is_Ready);
	void UserConstructionScript();
	void On_Invite_Sent(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void Handle_Command(class FString* Command);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void J___PlayerJournal();
	void Escape_Menu();
	void ReceiveDrawHUD(int* SizeX, int* SizeY);
	void M___Map();
	void Refresh_HUD_Widget_Visibility();
	void K2_OnHUDVisibityChanged(bool* PreviousVisibility, bool* NewVisibility);
	void Set_Gameplay_HUD_Visibility(bool* Is_Visible);
	void Register_Party_Notifications();
	void ReceiveGameplayStart();
	void Show_HUD(bool* Game_Input, bool* ShowChat);
	void P___Party_Menu();
	void Return_to_Game(TEnumAsByte<Eui_character_screen_mode>* Previous_Screen);
	void Player_HUD_Ready();
	void Show_Mission_Timer();
	void Hide_Mission_Timer();
	void Show_Store(class FString* Path, class FString* InstanceId, class UWidget** UI_to_returnTo, bool* ReturntoGameplay_OnClose);
	void GetLastLogin();
	void UpdatePlayerHUDDetails();
	void ExecuteUbergraph_BPH_ArchonCityHUD(int EntryPoint);
	void ReturnFocustoMenu__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
