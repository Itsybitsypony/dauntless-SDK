#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Set_Armour_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Item From Index
struct Uw_EquipmentVendor_Set_Armour_C_Get_Item_From_Index_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get_SetLabel_ColorAndOpacity_1
struct Uw_EquipmentVendor_Set_Armour_C_Get_SetLabel_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Armor Item Widget
struct Uw_EquipmentVendor_Set_Armour_C_Get_Armor_Item_Widget_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentVendor_Item_C*                   Armour_Item_Widget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Archon Catalog
struct Uw_EquipmentVendor_Set_Armour_C_Get_Archon_Catalog_Params
{
	class UArchonCatalog*                              Catalog;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Name
struct Uw_EquipmentVendor_Set_Armour_C_Set_Name_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Items
struct Uw_EquipmentVendor_Set_Armour_C_Set_Items_Params
{
	TArray<class UEquipmentItem*>                      Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Construct
struct Uw_EquipmentVendor_Set_Armour_C_Construct_Params
{
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Tick
struct Uw_EquipmentVendor_Set_Armour_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Focus Item
struct Uw_EquipmentVendor_Set_Armour_C_Focus_Item_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct Uw_EquipmentVendor_Set_Armour_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Details
struct Uw_EquipmentVendor_Set_Armour_C_Set_Details_Params
{
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Inventory
struct Uw_EquipmentVendor_Set_Armour_C_Set_Inventory_Params
{
	class AArchonInventory*                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.ExecuteUbergraph_w_EquipmentVendor_Set_Armour
struct Uw_EquipmentVendor_Set_Armour_C_ExecuteUbergraph_w_EquipmentVendor_Set_Armour_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.OnSetDetails__DelegateSignature
struct Uw_EquipmentVendor_Set_Armour_C_OnSetDetails__DelegateSignature_Params
{
	class FString                                      SetName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
