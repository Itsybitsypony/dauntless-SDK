#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_loot_item_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_loot_item_library.bp_loot_item_library_C
// 0x0000 (0x0028 - 0x0028)
class Ubp_loot_item_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_loot_item_library.bp_loot_item_library_C");
		return ptr;
	}


	void STATIC_MatchmakerHuntMatchesTag(const struct FGameplayTag& Tag, class AActor* WorldContextObject, class UObject* __WorldContext, bool* PlayerHuntHasTag);
	void STATIC_PassesBreakCondition(class AArchonBehemoth* Behemoth, const struct Fconditional_break_data& BreakConditions, TEnumAsByte<Ebehemoth_bodypart_type> BrokenPartType, class AArchonPlayerController* PlayerController, class UObject* __WorldContext, bool* PassesConditions);
	void STATIC_GetCraftInformation(const class FString& RecipeID, class AArchonPlayerController* ArchonPlayerController, class UObject* __WorldContext, bool* Can_Craft, struct FText* DisplayName);
	void STATIC_GetLootItems(class UObject* Caller, class AArchonPlayerState* PlayerState, class UObject* __WorldContext, TArray<struct FArchonLoot>* Loot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
