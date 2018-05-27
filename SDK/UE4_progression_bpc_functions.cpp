// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_bpc.progression_bpc_C.GetPrestigeRewardProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RemainingPoints                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetPrestigeRewardProgress(const struct FName& Track, float* Progress, int* RemainingPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetPrestigeRewardProgress");

	Uprogression_bpc_C_GetPrestigeRewardProgress_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
	if (RemainingPoints != nullptr)
		*RemainingPoints = params.RemainingPoints;
}


// Function progression_bpc.progression_bpc_C.ShouldDisplayPrestigeTrack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Progression_Track              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uprogression_bpc_C::ShouldDisplayPrestigeTrack(const struct FName& Progression_Track)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.ShouldDisplayPrestigeTrack");

	Uprogression_bpc_C_ShouldDisplayPrestigeTrack_Params params;
	params.Progression_Track = Progression_Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.ShouldGrantPrestigeProgress
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ProgressionTrack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uprogression_bpc_C::ShouldGrantPrestigeProgress(struct FName* ProgressionTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.ShouldGrantPrestigeProgress");

	Uprogression_bpc_C_ShouldGrantPrestigeProgress_Params params;
	params.ProgressionTrack = ProgressionTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.GetTrackMeetsDependenciesToProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasNextRank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetTrackMeetsDependenciesToProgress(const struct FName& Track, bool* HasNextRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetTrackMeetsDependenciesToProgress");

	Uprogression_bpc_C_GetTrackMeetsDependenciesToProgress_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNextRank != nullptr)
		*HasNextRank = params.HasNextRank;
}


// Function progression_bpc.progression_bpc_C.GetTrackNextRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_rank_table_row Rank                           (Parm, OutParm)
// bool                           HasNextRank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   RankId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetTrackNextRank(const struct FName& Track, struct Fprogression_rank_table_row* Rank, bool* HasNextRank, struct FName* RankId)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetTrackNextRank");

	Uprogression_bpc_C_GetTrackNextRank_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
	if (HasNextRank != nullptr)
		*HasNextRank = params.HasNextRank;
	if (RankId != nullptr)
		*RankId = params.RankId;
}


// Function progression_bpc.progression_bpc_C.GetTrackCurrentRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_rank_table_row Progress                       (Parm, OutParm)

void Uprogression_bpc_C::GetTrackCurrentRank(const struct FName& Track, struct Fprogression_rank_table_row* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetTrackCurrentRank");

	Uprogression_bpc_C_GetTrackCurrentRank_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function progression_bpc.progression_bpc_C.GetTrackRemainingPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RemainingPoints                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetTrackRemainingPoints(const struct FName& Track, int* RemainingPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetTrackRemainingPoints");

	Uprogression_bpc_C_GetTrackRemainingPoints_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingPoints != nullptr)
		*RemainingPoints = params.RemainingPoints;
}


// Function progression_bpc.progression_bpc_C.GetTrackNextRankProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetTrackNextRankProgress(const struct FName& Track, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetTrackNextRankProgress");

	Uprogression_bpc_C_GetTrackNextRankProgress_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function progression_bpc.progression_bpc_C.GetNextRankProgress
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_track_data TrackData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetNextRankProgress(struct Fprogression_track_data* TrackData, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetNextRankProgress");

	Uprogression_bpc_C_GetNextRankProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrackData != nullptr)
		*TrackData = params.TrackData;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function progression_bpc.progression_bpc_C.GetTrackRanksTable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              Table                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetTrackRanksTable(const struct FName& Track, class UDataTable** Table)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetTrackRanksTable");

	Uprogression_bpc_C_GetTrackRanksTable_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Table != nullptr)
		*Table = params.Table;
}


// Function progression_bpc.progression_bpc_C.HandleGenericRankProgression
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Increase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_award      progression_award              (Parm, OutParm)

void Uprogression_bpc_C::HandleGenericRankProgression(int Increase, const struct FName& Track, struct Fprogression_track_data* ProgressionData, struct Fprogression_award* progression_award)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.HandleGenericRankProgression");

	Uprogression_bpc_C_HandleGenericRankProgression_Params params;
	params.Increase = Increase;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
	if (progression_award != nullptr)
		*progression_award = params.progression_award;
}


// Function progression_bpc.progression_bpc_C.CanTrackDataAcceptProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ProgressionTrack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uprogression_bpc_C::CanTrackDataAcceptProgress(const struct FName& ProgressionTrack, struct Fprogression_track_data* ProgressionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.CanTrackDataAcceptProgress");

	Uprogression_bpc_C_CanTrackDataAcceptProgress_Params params;
	params.ProgressionTrack = ProgressionTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.GetNewProgressTotal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            RawIncrease                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviousTotal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Increase                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NewTotal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetNewProgressTotal(int RawIncrease, int PreviousTotal, struct Fprogression_track_data* ProgressionData, int* Increase, int* NewTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetNewProgressTotal");

	Uprogression_bpc_C_GetNewProgressTotal_Params params;
	params.RawIncrease = RawIncrease;
	params.PreviousTotal = PreviousTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
	if (Increase != nullptr)
		*Increase = params.Increase;
	if (NewTotal != nullptr)
		*NewTotal = params.NewTotal;
}


// Function progression_bpc.progression_bpc_C.GetNextRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           HasNextRank                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_rank_table_row Rank                           (Parm, OutParm)
// struct FName                   RankId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetNextRank(struct Fprogression_track_data* ProgressionData, bool* HasNextRank, struct Fprogression_rank_table_row* Rank, struct FName* RankId)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetNextRank");

	Uprogression_bpc_C_GetNextRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
	if (HasNextRank != nullptr)
		*HasNextRank = params.HasNextRank;
	if (Rank != nullptr)
		*Rank = params.Rank;
	if (RankId != nullptr)
		*RankId = params.RankId;
}


// Function progression_bpc.progression_bpc_C.SetupProgressionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::SetupProgressionData(const struct FName& TrackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.SetupProgressionData");

	Uprogression_bpc_C_SetupProgressionData_Params params;
	params.TrackName = TrackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_bpc.progression_bpc_C.DetermineRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProgressAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            AmountForNextRank              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::DetermineRank(int ProgressAmount, struct Fprogression_track_data* ProgressionData, int* AmountForNextRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.DetermineRank");

	Uprogression_bpc_C_DetermineRank_Params params;
	params.ProgressAmount = ProgressAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
	if (AmountForNextRank != nullptr)
		*AmountForNextRank = params.AmountForNextRank;
}


// Function progression_bpc.progression_bpc_C.DetermineMaxProgression
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uprogression_bpc_C::DetermineMaxProgression(struct Fprogression_track_data* ProgressionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.DetermineMaxProgression");

	Uprogression_bpc_C_DetermineMaxProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
}


// Function progression_bpc.progression_bpc_C.Ranks Sorted Insert
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_rank_table_row Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FName                   RankId                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uprogression_bpc_C::Ranks_Sorted_Insert(struct Fprogression_rank_table_row* Rank, struct FName* RankId, struct Fprogression_track_data* ProgressionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Ranks Sorted Insert");

	Uprogression_bpc_C_Ranks_Sorted_Insert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
	if (RankId != nullptr)
		*RankId = params.RankId;
	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
}


// Function progression_bpc.progression_bpc_C.SetupTrackRanks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              RanksTable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fprogression_track_data ProgressionData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uprogression_bpc_C::SetupTrackRanks(class UDataTable* RanksTable, struct Fprogression_track_data* ProgressionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.SetupTrackRanks");

	Uprogression_bpc_C_SetupTrackRanks_Params params;
	params.RanksTable = RanksTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionData != nullptr)
		*ProgressionData = params.ProgressionData;
}


// Function progression_bpc.progression_bpc_C.GetProgressionTrackDisplayName
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ProgressionTrack               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uprogression_bpc_C::GetProgressionTrackDisplayName(struct FName* ProgressionTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetProgressionTrackDisplayName");

	Uprogression_bpc_C_GetProgressionTrackDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressionTrack != nullptr)
		*ProgressionTrack = params.ProgressionTrack;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.Grant Progress Rewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fprogression_award> Awards                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::Grant_Progress_Rewards(TArray<struct Fprogression_award>* Awards, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Grant Progress Rewards");

	Uprogression_bpc_C_Grant_Progress_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Awards != nullptr)
		*Awards = params.Awards;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function progression_bpc.progression_bpc_C.GetEntitlementBonus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Bonus                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::GetEntitlementBonus(float* Bonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.GetEntitlementBonus");

	Uprogression_bpc_C_GetEntitlementBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bonus != nullptr)
		*Bonus = params.Bonus;
}


// Function progression_bpc.progression_bpc_C.Handle Core Progression
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProgressTrackReward    ProgressTrackReward            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fprogression_award      progression_award              (Parm, OutParm)

void Uprogression_bpc_C::Handle_Core_Progression(struct FProgressTrackReward* ProgressTrackReward, struct Fprogression_award* progression_award)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Handle Core Progression");

	Uprogression_bpc_C_Handle_Core_Progression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProgressTrackReward != nullptr)
		*ProgressTrackReward = params.ProgressTrackReward;
	if (progression_award != nullptr)
		*progression_award = params.progression_award;
}


// Function progression_bpc.progression_bpc_C.Get Core Progress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CoreTrackId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RawIncrease                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AdjustedIncrease               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumCoresGranted                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NewTotal                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::Get_Core_Progress(const struct FName& CoreTrackId, int RawIncrease, int* AdjustedIncrease, int* NumCoresGranted, int* NewTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Get Core Progress");

	Uprogression_bpc_C_Get_Core_Progress_Params params;
	params.CoreTrackId = CoreTrackId;
	params.RawIncrease = RawIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustedIncrease != nullptr)
		*AdjustedIncrease = params.AdjustedIncrease;
	if (NumCoresGranted != nullptr)
		*NumCoresGranted = params.NumCoresGranted;
	if (NewTotal != nullptr)
		*NewTotal = params.NewTotal;
}


// Function progression_bpc.progression_bpc_C.Get Normalized Rank Progress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Total_Amount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Remaining_Amount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uprogression_bpc_C::Get_Normalized_Rank_Progress(int Total_Amount, int Remaining_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Get Normalized Rank Progress");

	Uprogression_bpc_C_Get_Normalized_Rank_Progress_Params params;
	params.Total_Amount = Total_Amount;
	params.Remaining_Amount = Remaining_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.HandlePlayerAwardedProgress
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ProgressionTrack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           RawIncreaseAmount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IncreaseAmount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumRollOvers                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int Uprogression_bpc_C::HandlePlayerAwardedProgress(struct FName* ProgressionTrack, int* RawIncreaseAmount, int* IncreaseAmount, int* NumRollOvers)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.HandlePlayerAwardedProgress");

	Uprogression_bpc_C_HandlePlayerAwardedProgress_Params params;
	params.ProgressionTrack = ProgressionTrack;
	params.RawIncreaseAmount = RawIncreaseAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IncreaseAmount != nullptr)
		*IncreaseAmount = params.IncreaseAmount;
	if (NumRollOvers != nullptr)
		*NumRollOvers = params.NumRollOvers;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.CanAcceptProgress
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ProgressionTrack               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uprogression_bpc_C::CanAcceptProgress(struct FName* ProgressionTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.CanAcceptProgress");

	Uprogression_bpc_C_CanAcceptProgress_Params params;
	params.ProgressionTrack = ProgressionTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function progression_bpc.progression_bpc_C.ProgressionReady
// (Event, Public, BlueprintEvent)

void Uprogression_bpc_C::ProgressionReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.ProgressionReady");

	Uprogression_bpc_C_ProgressionReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_bpc.progression_bpc_C.ProgressAwarded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FProgressTrackReward*   Reward                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uprogression_bpc_C::ProgressAwarded(struct FProgressTrackReward* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.ProgressAwarded");

	Uprogression_bpc_C_ProgressAwarded_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_bpc.progression_bpc_C.Send Awards to Client
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fprogression_award> Awards                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uprogression_bpc_C::Send_Awards_to_Client(TArray<struct Fprogression_award> Awards)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Send Awards to Client");

	Uprogression_bpc_C_Send_Awards_to_Client_Params params;
	params.Awards = Awards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_bpc.progression_bpc_C.Get Pending Awards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            ProgressionContainerPanel      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::Get_Pending_Awards(class UCanvasPanel* ProgressionContainerPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Get Pending Awards");

	Uprogression_bpc_C_Get_Pending_Awards_Params params;
	params.ProgressionContainerPanel = ProgressionContainerPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_bpc.progression_bpc_C.Request Pending Awards from Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Uprogression_bpc_C::Request_Pending_Awards_from_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.Request Pending Awards from Server");

	Uprogression_bpc_C_Request_Pending_Awards_from_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_bpc.progression_bpc_C.ExecuteUbergraph_progression_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_bpc_C::ExecuteUbergraph_progression_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_bpc.progression_bpc_C.ExecuteUbergraph_progression_bpc");

	Uprogression_bpc_C_ExecuteUbergraph_progression_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
