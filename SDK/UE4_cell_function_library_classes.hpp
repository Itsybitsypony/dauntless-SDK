#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cell_function_library.cell_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Ucell_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cell_function_library.cell_function_library_C");
		return ptr;
	}


	void STATIC_GetIconForCellType(ECellType CellType, bool IsSlotFilled, class UObject* __WorldContext, class UObject** Image);
	void STATIC_GetMaxKeywordLevel(const struct FName& KeywordID, class UObject* __WorldContext, int* NumRanks);
	void STATIC_ProcessCellEffectDescription(const struct FName& CellEffectID, float Magnitude, int Ranks, TEnumAsByte<Ecell_effect_display_type> KeywordDisplayType, class UObject* __WorldContext, struct FText* ParsedDescription);
	void STATIC_AddCellEffectToList(class UObject* __WorldContext, TArray<struct FAppliedCellEffectCounter>* CellEffectList, TArray<struct FPermanentCell>* PermanentCells, TArray<struct FPermanentCellEffect>* PermanentCellEffects, TArray<struct FAppliedCellEffectCounter>* UpdatedCellEffectList);
	void STATIC_GetBaseCellEffectsFromCellContainerInfo(EUpgradeableItemLevel ItemLevel, const struct FPlayFabCellContainerCatalogTableData& CellContainerData, class UObject* WorldContextObject, class UObject* __WorldContext, TArray<struct FAppliedCellEffectCounter>* BaseCellEffects, TArray<struct Fcell_slot_info>* CellSlots, bool* Succeeded);
	void STATIC_GetCellContainerInfoFromItemID(const struct FName& ItemID, class APlayerController* RequestingPlayerController, class UObject* __WorldContext, bool* ItemIsCellSlottable, struct FPlayFabCellContainerCatalogTableData* CellContainerData);
	void STATIC_GetCellInfoFromItem(class AArchonPlayerController* PlayerController, TEnumAsByte<Einventory_or_catalog> LookupIDSource, const class FString& LookupID, EUpgradeableItemLevel LevelIfLookingUpFromCatalog, class UObject* __WorldContext, bool* Succeeded, TArray<struct FAppliedCellEffectCounter>* CellEffects, TArray<struct Fcell_slot_info>* CellSlots);
	void STATIC_GetCellTypeAbbreviationString(ECellType CellType, class UObject* __WorldContext, class FString* AbbreviationString);
	void STATIC_GetCurrentLevelCellEffectDescription(class UObject* __WorldContext);
	void STATIC_GetSuffixForRarity(EItemRarityLevelType Rarity, class UObject* __WorldContext, struct FName* Suffix);
	void STATIC_GetCellEffectsFromCellCatalogEntry(const struct FCellCatalogTableData& CellCatalogData, class UObject* __WorldContext, TArray<struct Fcell_effect_details>* CellEffects);
	void STATIC_ModifyDamageEventdata(float Magnitude, TEnumAsByte<Ecell_damage_modification> WhereShouldMagnitudeBeApplied, const struct FDamageEventData& DamageEventData, class UObject* __WorldContext, bool* OverrodeDamageEventData, struct FDamageEventData* OverriddenDamageEventData);
	void STATIC_CombineCellEffectData(class UObject* __WorldContext, TArray<struct FAppliedCellEffectCounter>* AppliedCellEffects, TArray<struct Fcell_effect_details>* CellEffectDetails);
	void STATIC_ParseCellEffectDescriptionMagnitudes(const struct FText& UnparsedString, float Magnitude, class UObject* __WorldContext, struct FText* ParsedString);
	void STATIC_ProcessCellDescription(const class FString& CellCatalogEntryDescription, float Magnitude, const struct FName& SoloMagnitudeCellEffectName, class UObject* __WorldContext, struct FText* ParsedCellDescription);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
