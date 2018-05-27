// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ui_inventory_dataobj_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ui_inventory_dataobj.ui_inventory_dataobj_C.CompareTo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Usortable_interface_C> OtherItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Esort_type>        SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CompareResult                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uui_inventory_dataobj_C::CompareTo(const TScriptInterface<class Usortable_interface_C>& OtherItem, TEnumAsByte<Esort_type> SortType, int* CompareResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_dataobj.ui_inventory_dataobj_C.CompareTo");

	Uui_inventory_dataobj_C_CompareTo_Params params;
	params.OtherItem = OtherItem;
	params.SortType = SortType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CompareResult != nullptr)
		*CompareResult = params.CompareResult;
}


// Function ui_inventory_dataobj.ui_inventory_dataobj_C.GetCatalogInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FArchonCatalogItem      CatalogInfo                    (Parm, OutParm)

void Uui_inventory_dataobj_C::GetCatalogInfo(struct FArchonCatalogItem* CatalogInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ui_inventory_dataobj.ui_inventory_dataobj_C.GetCatalogInfo");

	Uui_inventory_dataobj_C_GetCatalogInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CatalogInfo != nullptr)
		*CatalogInfo = params.CatalogInfo;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
