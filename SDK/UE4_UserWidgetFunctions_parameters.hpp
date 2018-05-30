#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UserWidgetFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Cinematic Blocker Layer
struct UUserWidgetFunctions_C_Get_Cinematic_Blocker_Layer_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetTimerTextFromTimespan
struct UUserWidgetFunctions_C_GetTimerTextFromTimespan_Params
{
	struct FTimespan                                   Timespan;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TimerText;                                                // (Parm, OutParm)
	bool                                               TimeRemaining;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Chat Layer
struct UUserWidgetFunctions_C_Get_Chat_Layer_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Unbind Input Swap
struct UUserWidgetFunctions_C_Unbind_Input_Swap_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Swap_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get HUD Stat Type
struct UUserWidgetFunctions_C_Get_HUD_Stat_Type_Params
{
	TEnumAsByte<Eplayer_stat_type>                     Stat_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElementType                                       Element_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadoutStatTypes>                     Loadout_State_Type;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconFromItemID
struct UUserWidgetFunctions_C_GetIconFromItemID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
	EItemRarityLevelType                               Rarity_Level;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Display_Name;                                             // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Using Gamepad
struct UUserWidgetFunctions_C_Is_Using_Gamepad_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Create Blocking Popup Message
struct UUserWidgetFunctions_C_Create_Blocking_Popup_Message_Params
{
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Upopup_bpw_C*                                Popup;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconForEquipmentItem
struct UUserWidgetFunctions_C_GetIconForEquipmentItem_Params
{
	class UEquipmentItem*                              EquipmentItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Create Confirmation Popup
struct UUserWidgetFunctions_C_Create_Confirmation_Popup_Params
{
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UConfirmPopup_bpw_C*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetStatsFromCells
struct UUserWidgetFunctions_C_GetStatsFromCells_Params
{
	class FString                                      ItemInstanceIDContainingCells;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Floadout_stat_info>                  Stats;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetRarityTextColour
struct UUserWidgetFunctions_C_GetRarityTextColour_Params
{
	EItemRarityLevelType                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Linear_Colour;                                            // (Parm, OutParm, IsPlainOldData)
	struct FSlateColor                                 Slate_Colour__UI_;                                        // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.InsertInventoryItemSorted
struct UUserWidgetFunctions_C_InsertInventoryItemSorted_Params
{
	TEnumAsByte<Ecatalog_item_sort_type>               SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Finventory_item_count>               ItemArrayRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Format_text_ItemType
struct UUserWidgetFunctions_C_Format_text_ItemType_Params
{
	EItemGroupType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Type_Name;                                                // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetDyeConfig
struct UUserWidgetFunctions_C_GetDyeConfig_Params
{
	bool                                               Equipped;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EArmorType                                         ArmourType_ifNotEquipped_;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Primary_Texture;                                          // (Parm, OutParm)
	TAssetPtr<class UTexture2D>                        Secondary_Texture;                                        // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetEquipmentValueForLevel
struct UUserWidgetFunctions_C_GetEquipmentValueForLevel_Params
{
	float                                              Base_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value_Per_Level;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EUpgradeableItemLevel                              Item_Level;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconForItem
struct UUserWidgetFunctions_C_GetIconForItem_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetItem_from_Inventory_with_InstanceId
struct UUserWidgetFunctions_C_GetItem_from_Inventory_with_InstanceId_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetCurrentScreenAspectRatio
struct UUserWidgetFunctions_C_GetCurrentScreenAspectRatio_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExactRatio;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_aspect_mode>                         AvgAspectRatio;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetInputKeyInfo
struct UUserWidgetFunctions_C_GetInputKeyInfo_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Default_Icon;                                             // (Parm, OutParm)
	class FString                                      Default_PlayerFacingName;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetWeaponMatchupText
struct UUserWidgetFunctions_C_GetWeaponMatchupText_Params
{
	float                                              GlobalPower;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryElementPower;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElementType                                       PrimaryElementType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       VsStrong;                                                 // (Parm, OutParm)
	struct FText                                       VsWeak;                                                   // (Parm, OutParm)
	struct FText                                       VsAllOrNeutral;                                           // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetElementFloatPairDeltas
struct UUserWidgetFunctions_C_GetElementFloatPairDeltas_Params
{
	TArray<struct Felement_float_pair>                 Removing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Felement_float_pair>                 Adding;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 Deltas;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.CombineElementFloatPairs
struct UUserWidgetFunctions_C_CombineElementFloatPairs_Params
{
	TArray<struct Felement_float_pair>                 FloatPairs1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Felement_float_pair>                 FloatPairs2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 CombinedArray;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.SortElementFloatPairs
struct UUserWidgetFunctions_C_SortElementFloatPairs_Params
{
	TArray<struct Felement_float_pair>                 ElementFloatPairs;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 SortedElementFloatPairs;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.ConvertElementFloatArrayToHUDStatArray
struct UUserWidgetFunctions_C_ConvertElementFloatArrayToHUDStatArray_Params
{
	TEnumAsByte<Eplayer_stat_type>                     StatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementFloatData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Estat_value_type>                      StatValueType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Floadout_stat_info>                  HUDStatArray;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.SortLoadoutStats
struct UUserWidgetFunctions_C_SortLoadoutStats_Params
{
	TArray<struct Floadout_stat_info>                  UnsortedHUDStatValues;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Floadout_stat_info>                  SortedHUDStatValues;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Create Popup Message
struct UUserWidgetFunctions_C_Create_Popup_Message_Params
{
	class APlayerController*                           OwningPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.IsPartyMatchmaking
struct UUserWidgetFunctions_C_IsPartyMatchmaking_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.GetRarityColour
struct UUserWidgetFunctions_C_GetRarityColour_Params
{
	EItemRarityLevelType                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Linear_Colour;                                            // (Parm, OutParm, IsPlainOldData)
	struct FSlateColor                                 Slate_Colour__UI_;                                        // (Parm, OutParm)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Lantern
struct UUserWidgetFunctions_C_Is_Item_Lantern_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Recipe
struct UUserWidgetFunctions_C_Is_Item_Recipe_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Keyword Count for Item Id
struct UUserWidgetFunctions_C_Get_Keyword_Count_for_Item_Id_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Keyword Count for Armour Item
struct UUserWidgetFunctions_C_Get_Keyword_Count_for_Armour_Item_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Holding Interact Key
struct UUserWidgetFunctions_C_Is_Holding_Interact_Key_Params
{
	class APlayerController*                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Weapon
struct UUserWidgetFunctions_C_Is_Item_Weapon_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Weapon Type
struct UUserWidgetFunctions_C_Get_Weapon_Type_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Vendor Item Type
struct UUserWidgetFunctions_C_Get_Vendor_Item_Type_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EquipmentVendor>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Armour Type
struct UUserWidgetFunctions_C_Get_Armour_Type_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         armour_type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Armour
struct UUserWidgetFunctions_C_Is_Item_Armour_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Setup Input Swap
struct UUserWidgetFunctions_C_Setup_Input_Swap_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Swap_Event;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Using_Gamepad;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Popup Layer
struct UUserWidgetFunctions_C_Get_Popup_Layer_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Screen Layer
struct UUserWidgetFunctions_C_Get_Screen_Layer_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
