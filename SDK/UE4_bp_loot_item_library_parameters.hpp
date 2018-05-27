#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_loot_item_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_loot_item_library.bp_loot_item_library_C.MatchmakerHuntMatchesTag
struct Ubp_loot_item_library_C_MatchmakerHuntMatchesTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerHuntHasTag;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_loot_item_library.bp_loot_item_library_C.PassesBreakCondition
struct Ubp_loot_item_library_C_PassesBreakCondition_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fconditional_break_data                     BreakConditions;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<Ebehemoth_bodypart_type>               BrokenPartType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PassesConditions;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_loot_item_library.bp_loot_item_library_C.GetCraftInformation
struct Ubp_loot_item_library_C_GetCraftInformation_Params
{
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AArchonPlayerController*                     ArchonPlayerController;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Craft;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function bp_loot_item_library.bp_loot_item_library_C.GetLootItems
struct Ubp_loot_item_library_C_GetLootItems_Params
{
	class UObject*                                     Caller;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonPlayerState*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FArchonLoot>                         Loot;                                                     // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
