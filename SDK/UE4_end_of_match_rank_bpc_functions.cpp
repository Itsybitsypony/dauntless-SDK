// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_of_match_rank_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateBadges
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbadge_infos>    BadgeInfos                     (Parm, OutParm, ZeroConstructor)
// TArray<struct Fplayer_highlight_info> PlayerHighlightInfos           (Parm, OutParm, ZeroConstructor)

void Uend_of_match_rank_bpc_C::CalculateBadges(TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fplayer_highlight_info>* PlayerHighlightInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateBadges");

	Uend_of_match_rank_bpc_C_CalculateBadges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BadgeInfos != nullptr)
		*BadgeInfos = params.BadgeInfos;
	if (PlayerHighlightInfos != nullptr)
		*PlayerHighlightInfos = params.PlayerHighlightInfos;
}


// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateMatchRanks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalDangerAccrued             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TeamScore                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fplayer_score_info> PlayerIndividualScores         (Parm, OutParm, ZeroConstructor)

void Uend_of_match_rank_bpc_C::CalculateMatchRanks(float TotalDangerAccrued, float* TeamScore, TArray<struct Fplayer_score_info>* PlayerIndividualScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateMatchRanks");

	Uend_of_match_rank_bpc_C_CalculateMatchRanks_Params params;
	params.TotalDangerAccrued = TotalDangerAccrued;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamScore != nullptr)
		*TeamScore = params.TeamScore;
	if (PlayerIndividualScores != nullptr)
		*PlayerIndividualScores = params.PlayerIndividualScores;
}


// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateTeamAndSoloRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TotalBleedouts                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDamageTaken               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          danger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uend_of_match_rank_bpc_C::CalculateTeamAndSoloRank(int TotalBleedouts, float TotalDamageTaken, int NumPlayers, float danger, float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateTeamAndSoloRank");

	Uend_of_match_rank_bpc_C_CalculateTeamAndSoloRank_Params params;
	params.TotalBleedouts = TotalBleedouts;
	params.TotalDamageTaken = TotalDamageTaken;
	params.NumPlayers = NumPlayers;
	params.danger = danger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateRankForPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerState*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDamageFromEveryone        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ValidPlayerCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Erankings_enum>    Ranking                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uend_of_match_rank_bpc_C::CalculateRankForPlayer(class AArchonPlayerState* PlayerState, float TotalDamageFromEveryone, int ValidPlayerCount, float* Score, TEnumAsByte<Erankings_enum>* Ranking)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateRankForPlayer");

	Uend_of_match_rank_bpc_C_CalculateRankForPlayer_Params params;
	params.PlayerState = PlayerState;
	params.TotalDamageFromEveryone = TotalDamageFromEveryone;
	params.ValidPlayerCount = ValidPlayerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
	if (Ranking != nullptr)
		*Ranking = params.Ranking;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
