#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ui_inventory_datamodel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ui_inventory_datamodel.ui_inventory_datamodel_C
// 0x0010 (0x03B0 - 0x03A0)
class Aui_inventory_datamodel_C : public Abase_ui_datamodel_C
{
public:
	TArray<class Uui_inventory_dataobj_C*>             DataView;                                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ui_inventory_datamodel.ui_inventory_datamodel_C");
		return ptr;
	}


	void ItemIsCosmeticOnly(class Uui_inventory_dataobj_C* DataObject, bool* bCosmeticOnly);
	bool ShouldIncludeCosmeticOnly(struct Finventory_custom_filter_wrapper* CustomFilters);
	bool ItemNameHasString(const class FString& Substring, class Uui_inventory_dataobj_C* DataObject);
	void UpdateViewFilterFromInventory(TEnumAsByte<EItemRarityLevels> ItemMinRarity, TEnumAsByte<EItemRarityLevels> ItemMaxRarity, const class FString& SearchString, const struct Finventory_custom_filter_wrapper& CustomFilters, bool SuppressDataViewChangedEvent, TArray<EItemGroupType>* RequiredItemKinds);
	void UpdateViewFilterFromCatalogList(TEnumAsByte<EItemRarityLevels> ItemMinRarity, TEnumAsByte<EItemRarityLevels> ItemMaxRarity, const class FString& SearchString, const struct Finventory_custom_filter_wrapper& CustomFilters, bool SuppressDataViewChangedEvent, TArray<class UDataTable*>* Catalogs, TArray<EItemGroupType>* RequiredItemKinds);
	void RunRecipeFilter(const class FString& ItemID, const struct Finventory_custom_filter& FilterData, bool* Succeeded);
	void GetDataView(TArray<class Uui_inventory_dataobj_C*>* DataView);
	void GetInventory(class AArchonInventory** Inventory);
	void INTERNAL_UpdateViewFilter(TEnumAsByte<EItemRarityLevels> ItemMinRarity, TEnumAsByte<EItemRarityLevels> ItemMaxRarity, const class FString& SearchString, const struct Finventory_custom_filter_wrapper& CustomFilters, bool SuppressDataViewChangedEvent, TArray<EItemGroupType>* RequiredItemKinds, TArray<struct Fui_inventoryitem_data>* DataSet);
	void SortView(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
