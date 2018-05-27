// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_function_library.progression_function_library_C.PlayerPassesQuestRequirements
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FQuestRequirement> QuestRequirements              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Econdition_requirement_type> RequirementType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PassedQuestRequirements        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_PlayerPassesQuestRequirements(class AArchonPlayerController* PlayerController, TEnumAsByte<Econdition_requirement_type> RequirementType, class UObject* __WorldContext, TArray<struct FQuestRequirement>* QuestRequirements, bool* PassedQuestRequirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.PlayerPassesQuestRequirements");

	Uprogression_function_library_C_PlayerPassesQuestRequirements_Params params;
	params.PlayerController = PlayerController;
	params.RequirementType = RequirementType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestRequirements != nullptr)
		*QuestRequirements = params.QuestRequirements;
	if (PassedQuestRequirements != nullptr)
		*PassedQuestRequirements = params.PassedQuestRequirements;
}


// Function progression_function_library.progression_function_library_C.GetWeaponAbbreviation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Abbreviation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetWeaponAbbreviation(EWeaponType WeaponType, class UObject* __WorldContext, struct FName* Abbreviation)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetWeaponAbbreviation");

	Uprogression_function_library_C_GetWeaponAbbreviation_Params params;
	params.WeaponType = WeaponType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Abbreviation != nullptr)
		*Abbreviation = params.Abbreviation;
}


// Function progression_function_library.progression_function_library_C.LookupCellCatalogRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCellCatalogTableData   CellCatalogRow                 (Parm, OutParm)
// bool                           FoundRow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_LookupCellCatalogRow(const struct FName& RowName, class UObject* __WorldContext, struct FCellCatalogTableData* CellCatalogRow, bool* FoundRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.LookupCellCatalogRow");

	Uprogression_function_library_C_LookupCellCatalogRow_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellCatalogRow != nullptr)
		*CellCatalogRow = params.CellCatalogRow;
	if (FoundRow != nullptr)
		*FoundRow = params.FoundRow;
}


// Function progression_function_library.progression_function_library_C.GetCellCatalogs
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDataTable*>      CellCatalogs                   (Parm, OutParm, ZeroConstructor)

void Uprogression_function_library_C::STATIC_GetCellCatalogs(class UObject* __WorldContext, TArray<class UDataTable*>* CellCatalogs)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetCellCatalogs");

	Uprogression_function_library_C_GetCellCatalogs_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellCatalogs != nullptr)
		*CellCatalogs = params.CellCatalogs;
}


// Function progression_function_library.progression_function_library_C.GetCellEffectTables
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDataTable*>      CellEffectDataTables           (Parm, OutParm, ZeroConstructor)

void Uprogression_function_library_C::STATIC_GetCellEffectTables(class UObject* __WorldContext, TArray<class UDataTable*>* CellEffectDataTables)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetCellEffectTables");

	Uprogression_function_library_C_GetCellEffectTables_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellEffectDataTables != nullptr)
		*CellEffectDataTables = params.CellEffectDataTables;
}


// Function progression_function_library.progression_function_library_C.LookupCellEffectRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCellEffectTableData    CellEffectRow                  (Parm, OutParm)
// bool                           FoundRow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTableForRow                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_LookupCellEffectRow(const struct FName& RowName, class UObject* __WorldContext, struct FCellEffectTableData* CellEffectRow, bool* FoundRow, class UDataTable** DataTableForRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.LookupCellEffectRow");

	Uprogression_function_library_C_LookupCellEffectRow_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellEffectRow != nullptr)
		*CellEffectRow = params.CellEffectRow;
	if (FoundRow != nullptr)
		*FoundRow = params.FoundRow;
	if (DataTableForRow != nullptr)
		*DataTableForRow = params.DataTableForRow;
}


// Function progression_function_library.progression_function_library_C.GetLanternCatalog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       RequestingPlayerController     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayFabCatalogDataTable* LanternCatalog                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetLanternCatalog(class APlayerController* RequestingPlayerController, class UObject* __WorldContext, class UPlayFabCatalogDataTable** LanternCatalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetLanternCatalog");

	Uprogression_function_library_C_GetLanternCatalog_Params params;
	params.RequestingPlayerController = RequestingPlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LanternCatalog != nullptr)
		*LanternCatalog = params.LanternCatalog;
}


// Function progression_function_library.progression_function_library_C.GetArmorCatalog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       RequestingPlayer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayFabCatalogDataTable* ArmorCatalog                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetArmorCatalog(class APlayerController* RequestingPlayer, class UObject* __WorldContext, class UPlayFabCatalogDataTable** ArmorCatalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetArmorCatalog");

	Uprogression_function_library_C_GetArmorCatalog_Params params;
	params.RequestingPlayer = RequestingPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArmorCatalog != nullptr)
		*ArmorCatalog = params.ArmorCatalog;
}


// Function progression_function_library.progression_function_library_C.GetWeaponCatalog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       RequestingController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              GearCatalog                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetWeaponCatalog(EWeaponType WeaponType, class APlayerController* RequestingController, class UObject* __WorldContext, class UDataTable** GearCatalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetWeaponCatalog");

	Uprogression_function_library_C_GetWeaponCatalog_Params params;
	params.WeaponType = WeaponType;
	params.RequestingController = RequestingController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearCatalog != nullptr)
		*GearCatalog = params.GearCatalog;
}


// Function progression_function_library.progression_function_library_C.GetLanternResistanceTableRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLanternResistanceTableData LanternResistanceRow           (Parm, OutParm)
// bool                           FoundRow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetLanternResistanceTableRow(const struct FName& RowName, class UObject* __WorldContext, struct FLanternResistanceTableData* LanternResistanceRow, bool* FoundRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetLanternResistanceTableRow");

	Uprogression_function_library_C_GetLanternResistanceTableRow_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LanternResistanceRow != nullptr)
		*LanternResistanceRow = params.LanternResistanceRow;
	if (FoundRow != nullptr)
		*FoundRow = params.FoundRow;
}


// Function progression_function_library.progression_function_library_C.GetWeaponPowerTableRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponPowerTableData   WeaponPowerRow                 (Parm, OutParm)
// bool                           FoundRow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetWeaponPowerTableRow(const struct FName& RowName, class UObject* __WorldContext, struct FWeaponPowerTableData* WeaponPowerRow, bool* FoundRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetWeaponPowerTableRow");

	Uprogression_function_library_C_GetWeaponPowerTableRow_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPowerRow != nullptr)
		*WeaponPowerRow = params.WeaponPowerRow;
	if (FoundRow != nullptr)
		*FoundRow = params.FoundRow;
}


// Function progression_function_library.progression_function_library_C.GetArmourResistanceTableRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArmourResistanceTableData TableRow                       (Parm, OutParm)
// bool                           FoundRow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_GetArmourResistanceTableRow(const struct FName& RowName, class UObject* __WorldContext, struct FArmourResistanceTableData* TableRow, bool* FoundRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetArmourResistanceTableRow");

	Uprogression_function_library_C_GetArmourResistanceTableRow_Params params;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TableRow != nullptr)
		*TableRow = params.TableRow;
	if (FoundRow != nullptr)
		*FoundRow = params.FoundRow;
}


// Function progression_function_library.progression_function_library_C.GetLanternResistanceTables
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDataTable*>      ResistanceTables               (Parm, OutParm, ZeroConstructor)

void Uprogression_function_library_C::STATIC_GetLanternResistanceTables(class UObject* __WorldContext, TArray<class UDataTable*>* ResistanceTables)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetLanternResistanceTables");

	Uprogression_function_library_C_GetLanternResistanceTables_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResistanceTables != nullptr)
		*ResistanceTables = params.ResistanceTables;
}


// Function progression_function_library.progression_function_library_C.GetArmourResistanceTables
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDataTable*>      ResistanceTables               (Parm, OutParm, ZeroConstructor)

void Uprogression_function_library_C::STATIC_GetArmourResistanceTables(class UObject* __WorldContext, TArray<class UDataTable*>* ResistanceTables)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetArmourResistanceTables");

	Uprogression_function_library_C_GetArmourResistanceTables_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResistanceTables != nullptr)
		*ResistanceTables = params.ResistanceTables;
}


// Function progression_function_library.progression_function_library_C.GetWeaponPowerTables
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDataTable*>      PowerTables                    (Parm, OutParm, ZeroConstructor)

void Uprogression_function_library_C::STATIC_GetWeaponPowerTables(class UObject* __WorldContext, TArray<class UDataTable*>* PowerTables)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.GetWeaponPowerTables");

	Uprogression_function_library_C_GetWeaponPowerTables_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PowerTables != nullptr)
		*PowerTables = params.PowerTables;
}


// Function progression_function_library.progression_function_library_C.IsPlayerInNewOBProgression
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInNewOBProgression           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_function_library_C::STATIC_IsPlayerInNewOBProgression(class APlayerController* Player, class UObject* __WorldContext, bool* IsInNewOBProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_function_library.progression_function_library_C.IsPlayerInNewOBProgression");

	Uprogression_function_library_C_IsPlayerInNewOBProgression_Params params;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInNewOBProgression != nullptr)
		*IsInNewOBProgression = params.IsInNewOBProgression;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
