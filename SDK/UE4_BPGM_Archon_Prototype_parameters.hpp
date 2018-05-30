#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGM_Archon_Prototype_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetMusicSystem
struct ABPGM_Archon_Prototype_C_GetMusicSystem_Params
{
	TScriptInterface<class UBPI_MusicSystem_C>         MusicSystem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentSpawnedBehemoths
struct ABPGM_Archon_Prototype_C_GetCurrentSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     CurrentSpawnedBehemoths;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IsIntroCinematicEnabled
struct ABPGM_Archon_Prototype_C_IsIntroCinematicEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.DidSetupIntroCinematic
struct ABPGM_Archon_Prototype_C_DidSetupIntroCinematic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetGameModeType
struct ABPGM_Archon_Prototype_C_GetGameModeType_Params
{
	TEnumAsByte<Egame_mode_type>                       GameModeType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetDangerLevel
struct ABPGM_Archon_Prototype_C_GetDangerLevel_Params
{
	float                                              danger;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentMissionInfo
struct ABPGM_Archon_Prototype_C_GetCurrentMissionInfo_Params
{
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (Parm, OutParm)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.DebugGetRawExpectedPlayerCountVariable
struct ABPGM_Archon_Prototype_C_DebugGetRawExpectedPlayerCountVariable_Params
{
	int                                                RawExpectedPlayerCount;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IsDangerMaxed
struct ABPGM_Archon_Prototype_C_IsDangerMaxed_Params
{
	bool                                               DangerMaxed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetSpawnedBehemoths
struct ABPGM_Archon_Prototype_C_GetSpawnedBehemoths_Params
{
	TArray<class AArchonBehemoth*>                     Behemoths;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetExpectedPlayerCount
struct ABPGM_Archon_Prototype_C_GetExpectedPlayerCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Assign Free Player Color Index
struct ABPGM_Archon_Prototype_C_Assign_Free_Player_Color_Index_Params
{
	int                                                OutColorIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Debug Get Player Color
struct ABPGM_Archon_Prototype_C_Debug_Get_Player_Color_Params
{
	int                                                InColorIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Linear_Color;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Get Remaining Player Rescues
struct ABPGM_Archon_Prototype_C_Get_Remaining_Player_Rescues_Params
{
	int                                                Remaining_Player_Rescue_Count;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MatchEndedForPlayer
struct ABPGM_Archon_Prototype_C_MatchEndedForPlayer_Params
{
	class AArchonPlayerController*                     Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CeremonyDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              danger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EndOfMatch_GameType>                   EndofMatchMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MatchmakerHuntID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class FString>                              BehemothRewards;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Fbadge_infos>                        BadgeInfos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Fplayer_score_info>                  PlayerScores;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct Fplayer_highlight_info                      MOTH_Data;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TeamScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AutoCollectShinies
struct ABPGM_Archon_Prototype_C_AutoCollectShinies_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Moth_TeamShotSetup
struct ABPGM_Archon_Prototype_C_Moth_TeamShotSetup_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndOfMatchRankCalculations
struct ABPGM_Archon_Prototype_C_EndOfMatchRankCalculations_Params
{
	struct Fplayer_highlight_info                      MoTHData;                                                 // (Parm, OutParm)
	TArray<struct Fbadge_infos>                        BadgeInfos;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct Fplayer_score_info>                  PlayerIndividualScores;                                   // (Parm, OutParm, ZeroConstructor)
	float                                              TeamScore;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MoveCharacterstoArrivalArea
struct ABPGM_Archon_Prototype_C_MoveCharacterstoArrivalArea_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetAdditionalBehemothNames
struct ABPGM_Archon_Prototype_C_SetAdditionalBehemothNames_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetNumAliveBehemoths
struct ABPGM_Archon_Prototype_C_GetNumAliveBehemoths_Params
{
	int                                                AliveBehemoths;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateDangerIncreasePerSecond
struct ABPGM_Archon_Prototype_C_UpdateDangerIncreasePerSecond_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AddHuntRewards
struct ABPGM_Archon_Prototype_C_AddHuntRewards_Params
{
	TArray<class FString>                              Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               HuntSuccess;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHuntSystemComponent*                        HuntSystem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MatchmakerHuntID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AArchonPlayerController*                     Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              OutItems;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetBehemothByName
struct ABPGM_Archon_Prototype_C_GetBehemothByName_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TAssetPtr<class UClass>                            Behemoth;                                                 // (Parm, OutParm)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnBehemothAtLoc
struct ABPGM_Archon_Prototype_C_SpawnBehemothAtLoc_Params
{
	class UClass*                                      MonsterClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AArchonBehemoth*                             Behemoth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentMapBiome
struct ABPGM_Archon_Prototype_C_GetCurrentMapBiome_Params
{
	EHuntBiome                                         Biome;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.CollectBehemothItemGrants
struct ABPGM_Archon_Prototype_C_CollectBehemothItemGrants_Params
{
	TArray<class FString>                              Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AreAllBehemothsDead
struct ABPGM_Archon_Prototype_C_AreAllBehemothsDead_Params
{
	bool                                               AllDead;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MaximumDangerUndone
struct ABPGM_Archon_Prototype_C_MaximumDangerUndone_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdatePlayerInventoryOnEndOfMatch
struct ABPGM_Archon_Prototype_C_UpdatePlayerInventoryOnEndOfMatch_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ItemIDs;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MaximumDangerReached
struct ABPGM_Archon_Prototype_C_MaximumDangerReached_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ModifyMissionDangerLevel
struct ABPGM_Archon_Prototype_C_ModifyMissionDangerLevel_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IncreaseDangerOverTime
struct ABPGM_Archon_Prototype_C_IncreaseDangerOverTime_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnAtmosphereFromClass
struct ABPGM_Archon_Prototype_C_SpawnAtmosphereFromClass_Params
{
	class UClass*                                      InClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetupAtmosphereVariables
struct ABPGM_Archon_Prototype_C_SetupAtmosphereVariables_Params
{
	class AArchonGameMode*                             GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnAtmosphere
struct ABPGM_Archon_Prototype_C_SpawnAtmosphere_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnRep_MatchState
struct ABPGM_Archon_Prototype_C_OnRep_MatchState_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UserConstructionScript
struct ABPGM_Archon_Prototype_C_UserConstructionScript_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnLoaded_32046D1A48CE7C1A85B79593AA3CF914
struct ABPGM_Archon_Prototype_C_OnLoaded_32046D1A48CE7C1A85B79593AA3CF914_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnLoaded_16AF5FB24915C633B362C19C3AA98F62
struct ABPGM_Archon_Prototype_C_OnLoaded_16AF5FB24915C633B362C19C3AA98F62_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.TriggerIntroCinematic
struct ABPGM_Archon_Prototype_C_TriggerIntroCinematic_Params
{
	class APlayerController*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.BindBehemothDeathEvent
struct ABPGM_Archon_Prototype_C_BindBehemothDeathEvent_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerEndOfMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.On Monster Death
struct ABPGM_Archon_Prototype_C_On_Monster_Death_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FightDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerEndOfGameCeremony;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.End Of Match Ceremony
struct ABPGM_Archon_Prototype_C_End_Of_Match_Ceremony_Params
{
	bool                                               Success_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             BehemothKilled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EndOfMatch_GameType>                   GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AllSlayersDownAndTimedOut
struct ABPGM_Archon_Prototype_C_AllSlayersDownAndTimedOut_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndMatchDueToEveryoneDead
struct ABPGM_Archon_Prototype_C_EndMatchDueToEveryoneDead_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowAllSlayersDown
struct ABPGM_Archon_Prototype_C_ShowAllSlayersDown_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.HideAllSlayersDown
struct ABPGM_Archon_Prototype_C_HideAllSlayersDown_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UI_BehemothSlain_Notification
struct ABPGM_Archon_Prototype_C_UI_BehemothSlain_Notification_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MoveCharactersToArrival
struct ABPGM_Archon_Prototype_C_MoveCharactersToArrival_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ServerExit
struct ABPGM_Archon_Prototype_C_ServerExit_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndTutorial
struct ABPGM_Archon_Prototype_C_EndTutorial_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.TriggerEndOfHuntSequence
struct ABPGM_Archon_Prototype_C_TriggerEndOfHuntSequence_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnSpawnGatherables
struct ABPGM_Archon_Prototype_C_OnSpawnGatherables_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnNextGatherableType
struct ABPGM_Archon_Prototype_C_SpawnNextGatherableType_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnNextGatherable
struct ABPGM_Archon_Prototype_C_SpawnNextGatherable_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnGatherableSpawned
struct ABPGM_Archon_Prototype_C_OnGatherableSpawned_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnFailedToSpawnGatherable
struct ABPGM_Archon_Prototype_C_OnFailedToSpawnGatherable_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnGatherablesImpl
struct ABPGM_Archon_Prototype_C_SpawnGatherablesImpl_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.LevelStartCinematic
struct ABPGM_Archon_Prototype_C_LevelStartCinematic_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ConsoleCommandStartCinematic
struct ABPGM_Archon_Prototype_C_ConsoleCommandStartCinematic_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IslandArrivalCinematicComplete
struct ABPGM_Archon_Prototype_C_IslandArrivalCinematicComplete_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Register Player Reaching 0 HP
struct ABPGM_Archon_Prototype_C_Register_Player_Reaching_0_HP_Params
{
	class AArchonCharacter*                            Dying_Player;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Mission Failure
struct ABPGM_Archon_Prototype_C_Mission_Failure_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterPlayerRevived
struct ABPGM_Archon_Prototype_C_RegisterPlayerRevived_Params
{
	class AArchonCharacter*                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.FailFromTimeout
struct ABPGM_Archon_Prototype_C_FailFromTimeout_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_OnSetMatchState
struct ABPGM_Archon_Prototype_C_K2_OnSetMatchState_Params
{
	struct FName*                                      NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ReceiveBeginPlay
struct ABPGM_Archon_Prototype_C_ReceiveBeginPlay_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateMatchState
struct ABPGM_Archon_Prototype_C_UpdateMatchState_Params
{
	struct FName                                       MatchState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_PostLogin
struct ABPGM_Archon_Prototype_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterBehemothFlee
struct ABPGM_Archon_Prototype_C_RegisterBehemothFlee_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.BehemothRequested
struct ABPGM_Archon_Prototype_C_BehemothRequested_Params
{
	struct FName                                       Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterStartOfCombat
struct ABPGM_Archon_Prototype_C_RegisterStartOfCombat_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_OnLogout
struct ABPGM_Archon_Prototype_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.setDanger
struct ABPGM_Archon_Prototype_C_setDanger_Params
{
	float                                              danger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetDangerSystemOverride
struct ABPGM_Archon_Prototype_C_SetDangerSystemOverride_Params
{
	bool                                               TurnOn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.PlayIntroCinematic
struct ABPGM_Archon_Prototype_C_PlayIntroCinematic_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnPlayerStartingBanner
struct ABPGM_Archon_Prototype_C_SpawnPlayerStartingBanner_Params
{
	class APawn*                                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateHuntTimeRemaining
struct ABPGM_Archon_Prototype_C_UpdateHuntTimeRemaining_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AuthStartDangerSystem
struct ABPGM_Archon_Prototype_C_AuthStartDangerSystem_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowMissionTimerWarning
struct ABPGM_Archon_Prototype_C_ShowMissionTimerWarning_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowMissionTimerForever
struct ABPGM_Archon_Prototype_C_ShowMissionTimerForever_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.CleanupMissionTimer
struct ABPGM_Archon_Prototype_C_CleanupMissionTimer_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.FirstTimeMissionWarning
struct ABPGM_Archon_Prototype_C_FirstTimeMissionWarning_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetMissionTimeRemaining
struct ABPGM_Archon_Prototype_C_SetMissionTimeRemaining_Params
{
	float                                              MissionTimeRemaining;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.PauseMissionTimer
struct ABPGM_Archon_Prototype_C_PauseMissionTimer_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothSpawned
struct ABPGM_Archon_Prototype_C_OnBehemothSpawned_Params
{
	TArray<class AArchonBehemoth*>                     Behemoths;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ABP_PatrolCenterPoint_C*                     SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ExecuteUbergraph_BPGM_Archon_Prototype
struct ABPGM_Archon_Prototype_C_ExecuteUbergraph_BPGM_Archon_Prototype_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothFlee__DelegateSignature
struct ABPGM_Archon_Prototype_C_OnBehemothFlee__DelegateSignature_Params
{
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothsSpawned__DelegateSignature
struct ABPGM_Archon_Prototype_C_OnBehemothsSpawned__DelegateSignature_Params
{
	TArray<class AArchonBehemoth*>                     Behemoths;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ABP_PatrolCenterPoint_C*                     SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnMonsterReadyToSpawn__DelegateSignature
struct ABPGM_Archon_Prototype_C_OnMonsterReadyToSpawn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
