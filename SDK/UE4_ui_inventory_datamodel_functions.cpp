// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ui_inventory_datamodel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.ItemIsCosmeticOnly
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Uui_inventory_dataobj_C* DataObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCosmeticOnly                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aui_inventory_datamodel_C::ItemIsCosmeticOnly(class Uui_inventory_dataobj_C* DataObject, bool* bCosmeticOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.ItemIsCosmeticOnly");

	Aui_inventory_datamodel_C_ItemIsCosmeticOnly_Params params;
	params.DataObject = DataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCosmeticOnly != nullptr)
		*bCosmeticOnly = params.bCosmeticOnly;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.ShouldIncludeCosmeticOnly
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct Finventory_custom_filter_wrapper CustomFilters                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aui_inventory_datamodel_C::ShouldIncludeCosmeticOnly(struct Finventory_custom_filter_wrapper* CustomFilters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.ShouldIncludeCosmeticOnly");

	Aui_inventory_datamodel_C_ShouldIncludeCosmeticOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomFilters != nullptr)
		*CustomFilters = params.CustomFilters;

	return params.ReturnValue;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.ItemNameHasString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Substring                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class Uui_inventory_dataobj_C* DataObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aui_inventory_datamodel_C::ItemNameHasString(const class FString& Substring, class Uui_inventory_dataobj_C* DataObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.ItemNameHasString");

	Aui_inventory_datamodel_C_ItemNameHasString_Params params;
	params.Substring = Substring;
	params.DataObject = DataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.UpdateViewFilterFromInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EItemGroupType>         RequiredItemKinds              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EItemRarityLevels> ItemMinRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarityLevels> ItemMaxRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SearchString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct Finventory_custom_filter_wrapper CustomFilters                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SuppressDataViewChangedEvent   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aui_inventory_datamodel_C::UpdateViewFilterFromInventory(TEnumAsByte<EItemRarityLevels> ItemMinRarity, TEnumAsByte<EItemRarityLevels> ItemMaxRarity, const class FString& SearchString, const struct Finventory_custom_filter_wrapper& CustomFilters, bool SuppressDataViewChangedEvent, TArray<EItemGroupType>* RequiredItemKinds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.UpdateViewFilterFromInventory");

	Aui_inventory_datamodel_C_UpdateViewFilterFromInventory_Params params;
	params.ItemMinRarity = ItemMinRarity;
	params.ItemMaxRarity = ItemMaxRarity;
	params.SearchString = SearchString;
	params.CustomFilters = CustomFilters;
	params.SuppressDataViewChangedEvent = SuppressDataViewChangedEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequiredItemKinds != nullptr)
		*RequiredItemKinds = params.RequiredItemKinds;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.UpdateViewFilterFromCatalogList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDataTable*>      Catalogs                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EItemGroupType>         RequiredItemKinds              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EItemRarityLevels> ItemMinRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarityLevels> ItemMaxRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SearchString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct Finventory_custom_filter_wrapper CustomFilters                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SuppressDataViewChangedEvent   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aui_inventory_datamodel_C::UpdateViewFilterFromCatalogList(TEnumAsByte<EItemRarityLevels> ItemMinRarity, TEnumAsByte<EItemRarityLevels> ItemMaxRarity, const class FString& SearchString, const struct Finventory_custom_filter_wrapper& CustomFilters, bool SuppressDataViewChangedEvent, TArray<class UDataTable*>* Catalogs, TArray<EItemGroupType>* RequiredItemKinds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.UpdateViewFilterFromCatalogList");

	Aui_inventory_datamodel_C_UpdateViewFilterFromCatalogList_Params params;
	params.ItemMinRarity = ItemMinRarity;
	params.ItemMaxRarity = ItemMaxRarity;
	params.SearchString = SearchString;
	params.CustomFilters = CustomFilters;
	params.SuppressDataViewChangedEvent = SuppressDataViewChangedEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Catalogs != nullptr)
		*Catalogs = params.Catalogs;
	if (RequiredItemKinds != nullptr)
		*RequiredItemKinds = params.RequiredItemKinds;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.RunRecipeFilter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct Finventory_custom_filter FilterData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aui_inventory_datamodel_C::RunRecipeFilter(const class FString& ItemID, const struct Finventory_custom_filter& FilterData, bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.RunRecipeFilter");

	Aui_inventory_datamodel_C_RunRecipeFilter_Params params;
	params.ItemID = ItemID;
	params.FilterData = FilterData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.GetDataView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class Uui_inventory_dataobj_C*> DataView                       (Parm, OutParm, ZeroConstructor)

void Aui_inventory_datamodel_C::GetDataView(TArray<class Uui_inventory_dataobj_C*>* DataView)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.GetDataView");

	Aui_inventory_datamodel_C_GetDataView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataView != nullptr)
		*DataView = params.DataView;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.GetInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        Inventory                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aui_inventory_datamodel_C::GetInventory(class AArchonInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.GetInventory");

	Aui_inventory_datamodel_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.INTERNAL_UpdateViewFilter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EItemGroupType>         RequiredItemKinds              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EItemRarityLevels> ItemMinRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarityLevels> ItemMaxRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SearchString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct Finventory_custom_filter_wrapper CustomFilters                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SuppressDataViewChangedEvent   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fui_inventoryitem_data> DataSet                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aui_inventory_datamodel_C::INTERNAL_UpdateViewFilter(TEnumAsByte<EItemRarityLevels> ItemMinRarity, TEnumAsByte<EItemRarityLevels> ItemMaxRarity, const class FString& SearchString, const struct Finventory_custom_filter_wrapper& CustomFilters, bool SuppressDataViewChangedEvent, TArray<EItemGroupType>* RequiredItemKinds, TArray<struct Fui_inventoryitem_data>* DataSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.INTERNAL_UpdateViewFilter");

	Aui_inventory_datamodel_C_INTERNAL_UpdateViewFilter_Params params;
	params.ItemMinRarity = ItemMinRarity;
	params.ItemMaxRarity = ItemMaxRarity;
	params.SearchString = SearchString;
	params.CustomFilters = CustomFilters;
	params.SuppressDataViewChangedEvent = SuppressDataViewChangedEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequiredItemKinds != nullptr)
		*RequiredItemKinds = params.RequiredItemKinds;
	if (DataSet != nullptr)
		*DataSet = params.DataSet;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.SortView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Esort_type>        SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Esort_direction>   SortDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aui_inventory_datamodel_C::SortView(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.SortView");

	Aui_inventory_datamodel_C_SortView_Params params;
	params.SortType = SortType;
	params.SortDirection = SortDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ui_inventory_datamodel.ui_inventory_datamodel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aui_inventory_datamodel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_datamodel.ui_inventory_datamodel_C.UserConstructionScript");

	Aui_inventory_datamodel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
