#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipItem_tooltip_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.ResetWidgetVisibility
struct Uw_EquipItem_tooltip_bpw_C_ResetWidgetVisibility_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.InitLanternStrings
struct Uw_EquipItem_tooltip_bpw_C_InitLanternStrings_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetBrushColor_1
struct Uw_EquipItem_tooltip_bpw_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_MainPanel_Visibility_1
struct Uw_EquipItem_tooltip_bpw_C_Get_MainPanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_AdvancedMenu_Border_bIsEnabled_1
struct Uw_EquipItem_tooltip_bpw_C_Get_AdvancedMenu_Border_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_AdvancedMenu_Border_Visibility_1
struct Uw_EquipItem_tooltip_bpw_C_Get_AdvancedMenu_Border_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_HasCells
struct Uw_EquipItem_tooltip_bpw_C_Get_HasCells_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetVisibility_1
struct Uw_EquipItem_tooltip_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetDyeConfig
struct Uw_EquipItem_tooltip_bpw_C_GetDyeConfig_Params
{
	TAssetPtr<class UTexture2D>                        Primary_Texture;                                          // (Parm, OutParm)
	TAssetPtr<class UTexture2D>                        Secondary_Texture;                                        // (Parm, OutParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.RefreshElementalWidgetsAndPassives
struct Uw_EquipItem_tooltip_bpw_C_RefreshElementalWidgetsAndPassives_Params
{
	TArray<struct Felement_float_pair>                 ElementalValues;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsResistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estat_value_type>                      LoadoutStatValueType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estat_icon_type>                       IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_AspectDetails_Visibility
struct Uw_EquipItem_tooltip_bpw_C_Get_AspectDetails_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.ClearKeywords
struct Uw_EquipItem_tooltip_bpw_C_ClearKeywords_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_Border-FULLSETCOMPARE_Visibility_1
struct Uw_EquipItem_tooltip_bpw_C_Get_Border_FULLSETCOMPARE_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.LookupWepPower
struct Uw_EquipItem_tooltip_bpw_C_LookupWepPower_Params
{
	class FString                                      WeaponItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              GlobalPower;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryElementPower;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EElementType                                       PrimaryElementType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetWepValue
struct Uw_EquipItem_tooltip_bpw_C_GetWepValue_Params
{
	struct FArchonCatalogItem                          ArchonCatalogItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Formatted_Number;                                         // (Parm, OutParm)
	float                                              Raw_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EElementType                                       PrimaryElementType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryElementPower;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetWepDelta
struct Uw_EquipItem_tooltip_bpw_C_GetWepDelta_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              ItemPower;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetLanternDelta
struct Uw_EquipItem_tooltip_bpw_C_GetLanternDelta_Params
{
	float                                              SelectedItemPower;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EquippedItemPower;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_PowerResistance_txt_Text_1
struct Uw_EquipItem_tooltip_bpw_C_Get_PowerResistance_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Get_Delta_txt_ColorAndOpacity_1
struct Uw_EquipItem_tooltip_bpw_C_Get_Delta_txt_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.SetVisibilityHidden_IfEquipped
struct Uw_EquipItem_tooltip_bpw_C_SetVisibilityHidden_IfEquipped_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.LookupArmourPower
struct Uw_EquipItem_tooltip_bpw_C_LookupArmourPower_Params
{
	class FString                                      ArmourItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Global_Resistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementalResistances;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetArmourValue
struct Uw_EquipItem_tooltip_bpw_C_GetArmourValue_Params
{
	struct FArchonCatalogItem                          ArchonCatalogItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Formatted_Number;                                         // (Parm, OutParm)
	float                                              Raw_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementalResistances;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetArmourDelta
struct Uw_EquipItem_tooltip_bpw_C_GetArmourDelta_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              ItemPower;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.UpdateKeywords_ItemOnly
struct Uw_EquipItem_tooltip_bpw_C_UpdateKeywords_ItemOnly_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.UpdateKeywords_FullSet
struct Uw_EquipItem_tooltip_bpw_C_UpdateKeywords_FullSet_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.ShouldShowKeywords
struct Uw_EquipItem_tooltip_bpw_C_ShouldShowKeywords_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetKeywordAbilitiesforCount
struct Uw_EquipItem_tooltip_bpw_C_GetKeywordAbilitiesforCount_Params
{
	struct FArmourSetTableData                         Set_Data;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Abilities;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.AddLanternKeywords
struct Uw_EquipItem_tooltip_bpw_C_AddLanternKeywords_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Count KeywordOnEquippedArmour
struct Uw_EquipItem_tooltip_bpw_C_Count_KeywordOnEquippedArmour_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.AddArmour_ItemKeywords
struct Uw_EquipItem_tooltip_bpw_C_AddArmour_ItemKeywords_Params
{
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.SetupCompare_FullArmourKeywords
struct Uw_EquipItem_tooltip_bpw_C_SetupCompare_FullArmourKeywords_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetKeywordsforArmourItem
struct Uw_EquipItem_tooltip_bpw_C_GetKeywordsforArmourItem_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               Keywords;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.CreateKeywordWidget
struct Uw_EquipItem_tooltip_bpw_C_CreateKeywordWidget_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_Keyword_C*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetWidgetforKeywords
struct Uw_EquipItem_tooltip_bpw_C_GetWidgetforKeywords_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_Keyword_C*                Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.txt_Get_ArmourType_Text
struct Uw_EquipItem_tooltip_bpw_C_txt_Get_ArmourType_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.IsEquipped?GetVisibility
struct Uw_EquipItem_tooltip_bpw_C_IsEquipped_GetVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.IsStackable?GetVisibility_1
struct Uw_EquipItem_tooltip_bpw_C_IsStackable_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.GetRarity_BorderBG_Background_Colour
struct Uw_EquipItem_tooltip_bpw_C_GetRarity_BorderBG_Background_Colour_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.OnLoaded_A058EA6248D678A919D5DF917CDD391F
struct Uw_EquipItem_tooltip_bpw_C_OnLoaded_A058EA6248D678A919D5DF917CDD391F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.OnLoaded_A058EA6248D678A919D5DF916BA1141B
struct Uw_EquipItem_tooltip_bpw_C_OnLoaded_A058EA6248D678A919D5DF916BA1141B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.Construct
struct Uw_EquipItem_tooltip_bpw_C_Construct_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.OnKeyWordsUpdated
struct Uw_EquipItem_tooltip_bpw_C_OnKeyWordsUpdated_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.ResetDisplay
struct Uw_EquipItem_tooltip_bpw_C_ResetDisplay_Params
{
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.RecieveLanternGlobalResistance
struct Uw_EquipItem_tooltip_bpw_C_RecieveLanternGlobalResistance_Params
{
	float                                              GlobalResistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct Felement_float_pair>                 ElementalResistances;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.UpdateTooltip
struct Uw_EquipItem_tooltip_bpw_C_UpdateTooltip_Params
{
	class FString                                      NewItemInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_EquipItem_tooltip_bpw.w_EquipItem_tooltip_bpw_C.ExecuteUbergraph_w_EquipItem_tooltip_bpw
struct Uw_EquipItem_tooltip_bpw_C_ExecuteUbergraph_w_EquipItem_tooltip_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
