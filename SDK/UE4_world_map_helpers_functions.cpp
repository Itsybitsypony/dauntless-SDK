// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_world_map_helpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function world_map_helpers.world_map_helpers_C.GetBehemothFromQuest
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Behemoth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uworld_map_helpers_C::STATIC_GetBehemothFromQuest(class UQuest* Quest, class APlayerController* PlayerController, class UObject* __WorldContext, struct FName* Behemoth, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_helpers.world_map_helpers_C.GetBehemothFromQuest");

	Uworld_map_helpers_C_GetBehemothFromQuest_Params params;
	params.Quest = Quest;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Behemoth != nullptr)
		*Behemoth = params.Behemoth;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function world_map_helpers.world_map_helpers_C.CanQueueForHunt
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlllowedToQueue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReasonText                     (Parm, OutParm)

void Uworld_map_helpers_C::STATIC_CanQueueForHunt(class APlayerController* PlayerController, class UObject* __WorldContext, bool* AlllowedToQueue, struct FText* ReasonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_helpers.world_map_helpers_C.CanQueueForHunt");

	Uworld_map_helpers_C_CanQueueForHunt_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlllowedToQueue != nullptr)
		*AlllowedToQueue = params.AlllowedToQueue;
	if (ReasonText != nullptr)
		*ReasonText = params.ReasonText;
}


// Function world_map_helpers.world_map_helpers_C.GetHuntIDBucketsForRegion
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RegionId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetNormalHunts                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GetHeroicHunts                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIDs_Patrol                 (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           HuntIDs_Expedition             (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           HuntIDs_Pursuit                (Parm, OutParm, ZeroConstructor)
// TArray<struct FName>           HuntIDs_Quest                  (Parm, OutParm, ZeroConstructor)

void Uworld_map_helpers_C::STATIC_GetHuntIDBucketsForRegion(class APlayerController* PlayerController, const struct FName& RegionId, bool GetNormalHunts, bool GetHeroicHunts, class UObject* __WorldContext, TArray<struct FName>* HuntIDs_Patrol, TArray<struct FName>* HuntIDs_Expedition, TArray<struct FName>* HuntIDs_Pursuit, TArray<struct FName>* HuntIDs_Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_helpers.world_map_helpers_C.GetHuntIDBucketsForRegion");

	Uworld_map_helpers_C_GetHuntIDBucketsForRegion_Params params;
	params.PlayerController = PlayerController;
	params.RegionId = RegionId;
	params.GetNormalHunts = GetNormalHunts;
	params.GetHeroicHunts = GetHeroicHunts;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIDs_Patrol != nullptr)
		*HuntIDs_Patrol = params.HuntIDs_Patrol;
	if (HuntIDs_Expedition != nullptr)
		*HuntIDs_Expedition = params.HuntIDs_Expedition;
	if (HuntIDs_Pursuit != nullptr)
		*HuntIDs_Pursuit = params.HuntIDs_Pursuit;
	if (HuntIDs_Quest != nullptr)
		*HuntIDs_Quest = params.HuntIDs_Quest;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
