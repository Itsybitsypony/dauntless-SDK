// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_of_hunt_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function end_of_hunt_function_library.end_of_hunt_function_library_C.GetRankForScore
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Erankings_enum>    Ranking                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uend_of_hunt_function_library_C::STATIC_GetRankForScore(float Score, class UObject* __WorldContext, TEnumAsByte<Erankings_enum>* Ranking)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_hunt_function_library.end_of_hunt_function_library_C.GetRankForScore");

	Uend_of_hunt_function_library_C_GetRankForScore_Params params;
	params.Score = Score;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ranking != nullptr)
		*Ranking = params.Ranking;
}


// Function end_of_hunt_function_library.end_of_hunt_function_library_C.CalculateBestMothBadge
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbadge_display_info> SortedBadgeDisplayInfos        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BestIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uend_of_hunt_function_library_C::STATIC_CalculateBestMothBadge(class UObject* __WorldContext, TArray<struct Fbadge_display_info>* SortedBadgeDisplayInfos, int* BestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_hunt_function_library.end_of_hunt_function_library_C.CalculateBestMothBadge");

	Uend_of_hunt_function_library_C_CalculateBestMothBadge_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedBadgeDisplayInfos != nullptr)
		*SortedBadgeDisplayInfos = params.SortedBadgeDisplayInfos;
	if (BestIndex != nullptr)
		*BestIndex = params.BestIndex;
}


// Function end_of_hunt_function_library.end_of_hunt_function_library_C.CalculateMoth
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fplayer_highlight_info> PlayerScorePairs               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          RandomVariance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fplayer_highlight_info  BestScorePair                  (Parm, OutParm)

void Uend_of_hunt_function_library_C::STATIC_CalculateMoth(float RandomVariance, class UObject* __WorldContext, TArray<struct Fplayer_highlight_info>* PlayerScorePairs, struct Fplayer_highlight_info* BestScorePair)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_hunt_function_library.end_of_hunt_function_library_C.CalculateMoth");

	Uend_of_hunt_function_library_C_CalculateMoth_Params params;
	params.RandomVariance = RandomVariance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScorePairs != nullptr)
		*PlayerScorePairs = params.PlayerScorePairs;
	if (BestScorePair != nullptr)
		*BestScorePair = params.BestScorePair;
}


// Function end_of_hunt_function_library.end_of_hunt_function_library_C.GetBadgeDisplayInfoForPlayer
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbadge_infos>    BadgeInfos                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxBadgesToDisplay             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            SelectedPlayerState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fbadge_display_info> BadgeDisplayInfo               (Parm, OutParm, ZeroConstructor)
// float                          TotalBadgeImpressivenessScore  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BestBadgeClass                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_elite_status> BadgeEliteStatus               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uend_of_hunt_function_library_C::STATIC_GetBadgeDisplayInfoForPlayer(int MaxBadgesToDisplay, class APlayerState* SelectedPlayerState, class UObject* __WorldContext, TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fbadge_display_info>* BadgeDisplayInfo, float* TotalBadgeImpressivenessScore, class UClass** BestBadgeClass, TEnumAsByte<Ebadge_elite_status>* BadgeEliteStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function end_of_hunt_function_library.end_of_hunt_function_library_C.GetBadgeDisplayInfoForPlayer");

	Uend_of_hunt_function_library_C_GetBadgeDisplayInfoForPlayer_Params params;
	params.MaxBadgesToDisplay = MaxBadgesToDisplay;
	params.SelectedPlayerState = SelectedPlayerState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BadgeInfos != nullptr)
		*BadgeInfos = params.BadgeInfos;
	if (BadgeDisplayInfo != nullptr)
		*BadgeDisplayInfo = params.BadgeDisplayInfo;
	if (TotalBadgeImpressivenessScore != nullptr)
		*TotalBadgeImpressivenessScore = params.TotalBadgeImpressivenessScore;
	if (BestBadgeClass != nullptr)
		*BestBadgeClass = params.BestBadgeClass;
	if (BadgeEliteStatus != nullptr)
		*BadgeEliteStatus = params.BadgeEliteStatus;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
