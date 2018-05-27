#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function progression_function_library.progression_function_library_C.PlayerPassesQuestRequirements
struct Uprogression_function_library_C_PlayerPassesQuestRequirements_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuestRequirement>                   QuestRequirements;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Econdition_requirement_type>           RequirementType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PassedQuestRequirements;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetWeaponAbbreviation
struct Uprogression_function_library_C_GetWeaponAbbreviation_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Abbreviation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.LookupCellCatalogRow
struct Uprogression_function_library_C_LookupCellCatalogRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCellCatalogTableData                       CellCatalogRow;                                           // (Parm, OutParm)
	bool                                               FoundRow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetCellCatalogs
struct Uprogression_function_library_C_GetCellCatalogs_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDataTable*>                          CellCatalogs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function progression_function_library.progression_function_library_C.GetCellEffectTables
struct Uprogression_function_library_C_GetCellEffectTables_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDataTable*>                          CellEffectDataTables;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function progression_function_library.progression_function_library_C.LookupCellEffectRow
struct Uprogression_function_library_C_LookupCellEffectRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCellEffectTableData                        CellEffectRow;                                            // (Parm, OutParm)
	bool                                               FoundRow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTableForRow;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetLanternCatalog
struct Uprogression_function_library_C_GetLanternCatalog_Params
{
	class APlayerController*                           RequestingPlayerController;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayFabCatalogDataTable*                    LanternCatalog;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetArmorCatalog
struct Uprogression_function_library_C_GetArmorCatalog_Params
{
	class APlayerController*                           RequestingPlayer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayFabCatalogDataTable*                    ArmorCatalog;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetWeaponCatalog
struct Uprogression_function_library_C_GetWeaponCatalog_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           RequestingController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  GearCatalog;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetLanternResistanceTableRow
struct Uprogression_function_library_C_GetLanternResistanceTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLanternResistanceTableData                 LanternResistanceRow;                                     // (Parm, OutParm)
	bool                                               FoundRow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetWeaponPowerTableRow
struct Uprogression_function_library_C_GetWeaponPowerTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponPowerTableData                       WeaponPowerRow;                                           // (Parm, OutParm)
	bool                                               FoundRow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetArmourResistanceTableRow
struct Uprogression_function_library_C_GetArmourResistanceTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArmourResistanceTableData                  TableRow;                                                 // (Parm, OutParm)
	bool                                               FoundRow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_function_library.progression_function_library_C.GetLanternResistanceTables
struct Uprogression_function_library_C_GetLanternResistanceTables_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDataTable*>                          ResistanceTables;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function progression_function_library.progression_function_library_C.GetArmourResistanceTables
struct Uprogression_function_library_C_GetArmourResistanceTables_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDataTable*>                          ResistanceTables;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function progression_function_library.progression_function_library_C.GetWeaponPowerTables
struct Uprogression_function_library_C_GetWeaponPowerTables_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDataTable*>                          PowerTables;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function progression_function_library.progression_function_library_C.IsPlayerInNewOBProgression
struct Uprogression_function_library_C_IsPlayerInNewOBProgression_Params
{
	class APlayerController*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInNewOBProgression;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
