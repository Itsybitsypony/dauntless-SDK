#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_world_map_helpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass world_map_helpers.world_map_helpers_C
// 0x0000 (0x0028 - 0x0028)
class Uworld_map_helpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass world_map_helpers.world_map_helpers_C");
		return ptr;
	}


	void STATIC_GetBehemothFromQuest(class UQuest* Quest, class APlayerController* PlayerController, class UObject* __WorldContext, struct FName* Behemoth, bool* Success);
	void STATIC_CanQueueForHunt(class APlayerController* PlayerController, class UObject* __WorldContext, bool* AlllowedToQueue, struct FText* ReasonText);
	void STATIC_GetHuntIDBucketsForRegion(class APlayerController* PlayerController, const struct FName& RegionId, bool GetNormalHunts, bool GetHeroicHunts, class UObject* __WorldContext, TArray<struct FName>* HuntIDs_Patrol, TArray<struct FName>* HuntIDs_Expedition, TArray<struct FName>* HuntIDs_Pursuit, TArray<struct FName>* HuntIDs_Quest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
