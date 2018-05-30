#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_controller_interface.player_controller_interface_C.CanShowWelcomeMessage
struct Uplayer_controller_interface_C_CanShowWelcomeMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.SuppressLootNotifications
struct Uplayer_controller_interface_C_SuppressLootNotifications_Params
{
	bool                                               ShouldSuppress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.IsMissionTimerVisible
struct Uplayer_controller_interface_C_IsMissionTimerVisible_Params
{
	bool                                               IsMissionTimerVisible;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.SetMOTHTrigger
struct Uplayer_controller_interface_C_SetMOTHTrigger_Params
{
	class AActor*                                      Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.SkipCinematic
struct Uplayer_controller_interface_C_SkipCinematic_Params
{
};

// Function player_controller_interface.player_controller_interface_C.HasSeenReturnToRamsgateCinematic
struct Uplayer_controller_interface_C_HasSeenReturnToRamsgateCinematic_Params
{
	bool                                               HasSeenCinematic;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.SupressBreakpartLootNotifications
struct Uplayer_controller_interface_C_SupressBreakpartLootNotifications_Params
{
	bool                                               ShouldSupress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.AuthHandleConditionalLoot
struct Uplayer_controller_interface_C_AuthHandleConditionalLoot_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  ConditionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.Server_RequestUpdateLanternStats
struct Uplayer_controller_interface_C_Server_RequestUpdateLanternStats_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_interface.player_controller_interface_C.Hunt_CurrentMissionInfo
struct Uplayer_controller_interface_C_Hunt_CurrentMissionInfo_Params
{
	class FString                                      Island;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      HuntId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_controller_interface.player_controller_interface_C.BehemothSlain_NoEndHunt
struct Uplayer_controller_interface_C_BehemothSlain_NoEndHunt_Params
{
	class AArchonBehemoth*                             Behemoth_02;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.HideAllSlayersDown
struct Uplayer_controller_interface_C_HideAllSlayersDown_Params
{
};

// Function player_controller_interface.player_controller_interface_C.HideMissionTimer
struct Uplayer_controller_interface_C_HideMissionTimer_Params
{
};

// Function player_controller_interface.player_controller_interface_C.ShowMissionTimer
struct Uplayer_controller_interface_C_ShowMissionTimer_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.AuthForceControlRotation
struct Uplayer_controller_interface_C_AuthForceControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.SetCinematicInterface
struct Uplayer_controller_interface_C_SetCinematicInterface_Params
{
	TScriptInterface<class UCinematicPlayerInterface_C> CinematicPlayerInterface;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.SetCinematicState
struct Uplayer_controller_interface_C_SetCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.PlayPlayerIDTones
struct Uplayer_controller_interface_C_PlayPlayerIDTones_Params
{
};

// Function player_controller_interface.player_controller_interface_C.DisplayMaxDanger
struct Uplayer_controller_interface_C_DisplayMaxDanger_Params
{
	bool                                               TurnOn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.DisplayAllSlayersDown
struct Uplayer_controller_interface_C_DisplayAllSlayersDown_Params
{
};

// Function player_controller_interface.player_controller_interface_C.EndMission
struct Uplayer_controller_interface_C_EndMission_Params
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

// Function player_controller_interface.player_controller_interface_C.ResetWeaponUI
struct Uplayer_controller_interface_C_ResetWeaponUI_Params
{
};

// Function player_controller_interface.player_controller_interface_C.OnFinishNewCharacterFlow
struct Uplayer_controller_interface_C_OnFinishNewCharacterFlow_Params
{
};

// Function player_controller_interface.player_controller_interface_C.GetPlayerInterface
struct Uplayer_controller_interface_C_GetPlayerInterface_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.GetUsedMouse
struct Uplayer_controller_interface_C_GetUsedMouse_Params
{
	bool                                               UsedMouse;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_interface.player_controller_interface_C.GetUsedGamePad
struct Uplayer_controller_interface_C_GetUsedGamePad_Params
{
	bool                                               UsedGamePad;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
