#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ui_inventory_dataobj_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ui_inventory_dataobj.ui_inventory_dataobj_C.CompareTo
struct Uui_inventory_dataobj_C_CompareTo_Params
{
	TScriptInterface<class Usortable_interface_C>      OtherItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Esort_type>                            SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CompareResult;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ui_inventory_dataobj.ui_inventory_dataobj_C.GetCatalogInfo
struct Uui_inventory_dataobj_C_GetCatalogInfo_Params
{
	struct FArchonCatalogItem                          CatalogInfo;                                              // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
