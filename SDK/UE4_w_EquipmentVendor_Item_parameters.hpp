#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Can Craft
struct Uw_EquipmentVendor_Item_C_Can_Craft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Set Id
struct Uw_EquipmentVendor_Item_C_Get_Set_Id_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Armour Type
struct Uw_EquipmentVendor_Item_C_Get_Armour_Type_Params
{
	EArmorType                                         ArmorType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Setup Progression Item
struct Uw_EquipmentVendor_Item_C_Setup_Progression_Item_Params
{
	class FString                                      Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<EProgressionLink>                      Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Item Tier
struct Uw_EquipmentVendor_Item_C_Get_Item_Tier_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Setup
struct Uw_EquipmentVendor_Item_C_Setup_Params
{
	class UEquipmentItem*                              Equipment_Item;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Set;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Reset
struct Uw_EquipmentVendor_Item_C_Reset_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Crafting Button Label
struct Uw_EquipmentVendor_Item_C_Get_Crafting_Button_Label_Params
{
	struct FText                                       Label;                                                    // (Parm, OutParm)
	bool                                               IsUpgrade;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Player Inventory
struct Uw_EquipmentVendor_Item_C_Get_Player_Inventory_Params
{
	class AArchonInventory*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Archon Catalog
struct Uw_EquipmentVendor_Item_C_Get_Archon_Catalog_Params
{
	class UArchonCatalog*                              Catalog;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.From Catalog Item
struct Uw_EquipmentVendor_Item_C_From_Catalog_Item_Params
{
	struct FArchonCatalogItem                          ArchonCatalogItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5
struct Uw_EquipmentVendor_Item_C_OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Construct
struct Uw_EquipmentVendor_Item_C_Construct_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Icon Updated
struct Uw_EquipmentVendor_Item_C_Icon_Updated_Params
{
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Tick
struct Uw_EquipmentVendor_Item_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Show Hover
struct Uw_EquipmentVendor_Item_C_Show_Hover_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Hide Hover
struct Uw_EquipmentVendor_Item_C_Hide_Hover_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnMouseEnter
struct Uw_EquipmentVendor_Item_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
struct Uw_EquipmentVendor_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnMouseLeave
struct Uw_EquipmentVendor_Item_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.On Item Refreshed
struct Uw_EquipmentVendor_Item_C_On_Item_Refreshed_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Focus Item
struct Uw_EquipmentVendor_Item_C_Focus_Item_Params
{
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.ExecuteUbergraph_w_EquipmentVendor_Item
struct Uw_EquipmentVendor_Item_C_ExecuteUbergraph_w_EquipmentVendor_Item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.On Hover__DelegateSignature
struct Uw_EquipmentVendor_Item_C_On_Hover__DelegateSignature_Params
{
	class Uw_EquipmentVendor_Item_C*                   Armour_Item;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
