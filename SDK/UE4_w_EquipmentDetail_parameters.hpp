#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentDetail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentDetail.w_EquipmentDetail_C.GetDisplayItemLevel
struct Uw_EquipmentDetail_C_GetDisplayItemLevel_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EUpgradeableItemLevel                              ItemLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.GetDisplayItemID
struct Uw_EquipmentDetail_C_GetDisplayItemID_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.UpdateItemDetails-DescriptionAndPermCells
struct Uw_EquipmentDetail_C_UpdateItemDetails_DescriptionAndPermCells_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsArmour;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        WeaponTypeIfWeapon;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EUpgradeableItemLevel                              UpgradeLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.GetPermanentCellData
struct Uw_EquipmentDetail_C_GetPermanentCellData_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsArmour;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        WeaponTypeIfWeapon;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EUpgradeableItemLevel                              UpgradeLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPermanentCell>                      PermanentCells;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.FormatPowerDelta
struct Uw_EquipmentDetail_C_FormatPowerDelta_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Output;                                                   // (Parm, OutParm)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.CreateArmorSetElementalResistanceWidgets
struct Uw_EquipmentDetail_C_CreateArmorSetElementalResistanceWidgets_Params
{
	TArray<struct Felement_float_pair>                 ElementFloatPairs;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Felement_float_pair>                 DeltaArray;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Should Show Keywords
struct Uw_EquipmentDetail_C_Should_Show_Keywords_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FName                                       BonusName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Clear Preview Keywords
struct Uw_EquipmentDetail_C_Clear_Preview_Keywords_Params
{
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Create Keyword Widget
struct Uw_EquipmentDetail_C_Create_Keyword_Widget_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAllSetBonuses;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_Keyword_C*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Widget for Keyword
struct Uw_EquipmentDetail_C_Get_Widget_for_Keyword_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_Keyword_C*                Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Crafted Item Id
struct Uw_EquipmentDetail_C_Get_Crafted_Item_Id_Params
{
	class FString                                      Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Crafted_Item_Id;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Keywords for Armour Item
struct Uw_EquipmentDetail_C_Get_Keywords_for_Armour_Item_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               Keywords;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Update ItemDetails
struct Uw_EquipmentDetail_C_Update_ItemDetails_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Keyword Abilities for Count
struct Uw_EquipmentDetail_C_Get_Keyword_Abilities_for_Count_Params
{
	struct FArmourSetTableData                         Set_Data;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Abilities;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Count Keyword on Equipped Armour
struct Uw_EquipmentDetail_C_Count_Keyword_on_Equipped_Armour_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Add Lantern Keywords
struct Uw_EquipmentDetail_C_Add_Lantern_Keywords_Params
{
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Add Armour Item Keywords
struct Uw_EquipmentDetail_C_Add_Armour_Item_Keywords_Params
{
	EArmorType                                         Armor_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Setup Armour Keywords
struct Uw_EquipmentDetail_C_Setup_Armour_Keywords_Params
{
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Lookup Weapon Power
struct Uw_EquipmentDetail_C_Lookup_Weapon_Power_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EUpgradeableItemLevel                              Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Global_Power;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 NonZeroElementalFloatArray;                               // (Parm, OutParm, ZeroConstructor)
	EElementType                                       Elemental_Type;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Weapon Power Delta
struct Uw_EquipmentDetail_C_Get_Weapon_Power_Delta_Params
{
	float                                              Item_Power;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Weapon Power Number
struct Uw_EquipmentDetail_C_Get_Weapon_Power_Number_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EUpgradeableItemLevel                              Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Formatted_Number;                                         // (Parm, OutParm)
	float                                              Raw_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Armour Power Delta
struct Uw_EquipmentDetail_C_Get_Armour_Power_Delta_Params
{
	float                                              Item_Power;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Lookup Armour Power
struct Uw_EquipmentDetail_C_Lookup_Armour_Power_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EUpgradeableItemLevel                              Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Global_Resistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementalResistances;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Armour Power Number
struct Uw_EquipmentDetail_C_Get_Armour_Power_Number_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EUpgradeableItemLevel                              Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Formatted_Number;                                         // (Parm, OutParm)
	float                                              Raw_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Update Details
struct Uw_EquipmentDetail_C_Update_Details_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Add Required Component
struct Uw_EquipmentDetail_C_Add_Required_Component_Params
{
	struct FCatalogRecipeComponent                     Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Did_Add;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.OnLoaded_E917FFD742239F8AF6CD248096D555D3
struct Uw_EquipmentDetail_C_OnLoaded_E917FFD742239F8AF6CD248096D555D3_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Construct
struct Uw_EquipmentDetail_C_Construct_Params
{
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Display Craftable
struct Uw_EquipmentDetail_C_Display_Craftable_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Update Icon
struct Uw_EquipmentDetail_C_Update_Icon_Params
{
	TAssetPtr<class UTexture2D>                        Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.On Keywords Updated
struct Uw_EquipmentDetail_C_On_Keywords_Updated_Params
{
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Reset Display
struct Uw_EquipmentDetail_C_Reset_Display_Params
{
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.Vendor Type Updated
struct Uw_EquipmentDetail_C_Vendor_Type_Updated_Params
{
	TEnumAsByte<EquipmentVendor>                       Vendor_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail.w_EquipmentDetail_C.ExecuteUbergraph_w_EquipmentDetail
struct Uw_EquipmentDetail_C_ExecuteUbergraph_w_EquipmentDetail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
