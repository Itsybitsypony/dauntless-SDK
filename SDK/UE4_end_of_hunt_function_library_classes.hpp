#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_of_hunt_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass end_of_hunt_function_library.end_of_hunt_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Uend_of_hunt_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass end_of_hunt_function_library.end_of_hunt_function_library_C");
		return ptr;
	}


	void STATIC_GetRankForScore(float Score, class UObject* __WorldContext, TEnumAsByte<Erankings_enum>* Ranking);
	void STATIC_CalculateBestMothBadge(class UObject* __WorldContext, TArray<struct Fbadge_display_info>* SortedBadgeDisplayInfos, int* BestIndex);
	void STATIC_CalculateMoth(float RandomVariance, class UObject* __WorldContext, TArray<struct Fplayer_highlight_info>* PlayerScorePairs, struct Fplayer_highlight_info* BestScorePair);
	void STATIC_GetBadgeDisplayInfoForPlayer(int MaxBadgesToDisplay, class APlayerState* SelectedPlayerState, class UObject* __WorldContext, TArray<struct Fbadge_infos>* BadgeInfos, TArray<struct Fbadge_display_info>* BadgeDisplayInfo, float* TotalBadgeImpressivenessScore, class UClass** BestBadgeClass, TEnumAsByte<Ebadge_elite_status>* BadgeEliteStatus);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
