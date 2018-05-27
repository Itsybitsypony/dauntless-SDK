#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_inventory_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass inventory_function_library.inventory_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Uinventory_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass inventory_function_library.inventory_function_library_C");
		return ptr;
	}


	void STATIC_GetAllItemsWithQuanityFromBundle(const struct FName& Bundle, class UObject* WorldContextObject, class UObject* __WorldContext, TArray<struct FPlayFabCatalogItemQuantity>* ItemsWithQuantity);
	void STATIC_ItemKindToArmorType(EItemGroupType Kind, class UObject* __WorldContext, bool* ValidArmorType, EArmorType* ArmorType);
	class FString STATIC_GetTransmogID(const class FString& ItemInstanceId, const class FString& ItemID, class UObject* __WorldContext);
	void STATIC_CheckQuestRequirements(class UEquipmentItem* EquipmentItem, class AArchonPlayerController* PlayerController, class UObject* __WorldContext, bool* QuestRequirementsMet, TArray<struct FName>* QuestsThatFailed);
	void STATIC_CanPlayerViewCraftableItem(class UObject* __WorldContext, struct FPlayFabCraftedCatalogTableData* CraftedItemCatalogData, bool* IsViewable);
	void STATIC_GetLocalInventory(class UObject* __WorldContext, class AArchonInventory** LocalInventory);
	void STATIC_GetLocalLoadout(class UObject* __WorldContext, class AArchonLoadout** LocalLoadout);
	void STATIC_WeaponTypeToItemKind(EWeaponType WeaponType, class UObject* Context_Object, class UObject* __WorldContext, EItemGroupType* ItemKind);
	void STATIC_GetItemKind(const class FString& ItemID, class UObject* __WorldContext, EItemGroupType* ItemKind);
	void STATIC_ItemKindToQuickItemSlot(EItemGroupType Kind, class UObject* __WorldContext, bool* ValidArmorSlot, EQuickItemSlot* ArmorSlotType);
	void STATIC_GetFirstInstanceIDOfItemID(const class FString& ItemID, class AArchonPlayerController* Controller, class UObject* __WorldContext, class FString* FirstInstanceID);
	void STATIC_SetupEquipItemTooltip(const class FString& NewTooltipInstanceID, class UPanelWidget* ParentWidget, bool InLobby, class UObject* __WorldContext, class FString* StringStoringTooltipInstanceID, class Uw_EquipItem_tooltip_bpw_C** VariableStoringTooltipWidget);
	void STATIC_QuickItemSlotToItemKind(EQuickItemSlot QuickItemSlot, class UObject* Context_Object, class UObject* __WorldContext, EItemGroupType* ItemKind);
	void STATIC_GetGearTypeFromItemKind(EItemGroupType ItemKind, class UObject* __WorldContext, TEnumAsByte<Egear_type>* GearType);
	void STATIC_GetItemPowerLevel(const class FString& InstanceId, const class FString& ItemID, class UObject* WorldContextObject, class UObject* __WorldContext, bool* ItemHasPowerOrResistanceStat, float* GlobalPower, TArray<struct Felement_float_pair>* ElementalPowers);
	void STATIC_ArmorSlotTypeToItemKind(TEnumAsByte<Earmor_slot_enum> ArmorSlot, class UObject* Context_Object, class UObject* __WorldContext, EItemGroupType* ItemKind);
	void STATIC_Merge(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection, class UObject* __WorldContext, TArray<class UObject*>* Array1, TArray<class UObject*>* Array2, TArray<class UObject*>* MergedList);
	void STATIC_MergeSort(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection, class UObject* __WorldContext, TArray<class UObject*>* List, TArray<class UObject*>* SortedList);
	void STATIC_GetItemIDFromInstanceID(const class FString& InstanceId, class UObject* __WorldContext, bool* ItemIDFound, class FString* ItemID);
	void STATIC_ItemKindToArmorSlotType(EItemGroupType Kind, class UObject* __WorldContext, bool* ValidArmorSlot, TEnumAsByte<Earmor_slot_enum>* ArmorSlotType);
	void STATIC_IsItemEquipped(const class FString& InstanceId, class UObject* __WorldContext, bool* IsItemEquipped, EItemGroupType* SlotKind);
	void STATIC_GetEquippedItemForSlot(EItemGroupType SlotKind, class UObject* __WorldContext, bool* IsAnItemEquipped_, class FString* ItemID, class FString* InstanceId, class UArchonInventoryItem** Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
