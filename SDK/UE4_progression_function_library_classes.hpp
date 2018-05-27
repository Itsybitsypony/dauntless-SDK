#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass progression_function_library.progression_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Uprogression_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass progression_function_library.progression_function_library_C");
		return ptr;
	}


	void STATIC_PlayerPassesQuestRequirements(class AArchonPlayerController* PlayerController, TEnumAsByte<Econdition_requirement_type> RequirementType, class UObject* __WorldContext, TArray<struct FQuestRequirement>* QuestRequirements, bool* PassedQuestRequirements);
	void STATIC_GetWeaponAbbreviation(EWeaponType WeaponType, class UObject* __WorldContext, struct FName* Abbreviation);
	void STATIC_LookupCellCatalogRow(const struct FName& RowName, class UObject* __WorldContext, struct FCellCatalogTableData* CellCatalogRow, bool* FoundRow);
	void STATIC_GetCellCatalogs(class UObject* __WorldContext, TArray<class UDataTable*>* CellCatalogs);
	void STATIC_GetCellEffectTables(class UObject* __WorldContext, TArray<class UDataTable*>* CellEffectDataTables);
	void STATIC_LookupCellEffectRow(const struct FName& RowName, class UObject* __WorldContext, struct FCellEffectTableData* CellEffectRow, bool* FoundRow, class UDataTable** DataTableForRow);
	void STATIC_GetLanternCatalog(class APlayerController* RequestingPlayerController, class UObject* __WorldContext, class UPlayFabCatalogDataTable** LanternCatalog);
	void STATIC_GetArmorCatalog(class APlayerController* RequestingPlayer, class UObject* __WorldContext, class UPlayFabCatalogDataTable** ArmorCatalog);
	void STATIC_GetWeaponCatalog(EWeaponType WeaponType, class APlayerController* RequestingController, class UObject* __WorldContext, class UDataTable** GearCatalog);
	void STATIC_GetLanternResistanceTableRow(const struct FName& RowName, class UObject* __WorldContext, struct FLanternResistanceTableData* LanternResistanceRow, bool* FoundRow);
	void STATIC_GetWeaponPowerTableRow(const struct FName& RowName, class UObject* __WorldContext, struct FWeaponPowerTableData* WeaponPowerRow, bool* FoundRow);
	void STATIC_GetArmourResistanceTableRow(const struct FName& RowName, class UObject* __WorldContext, struct FArmourResistanceTableData* TableRow, bool* FoundRow);
	void STATIC_GetLanternResistanceTables(class UObject* __WorldContext, TArray<class UDataTable*>* ResistanceTables);
	void STATIC_GetArmourResistanceTables(class UObject* __WorldContext, TArray<class UDataTable*>* ResistanceTables);
	void STATIC_GetWeaponPowerTables(class UObject* __WorldContext, TArray<class UDataTable*>* PowerTables);
	void STATIC_IsPlayerInNewOBProgression(class APlayerController* Player, class UObject* __WorldContext, bool* IsInNewOBProgression);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
