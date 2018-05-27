#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_world_map_helpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function world_map_helpers.world_map_helpers_C.GetBehemothFromQuest
struct Uworld_map_helpers_C_GetBehemothFromQuest_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Behemoth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function world_map_helpers.world_map_helpers_C.CanQueueForHunt
struct Uworld_map_helpers_C_CanQueueForHunt_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlllowedToQueue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReasonText;                                               // (Parm, OutParm)
};

// Function world_map_helpers.world_map_helpers_C.GetHuntIDBucketsForRegion
struct Uworld_map_helpers_C_GetHuntIDBucketsForRegion_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetNormalHunts;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GetHeroicHunts;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIDs_Patrol;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               HuntIDs_Expedition;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               HuntIDs_Pursuit;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               HuntIDs_Quest;                                            // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
