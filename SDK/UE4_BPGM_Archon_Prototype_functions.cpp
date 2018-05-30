// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGM_Archon_Prototype_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetMusicSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_MusicSystem_C> MusicSystem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetMusicSystem(TScriptInterface<class UBPI_MusicSystem_C>* MusicSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetMusicSystem");

	ABPGM_Archon_Prototype_C_GetMusicSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MusicSystem != nullptr)
		*MusicSystem = params.MusicSystem;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> CurrentSpawnedBehemoths        (Parm, OutParm, ZeroConstructor)

void ABPGM_Archon_Prototype_C::GetCurrentSpawnedBehemoths(TArray<class AArchonBehemoth*>* CurrentSpawnedBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentSpawnedBehemoths");

	ABPGM_Archon_Prototype_C_GetCurrentSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSpawnedBehemoths != nullptr)
		*CurrentSpawnedBehemoths = params.CurrentSpawnedBehemoths;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IsIntroCinematicEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::IsIntroCinematicEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IsIntroCinematicEnabled");

	ABPGM_Archon_Prototype_C_IsIntroCinematicEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.DidSetupIntroCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPGM_Archon_Prototype_C::DidSetupIntroCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.DidSetupIntroCinematic");

	ABPGM_Archon_Prototype_C_DidSetupIntroCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetGameModeType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Egame_mode_type>   GameModeType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetGameModeType(TEnumAsByte<Egame_mode_type>* GameModeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetGameModeType");

	ABPGM_Archon_Prototype_C_GetGameModeType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameModeType != nullptr)
		*GameModeType = params.GameModeType;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetDangerLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          danger                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetDangerLevel(float* danger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetDangerLevel");

	ABPGM_Archon_Prototype_C_GetDangerLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (danger != nullptr)
		*danger = params.danger;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentMissionInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyMissionInfo MissionInfo                    (Parm, OutParm)

void ABPGM_Archon_Prototype_C::GetCurrentMissionInfo(struct FArchonLobbyMissionInfo* MissionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentMissionInfo");

	ABPGM_Archon_Prototype_C_GetCurrentMissionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissionInfo != nullptr)
		*MissionInfo = params.MissionInfo;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.DebugGetRawExpectedPlayerCountVariable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RawExpectedPlayerCount         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::DebugGetRawExpectedPlayerCountVariable(int* RawExpectedPlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.DebugGetRawExpectedPlayerCountVariable");

	ABPGM_Archon_Prototype_C_DebugGetRawExpectedPlayerCountVariable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RawExpectedPlayerCount != nullptr)
		*RawExpectedPlayerCount = params.RawExpectedPlayerCount;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IsDangerMaxed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           DangerMaxed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::IsDangerMaxed(bool* DangerMaxed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IsDangerMaxed");

	ABPGM_Archon_Prototype_C_IsDangerMaxed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DangerMaxed != nullptr)
		*DangerMaxed = params.DangerMaxed;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> Behemoths                      (Parm, OutParm, ZeroConstructor)

void ABPGM_Archon_Prototype_C::GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* Behemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetSpawnedBehemoths");

	ABPGM_Archon_Prototype_C_GetSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoths != nullptr)
		*Behemoths = params.Behemoths;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetExpectedPlayerCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetExpectedPlayerCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetExpectedPlayerCount");

	ABPGM_Archon_Prototype_C_GetExpectedPlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Assign Free Player Color Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutColorIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::Assign_Free_Player_Color_Index(int* OutColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Assign Free Player Color Index");

	ABPGM_Archon_Prototype_C_Assign_Free_Player_Color_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColorIndex != nullptr)
		*OutColorIndex = params.OutColorIndex;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Debug Get Player Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InColorIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Linear_Color                   (Parm, OutParm, IsPlainOldData)

void ABPGM_Archon_Prototype_C::Debug_Get_Player_Color(int InColorIndex, struct FLinearColor* Linear_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Debug Get Player Color");

	ABPGM_Archon_Prototype_C_Debug_Get_Player_Color_Params params;
	params.InColorIndex = InColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Linear_Color != nullptr)
		*Linear_Color = params.Linear_Color;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Get Remaining Player Rescues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Remaining_Player_Rescue_Count  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::Get_Remaining_Player_Rescues(int* Remaining_Player_Rescue_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Get Remaining Player Rescues");

	ABPGM_Archon_Prototype_C_Get_Remaining_Player_Rescues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Remaining_Player_Rescue_Count != nullptr)
		*Remaining_Player_Rescue_Count = params.Remaining_Player_Rescue_Count;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MatchEndedForPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CeremonyDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          danger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EndOfMatch_GameType> EndofMatchMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchmakerHuntID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class FString>          BehemothRewards                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Fbadge_infos>    BadgeInfos                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Fplayer_score_info> PlayerScores                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct Fplayer_highlight_info  MOTH_Data                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TeamScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::MatchEndedForPlayer(class AArchonPlayerController* Player, bool Success, float Duration, class AArchonBehemoth* Behemoth, int CeremonyDuration, float danger, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, const class FString& MatchmakerHuntID, const struct Fplayer_highlight_info& MOTH_Data, float TeamScore, TArray<class FString>* BehemothRewards, TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fplayer_score_info>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MatchEndedForPlayer");

	ABPGM_Archon_Prototype_C_MatchEndedForPlayer_Params params;
	params.Player = Player;
	params.Success = Success;
	params.Duration = Duration;
	params.Behemoth = Behemoth;
	params.CeremonyDuration = CeremonyDuration;
	params.danger = danger;
	params.EndofMatchMode = EndofMatchMode;
	params.MatchmakerHuntID = MatchmakerHuntID;
	params.MOTH_Data = MOTH_Data;
	params.TeamScore = TeamScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehemothRewards != nullptr)
		*BehemothRewards = params.BehemothRewards;
	if (BadgeInfos != nullptr)
		*BadgeInfos = params.BadgeInfos;
	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AutoCollectShinies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::AutoCollectShinies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AutoCollectShinies");

	ABPGM_Archon_Prototype_C_AutoCollectShinies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Moth_TeamShotSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::Moth_TeamShotSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Moth_TeamShotSetup");

	ABPGM_Archon_Prototype_C_Moth_TeamShotSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndOfMatchRankCalculations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fplayer_highlight_info  MoTHData                       (Parm, OutParm)
// TArray<struct Fbadge_infos>    BadgeInfos                     (Parm, OutParm, ZeroConstructor)
// TArray<struct Fplayer_score_info> PlayerIndividualScores         (Parm, OutParm, ZeroConstructor)
// float                          TeamScore                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::EndOfMatchRankCalculations(struct Fplayer_highlight_info* MoTHData, TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fplayer_score_info>* PlayerIndividualScores, float* TeamScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndOfMatchRankCalculations");

	ABPGM_Archon_Prototype_C_EndOfMatchRankCalculations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoTHData != nullptr)
		*MoTHData = params.MoTHData;
	if (BadgeInfos != nullptr)
		*BadgeInfos = params.BadgeInfos;
	if (PlayerIndividualScores != nullptr)
		*PlayerIndividualScores = params.PlayerIndividualScores;
	if (TeamScore != nullptr)
		*TeamScore = params.TeamScore;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MoveCharacterstoArrivalArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::MoveCharacterstoArrivalArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MoveCharacterstoArrivalArea");

	ABPGM_Archon_Prototype_C_MoveCharacterstoArrivalArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetAdditionalBehemothNames
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::SetAdditionalBehemothNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetAdditionalBehemothNames");

	ABPGM_Archon_Prototype_C_SetAdditionalBehemothNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetNumAliveBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AliveBehemoths                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetNumAliveBehemoths(int* AliveBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetNumAliveBehemoths");

	ABPGM_Archon_Prototype_C_GetNumAliveBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AliveBehemoths != nullptr)
		*AliveBehemoths = params.AliveBehemoths;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateDangerIncreasePerSecond
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::UpdateDangerIncreasePerSecond()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateDangerIncreasePerSecond");

	ABPGM_Archon_Prototype_C_UpdateDangerIncreasePerSecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AddHuntRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           HuntSuccess                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHuntSystemComponent*    HuntSystem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchmakerHuntID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AArchonPlayerController* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          OutItems                       (Parm, OutParm, ZeroConstructor)

void ABPGM_Archon_Prototype_C::AddHuntRewards(bool HuntSuccess, class UHuntSystemComponent* HuntSystem, const class FString& MatchmakerHuntID, class AArchonPlayerController* Player, TArray<class FString>* Items, TArray<class FString>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AddHuntRewards");

	ABPGM_Archon_Prototype_C_AddHuntRewards_Params params;
	params.HuntSuccess = HuntSuccess;
	params.HuntSystem = HuntSystem;
	params.MatchmakerHuntID = MatchmakerHuntID;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetBehemothByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TAssetPtr<class UClass>        Behemoth                       (Parm, OutParm)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetBehemothByName(const class FString& Name, TAssetPtr<class UClass>* Behemoth, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetBehemothByName");

	ABPGM_Archon_Prototype_C_GetBehemothByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoth != nullptr)
		*Behemoth = params.Behemoth;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnBehemothAtLoc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  MonsterClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AArchonBehemoth*         Behemoth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (Parm, OutParm, IsPlainOldData)

void ABPGM_Archon_Prototype_C::SpawnBehemothAtLoc(class UClass* MonsterClass, const struct FVector& SpawnLocation, const struct FRotator& Rotation, class AArchonBehemoth** Behemoth, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnBehemothAtLoc");

	ABPGM_Archon_Prototype_C_SpawnBehemothAtLoc_Params params;
	params.MonsterClass = MonsterClass;
	params.SpawnLocation = SpawnLocation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoth != nullptr)
		*Behemoth = params.Behemoth;
	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentMapBiome
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHuntBiome                     Biome                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::GetCurrentMapBiome(EHuntBiome* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.GetCurrentMapBiome");

	ABPGM_Archon_Prototype_C_GetCurrentMapBiome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Biome != nullptr)
		*Biome = params.Biome;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.CollectBehemothItemGrants
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Items                          (Parm, OutParm, ZeroConstructor)

void ABPGM_Archon_Prototype_C::CollectBehemothItemGrants(TArray<class FString>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.CollectBehemothItemGrants");

	ABPGM_Archon_Prototype_C_CollectBehemothItemGrants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AreAllBehemothsDead
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllDead                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::AreAllBehemothsDead(bool* AllDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AreAllBehemothsDead");

	ABPGM_Archon_Prototype_C_AreAllBehemothsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllDead != nullptr)
		*AllDead = params.AllDead;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MaximumDangerUndone
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::MaximumDangerUndone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MaximumDangerUndone");

	ABPGM_Archon_Prototype_C_MaximumDangerUndone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdatePlayerInventoryOnEndOfMatch
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          ItemIDs                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::UpdatePlayerInventoryOnEndOfMatch(class AArchonPlayerController* PlayerController, bool Success, TArray<class FString>* ItemIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdatePlayerInventoryOnEndOfMatch");

	ABPGM_Archon_Prototype_C_UpdatePlayerInventoryOnEndOfMatch_Params params;
	params.PlayerController = PlayerController;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIDs != nullptr)
		*ItemIDs = params.ItemIDs;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MaximumDangerReached
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::MaximumDangerReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MaximumDangerReached");

	ABPGM_Archon_Prototype_C_MaximumDangerReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ModifyMissionDangerLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::ModifyMissionDangerLevel(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ModifyMissionDangerLevel");

	ABPGM_Archon_Prototype_C_ModifyMissionDangerLevel_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IncreaseDangerOverTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::IncreaseDangerOverTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IncreaseDangerOverTime");

	ABPGM_Archon_Prototype_C_IncreaseDangerOverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnAtmosphereFromClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InClass                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::SpawnAtmosphereFromClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnAtmosphereFromClass");

	ABPGM_Archon_Prototype_C_SpawnAtmosphereFromClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetupAtmosphereVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonGameMode*         GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::SetupAtmosphereVariables(class AArchonGameMode* GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetupAtmosphereVariables");

	ABPGM_Archon_Prototype_C_SetupAtmosphereVariables_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnAtmosphere
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::SpawnAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnAtmosphere");

	ABPGM_Archon_Prototype_C_SpawnAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnRep_MatchState
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::OnRep_MatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnRep_MatchState");

	ABPGM_Archon_Prototype_C_OnRep_MatchState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UserConstructionScript");

	ABPGM_Archon_Prototype_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnLoaded_32046D1A48CE7C1A85B79593AA3CF914
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::OnLoaded_32046D1A48CE7C1A85B79593AA3CF914(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnLoaded_32046D1A48CE7C1A85B79593AA3CF914");

	ABPGM_Archon_Prototype_C_OnLoaded_32046D1A48CE7C1A85B79593AA3CF914_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnLoaded_16AF5FB24915C633B362C19C3AA98F62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::OnLoaded_16AF5FB24915C633B362C19C3AA98F62(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnLoaded_16AF5FB24915C633B362C19C3AA98F62");

	ABPGM_Archon_Prototype_C_OnLoaded_16AF5FB24915C633B362C19C3AA98F62_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.TriggerIntroCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::TriggerIntroCinematic(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.TriggerIntroCinematic");

	ABPGM_Archon_Prototype_C_TriggerIntroCinematic_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.BindBehemothDeathEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerEndOfMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::BindBehemothDeathEvent(class AArchonBehemoth* Behemoth, bool TriggerEndOfMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.BindBehemothDeathEvent");

	ABPGM_Archon_Prototype_C_BindBehemothDeathEvent_Params params;
	params.Behemoth = Behemoth;
	params.TriggerEndOfMission = TriggerEndOfMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.On Monster Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FightDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerEndOfGameCeremony       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::On_Monster_Death(class AArchonBehemoth* Behemoth, float FightDuration, bool TriggerEndOfGameCeremony)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.On Monster Death");

	ABPGM_Archon_Prototype_C_On_Monster_Death_Params params;
	params.Behemoth = Behemoth;
	params.FightDuration = FightDuration;
	params.TriggerEndOfGameCeremony = TriggerEndOfGameCeremony;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.End Of Match Ceremony
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         BehemothKilled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EndOfMatch_GameType> GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::End_Of_Match_Ceremony(bool Success_, float Duration, class AArchonBehemoth* BehemothKilled, TEnumAsByte<EndOfMatch_GameType> GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.End Of Match Ceremony");

	ABPGM_Archon_Prototype_C_End_Of_Match_Ceremony_Params params;
	params.Success_ = Success_;
	params.Duration = Duration;
	params.BehemothKilled = BehemothKilled;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AllSlayersDownAndTimedOut
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::AllSlayersDownAndTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AllSlayersDownAndTimedOut");

	ABPGM_Archon_Prototype_C_AllSlayersDownAndTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndMatchDueToEveryoneDead
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::EndMatchDueToEveryoneDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndMatchDueToEveryoneDead");

	ABPGM_Archon_Prototype_C_EndMatchDueToEveryoneDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowAllSlayersDown
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::ShowAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowAllSlayersDown");

	ABPGM_Archon_Prototype_C_ShowAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.HideAllSlayersDown
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::HideAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.HideAllSlayersDown");

	ABPGM_Archon_Prototype_C_HideAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UI_BehemothSlain_Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::UI_BehemothSlain_Notification(class AArchonBehemoth* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UI_BehemothSlain_Notification");

	ABPGM_Archon_Prototype_C_UI_BehemothSlain_Notification_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MoveCharactersToArrival
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::MoveCharactersToArrival()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.MoveCharactersToArrival");

	ABPGM_Archon_Prototype_C_MoveCharactersToArrival_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ServerExit
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::ServerExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ServerExit");

	ABPGM_Archon_Prototype_C_ServerExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndTutorial
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::EndTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.EndTutorial");

	ABPGM_Archon_Prototype_C_EndTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.TriggerEndOfHuntSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::TriggerEndOfHuntSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.TriggerEndOfHuntSequence");

	ABPGM_Archon_Prototype_C_TriggerEndOfHuntSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnSpawnGatherables
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::OnSpawnGatherables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnSpawnGatherables");

	ABPGM_Archon_Prototype_C_OnSpawnGatherables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnNextGatherableType
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::SpawnNextGatherableType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnNextGatherableType");

	ABPGM_Archon_Prototype_C_SpawnNextGatherableType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnNextGatherable
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::SpawnNextGatherable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnNextGatherable");

	ABPGM_Archon_Prototype_C_SpawnNextGatherable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnGatherableSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::OnGatherableSpawned(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnGatherableSpawned");

	ABPGM_Archon_Prototype_C_OnGatherableSpawned_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnFailedToSpawnGatherable
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::OnFailedToSpawnGatherable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnFailedToSpawnGatherable");

	ABPGM_Archon_Prototype_C_OnFailedToSpawnGatherable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnGatherablesImpl
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::SpawnGatherablesImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnGatherablesImpl");

	ABPGM_Archon_Prototype_C_SpawnGatherablesImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.LevelStartCinematic
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::LevelStartCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.LevelStartCinematic");

	ABPGM_Archon_Prototype_C_LevelStartCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ConsoleCommandStartCinematic
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::ConsoleCommandStartCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ConsoleCommandStartCinematic");

	ABPGM_Archon_Prototype_C_ConsoleCommandStartCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IslandArrivalCinematicComplete
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::IslandArrivalCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.IslandArrivalCinematicComplete");

	ABPGM_Archon_Prototype_C_IslandArrivalCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Register Player Reaching 0 HP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Dying_Player                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::Register_Player_Reaching_0_HP(class AArchonCharacter* Dying_Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Register Player Reaching 0 HP");

	ABPGM_Archon_Prototype_C_Register_Player_Reaching_0_HP_Params params;
	params.Dying_Player = Dying_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Mission Failure
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::Mission_Failure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.Mission Failure");

	ABPGM_Archon_Prototype_C_Mission_Failure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterPlayerRevived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::RegisterPlayerRevived(class AArchonCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterPlayerRevived");

	ABPGM_Archon_Prototype_C_RegisterPlayerRevived_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.FailFromTimeout
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::FailFromTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.FailFromTimeout");

	ABPGM_Archon_Prototype_C_FailFromTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::K2_OnSetMatchState(struct FName* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_OnSetMatchState");

	ABPGM_Archon_Prototype_C_K2_OnSetMatchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPGM_Archon_Prototype_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ReceiveBeginPlay");

	ABPGM_Archon_Prototype_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateMatchState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MatchState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::UpdateMatchState(const struct FName& MatchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateMatchState");

	ABPGM_Archon_Prototype_C_UpdateMatchState_Params params;
	params.MatchState = MatchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_PostLogin");

	ABPGM_Archon_Prototype_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterBehemothFlee
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::RegisterBehemothFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterBehemothFlee");

	ABPGM_Archon_Prototype_C_RegisterBehemothFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.BehemothRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::BehemothRequested(const struct FName& Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.BehemothRequested");

	ABPGM_Archon_Prototype_C_BehemothRequested_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterStartOfCombat
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::RegisterStartOfCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.RegisterStartOfCombat");

	ABPGM_Archon_Prototype_C_RegisterStartOfCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.K2_OnLogout");

	ABPGM_Archon_Prototype_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.setDanger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          danger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::setDanger(float danger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.setDanger");

	ABPGM_Archon_Prototype_C_setDanger_Params params;
	params.danger = danger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetDangerSystemOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::SetDangerSystemOverride(bool TurnOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetDangerSystemOverride");

	ABPGM_Archon_Prototype_C_SetDangerSystemOverride_Params params;
	params.TurnOn_ = TurnOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.PlayIntroCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::PlayIntroCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.PlayIntroCinematic");

	ABPGM_Archon_Prototype_C_PlayIntroCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnPlayerStartingBanner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::SpawnPlayerStartingBanner(class APawn* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SpawnPlayerStartingBanner");

	ABPGM_Archon_Prototype_C_SpawnPlayerStartingBanner_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateHuntTimeRemaining
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::UpdateHuntTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.UpdateHuntTimeRemaining");

	ABPGM_Archon_Prototype_C_UpdateHuntTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AuthStartDangerSystem
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::AuthStartDangerSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.AuthStartDangerSystem");

	ABPGM_Archon_Prototype_C_AuthStartDangerSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowMissionTimerWarning
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::ShowMissionTimerWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowMissionTimerWarning");

	ABPGM_Archon_Prototype_C_ShowMissionTimerWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowMissionTimerForever
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::ShowMissionTimerForever()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ShowMissionTimerForever");

	ABPGM_Archon_Prototype_C_ShowMissionTimerForever_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.CleanupMissionTimer
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::CleanupMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.CleanupMissionTimer");

	ABPGM_Archon_Prototype_C_CleanupMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.FirstTimeMissionWarning
// (BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::FirstTimeMissionWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.FirstTimeMissionWarning");

	ABPGM_Archon_Prototype_C_FirstTimeMissionWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetMissionTimeRemaining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MissionTimeRemaining           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::SetMissionTimeRemaining(float MissionTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.SetMissionTimeRemaining");

	ABPGM_Archon_Prototype_C_SetMissionTimeRemaining_Params params;
	params.MissionTimeRemaining = MissionTimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.PauseMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::PauseMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.PauseMissionTimer");

	ABPGM_Archon_Prototype_C_PauseMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothSpawned
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> Behemoths                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ABP_PatrolCenterPoint_C* SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::OnBehemothSpawned(TArray<class AArchonBehemoth*> Behemoths, class ABP_PatrolCenterPoint_C* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothSpawned");

	ABPGM_Archon_Prototype_C_OnBehemothSpawned_Params params;
	params.Behemoths = Behemoths;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ExecuteUbergraph_BPGM_Archon_Prototype
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::ExecuteUbergraph_BPGM_Archon_Prototype(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.ExecuteUbergraph_BPGM_Archon_Prototype");

	ABPGM_Archon_Prototype_C_ExecuteUbergraph_BPGM_Archon_Prototype_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothFlee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::OnBehemothFlee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothFlee__DelegateSignature");

	ABPGM_Archon_Prototype_C_OnBehemothFlee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothsSpawned__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> Behemoths                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ABP_PatrolCenterPoint_C* SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_Archon_Prototype_C::OnBehemothsSpawned__DelegateSignature(class ABP_PatrolCenterPoint_C* SpawnPoint, TArray<class AArchonBehemoth*>* Behemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnBehemothsSpawned__DelegateSignature");

	ABPGM_Archon_Prototype_C_OnBehemothsSpawned__DelegateSignature_Params params;
	params.SpawnPoint = SpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoths != nullptr)
		*Behemoths = params.Behemoths;
}


// Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnMonsterReadyToSpawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPGM_Archon_Prototype_C::OnMonsterReadyToSpawn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_Archon_Prototype.BPGM_Archon_Prototype_C.OnMonsterReadyToSpawn__DelegateSignature");

	ABPGM_Archon_Prototype_C_OnMonsterReadyToSpawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
