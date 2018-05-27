#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_Tier_Armour_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Tier Label
struct Uw_EquipmentProgression_Tier_Armour_C_Set_Tier_Label_Params
{
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Item Links
struct Uw_EquipmentProgression_Tier_Armour_C_Set_Item_Links_Params
{
	EArmorType                                         Armour_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      NextTier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Get Inventory
struct Uw_EquipmentProgression_Tier_Armour_C_Get_Inventory_Params
{
	class AArchonInventory*                            Inventory;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Item
struct Uw_EquipmentProgression_Tier_Armour_C_Set_Item_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      NextTier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Construct
struct Uw_EquipmentProgression_Tier_Armour_C_Construct_Params
{
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Item Hover
struct Uw_EquipmentProgression_Tier_Armour_C_Item_Hover_Params
{
	class Uw_EquipmentVendor_Item_C*                   Armour_Item;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Inventory
struct Uw_EquipmentProgression_Tier_Armour_C_Set_Inventory_Params
{
	class AArchonInventory*                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.ExecuteUbergraph_w_EquipmentProgression_Tier_Armour
struct Uw_EquipmentProgression_Tier_Armour_C_ExecuteUbergraph_w_EquipmentProgression_Tier_Armour_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.On Item Hover__DelegateSignature
struct Uw_EquipmentProgression_Tier_Armour_C_On_Item_Hover__DelegateSignature_Params
{
	class Uw_EquipmentVendor_Item_C*                   Armour_Item;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
