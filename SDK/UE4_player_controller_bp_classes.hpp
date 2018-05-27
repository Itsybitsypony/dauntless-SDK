#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_controller_bp.player_controller_bp_C
// 0x0258 (0x0C38 - 0x09E0)
class Aplayer_controller_bp_C : public AArchonPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	class Uprogression_bpc_C*                          progression_bpc;                                          // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uautoplayer_comp_bp_C*                       autoplayer_comp_bp;                                       // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCompassManager_C*                           CompassManager;                                           // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULocalMap_Manager_C*                         LocalMap_Manager;                                         // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldMap_Manager_C*                         WorldMap_Manager;                                         // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uplayer_controller_telemetry_component_C*    player_controller_telemetry_component;                    // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnResetWeaponUI;                                          // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UDepreciated_LevelSelect_bpw_C*              LevelSelectWidget;                                        // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugPlaySpeed;                                           // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	class APawn*                                       Pawn_To_Possess;                                          // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       Original_Pawn;                                            // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 EndMissionScreen;                                         // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_chat_bpw_C*                               ChatWindow;                                               // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnQuickSlotControllerToggle;                              // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewItemAcquired___Dispatcher;                           // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               MissionSuccess;                                           // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               QuickSlot_Toggle_Pressed;                                 // 0x0A79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0A7A(0x0006) MISSED OFFSET
	TAssetPtr<class UClass>                            NewCharacterFlow;                                         // 0x0A80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class Umax_danger_reached_bpw_C*                   DangerWarning;                                            // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    SystemReady;                                              // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               PlayerReady;                                              // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HUDReady;                                                 // 0x0AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientUsedGamePad;                                        // 0x0ABA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientUsedMouse;                                          // 0x0ABB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientMouseCounter;                                       // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientGamePadCounter;                                     // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAllowDebugInventory;                                 // 0x0AC4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitForNewCharacterFlow;                                  // 0x0AC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0AC6(0x0002) MISSED OFFSET
	TArray<struct Fbehemoth_classassetid_struct>       BehemothList;                                             // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnContainerUnlocked;                                      // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                PlayerIDToneCounter;                                      // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	struct FTimerHandle                                PlayerIDToneTimer;                                        // 0x0AF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class UCinematicPlayerInterface_C> CurrentCinematicPlayerInterface;                          // 0x0AF8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ignore_Menu_Buttons;                                      // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	class UHunt_BehemothList*                          HuntBehemothList;                                         // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndOfMatch_Started;                                       // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0B19(0x0007) MISSED OFFSET
	class Umax_danger_averted_bpw_C*                   DangerAvertedScreen;                                      // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Umission_timer_bpw_C*                        MissionTimerWidget;                                       // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideMissionTimerHandle;                                   // 0x0B30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class Uall_players_critical_bpw_C*                 AllSlayersDown;                                           // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnItemGrantedFromDust;                                    // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Uw_BehemothSlainMessage_Bpw_C*               BehemothSlain;                                            // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGetArmourDyeConfiguration;                              // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetBannerDyeConfiguration;                              // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetLanternResistance;                                   // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetContainerData;                                       // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class FString                                      Island_Map;                                               // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HUNT_ID;                                                  // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       AutoplayerID;                                             // 0x0BB8(0x0018) (Edit, BlueprintVisible, Config, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnUpdateEquippedCells;                                    // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SuppressingLootNotifications;                             // 0x0BE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0BE1(0x0007) MISSED OFFSET
	TArray<class FString>                              LocalPatronBoostPlayers;                                  // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnGetPatronBoostPlayers;                                  // 0x0BF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bIsTutorialHuntActive;                                    // 0x0C08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0C09(0x0007) MISSED OFFSET
	class AEndOfHunt_cinematic_C*                      MasterOfHuntTrigger;                                      // 0x0C10(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CommWheelEditorDelay;                                     // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0C1C(0x0004) MISSED OFFSET
	class Ucomm_wheel_bpw_C*                           CommWheel;                                                // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      TestString;                                               // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_controller_bp.player_controller_bp_C");
		return ptr;
	}


	void GetRankInTrack(const struct FName& Track, int* Rank);
	void HasSeenReturnToRamsgateCinematic(bool* HasSeenCinematic);
	bool CanShowWelcomeMessage();
	void IsMissionTimerVisible(bool* IsMissionTimerVisible);
	void GetPlayerInterface(TScriptInterface<class Uplayer_interface_C>* Player_Interface);
	void GetUsedGamePad(bool* UsedGamePad);
	void GetUsedMouse(bool* UsedMouse);
	void Internal_UsedMouse(bool IsUsingGamepad);
	void Internal_UsedGamepad(bool IsUsingGamepad);
	void OnRep_MasterOfHuntTrigger();
	void OnRep_bIsTutorialHuntActive();
	bool Is_Cinematic_Playing();
	void Reset_Revive_Token_Count();
	void Consume_Revive_Token(int Number_To_Consume, bool* Consumption_Successful);
	void Get_Revive_Token_Count(int* Revive_Token_Count);
	void UserConstructionScript();
	void InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27(const struct FKey& Key);
	void OnLoaded_4368EE104960A49884DCADBC40BE453C(class UClass* Loaded);
	void InpActEvt_Chat_Window_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_Pause_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_Journal_Hotkey_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_Social_Menu_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_CommWheel_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_CommWheel_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Loadout_Hotkey_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Style_Hotkey_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Inventory_Hotkey_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Map_Hotkey_K2Node_InputActionEvent_15(const struct FKey& Key);
	void PlayPlayerIDTones();
	void Server_RequestUpdateLanternStats(const class FString& InstanceId);
	void SupressBreakpartLootNotifications(bool ShouldSupress);
	void RequestPendingRewards(class UCanvasPanel* DisplayPanel);
	void SetRankInTrack(const struct FName& Track, int Rank);
	void OnQuickSlotConfirm();
	void OnQuickSlotCycleBackward();
	void OnQuickSlotCycleForward();
	void OnStartNewCharacterFlow();
	void New_Character_Flow();
	void OnFinishNewCharacterFlow();
	void Input_Swap(bool Using_Gamepad);
	void OnWheelClose();
	void DebugBeginPlay();
	void FORCEAUTOPLAYCHECK();
	void EndMissionEvent(bool Success_State, float Duration, int EndOfMissionTimer, float DangerLevel, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, class AArchonBehemoth* Beh1, class AArchonBehemoth* Beh2, TArray<struct Fbadge_infos> BadgeInfos, const struct Fplayer_highlight_info& MoTHData, float TeamScore, TArray<struct Fplayer_score_info> IndividualScores);
	void ShowLevelSelect();
	void RequestChangeLevel(const class FString& MapToLoad);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void Display_Ally_Death_Notification(const class FString& Ally_Name, int Value_Remaining);
	void Display_Self_Death_Notification(int Value_Remaining);
	void Register_New_Pawn_View_Target();
	void DisplayMaxDangerWarning();
	void DisplayAllSlayersDownFail();
	void DisplayBehemothPicker();
	void RequestBehemothToMode(const struct FName& Behemoth);
	void OnSetInventory(class AArchonInventory** InInventory);
	void On_Items_Granted(TArray<struct FGrantedItemNotification> GrantedNotification);
	void RemoveMaxDangerWarning();
	void ReceiveTick(float* DeltaSeconds);
	void ResetWeaponUI();
	void EndMission(bool Success, float Duration, int EoM_Timer, float Danger, float BehemothPower, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, class AArchonBehemoth* Behemoth_01, class AArchonBehemoth* Behemoth_02, const struct Fbadge_wrapper_thx_unreal& BadgeInfoWrapper, const struct Fplayer_highlight_info& MoTHData, float TeamScore, const struct Fplayer_score_wrapper& PlayerScores);
	void DisplayAllSlayersDown();
	void DisplayMaxDanger(bool TurnOn_);
	void OnHuntDepart();
	void OnContainerUnlockedItemsGranted(TArray<struct FGrantedItemNotification> GrantedNotification);
	void SetCinematicStateRPC(TEnumAsByte<ECinematicPlayerState> CinematicState);
	void SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState);
	void SetCinematicInterface(const TScriptInterface<class UCinematicPlayerInterface_C>& CinematicPlayerInterface);
	void OnServerPlayerStarted();
	void Client_EndOfHunt_LevelSequence();
	void Server_EndOfHunt_LevelSequences();
	void ReceiveGameplayStart();
	void Server_Gameplay_Start();
	void ClearMenus();
	void AuthForceControlRotation(const struct FRotator& NewRotation);
	void ClientForceControlRotation(const struct FRotator& NewRotation);
	void Server_MovePlayersBackToArrivalArea();
	void ShowMissionTimer(float Duration);
	void HideMissionTimer();
	void ClientShowMissionTimer(float Duration);
	void ClientHideMissionTimer();
	void HideAllSlayersDown();
	void ClientHideAllSlayersDown();
	void OnItemGrantedFromDustEvent(const class FString& ItemID);
	void BehemothSlain_NoEndHunt(class AArchonBehemoth* Behemoth_02);
	void BehemothSlain_Notification(class AArchonBehemoth* Behemoth);
	void Client_TransmitDyeConfiguration(const struct FDyeVariant& DyeConfiguration, const class FString& InstanceId);
	void Auth_GetArmourDyeConfiguration(const class FString& InstanceId);
	void Auth_GetLanternResistance(const class FString& InstanceId);
	void Client_TransmitLanternResistance(float GlobalResistance, const class FString& InstanceId, TArray<struct Felement_float_pair> ElementalResist);
	void Auth_GetContainerBoostData(const class FString& InstanceId);
	void Client_TransmitContainerData(const class FString& InstanceId, bool DoesContainerHaveChampionBoost, TArray<class FString> PatronBoostPlayers);
	void Hunt_CurrentMissionInfo(const class FString& Island, const class FString& HuntId);
	void Trigger_Player_HUD_Ready();
	void Auth_GetItemEquippedCells(const class FString& InstanceId);
	void Client_TransmitItemEquippedCells(const class FString& InstanceId, TArray<struct FEquippedCellData> EquippedCells);
	void AuthHandleConditionalLoot(const class FString& ItemID, const class FString& Source, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType);
	void NotifyOwningClientAboutConditionalLoot(const class FString& ItemID, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType);
	void Auth_GetPatronPlayers();
	void Client_GetPatronPlayers(TArray<class FString> PatronBoostPlayers);
	void SkipCinematic();
	void OnClientMasterOfHuntComplete();
	void BindToMOTHClientStop();
	void SetMOTHTrigger(class AActor* Trigger);
	void SuppressLootNotifications(bool ShouldSuppress);
	void ExecuteUbergraph_player_controller_bp(int EntryPoint);
	void OnGetPatronBoostPlayers__DelegateSignature(TArray<class FString>* PatronBoostPlayers);
	void OnUpdateEquippedCells__DelegateSignature(const class FString& InstanceId);
	void OnGetContainerData__DelegateSignature(const class FString& InstanceId, bool DoesContainerHaveChapion, TArray<class FString>* PatronBoostPlayers);
	void OnGetLanternResistance__DelegateSignature(float GlobalResistance, const class FString& InstanceId, TArray<struct Felement_float_pair>* ElementalResistances);
	void OnGetBannerDyeConfiguration__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerConfiguration, const class FString& InstanceId);
	void OnGetArmourDyeConfiguration__DelegateSignature(const struct FDyeVariant& DyeConfiguration, const class FString& InstanceId);
	void OnItemGrantedFromDust__DelegateSignature(const class FString& Item_ID);
	void OnContainerUnlocked__DelegateSignature(TArray<struct FGrantedItemNotification>* Items);
	void SystemReady__DelegateSignature(const struct FName& SystemName);
	void OnNewItemAcquired___Dispatcher__DelegateSignature(const class FString& Item_ID, int Amount, TEnumAsByte<Eloot_condition_type> LootCondition);
	void OnQuickSlotControllerToggle__DelegateSignature(bool Active_);
	void OnResetWeaponUI__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
