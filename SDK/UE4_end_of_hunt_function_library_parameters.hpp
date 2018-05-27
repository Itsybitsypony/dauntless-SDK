#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_of_hunt_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function end_of_hunt_function_library.end_of_hunt_function_library_C.GetRankForScore
struct Uend_of_hunt_function_library_C_GetRankForScore_Params
{
	float                                              Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Erankings_enum>                        Ranking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function end_of_hunt_function_library.end_of_hunt_function_library_C.CalculateBestMothBadge
struct Uend_of_hunt_function_library_C_CalculateBestMothBadge_Params
{
	TArray<struct Fbadge_display_info>                 SortedBadgeDisplayInfos;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BestIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function end_of_hunt_function_library.end_of_hunt_function_library_C.CalculateMoth
struct Uend_of_hunt_function_library_C_CalculateMoth_Params
{
	TArray<struct Fplayer_highlight_info>              PlayerScorePairs;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              RandomVariance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fplayer_highlight_info                      BestScorePair;                                            // (Parm, OutParm)
};

// Function end_of_hunt_function_library.end_of_hunt_function_library_C.GetBadgeDisplayInfoForPlayer
struct Uend_of_hunt_function_library_C_GetBadgeDisplayInfoForPlayer_Params
{
	TArray<struct Fbadge_infos>                        BadgeInfos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxBadgesToDisplay;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                SelectedPlayerState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fbadge_display_info>                 BadgeDisplayInfo;                                         // (Parm, OutParm, ZeroConstructor)
	float                                              TotalBadgeImpressivenessScore;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BestBadgeClass;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   BadgeEliteStatus;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
