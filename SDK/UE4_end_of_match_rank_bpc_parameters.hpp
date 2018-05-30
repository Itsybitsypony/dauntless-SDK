#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_of_match_rank_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateBadges
struct Uend_of_match_rank_bpc_C_CalculateBadges_Params
{
	TArray<struct Fbadge_infos>                        BadgeInfos;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<struct Fplayer_highlight_info>              PlayerHighlightInfos;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateMatchRanks
struct Uend_of_match_rank_bpc_C_CalculateMatchRanks_Params
{
	float                                              TotalDangerAccrued;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TeamScore;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fplayer_score_info>                  PlayerIndividualScores;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateTeamAndSoloRank
struct Uend_of_match_rank_bpc_C_CalculateTeamAndSoloRank_Params
{
	int                                                TotalBleedouts;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageTaken;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              danger;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function end_of_match_rank_bpc.end_of_match_rank_bpc_C.CalculateRankForPlayer
struct Uend_of_match_rank_bpc_C_CalculateRankForPlayer_Params
{
	class AArchonPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageFromEveryone;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValidPlayerCount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Erankings_enum>                        Ranking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
