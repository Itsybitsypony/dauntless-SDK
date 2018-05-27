#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ui_inventory_dataobj_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ui_inventory_dataobj.ui_inventory_dataobj_C
// 0x0030 (0x0058 - 0x0028)
class Uui_inventory_dataobj_C : public UObject
{
public:
	struct Fui_inventoryitem_data                      Data;                                                     // 0x0028(0x0028) (Edit, BlueprintVisible)
	class UArchonGameInstance*                         GameInstanceRef;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ui_inventory_dataobj.ui_inventory_dataobj_C");
		return ptr;
	}


	void CompareTo(const TScriptInterface<class Usortable_interface_C>& OtherItem, TEnumAsByte<Esort_type> SortType, int* CompareResult);
	void GetCatalogInfo(struct FArchonCatalogItem* CatalogInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
