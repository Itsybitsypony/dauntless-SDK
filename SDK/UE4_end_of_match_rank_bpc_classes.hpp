#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_of_match_rank_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass end_of_match_rank_bpc.end_of_match_rank_bpc_C
// 0x0048 (0x0218 - 0x01D0)
class Uend_of_match_rank_bpc_C : public UActorComponent
{
public:
	float                                              Ranking_PerBleedoutPenalty;                               // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_DmgTaken_Max;                                     // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_DmgTakenWeight;                                   // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_DmgDealtMax;                                      // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_BleedoutClampPerBleedout;                         // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_BleedoutClampUpper;                               // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_IndividualBaseScore;                              // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugScores;                                              // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	float                                              Ranking_DmgDealtWeight;                                   // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_TeamDangerAccruedMin;                             // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_TeamDangerAccruedMax;                             // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_TeamDangerWeight;                                 // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ranking_TeamBaseScore;                                    // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AvailableBadges;                                          // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass end_of_match_rank_bpc.end_of_match_rank_bpc_C");
		return ptr;
	}


	void CalculateBadges(TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fplayer_highlight_info>* PlayerHighlightInfos);
	void CalculateMatchRanks(float TotalDangerAccrued, float* TeamScore, TArray<struct Fplayer_score_info>* PlayerIndividualScores);
	void CalculateTeamAndSoloRank(int TotalBleedouts, float TotalDamageTaken, int NumPlayers, float Danger, float* Score);
	void CalculateRankForPlayer(class AArchonPlayerState* PlayerState, float TotalDamageFromEveryone, int ValidPlayerCount, float* Score, TEnumAsByte<Erankings_enum>* Ranking);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
