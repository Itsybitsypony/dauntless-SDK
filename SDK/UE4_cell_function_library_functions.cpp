// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cell_function_library.cell_function_library_C.GetIconForCellType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECellType                      CellType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSlotFilled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucell_function_library_C::STATIC_GetIconForCellType(ECellType CellType, bool IsSlotFilled, class UObject* __WorldContext, class UObject** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetIconForCellType");

	Ucell_function_library_C_GetIconForCellType_Params params;
	params.CellType = CellType;
	params.IsSlotFilled = IsSlotFilled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function cell_function_library.cell_function_library_C.GetMaxKeywordLevel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   KeywordID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumRanks                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucell_function_library_C::STATIC_GetMaxKeywordLevel(const struct FName& KeywordID, class UObject* __WorldContext, int* NumRanks)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetMaxKeywordLevel");

	Ucell_function_library_C_GetMaxKeywordLevel_Params params;
	params.KeywordID = KeywordID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumRanks != nullptr)
		*NumRanks = params.NumRanks;
}


// Function cell_function_library.cell_function_library_C.ProcessCellEffectDescription
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CellEffectID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Ranks                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ecell_effect_display_type> KeywordDisplayType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ParsedDescription              (Parm, OutParm)

void Ucell_function_library_C::STATIC_ProcessCellEffectDescription(const struct FName& CellEffectID, float Magnitude, int Ranks, TEnumAsByte<Ecell_effect_display_type> KeywordDisplayType, class UObject* __WorldContext, struct FText* ParsedDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.ProcessCellEffectDescription");

	Ucell_function_library_C_ProcessCellEffectDescription_Params params;
	params.CellEffectID = CellEffectID;
	params.Magnitude = Magnitude;
	params.Ranks = Ranks;
	params.KeywordDisplayType = KeywordDisplayType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParsedDescription != nullptr)
		*ParsedDescription = params.ParsedDescription;
}


// Function cell_function_library.cell_function_library_C.AddCellEffectToList
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppliedCellEffectCounter> CellEffectList                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPermanentCell>  PermanentCells                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPermanentCellEffect> PermanentCellEffects           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAppliedCellEffectCounter> UpdatedCellEffectList          (Parm, OutParm, ZeroConstructor)

void Ucell_function_library_C::STATIC_AddCellEffectToList(class UObject* __WorldContext, TArray<struct FAppliedCellEffectCounter>* CellEffectList, TArray<struct FPermanentCell>* PermanentCells, TArray<struct FPermanentCellEffect>* PermanentCellEffects, TArray<struct FAppliedCellEffectCounter>* UpdatedCellEffectList)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.AddCellEffectToList");

	Ucell_function_library_C_AddCellEffectToList_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellEffectList != nullptr)
		*CellEffectList = params.CellEffectList;
	if (PermanentCells != nullptr)
		*PermanentCells = params.PermanentCells;
	if (PermanentCellEffects != nullptr)
		*PermanentCellEffects = params.PermanentCellEffects;
	if (UpdatedCellEffectList != nullptr)
		*UpdatedCellEffectList = params.UpdatedCellEffectList;
}


// Function cell_function_library.cell_function_library_C.GetBaseCellEffectsFromCellContainerInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUpgradeableItemLevel          ItemLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayFabCellContainerCatalogTableData CellContainerData              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAppliedCellEffectCounter> BaseCellEffects                (Parm, OutParm, ZeroConstructor)
// TArray<struct Fcell_slot_info> CellSlots                      (Parm, OutParm, ZeroConstructor)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucell_function_library_C::STATIC_GetBaseCellEffectsFromCellContainerInfo(EUpgradeableItemLevel ItemLevel, const struct FPlayFabCellContainerCatalogTableData& CellContainerData, class UObject* WorldContextObject, class UObject* __WorldContext, TArray<struct FAppliedCellEffectCounter>* BaseCellEffects, TArray<struct Fcell_slot_info>* CellSlots, bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetBaseCellEffectsFromCellContainerInfo");

	Ucell_function_library_C_GetBaseCellEffectsFromCellContainerInfo_Params params;
	params.ItemLevel = ItemLevel;
	params.CellContainerData = CellContainerData;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseCellEffects != nullptr)
		*BaseCellEffects = params.BaseCellEffects;
	if (CellSlots != nullptr)
		*CellSlots = params.CellSlots;
	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function cell_function_library.cell_function_library_C.GetCellContainerInfoFromItemID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       RequestingPlayerController     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItemIsCellSlottable            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPlayFabCellContainerCatalogTableData CellContainerData              (Parm, OutParm)

void Ucell_function_library_C::STATIC_GetCellContainerInfoFromItemID(const struct FName& ItemID, class APlayerController* RequestingPlayerController, class UObject* __WorldContext, bool* ItemIsCellSlottable, struct FPlayFabCellContainerCatalogTableData* CellContainerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetCellContainerInfoFromItemID");

	Ucell_function_library_C_GetCellContainerInfoFromItemID_Params params;
	params.ItemID = ItemID;
	params.RequestingPlayerController = RequestingPlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIsCellSlottable != nullptr)
		*ItemIsCellSlottable = params.ItemIsCellSlottable;
	if (CellContainerData != nullptr)
		*CellContainerData = params.CellContainerData;
}


// Function cell_function_library.cell_function_library_C.GetCellInfoFromItem
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Einventory_or_catalog> LookupIDSource                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  LookupID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EUpgradeableItemLevel          LevelIfLookingUpFromCatalog    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAppliedCellEffectCounter> CellEffects                    (Parm, OutParm, ZeroConstructor)
// TArray<struct Fcell_slot_info> CellSlots                      (Parm, OutParm, ZeroConstructor)

void Ucell_function_library_C::STATIC_GetCellInfoFromItem(class AArchonPlayerController* PlayerController, TEnumAsByte<Einventory_or_catalog> LookupIDSource, const class FString& LookupID, EUpgradeableItemLevel LevelIfLookingUpFromCatalog, class UObject* __WorldContext, bool* Succeeded, TArray<struct FAppliedCellEffectCounter>* CellEffects, TArray<struct Fcell_slot_info>* CellSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetCellInfoFromItem");

	Ucell_function_library_C_GetCellInfoFromItem_Params params;
	params.PlayerController = PlayerController;
	params.LookupIDSource = LookupIDSource;
	params.LookupID = LookupID;
	params.LevelIfLookingUpFromCatalog = LevelIfLookingUpFromCatalog;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (CellEffects != nullptr)
		*CellEffects = params.CellEffects;
	if (CellSlots != nullptr)
		*CellSlots = params.CellSlots;
}


// Function cell_function_library.cell_function_library_C.GetCellTypeAbbreviationString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECellType                      CellType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AbbreviationString             (Parm, OutParm, ZeroConstructor)

void Ucell_function_library_C::STATIC_GetCellTypeAbbreviationString(ECellType CellType, class UObject* __WorldContext, class FString* AbbreviationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetCellTypeAbbreviationString");

	Ucell_function_library_C_GetCellTypeAbbreviationString_Params params;
	params.CellType = CellType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbbreviationString != nullptr)
		*AbbreviationString = params.AbbreviationString;
}


// Function cell_function_library.cell_function_library_C.GetCurrentLevelCellEffectDescription
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_function_library_C::STATIC_GetCurrentLevelCellEffectDescription(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetCurrentLevelCellEffectDescription");

	Ucell_function_library_C_GetCurrentLevelCellEffectDescription_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_function_library.cell_function_library_C.GetSuffixForRarity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemRarityLevelType           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Suffix                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucell_function_library_C::STATIC_GetSuffixForRarity(EItemRarityLevelType Rarity, class UObject* __WorldContext, struct FName* Suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetSuffixForRarity");

	Ucell_function_library_C_GetSuffixForRarity_Params params;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Suffix != nullptr)
		*Suffix = params.Suffix;
}


// Function cell_function_library.cell_function_library_C.GetCellEffectsFromCellCatalogEntry
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCellCatalogTableData   CellCatalogData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fcell_effect_details> CellEffects                    (Parm, OutParm, ZeroConstructor)

void Ucell_function_library_C::STATIC_GetCellEffectsFromCellCatalogEntry(const struct FCellCatalogTableData& CellCatalogData, class UObject* __WorldContext, TArray<struct Fcell_effect_details>* CellEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.GetCellEffectsFromCellCatalogEntry");

	Ucell_function_library_C_GetCellEffectsFromCellCatalogEntry_Params params;
	params.CellCatalogData = CellCatalogData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CellEffects != nullptr)
		*CellEffects = params.CellEffects;
}


// Function cell_function_library.cell_function_library_C.ModifyDamageEventdata
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ecell_damage_modification> WhereShouldMagnitudeBeApplied  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverrodeDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)

void Ucell_function_library_C::STATIC_ModifyDamageEventdata(float Magnitude, TEnumAsByte<Ecell_damage_modification> WhereShouldMagnitudeBeApplied, const struct FDamageEventData& DamageEventData, class UObject* __WorldContext, bool* OverrodeDamageEventData, struct FDamageEventData* OverriddenDamageEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.ModifyDamageEventdata");

	Ucell_function_library_C_ModifyDamageEventdata_Params params;
	params.Magnitude = Magnitude;
	params.WhereShouldMagnitudeBeApplied = WhereShouldMagnitudeBeApplied;
	params.DamageEventData = DamageEventData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverrodeDamageEventData != nullptr)
		*OverrodeDamageEventData = params.OverrodeDamageEventData;
	if (OverriddenDamageEventData != nullptr)
		*OverriddenDamageEventData = params.OverriddenDamageEventData;
}


// Function cell_function_library.cell_function_library_C.CombineCellEffectData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppliedCellEffectCounter> AppliedCellEffects             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fcell_effect_details> CellEffectDetails              (Parm, OutParm, ZeroConstructor)

void Ucell_function_library_C::STATIC_CombineCellEffectData(class UObject* __WorldContext, TArray<struct FAppliedCellEffectCounter>* AppliedCellEffects, TArray<struct Fcell_effect_details>* CellEffectDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.CombineCellEffectData");

	Ucell_function_library_C_CombineCellEffectData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AppliedCellEffects != nullptr)
		*AppliedCellEffects = params.AppliedCellEffects;
	if (CellEffectDetails != nullptr)
		*CellEffectDetails = params.CellEffectDetails;
}


// Function cell_function_library.cell_function_library_C.ParseCellEffectDescriptionMagnitudes
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UnparsedString                 (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ParsedString                   (Parm, OutParm)

void Ucell_function_library_C::STATIC_ParseCellEffectDescriptionMagnitudes(const struct FText& UnparsedString, float Magnitude, class UObject* __WorldContext, struct FText* ParsedString)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.ParseCellEffectDescriptionMagnitudes");

	Ucell_function_library_C_ParseCellEffectDescriptionMagnitudes_Params params;
	params.UnparsedString = UnparsedString;
	params.Magnitude = Magnitude;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParsedString != nullptr)
		*ParsedString = params.ParsedString;
}


// Function cell_function_library.cell_function_library_C.ProcessCellDescription
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  CellCatalogEntryDescription    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoloMagnitudeCellEffectName    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ParsedCellDescription          (Parm, OutParm)

void Ucell_function_library_C::STATIC_ProcessCellDescription(const class FString& CellCatalogEntryDescription, float Magnitude, const struct FName& SoloMagnitudeCellEffectName, class UObject* __WorldContext, struct FText* ParsedCellDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_function_library.cell_function_library_C.ProcessCellDescription");

	Ucell_function_library_C_ProcessCellDescription_Params params;
	params.CellCatalogEntryDescription = CellCatalogEntryDescription;
	params.Magnitude = Magnitude;
	params.SoloMagnitudeCellEffectName = SoloMagnitudeCellEffectName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParsedCellDescription != nullptr)
		*ParsedCellDescription = params.ParsedCellDescription;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
