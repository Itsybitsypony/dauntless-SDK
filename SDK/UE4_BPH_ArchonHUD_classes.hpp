#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPH_ArchonHUD.BPH_ArchonHUD_C
// 0x014C (0x061C - 0x04D0)
class ABPH_ArchonHUD_C : public AArchonHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class Upaperdoll_scene_component_C*                paperdoll_scene_component;                                // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBPW_GameHUD_C*                              main_HUD;                                                 // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Debug_Text_To_Display;                                    // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Is_Visible_;                                              // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	class UChat_MenuRoot_bpw_C*                        ChatSystem;                                               // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Game_HUD_Class;                                           // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESlateVisibility                                   HUD_Visibility;                                           // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class Ubpw_LocalMap_C*                             LocalMap;                                                 // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_Compass_C*                              Compass;                                                  // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_WorldMap_C*                             WorldMap;                                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Aplayer_controller_bp_C*                     Controller;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Umission_timer_bpw_C*                        MissionTimer;                                             // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fprogression_event>                  PendingProgressEvents;                                    // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsHandlingProgressionEvents;                              // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	TArray<struct Fprogression_award>                  PendingProgressAwards;                                    // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCanvasPanel*                                ProgressionContainerPanel;                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoundDuplicateAward;                                      // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	TArray<struct Fprogression_event>                  TempItemEvents;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct Fprogression_event                          TempItemEvent;                                            // 0x0590(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fprogression_award                          LocalNewProgressAward;                                    // 0x05A8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fprogression_award                          LocalExistingProgressAward;                               // 0x05E0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LocalExistingProgressAwardIndex;                          // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPH_ArchonHUD.BPH_ArchonHUD_C");
		return ptr;
	}


	void GetWeaponPowerTable(const struct FName& RowName, struct FWeaponPowerTableData* WeaponPowerTable, bool* RowFound);
	void GetPaperdollScene(class Upaperdoll_scene_component_C** PaperdollScene);
	void Get_Chat_Widget(class UChat_MenuRoot_bpw_C** ChatWidget);
	void Try_Chat_Input(bool FromGameplay, bool* Success);
	void Add_Progress_Widget_to_Panel(class UCanvasPanel* Panel, class UWidget* Content);
	void Handle_Chat_Command(const class FString& SourceString, bool* Did_Handle);
	void Return_to_Game(TEnumAsByte<Eui_character_screen_mode> Previous_Screen);
	void Create_Compass_Widgets();
	void ReturnFocusfromUI();
	void UserConstructionScript();
	void Restore_Game_Input();
	void Show_Store(const class FString& Path, const class FString& InstanceId, class UWidget* UI_to_returnTo, bool ReturntoGameplay_OnClose);
	void HideStore();
	void GameplayStart_Quest_Event(class UQuestEventData* Event);
	void Progression_Award_Finished();
	void Progression_Awarded(class UCanvasPanel* ContainerWidget, TArray<struct Fprogression_award>* Grants);
	void Handle_Next_Progression_Award();
	void Show_Rank_Progression_Widget(const struct Fprogression_award& Grant);
	void Show_Core_Progression_Widget(const struct Fprogression_award& Grant);
	void QueueNextProgressionAward(TArray<struct Fprogression_award> ProgressionAwards);
	void Handle_Command(const class FString& Command);
	void Friend_Added_by_Name(bool bWasSuccessful, const class FString& FriendName);
	void Chat_Input(bool InputMode_Gameplay);
	void Bind_Friend_Events();
	void Friend_Removed_by_Name(bool bWasSuccessful, const class FString& FriendName);
	void On_Friends_Command();
	void On_Help_Command();
	void On_Stuck_Command();
	void Player_Blocked_by_Name(bool bWasSuccessful, const class FString& PlayerName);
	void Player_Unblocked_by_Name(bool bWasSuccessful, const class FString& PlayerName);
	void Bind_Blocked_Player_Events();
	void Remove_Events();
	void ReceiveBeginPlay();
	void Escape_Menu();
	void ReceiveDrawHUD(int* SizeX, int* SizeY);
	void Set_HUD_Visibility(bool Visibility);
	void Set_HUD_Debug_Text(const class FString& Debug_String);
	void Set_Display_Debug_Image(bool Visible);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ShowControlsOverlayWidget();
	void RemoveControlsOverlayWidget();
	void ShowXboxLayoutWidget();
	void RemoveXboxLayoutWidget();
	void Display_Ally_Death_Notification(const class FString& Ally_Name, int Value_Remaining);
	void Display_Self_Death_Notification(int Value_Remaining);
	void K2_OnHUDVisibityChanged(bool* PreviousVisibility, bool* NewVisibility);
	void K2_OnPlayerTalkingStateChanged(int* TalkingPlayerId, bool* bIsTalking);
	void Toggle_HUD_Visibility();
	void Set_Static_Hud_Item_Visibility(bool Visible_);
	void J___PlayerJournal();
	void Set_Gameplay_HUD_Visibility(bool Is_Visible);
	void Hide_HUD(bool HideChat);
	void Show_HUD(bool Game_Input, bool ShowChat);
	void O___Friends_Screen();
	void Refresh_HUD_Widget_Visibility();
	void ReceiveGameplayStart();
	void UpdateQuickbar();
	void Player_HUD_Ready();
	void Show_Mission_Timer();
	void Hide_Mission_Timer();
	void UpdateBoosts();
	void UpdatePlayerHUDDetails();
	void L___Player_Loadout();
	void I___Player_Inventory();
	void K___Player_Style();
	void Open_Map();
	void ExecuteUbergraph_BPH_ArchonHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
