// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_loot_item_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_loot_item_library.bp_loot_item_library_C.MatchmakerHuntMatchesTag
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerHuntHasTag               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_loot_item_library_C::STATIC_MatchmakerHuntMatchesTag(const struct FGameplayTag& Tag, class AActor* WorldContextObject, class UObject* __WorldContext, bool* PlayerHuntHasTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loot_item_library.bp_loot_item_library_C.MatchmakerHuntMatchesTag");

	Ubp_loot_item_library_C_MatchmakerHuntMatchesTag_Params params;
	params.Tag = Tag;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHuntHasTag != nullptr)
		*PlayerHuntHasTag = params.PlayerHuntHasTag;
}


// Function bp_loot_item_library.bp_loot_item_library_C.PassesBreakCondition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fconditional_break_data BreakConditions                (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<Ebehemoth_bodypart_type> BrokenPartType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonPlayerController* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PassesConditions               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubp_loot_item_library_C::STATIC_PassesBreakCondition(class AArchonBehemoth* Behemoth, const struct Fconditional_break_data& BreakConditions, TEnumAsByte<Ebehemoth_bodypart_type> BrokenPartType, class AArchonPlayerController* PlayerController, class UObject* __WorldContext, bool* PassesConditions)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loot_item_library.bp_loot_item_library_C.PassesBreakCondition");

	Ubp_loot_item_library_C_PassesBreakCondition_Params params;
	params.Behemoth = Behemoth;
	params.BreakConditions = BreakConditions;
	params.BrokenPartType = BrokenPartType;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassesConditions != nullptr)
		*PassesConditions = params.PassesConditions;
}


// Function bp_loot_item_library.bp_loot_item_library_C.GetCraftInformation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AArchonPlayerController* ArchonPlayerController         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_Craft                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (Parm, OutParm)

void Ubp_loot_item_library_C::STATIC_GetCraftInformation(const class FString& RecipeID, class AArchonPlayerController* ArchonPlayerController, class UObject* __WorldContext, bool* Can_Craft, struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loot_item_library.bp_loot_item_library_C.GetCraftInformation");

	Ubp_loot_item_library_C_GetCraftInformation_Params params;
	params.RecipeID = RecipeID;
	params.ArchonPlayerController = ArchonPlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Craft != nullptr)
		*Can_Craft = params.Can_Craft;
	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function bp_loot_item_library.bp_loot_item_library_C.GetLootItems
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Caller                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonPlayerState*      PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FArchonLoot>     Loot                           (Parm, OutParm, ZeroConstructor)

void Ubp_loot_item_library_C::STATIC_GetLootItems(class UObject* Caller, class AArchonPlayerState* PlayerState, class UObject* __WorldContext, TArray<struct FArchonLoot>* Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_loot_item_library.bp_loot_item_library_C.GetLootItems");

	Ubp_loot_item_library_C_GetLootItems_Params params;
	params.Caller = Caller;
	params.PlayerState = PlayerState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loot != nullptr)
		*Loot = params.Loot;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
