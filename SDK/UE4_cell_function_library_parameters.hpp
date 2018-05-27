#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cell_function_library.cell_function_library_C.GetIconForCellType
struct Ucell_function_library_C_GetIconForCellType_Params
{
	ECellType                                          CellType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSlotFilled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Image;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cell_function_library.cell_function_library_C.GetMaxKeywordLevel
struct Ucell_function_library_C_GetMaxKeywordLevel_Params
{
	struct FName                                       KeywordID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumRanks;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cell_function_library.cell_function_library_C.ProcessCellEffectDescription
struct Ucell_function_library_C_ProcessCellEffectDescription_Params
{
	struct FName                                       CellEffectID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ranks;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ecell_effect_display_type>             KeywordDisplayType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ParsedDescription;                                        // (Parm, OutParm)
};

// Function cell_function_library.cell_function_library_C.AddCellEffectToList
struct Ucell_function_library_C_AddCellEffectToList_Params
{
	TArray<struct FAppliedCellEffectCounter>           CellEffectList;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPermanentCell>                      PermanentCells;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPermanentCellEffect>                PermanentCellEffects;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           UpdatedCellEffectList;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function cell_function_library.cell_function_library_C.GetBaseCellEffectsFromCellContainerInfo
struct Ucell_function_library_C_GetBaseCellEffectsFromCellContainerInfo_Params
{
	EUpgradeableItemLevel                              ItemLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayFabCellContainerCatalogTableData       CellContainerData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           BaseCellEffects;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct Fcell_slot_info>                     CellSlots;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cell_function_library.cell_function_library_C.GetCellContainerInfoFromItemID
struct Ucell_function_library_C_GetCellContainerInfoFromItemID_Params
{
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           RequestingPlayerController;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItemIsCellSlottable;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPlayFabCellContainerCatalogTableData       CellContainerData;                                        // (Parm, OutParm)
};

// Function cell_function_library.cell_function_library_C.GetCellInfoFromItem
struct Ucell_function_library_C_GetCellInfoFromItem_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Einventory_or_catalog>                 LookupIDSource;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      LookupID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EUpgradeableItemLevel                              LevelIfLookingUpFromCatalog;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           CellEffects;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct Fcell_slot_info>                     CellSlots;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function cell_function_library.cell_function_library_C.GetCellTypeAbbreviationString
struct Ucell_function_library_C_GetCellTypeAbbreviationString_Params
{
	ECellType                                          CellType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AbbreviationString;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function cell_function_library.cell_function_library_C.GetCurrentLevelCellEffectDescription
struct Ucell_function_library_C_GetCurrentLevelCellEffectDescription_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_function_library.cell_function_library_C.GetSuffixForRarity
struct Ucell_function_library_C_GetSuffixForRarity_Params
{
	EItemRarityLevelType                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Suffix;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cell_function_library.cell_function_library_C.GetCellEffectsFromCellCatalogEntry
struct Ucell_function_library_C_GetCellEffectsFromCellCatalogEntry_Params
{
	struct FCellCatalogTableData                       CellCatalogData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fcell_effect_details>                CellEffects;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function cell_function_library.cell_function_library_C.ModifyDamageEventdata
struct Ucell_function_library_C_ModifyDamageEventdata_Params
{
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ecell_damage_modification>             WhereShouldMagnitudeBeApplied;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrodeDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
};

// Function cell_function_library.cell_function_library_C.CombineCellEffectData
struct Ucell_function_library_C_CombineCellEffectData_Params
{
	TArray<struct FAppliedCellEffectCounter>           AppliedCellEffects;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fcell_effect_details>                CellEffectDetails;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function cell_function_library.cell_function_library_C.ParseCellEffectDescriptionMagnitudes
struct Ucell_function_library_C_ParseCellEffectDescriptionMagnitudes_Params
{
	struct FText                                       UnparsedString;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ParsedString;                                             // (Parm, OutParm)
};

// Function cell_function_library.cell_function_library_C.ProcessCellDescription
struct Ucell_function_library_C_ProcessCellDescription_Params
{
	class FString                                      CellCatalogEntryDescription;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoloMagnitudeCellEffectName;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ParsedCellDescription;                                    // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
