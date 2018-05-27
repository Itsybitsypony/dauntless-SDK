#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_inventory_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function inventory_function_library.inventory_function_library_C.GetAllItemsWithQuanityFromBundle
struct Uinventory_function_library_C_GetAllItemsWithQuanityFromBundle_Params
{
	struct FName                                       Bundle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayFabCatalogItemQuantity>         ItemsWithQuantity;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.ItemKindToArmorType
struct Uinventory_function_library_C_ItemKindToArmorType_Params
{
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidArmorType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmorType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetTransmogID
struct Uinventory_function_library_C_GetTransmogID_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function inventory_function_library.inventory_function_library_C.CheckQuestRequirements
struct Uinventory_function_library_C_CheckQuestRequirements_Params
{
	class UEquipmentItem*                              EquipmentItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestRequirementsMet;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               QuestsThatFailed;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.CanPlayerViewCraftableItem
struct Uinventory_function_library_C_CanPlayerViewCraftableItem_Params
{
	struct FPlayFabCraftedCatalogTableData             CraftedItemCatalogData;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsViewable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetLocalInventory
struct Uinventory_function_library_C_GetLocalInventory_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonInventory*                            LocalInventory;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetLocalLoadout
struct Uinventory_function_library_C_GetLocalLoadout_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonLoadout*                              LocalLoadout;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.WeaponTypeToItemKind
struct Uinventory_function_library_C_WeaponTypeToItemKind_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context_Object;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     ItemKind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetItemKind
struct Uinventory_function_library_C_GetItemKind_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     ItemKind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.ItemKindToQuickItemSlot
struct Uinventory_function_library_C_ItemKindToQuickItemSlot_Params
{
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidArmorSlot;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EQuickItemSlot                                     ArmorSlotType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetFirstInstanceIDOfItemID
struct Uinventory_function_library_C_GetFirstInstanceIDOfItemID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AArchonPlayerController*                     Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FirstInstanceID;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.SetupEquipItemTooltip
struct Uinventory_function_library_C_SetupEquipItemTooltip_Params
{
	class FString                                      NewTooltipInstanceID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UPanelWidget*                                ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StringStoringTooltipInstanceID;                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class Uw_EquipItem_tooltip_bpw_C*                  VariableStoringTooltipWidget;                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               InLobby;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.QuickItemSlotToItemKind
struct Uinventory_function_library_C_QuickItemSlotToItemKind_Params
{
	EQuickItemSlot                                     QuickItemSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context_Object;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     ItemKind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetGearTypeFromItemKind
struct Uinventory_function_library_C_GetGearTypeFromItemKind_Params
{
	EItemGroupType                                     ItemKind;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Egear_type>                            GearType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetItemPowerLevel
struct Uinventory_function_library_C_GetItemPowerLevel_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItemHasPowerOrResistanceStat;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalPower;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementalPowers;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.ArmorSlotTypeToItemKind
struct Uinventory_function_library_C_ArmorSlotTypeToItemKind_Params
{
	TEnumAsByte<Earmor_slot_enum>                      ArmorSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context_Object;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     ItemKind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.Merge
struct Uinventory_function_library_C_Merge_Params
{
	TArray<class UObject*>                             Array1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UObject*>                             Array2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Esort_type>                            SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Esort_direction>                       SortDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             MergedList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.MergeSort
struct Uinventory_function_library_C_MergeSort_Params
{
	TArray<class UObject*>                             List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Esort_type>                            SortType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Esort_direction>                       SortDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             SortedList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.GetItemIDFromInstanceID
struct Uinventory_function_library_C_GetItemIDFromInstanceID_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItemIDFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_function_library.inventory_function_library_C.ItemKindToArmorSlotType
struct Uinventory_function_library_C_ItemKindToArmorSlotType_Params
{
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidArmorSlot;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Earmor_slot_enum>                      ArmorSlotType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.IsItemEquipped
struct Uinventory_function_library_C_IsItemEquipped_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsItemEquipped;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     SlotKind;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_function_library.inventory_function_library_C.GetEquippedItemForSlot
struct Uinventory_function_library_C_GetEquippedItemForSlot_Params
{
	EItemGroupType                                     SlotKind;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAnItemEquipped_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (Parm, OutParm, ZeroConstructor)
	class UArchonInventoryItem*                        Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
