#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass progression_bpc.progression_bpc_C
// 0x0080 (0x0320 - 0x02A0)
class Uprogression_bpc_C : public UProgressionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fprogression_award>                  PendingProgressAwards;                                    // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ChampionACPBonus;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PatronACPBonus;                                           // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LogEntitlementBonuses;                                    // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	class UCanvasPanel*                                ProgressionContainerPanel;                                // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fprogression_award                          LocalProgressionAward;                                    // 0x02D0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct Fprogression_track_data>             RankDataArray;                                            // 0x0308(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              PatronSelfBonus;                                          // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PatronTeamBonus;                                          // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass progression_bpc.progression_bpc_C");
		return ptr;
	}


	void GetPrestigeRewardProgress(const struct FName& Track, float* Progress, int* RemainingPoints);
	bool ShouldDisplayPrestigeTrack(const struct FName& Progression_Track);
	bool ShouldGrantPrestigeProgress(struct FName* ProgressionTrack);
	void GetTrackMeetsDependenciesToProgress(const struct FName& Track, bool* HasNextRank);
	void GetTrackNextRank(const struct FName& Track, struct Fprogression_rank_table_row* Rank, bool* HasNextRank, struct FName* RankId);
	void GetTrackCurrentRank(const struct FName& Track, struct Fprogression_rank_table_row* Progress);
	void GetTrackRemainingPoints(const struct FName& Track, int* RemainingPoints);
	void GetTrackNextRankProgress(const struct FName& Track, float* Progress);
	void GetNextRankProgress(struct Fprogression_track_data* TrackData, float* Progress);
	void GetTrackRanksTable(const struct FName& Track, class UDataTable** Table);
	void HandleGenericRankProgression(int Increase, const struct FName& Track, struct Fprogression_track_data* ProgressionData, struct Fprogression_award* progression_award);
	bool CanTrackDataAcceptProgress(const struct FName& ProgressionTrack, struct Fprogression_track_data* ProgressionData);
	void GetNewProgressTotal(int RawIncrease, int PreviousTotal, struct Fprogression_track_data* ProgressionData, int* Increase, int* NewTotal);
	void GetNextRank(struct Fprogression_track_data* ProgressionData, bool* HasNextRank, struct Fprogression_rank_table_row* Rank, struct FName* RankId);
	void SetupProgressionData(const struct FName& TrackName);
	void DetermineRank(int ProgressAmount, struct Fprogression_track_data* ProgressionData, int* AmountForNextRank);
	void DetermineMaxProgression(struct Fprogression_track_data* ProgressionData);
	void Ranks_Sorted_Insert(struct Fprogression_rank_table_row* Rank, struct FName* RankId, struct Fprogression_track_data* ProgressionData);
	void SetupTrackRanks(class UDataTable* RanksTable, struct Fprogression_track_data* ProgressionData);
	struct FText GetProgressionTrackDisplayName(struct FName* ProgressionTrack);
	void Grant_Progress_Rewards(TArray<struct Fprogression_award>* Awards, bool* Success);
	void GetEntitlementBonus(float* Bonus);
	void Handle_Core_Progression(struct FProgressTrackReward* ProgressTrackReward, struct Fprogression_award* progression_award);
	void Get_Core_Progress(const struct FName& CoreTrackId, int RawIncrease, int* AdjustedIncrease, int* NumCoresGranted, int* NewTotal);
	float Get_Normalized_Rank_Progress(int Total_Amount, int Remaining_Amount);
	int HandlePlayerAwardedProgress(struct FName* ProgressionTrack, int* RawIncreaseAmount, int* IncreaseAmount, int* NumRollOvers);
	bool CanAcceptProgress(struct FName* ProgressionTrack);
	void ProgressionReady();
	void ProgressAwarded(struct FProgressTrackReward* Reward);
	void Send_Awards_to_Client(TArray<struct Fprogression_award> Awards);
	void Get_Pending_Awards(class UCanvasPanel* ProgressionContainerPanel);
	void Request_Pending_Awards_from_Server();
	void ExecuteUbergraph_progression_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
