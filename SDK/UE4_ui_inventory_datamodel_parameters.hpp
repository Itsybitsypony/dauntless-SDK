#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ui_inventory_datamodel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.ItemIsCosmeticOnly
struct Aui_inventory_datamodel_C_ItemIsCosmeticOnly_Params
{
	class Uui_inventory_dataobj_C*                     DataObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCosmeticOnly;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.ShouldIncludeCosmeticOnly
struct Aui_inventory_datamodel_C_ShouldIncludeCosmeticOnly_Params
{
	struct Finventory_custom_filter_wrapper            CustomFilters;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.ItemNameHasString
struct Aui_inventory_datamodel_C_ItemNameHasString_Params
{
	class FString                                      Substring;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class Uui_inventory_dataobj_C*                     DataObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.UpdateViewFilterFromInventory
struct Aui_inventory_datamodel_C_UpdateViewFilterFromInventory_Params
{
	TArray<EItemGroupType>                             RequiredItemKinds;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EItemRarityLevels>                     ItemMinRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarityLevels>                     ItemMaxRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SearchString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct Finventory_custom_filter_wrapper            CustomFilters;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SuppressDataViewChangedEvent;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.UpdateViewFilterFromCatalogList
struct Aui_inventory_datamodel_C_UpdateViewFilterFromCatalogList_Params
{
	TArray<class UDataTable*>                          Catalogs;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EItemGroupType>                             RequiredItemKinds;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EItemRarityLevels>                     ItemMinRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarityLevels>                     ItemMaxRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SearchString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct Finventory_custom_filter_wrapper            CustomFilters;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SuppressDataViewChangedEvent;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.RunRecipeFilter
struct Aui_inventory_datamodel_C_RunRecipeFilter_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct Finventory_custom_filter                    FilterData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.GetDataView
struct Aui_inventory_datamodel_C_GetDataView_Params
{
	TArray<class Uui_inventory_dataobj_C*>             DataView;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.GetInventory
struct Aui_inventory_datamodel_C_GetInventory_Params
{
	class AArchonInventory*                            Inventory;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.INTERNAL_UpdateViewFilter
struct Aui_inventory_datamodel_C_INTERNAL_UpdateViewFilter_Params
{
	TArray<EItemGroupType>                             RequiredItemKinds;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EItemRarityLevels>                     ItemMinRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarityLevels>                     ItemMaxRarity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SearchString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct Finventory_custom_filter_wrapper            CustomFilters;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SuppressDataViewChangedEvent;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fui_inventoryitem_data>              DataSet;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.SortView
struct Aui_inventory_datamodel_C_SortView_Params
{
	TEnumAsByte<Esort_type>                            SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Esort_direction>                       SortDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_datamodel.ui_inventory_datamodel_C.UserConstructionScript
struct Aui_inventory_datamodel_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
