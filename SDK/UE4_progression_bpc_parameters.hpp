#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function progression_bpc.progression_bpc_C.GetPrestigeRewardProgress
struct Uprogression_bpc_C_GetPrestigeRewardProgress_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingPoints;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.ShouldDisplayPrestigeTrack
struct Uprogression_bpc_C_ShouldDisplayPrestigeTrack_Params
{
	struct FName                                       Progression_Track;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.ShouldGrantPrestigeProgress
struct Uprogression_bpc_C_ShouldGrantPrestigeProgress_Params
{
	struct FName*                                      ProgressionTrack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetTrackMeetsDependenciesToProgress
struct Uprogression_bpc_C_GetTrackMeetsDependenciesToProgress_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasNextRank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetTrackNextRank
struct Uprogression_bpc_C_GetTrackNextRank_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_rank_table_row                 Rank;                                                     // (Parm, OutParm)
	bool                                               HasNextRank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RankId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetTrackCurrentRank
struct Uprogression_bpc_C_GetTrackCurrentRank_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_rank_table_row                 Progress;                                                 // (Parm, OutParm)
};

// Function progression_bpc.progression_bpc_C.GetTrackRemainingPoints
struct Uprogression_bpc_C_GetTrackRemainingPoints_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingPoints;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetTrackNextRankProgress
struct Uprogression_bpc_C_GetTrackNextRankProgress_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetNextRankProgress
struct Uprogression_bpc_C_GetNextRankProgress_Params
{
	struct Fprogression_track_data                     TrackData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetTrackRanksTable
struct Uprogression_bpc_C_GetTrackRanksTable_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  Table;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.HandleGenericRankProgression
struct Uprogression_bpc_C_HandleGenericRankProgression_Params
{
	int                                                Increase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_award                          progression_award;                                        // (Parm, OutParm)
};

// Function progression_bpc.progression_bpc_C.CanTrackDataAcceptProgress
struct Uprogression_bpc_C_CanTrackDataAcceptProgress_Params
{
	struct FName                                       ProgressionTrack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetNewProgressTotal
struct Uprogression_bpc_C_GetNewProgressTotal_Params
{
	int                                                RawIncrease;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousTotal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Increase;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NewTotal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetNextRank
struct Uprogression_bpc_C_GetNextRank_Params
{
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               HasNextRank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_rank_table_row                 Rank;                                                     // (Parm, OutParm)
	struct FName                                       RankId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.SetupProgressionData
struct Uprogression_bpc_C_SetupProgressionData_Params
{
	struct FName                                       TrackName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.DetermineRank
struct Uprogression_bpc_C_DetermineRank_Params
{
	int                                                ProgressAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                AmountForNextRank;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.DetermineMaxProgression
struct Uprogression_bpc_C_DetermineMaxProgression_Params
{
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function progression_bpc.progression_bpc_C.Ranks Sorted Insert
struct Uprogression_bpc_C_Ranks_Sorted_Insert_Params
{
	struct Fprogression_rank_table_row                 Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FName                                       RankId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function progression_bpc.progression_bpc_C.SetupTrackRanks
struct Uprogression_bpc_C_SetupTrackRanks_Params
{
	class UDataTable*                                  RanksTable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fprogression_track_data                     ProgressionData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function progression_bpc.progression_bpc_C.GetProgressionTrackDisplayName
struct Uprogression_bpc_C_GetProgressionTrackDisplayName_Params
{
	struct FName                                       ProgressionTrack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function progression_bpc.progression_bpc_C.Grant Progress Rewards
struct Uprogression_bpc_C_Grant_Progress_Rewards_Params
{
	TArray<struct Fprogression_award>                  Awards;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.GetEntitlementBonus
struct Uprogression_bpc_C_GetEntitlementBonus_Params
{
	float                                              Bonus;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.Handle Core Progression
struct Uprogression_bpc_C_Handle_Core_Progression_Params
{
	struct FProgressTrackReward                        ProgressTrackReward;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fprogression_award                          progression_award;                                        // (Parm, OutParm)
};

// Function progression_bpc.progression_bpc_C.Get Core Progress
struct Uprogression_bpc_C_Get_Core_Progress_Params
{
	struct FName                                       CoreTrackId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RawIncrease;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdjustedIncrease;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumCoresGranted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NewTotal;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.Get Normalized Rank Progress
struct Uprogression_bpc_C_Get_Normalized_Rank_Progress_Params
{
	int                                                Total_Amount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Remaining_Amount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.HandlePlayerAwardedProgress
struct Uprogression_bpc_C_HandlePlayerAwardedProgress_Params
{
	struct FName*                                      ProgressionTrack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RawIncreaseAmount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IncreaseAmount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumRollOvers;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.CanAcceptProgress
struct Uprogression_bpc_C_CanAcceptProgress_Params
{
	struct FName*                                      ProgressionTrack;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.ProgressionReady
struct Uprogression_bpc_C_ProgressionReady_Params
{
};

// Function progression_bpc.progression_bpc_C.ProgressAwarded
struct Uprogression_bpc_C_ProgressAwarded_Params
{
	struct FProgressTrackReward*                       Reward;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function progression_bpc.progression_bpc_C.Send Awards to Client
struct Uprogression_bpc_C_Send_Awards_to_Client_Params
{
	TArray<struct Fprogression_award>                  Awards;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function progression_bpc.progression_bpc_C.Get Pending Awards
struct Uprogression_bpc_C_Get_Pending_Awards_Params
{
	class UCanvasPanel*                                ProgressionContainerPanel;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_bpc.progression_bpc_C.Request Pending Awards from Server
struct Uprogression_bpc_C_Request_Pending_Awards_from_Server_Params
{
};

// Function progression_bpc.progression_bpc_C.ExecuteUbergraph_progression_bpc
struct Uprogression_bpc_C_ExecuteUbergraph_progression_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
