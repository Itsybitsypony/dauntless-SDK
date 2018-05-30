#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_controller_bp.player_controller_bp_C.GetRankInTrack
struct Aplayer_controller_bp_C_GetRankInTrack_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.HasSeenReturnToRamsgateCinematic
struct Aplayer_controller_bp_C_HasSeenReturnToRamsgateCinematic_Params
{
	bool                                               HasSeenCinematic;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.CanShowWelcomeMessage
struct Aplayer_controller_bp_C_CanShowWelcomeMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.IsMissionTimerVisible
struct Aplayer_controller_bp_C_IsMissionTimerVisible_Params
{
	bool                                               IsMissionTimerVisible;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.GetPlayerInterface
struct Aplayer_controller_bp_C_GetPlayerInterface_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.GetUsedGamePad
struct Aplayer_controller_bp_C_GetUsedGamePad_Params
{
	bool                                               UsedGamePad;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.GetUsedMouse
struct Aplayer_controller_bp_C_GetUsedMouse_Params
{
	bool                                               UsedMouse;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Internal_UsedMouse
struct Aplayer_controller_bp_C_Internal_UsedMouse_Params
{
	bool                                               IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Internal_UsedGamepad
struct Aplayer_controller_bp_C_Internal_UsedGamepad_Params
{
	bool                                               IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnRep_MasterOfHuntTrigger
struct Aplayer_controller_bp_C_OnRep_MasterOfHuntTrigger_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnRep_bIsTutorialHuntActive
struct Aplayer_controller_bp_C_OnRep_bIsTutorialHuntActive_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Is Cinematic Playing
struct Aplayer_controller_bp_C_Is_Cinematic_Playing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Reset Revive Token Count
struct Aplayer_controller_bp_C_Reset_Revive_Token_Count_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Consume Revive Token
struct Aplayer_controller_bp_C_Consume_Revive_Token_Params
{
	int                                                Number_To_Consume;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Consumption_Successful;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Get Revive Token Count
struct Aplayer_controller_bp_C_Get_Revive_Token_Count_Params
{
	int                                                Revive_Token_Count;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.UserConstructionScript
struct Aplayer_controller_bp_C_UserConstructionScript_Params
{
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28
struct Aplayer_controller_bp_C_InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27
struct Aplayer_controller_bp_C_InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.OnLoaded_4368EE104960A49884DCADBC40BE453C
struct Aplayer_controller_bp_C_OnLoaded_4368EE104960A49884DCADBC40BE453C_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Chat Window_K2Node_InputActionEvent_26
struct Aplayer_controller_bp_C_InpActEvt_Chat_Window_K2Node_InputActionEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Pause_K2Node_InputActionEvent_25
struct Aplayer_controller_bp_C_InpActEvt_Pause_K2Node_InputActionEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Journal Hotkey_K2Node_InputActionEvent_24
struct Aplayer_controller_bp_C_InpActEvt_Journal_Hotkey_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Social Menu_K2Node_InputActionEvent_23
struct Aplayer_controller_bp_C_InpActEvt_Social_Menu_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Show Control Overlay_K2Node_InputActionEvent_22
struct Aplayer_controller_bp_C_InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Show Control Overlay_K2Node_InputActionEvent_21
struct Aplayer_controller_bp_C_InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_CommWheel_K2Node_InputActionEvent_20
struct Aplayer_controller_bp_C_InpActEvt_CommWheel_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_CommWheel_K2Node_InputActionEvent_19
struct Aplayer_controller_bp_C_InpActEvt_CommWheel_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Loadout Hotkey_K2Node_InputActionEvent_18
struct Aplayer_controller_bp_C_InpActEvt_Loadout_Hotkey_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Style Hotkey_K2Node_InputActionEvent_17
struct Aplayer_controller_bp_C_InpActEvt_Style_Hotkey_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Inventory Hotkey_K2Node_InputActionEvent_16
struct Aplayer_controller_bp_C_InpActEvt_Inventory_Hotkey_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.InpActEvt_Map Hotkey_K2Node_InputActionEvent_15
struct Aplayer_controller_bp_C_InpActEvt_Map_Hotkey_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.PlayPlayerIDTones
struct Aplayer_controller_bp_C_PlayPlayerIDTones_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Server_RequestUpdateLanternStats
struct Aplayer_controller_bp_C_Server_RequestUpdateLanternStats_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.SupressBreakpartLootNotifications
struct Aplayer_controller_bp_C_SupressBreakpartLootNotifications_Params
{
	bool                                               ShouldSupress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.RequestPendingRewards
struct Aplayer_controller_bp_C_RequestPendingRewards_Params
{
	class UCanvasPanel*                                DisplayPanel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.SetRankInTrack
struct Aplayer_controller_bp_C_SetRankInTrack_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnQuickSlotConfirm
struct Aplayer_controller_bp_C_OnQuickSlotConfirm_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnQuickSlotCycleBackward
struct Aplayer_controller_bp_C_OnQuickSlotCycleBackward_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnQuickSlotCycleForward
struct Aplayer_controller_bp_C_OnQuickSlotCycleForward_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnStartNewCharacterFlow
struct Aplayer_controller_bp_C_OnStartNewCharacterFlow_Params
{
};

// Function player_controller_bp.player_controller_bp_C.New Character Flow
struct Aplayer_controller_bp_C_New_Character_Flow_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnFinishNewCharacterFlow
struct Aplayer_controller_bp_C_OnFinishNewCharacterFlow_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Input Swap
struct Aplayer_controller_bp_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnWheelClose
struct Aplayer_controller_bp_C_OnWheelClose_Params
{
};

// Function player_controller_bp.player_controller_bp_C.DebugBeginPlay
struct Aplayer_controller_bp_C_DebugBeginPlay_Params
{
};

// Function player_controller_bp.player_controller_bp_C.FORCEAUTOPLAYCHECK
struct Aplayer_controller_bp_C_FORCEAUTOPLAYCHECK_Params
{
};

// Function player_controller_bp.player_controller_bp_C.EndMissionEvent
struct Aplayer_controller_bp_C_EndMissionEvent_Params
{
	bool                                               Success_State;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndOfMissionTimer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DangerLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EndOfMatch_GameType>                   EndofMatchMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             Beh1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             Beh2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fbadge_infos>                        BadgeInfos;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct Fplayer_highlight_info                      MoTHData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TeamScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fplayer_score_info>                  IndividualScores;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.ShowLevelSelect
struct Aplayer_controller_bp_C_ShowLevelSelect_Params
{
};

// Function player_controller_bp.player_controller_bp_C.RequestChangeLevel
struct Aplayer_controller_bp_C_RequestChangeLevel_Params
{
	class FString                                      MapToLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.ReceiveEndPlay
struct Aplayer_controller_bp_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.ReceiveBeginPlay
struct Aplayer_controller_bp_C_ReceiveBeginPlay_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Display Ally Death Notification
struct Aplayer_controller_bp_C_Display_Ally_Death_Notification_Params
{
	class FString                                      Ally_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value_Remaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Display Self Death Notification
struct Aplayer_controller_bp_C_Display_Self_Death_Notification_Params
{
	int                                                Value_Remaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Register New Pawn View Target
struct Aplayer_controller_bp_C_Register_New_Pawn_View_Target_Params
{
};

// Function player_controller_bp.player_controller_bp_C.DisplayMaxDangerWarning
struct Aplayer_controller_bp_C_DisplayMaxDangerWarning_Params
{
};

// Function player_controller_bp.player_controller_bp_C.DisplayAllSlayersDownFail
struct Aplayer_controller_bp_C_DisplayAllSlayersDownFail_Params
{
};

// Function player_controller_bp.player_controller_bp_C.DisplayBehemothPicker
struct Aplayer_controller_bp_C_DisplayBehemothPicker_Params
{
};

// Function player_controller_bp.player_controller_bp_C.RequestBehemothToMode
struct Aplayer_controller_bp_C_RequestBehemothToMode_Params
{
	struct FName                                       Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnSetInventory
struct Aplayer_controller_bp_C_OnSetInventory_Params
{
	class AArchonInventory**                           InInventory;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.On Items Granted
struct Aplayer_controller_bp_C_On_Items_Granted_Params
{
	TArray<struct FGrantedItemNotification>            GrantedNotification;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.RemoveMaxDangerWarning
struct Aplayer_controller_bp_C_RemoveMaxDangerWarning_Params
{
};

// Function player_controller_bp.player_controller_bp_C.ReceiveTick
struct Aplayer_controller_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.ResetWeaponUI
struct Aplayer_controller_bp_C_ResetWeaponUI_Params
{
};

// Function player_controller_bp.player_controller_bp_C.EndMission
struct Aplayer_controller_bp_C_EndMission_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EoM_Timer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              danger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BehemothPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EndOfMatch_GameType>                   EndofMatchMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             Behemoth_01;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             Behemoth_02;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fbadge_wrapper_thx_unreal                   BadgeInfoWrapper;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Fplayer_highlight_info                      MoTHData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TeamScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fplayer_score_wrapper                       PlayerScores;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_bp.player_controller_bp_C.DisplayAllSlayersDown
struct Aplayer_controller_bp_C_DisplayAllSlayersDown_Params
{
};

// Function player_controller_bp.player_controller_bp_C.DisplayMaxDanger
struct Aplayer_controller_bp_C_DisplayMaxDanger_Params
{
	bool                                               TurnOn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnHuntDepart
struct Aplayer_controller_bp_C_OnHuntDepart_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnContainerUnlockedItemsGranted
struct Aplayer_controller_bp_C_OnContainerUnlockedItemsGranted_Params
{
	TArray<struct FGrantedItemNotification>            GrantedNotification;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.SetCinematicStateRPC
struct Aplayer_controller_bp_C_SetCinematicStateRPC_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.SetCinematicState
struct Aplayer_controller_bp_C_SetCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.SetCinematicInterface
struct Aplayer_controller_bp_C_SetCinematicInterface_Params
{
	TScriptInterface<class UCinematicPlayerInterface_C> CinematicPlayerInterface;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnServerPlayerStarted
struct Aplayer_controller_bp_C_OnServerPlayerStarted_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Client_EndOfHunt_LevelSequence
struct Aplayer_controller_bp_C_Client_EndOfHunt_LevelSequence_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Server_EndOfHunt_LevelSequences
struct Aplayer_controller_bp_C_Server_EndOfHunt_LevelSequences_Params
{
};

// Function player_controller_bp.player_controller_bp_C.ReceiveGameplayStart
struct Aplayer_controller_bp_C_ReceiveGameplayStart_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Server Gameplay Start
struct Aplayer_controller_bp_C_Server_Gameplay_Start_Params
{
};

// Function player_controller_bp.player_controller_bp_C.ClearMenus
struct Aplayer_controller_bp_C_ClearMenus_Params
{
};

// Function player_controller_bp.player_controller_bp_C.AuthForceControlRotation
struct Aplayer_controller_bp_C_AuthForceControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.ClientForceControlRotation
struct Aplayer_controller_bp_C_ClientForceControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Server_MovePlayersBackToArrivalArea
struct Aplayer_controller_bp_C_Server_MovePlayersBackToArrivalArea_Params
{
};

// Function player_controller_bp.player_controller_bp_C.ShowMissionTimer
struct Aplayer_controller_bp_C_ShowMissionTimer_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.HideMissionTimer
struct Aplayer_controller_bp_C_HideMissionTimer_Params
{
};

// Function player_controller_bp.player_controller_bp_C.ClientShowMissionTimer
struct Aplayer_controller_bp_C_ClientShowMissionTimer_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.ClientHideMissionTimer
struct Aplayer_controller_bp_C_ClientHideMissionTimer_Params
{
};

// Function player_controller_bp.player_controller_bp_C.HideAllSlayersDown
struct Aplayer_controller_bp_C_HideAllSlayersDown_Params
{
};

// Function player_controller_bp.player_controller_bp_C.ClientHideAllSlayersDown
struct Aplayer_controller_bp_C_ClientHideAllSlayersDown_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnItemGrantedFromDustEvent
struct Aplayer_controller_bp_C_OnItemGrantedFromDustEvent_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.BehemothSlain_NoEndHunt
struct Aplayer_controller_bp_C_BehemothSlain_NoEndHunt_Params
{
	class AArchonBehemoth*                             Behemoth_02;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.BehemothSlain_Notification
struct Aplayer_controller_bp_C_BehemothSlain_Notification_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Client_TransmitDyeConfiguration
struct Aplayer_controller_bp_C_Client_TransmitDyeConfiguration_Params
{
	struct FDyeVariant                                 DyeConfiguration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.Auth_GetArmourDyeConfiguration
struct Aplayer_controller_bp_C_Auth_GetArmourDyeConfiguration_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.Auth_GetLanternResistance
struct Aplayer_controller_bp_C_Auth_GetLanternResistance_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.Client_TransmitLanternResistance
struct Aplayer_controller_bp_C_Client_TransmitLanternResistance_Params
{
	float                                              GlobalResistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct Felement_float_pair>                 ElementalResist;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.Auth_GetContainerBoostData
struct Aplayer_controller_bp_C_Auth_GetContainerBoostData_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.Client_TransmitContainerData
struct Aplayer_controller_bp_C_Client_TransmitContainerData_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               DoesContainerHaveChampionBoost;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              PatronBoostPlayers;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.Hunt_CurrentMissionInfo
struct Aplayer_controller_bp_C_Hunt_CurrentMissionInfo_Params
{
	class FString                                      Island;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      HuntId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.Trigger Player HUD Ready
struct Aplayer_controller_bp_C_Trigger_Player_HUD_Ready_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Auth_GetItemEquippedCells
struct Aplayer_controller_bp_C_Auth_GetItemEquippedCells_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.Client_TransmitItemEquippedCells
struct Aplayer_controller_bp_C_Client_TransmitItemEquippedCells_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FEquippedCellData>                   EquippedCells;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.AuthHandleConditionalLoot
struct Aplayer_controller_bp_C_AuthHandleConditionalLoot_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  ConditionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.NotifyOwningClientAboutConditionalLoot
struct Aplayer_controller_bp_C_NotifyOwningClientAboutConditionalLoot_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  ConditionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.Auth_GetPatronPlayers
struct Aplayer_controller_bp_C_Auth_GetPatronPlayers_Params
{
};

// Function player_controller_bp.player_controller_bp_C.Client_GetPatronPlayers
struct Aplayer_controller_bp_C_Client_GetPatronPlayers_Params
{
	TArray<class FString>                              PatronBoostPlayers;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.SkipCinematic
struct Aplayer_controller_bp_C_SkipCinematic_Params
{
};

// Function player_controller_bp.player_controller_bp_C.OnClientMasterOfHuntComplete
struct Aplayer_controller_bp_C_OnClientMasterOfHuntComplete_Params
{
};

// Function player_controller_bp.player_controller_bp_C.BindToMOTHClientStop
struct Aplayer_controller_bp_C_BindToMOTHClientStop_Params
{
};

// Function player_controller_bp.player_controller_bp_C.SetMOTHTrigger
struct Aplayer_controller_bp_C_SetMOTHTrigger_Params
{
	class AActor*                                      Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.SuppressLootNotifications
struct Aplayer_controller_bp_C_SuppressLootNotifications_Params
{
	bool                                               ShouldSuppress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.ExecuteUbergraph_player_controller_bp
struct Aplayer_controller_bp_C_ExecuteUbergraph_player_controller_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnGetPatronBoostPlayers__DelegateSignature
struct Aplayer_controller_bp_C_OnGetPatronBoostPlayers__DelegateSignature_Params
{
	TArray<class FString>                              PatronBoostPlayers;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.OnUpdateEquippedCells__DelegateSignature
struct Aplayer_controller_bp_C_OnUpdateEquippedCells__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.OnGetContainerData__DelegateSignature
struct Aplayer_controller_bp_C_OnGetContainerData__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               DoesContainerHaveChapion;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              PatronBoostPlayers;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.OnGetLanternResistance__DelegateSignature
struct Aplayer_controller_bp_C_OnGetLanternResistance__DelegateSignature_Params
{
	float                                              GlobalResistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct Felement_float_pair>                 ElementalResistances;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.OnGetBannerDyeConfiguration__DelegateSignature
struct Aplayer_controller_bp_C_OnGetBannerDyeConfiguration__DelegateSignature_Params
{
	struct FBannerCustomizationItemIDs                 BannerConfiguration;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.OnGetArmourDyeConfiguration__DelegateSignature
struct Aplayer_controller_bp_C_OnGetArmourDyeConfiguration__DelegateSignature_Params
{
	struct FDyeVariant                                 DyeConfiguration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.OnItemGrantedFromDust__DelegateSignature
struct Aplayer_controller_bp_C_OnItemGrantedFromDust__DelegateSignature_Params
{
	class FString                                      Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_bp.player_controller_bp_C.OnContainerUnlocked__DelegateSignature
struct Aplayer_controller_bp_C_OnContainerUnlocked__DelegateSignature_Params
{
	TArray<struct FGrantedItemNotification>            Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_controller_bp.player_controller_bp_C.SystemReady__DelegateSignature
struct Aplayer_controller_bp_C_SystemReady__DelegateSignature_Params
{
	struct FName                                       SystemName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnNewItemAcquired - Dispatcher__DelegateSignature
struct Aplayer_controller_bp_C_OnNewItemAcquired___Dispatcher__DelegateSignature_Params
{
	class FString                                      Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  LootCondition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnQuickSlotControllerToggle__DelegateSignature
struct Aplayer_controller_bp_C_OnQuickSlotControllerToggle__DelegateSignature_Params
{
	bool                                               Active_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_bp.player_controller_bp_C.OnResetWeaponUI__DelegateSignature
struct Aplayer_controller_bp_C_OnResetWeaponUI__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
