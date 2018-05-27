#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGM_Archon_Prototype_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPGM_Archon_Prototype.BPGM_Archon_Prototype_C
// 0x03E0 (0x0978 - 0x0598)
class ABPGM_Archon_Prototype_C : public AArchonGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)
	class Uend_of_match_rank_bpc_C*                    end_of_match_rank_bpc;                                    // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGuildSystemComponent*                       GuildSystem;                                              // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uai_coordination_manager_bpc_C*              ai_coordination_manager_bpc;                              // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubp_gamemode_behemoth_spawner_component_C*   bp_gamemode_behemoth_spawner_component;                   // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uarchon_gm_telemetry_component_C*            archon_gm_telemetry_component;                            // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Player_Rescues_Remaining;                                 // 0x05D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugPlaySpeed;                                           // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        Player_Colors;                                            // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Requested_Color_Count;                                    // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Player_Corpse_Duration;                                   // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BleedoutDuration;                                         // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    AvailableBehemothClasses;                                 // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       MatchState_1;                                             // 0x0608(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BehemothSpawnTime;                                        // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndOfMissionTimerDuration_Fail;                           // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndOfMissionTimerDuration_Win;                            // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	class Aatmosphere_spawner_bp_C*                    CurrentAtmosphereSpawner;                                 // 0x0620(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMonsterReadyToSpawn;                                    // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_PatrolCenterPoint_C*                     SpawnLocation;                                            // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDangerIncreasePerSecond;                           // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalBleedoutStateLevels;                                 // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MissionDangerLevel;                                       // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DangerToAddOnEnterBleedout;                               // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DangerToRemoveOnExitBleedout;                             // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DangerToAddPerBleedoutLevel;                              // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BehemothSpawned;                                          // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0659(0x0007) MISSED OFFSET
	TArray<struct Fbehemoth_classassetid_struct>       SpawnableBehemothLIst;                                    // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AArchonBehemoth*>                     SpawnedBehemoths;                                         // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               EnableBehemothIntros;                                     // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	int                                                EndOfMissionTimerDuration;                                // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndOfMissionStarted;                                      // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LegalSpawn;                                               // 0x0689(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x068A(0x0006) MISSED OFFSET
	struct FTimerHandle                                DangerTimer;                                              // 0x0690(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DangerLossOnFlee;                                         // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MaxDangerActive;                                          // 0x069C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CombatTextEnabled;                                        // 0x069D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DangerSystemOverride;                                     // 0x069E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x069F(0x0001) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    FaunaTypes;                                               // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        FaunaPackCounts;                                          // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentFaunaCount;                                        // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentFaunaLocation;                                     // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnPlayerBots;                                          // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06C9(0x0003) MISSED OFFSET
	int                                                BotsToSpawn;                                              // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               IntroCinematicEnabledInEditor;                            // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	int                                                NumberOfBotsWhenSolo;                                     // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class AIslandPlayerIntroCinematic_Trigger_BP_C*    IslandPlayerIntroCinematicTrigger;                        // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AArchonCharacter*>                    PlayerCharacters;                                         // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AEndOfHunt_cinematic_C*                      MothCineTrigger;                                          // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     MothLocal;                                                // 0x06F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	class APawn*                                       MothPawn;                                                 // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MothRotation;                                             // 0x0710(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggeredIntroCinematic;                                  // 0x071C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	TArray<class Agatherable_spawn_node_generic_C*>    CachedGatherableSpawnNodes;                               // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	EHuntBiome                                         CachedMapBiome;                                           // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MatchingBiomeFound;                                       // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugGatherableSpawning;                                  // 0x0732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGatherableTier                                    CachedGatherableTier;                                     // 0x0733(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGatherableRarity                                  CachedGatherableRarity;                                   // 0x0734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGatherableCategory                                CachedGatherableCategory;                                 // 0x0735(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0736(0x0002) MISSED OFFSET
	int                                                CachedNumGatherablesToSpawn;                              // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	TArray<class FString>                              CachedDropTables;                                         // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    CachedGatherableBlueprints;                               // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Agatherable_spawn_node_generic_C*            CachedTargetSpawnNode;                                    // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CachedAssetClass;                                         // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      CachedSelectedDropTableID;                                // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class Afauna_interest_point_bp_C*>          CachedFaunaInterestPoints;                                // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UHunt_BehemothList*                          AllBehemoths;                                             // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientPlayerStateWaitTime;                                // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesiredBannerDistance;                                    // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BannerCounter;                                            // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BannerSeparationAngle;                                    // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class Abanner_base_bp_C*>                   SpawnedBanners;                                           // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UHunt_MapList*                               AllMapsList;                                              // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              tempList;                                                 // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EndOfMatch_GameType>                   EndOfMatch_EventType;                                     // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpeningTutorial;                                        // 0x07D1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x07D2(0x0006) MISSED OFFSET
	struct FTimerHandle                                HuntMissionTimer;                                         // 0x07D8(0x0008) (Edit, BlueprintVisible)
	float                                              DangerCountdownTime;                                      // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	struct FTimerHandle                                DangerTimeUpdateTimer;                                    // 0x07E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DangerIncreasePerSecondOutOfCombat;                       // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DangerIncreasePerSecondInCombat;                          // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class ULevelSequence>                    MOTH_Sequence;                                            // 0x07F8(0x0020) (Edit, BlueprintVisible)
	struct FRotator                                    CoreGranting_SequenceSpawnRotation;                       // 0x0818(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CoreGranting_SpawnLocation;                               // 0x0824(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              AdditionalBehemothNames;                                  // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                AllSlayersDownAndTimedOutTimer;                           // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AllSlayersDownAndTimerFinished;                           // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDebugEditorGatherables;                                // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x084A(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         EditorGatherableTest;                                     // 0x0850(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CachedGatherableRowName;                                  // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      AdditionalBehemoth1;                                      // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TotalMissionTimeInSeconds;                                // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	TArray<struct FTimerHandle>                        MissionTimeTimers;                                        // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeWarningInterval;                                      // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlwaysShowTimerThreshold;                                 // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeWarningBufferSeconds;                                 // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimeWarningTimer;                                         // 0x08A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeWarningDuration;                                      // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	struct FTimerHandle                                ShowTimerForeverTimer;                                    // 0x08B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAkAudioEvent*>                       L_AkEvents;                                               // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     PlayerStartCenter;                                        // 0x08C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerStartDirection;                                     // 0x08D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDangerAccrued;                                       // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	struct Fplayer_highlight_info                      MoTHData;                                                 // 0x08E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     Moth_TeamRewardPosition;                                  // 0x0908(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Moth_TeamRewardsRotation;                                 // 0x0914(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Moth_EndVent;                                             // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AArchonBehemoth*                             Moth_Behemoth;                                            // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugNumPlayers;                                          // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	float                                              DistanceToAutoGrabShiniesAtEnd;                           // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndOfMatch_Win;                                           // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0939(0x0003) MISSED OFFSET
	int                                                LocalGatherableMaxWeight;                                 // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocalGatherableRandWeight;                                // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBehemothsSpawned;                                       // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBehemothFlee;                                           // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StartingBannersSpawned;                                   // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	class AActor*                                      MusicSystemActor;                                         // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPGM_Archon_Prototype.BPGM_Archon_Prototype_C");
		return ptr;
	}


	void GetMusicSystem(TScriptInterface<class UBPI_MusicSystem_C>* MusicSystem);
	void GetCurrentSpawnedBehemoths(TArray<class AArchonBehemoth*>* CurrentSpawnedBehemoths);
	void IsIntroCinematicEnabled(bool* Enabled);
	bool DidSetupIntroCinematic();
	void GetGameModeType(TEnumAsByte<Egame_mode_type>* GameModeType);
	void GetDangerLevel(float* Danger);
	void GetCurrentMissionInfo(struct FArchonLobbyMissionInfo* MissionInfo);
	void DebugGetRawExpectedPlayerCountVariable(int* RawExpectedPlayerCount);
	void IsDangerMaxed(bool* DangerMaxed);
	void GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* Behemoths);
	void GetExpectedPlayerCount(int* Count);
	void Assign_Free_Player_Color_Index(int* OutColorIndex);
	void Debug_Get_Player_Color(int InColorIndex, struct FLinearColor* Linear_Color);
	void Get_Remaining_Player_Rescues(int* Remaining_Player_Rescue_Count);
	void MatchEndedForPlayer(class AArchonPlayerController* Player, bool Success, float Duration, class AArchonBehemoth* Behemoth, int CeremonyDuration, float Danger, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, const class FString& MatchmakerHuntID, const struct Fplayer_highlight_info& MOTH_Data, float TeamScore, TArray<class FString>* BehemothRewards, TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fplayer_score_info>* PlayerScores);
	void AutoCollectShinies();
	void Moth_TeamShotSetup();
	void EndOfMatchRankCalculations(struct Fplayer_highlight_info* MoTHData, TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fplayer_score_info>* PlayerIndividualScores, float* TeamScore);
	void MoveCharacterstoArrivalArea();
	void SetAdditionalBehemothNames();
	void GetNumAliveBehemoths(int* AliveBehemoths);
	void UpdateDangerIncreasePerSecond();
	void AddHuntRewards(bool HuntSuccess, class UHuntSystemComponent* HuntSystem, const class FString& MatchmakerHuntID, class AArchonPlayerController* Player, TArray<class FString>* Items, TArray<class FString>* OutItems);
	void GetBehemothByName(const class FString& Name, TAssetPtr<class UClass>* Behemoth, bool* Found);
	void SpawnBehemothAtLoc(class UClass* MonsterClass, const struct FVector& SpawnLocation, const struct FRotator& Rotation, class AArchonBehemoth** Behemoth, struct FTransform* SpawnTransform);
	void GetCurrentMapBiome(EHuntBiome* Biome);
	void CollectBehemothItemGrants(TArray<class FString>* Items);
	void AreAllBehemothsDead(bool* AllDead);
	void MaximumDangerUndone();
	void UpdatePlayerInventoryOnEndOfMatch(class AArchonPlayerController* PlayerController, bool Success, TArray<class FString>* ItemIDs);
	void MaximumDangerReached();
	void ModifyMissionDangerLevel(float Delta);
	void IncreaseDangerOverTime();
	void SpawnAtmosphereFromClass(class UClass* InClass);
	void SetupAtmosphereVariables(class AArchonGameMode* GameMode);
	void SpawnAtmosphere();
	void OnRep_MatchState();
	void UserConstructionScript();
	void OnLoaded_32046D1A48CE7C1A85B79593AA3CF914(class UClass* Loaded);
	void OnLoaded_16AF5FB24915C633B362C19C3AA98F62(class UClass* Loaded);
	void TriggerIntroCinematic(class APlayerController* Player);
	void BindBehemothDeathEvent(class AArchonBehemoth* Behemoth, bool TriggerEndOfMission);
	void On_Monster_Death(class AArchonBehemoth* Behemoth, float FightDuration, bool TriggerEndOfGameCeremony);
	void End_Of_Match_Ceremony(bool Success_, float Duration, class AArchonBehemoth* BehemothKilled, TEnumAsByte<EndOfMatch_GameType> GameMode);
	void AllSlayersDownAndTimedOut();
	void EndMatchDueToEveryoneDead();
	void ShowAllSlayersDown();
	void HideAllSlayersDown();
	void UI_BehemothSlain_Notification(class AArchonBehemoth* Behemoth);
	void MoveCharactersToArrival();
	void ServerExit();
	void EndTutorial();
	void TriggerEndOfHuntSequence();
	void OnSpawnGatherables();
	void SpawnNextGatherableType();
	void SpawnNextGatherable();
	void OnGatherableSpawned(class AActor* Actor);
	void OnFailedToSpawnGatherable();
	void SpawnGatherablesImpl();
	void LevelStartCinematic();
	void ConsoleCommandStartCinematic();
	void IslandArrivalCinematicComplete();
	void Register_Player_Reaching_0_HP(class AArchonCharacter* Dying_Player);
	void Mission_Failure();
	void RegisterPlayerRevived(class AArchonCharacter* Player);
	void FailFromTimeout();
	void K2_OnSetMatchState(struct FName* NewState);
	void ReceiveBeginPlay();
	void UpdateMatchState(const struct FName& MatchState);
	void K2_PostLogin(class APlayerController** NewPlayer);
	void RegisterBehemothFlee();
	void BehemothRequested(const struct FName& Behemoth);
	void RegisterStartOfCombat();
	void K2_OnLogout(class AController** ExitingController);
	void setDanger(float Danger);
	void SetDangerSystemOverride(bool TurnOn_);
	void PlayIntroCinematic();
	void SpawnPlayerStartingBanner(class APawn* Player);
	void UpdateHuntTimeRemaining();
	void AuthStartDangerSystem();
	void ShowMissionTimerWarning();
	void ShowMissionTimerForever();
	void CleanupMissionTimer();
	void FirstTimeMissionWarning();
	void SetMissionTimeRemaining(float MissionTimeRemaining);
	void PauseMissionTimer();
	void OnBehemothSpawned(TArray<class AArchonBehemoth*> Behemoths, class ABP_PatrolCenterPoint_C* SpawnPoint);
	void ExecuteUbergraph_BPGM_Archon_Prototype(int EntryPoint);
	void OnBehemothFlee__DelegateSignature();
	void OnBehemothsSpawned__DelegateSignature(class ABP_PatrolCenterPoint_C* SpawnPoint, TArray<class AArchonBehemoth*>* Behemoths);
	void OnMonsterReadyToSpawn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
