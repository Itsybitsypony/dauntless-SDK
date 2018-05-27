#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Set_Lantern_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Get Item
struct Uw_EquipmentVendor_Set_Lantern_C_Get_Item_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Refresh Lantern Items
struct Uw_EquipmentVendor_Set_Lantern_C_Refresh_Lantern_Items_Params
{
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Get Archon Catalog
struct Uw_EquipmentVendor_Set_Lantern_C_Get_Archon_Catalog_Params
{
	class UArchonCatalog*                              Catalog;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Set Name
struct Uw_EquipmentVendor_Set_Lantern_C_Set_Name_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Set Items
struct Uw_EquipmentVendor_Set_Lantern_C_Set_Items_Params
{
	TArray<class UEquipmentItem*>                      Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Tick
struct Uw_EquipmentVendor_Set_Lantern_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Focus Item
struct Uw_EquipmentVendor_Set_Lantern_C_Focus_Item_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.Construct
struct Uw_EquipmentVendor_Set_Lantern_C_Construct_Params
{
};

// Function w_EquipmentVendor_Set_Lantern.w_EquipmentVendor_Set_Lantern_C.ExecuteUbergraph_w_EquipmentVendor_Set_Lantern
struct Uw_EquipmentVendor_Set_Lantern_C_ExecuteUbergraph_w_EquipmentVendor_Set_Lantern_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
