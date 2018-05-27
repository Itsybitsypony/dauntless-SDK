#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentProgression.w_EquipmentProgression_C.Player Has Recipe for Bundle
struct Uw_EquipmentProgression_C_Player_Has_Recipe_for_Bundle_Params
{
	class FString                                      BundleId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Bundle Id
struct Uw_EquipmentProgression_C_Get_Bundle_Id_Params
{
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Bundle Has Recipe
struct Uw_EquipmentProgression_C_Bundle_Has_Recipe_Params
{
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Item Id
struct Uw_EquipmentProgression_C_Get_Item_Id_Params
{
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Higher Tier Progress Link
struct Uw_EquipmentProgression_C_Get_Higher_Tier_Progress_Link_Params
{
	TArray<TEnumAsByte<EProgressionLink>>              CategoryProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Lower Tier Progress Link
struct Uw_EquipmentProgression_C_Get_Lower_Tier_Progress_Link_Params
{
	TArray<TEnumAsByte<EProgressionLink>>              CategoryProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Has Recipe
struct Uw_EquipmentProgression_C_Has_Recipe_Params
{
	TEnumAsByte<EProgressionLink>                      Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Item Id
struct Uw_EquipmentProgression_C_Get_Armour_Item_Id_Params
{
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Setup Armour Category Progression
struct Uw_EquipmentProgression_C_Setup_Armour_Category_Progression_Params
{
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<TEnumAsByte<EProgressionLink>>              CategoryProgression;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Player Can Craft Item
struct Uw_EquipmentProgression_C_Player_Can_Craft_Item_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Tier Progress
struct Uw_EquipmentProgression_C_Get_Armour_Tier_Progress_Params
{
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                PlayerTier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressionLink>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Read Armour Progression
struct Uw_EquipmentProgression_C_Read_Armour_Progression_Params
{
	TArray<TEnumAsByte<EProgressionLink>>              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                PlayerTier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Recipe
struct Uw_EquipmentProgression_C_Get_Recipe_Params
{
	TArray<class FString>                              BundleItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Has_Recipe;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Tier Widget
struct Uw_EquipmentProgression_C_Get_Armour_Tier_Widget_Params
{
	int                                                Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentProgression_Tier_Armour_C*       Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Set Name
struct Uw_EquipmentProgression_C_Set_Name_Params
{
	class FString                                      SetName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Setup Armour Progression
struct Uw_EquipmentProgression_C_Setup_Armour_Progression_Params
{
	class FString                                      SetName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class UArchonInventoryItem*>                InventoryItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AutoFocus;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         Manual_Focus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.Item Hover
struct Uw_EquipmentProgression_C_Item_Hover_Params
{
	class Uw_EquipmentVendor_Item_C*                   Armour_Item;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.ExecuteUbergraph_w_EquipmentProgression
struct Uw_EquipmentProgression_C_ExecuteUbergraph_w_EquipmentProgression_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression.w_EquipmentProgression_C.On Item Hovered__DelegateSignature
struct Uw_EquipmentProgression_C_On_Item_Hovered__DelegateSignature_Params
{
	class Uw_EquipmentVendor_Item_C*                   Armour_Item;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
