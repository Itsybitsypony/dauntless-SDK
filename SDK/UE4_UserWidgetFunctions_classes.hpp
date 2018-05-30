#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UserWidgetFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UserWidgetFunctions.UserWidgetFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UUserWidgetFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UserWidgetFunctions.UserWidgetFunctions_C");
		return ptr;
	}


	void STATIC_Get_Cinematic_Blocker_Layer(class UObject* __WorldContext, int* NewParam);
	void STATIC_GetTimerTextFromTimespan(const struct FTimespan& Timespan, class UObject* __WorldContext, struct FText* TimerText, bool* TimeRemaining);
	void STATIC_Get_Chat_Layer(class UObject* __WorldContext, int* ZOrder);
	void STATIC_Unbind_Input_Swap(class APlayerController* Player_Controller, class UObject* __WorldContext, struct FScriptDelegate* Swap_Event);
	void STATIC_Get_HUD_Stat_Type(TEnumAsByte<Eplayer_stat_type> Stat_Type, EElementType Element_Type, class UObject* __WorldContext, TEnumAsByte<ELoadoutStatTypes>* Loadout_State_Type);
	void STATIC_GetIconFromItemID(const class FString& ItemID, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Icon, EItemRarityLevelType* Rarity_Level, struct FText* Display_Name);
	bool STATIC_Is_Using_Gamepad(class UObject* __WorldContext);
	void STATIC_Create_Blocking_Popup_Message(class APlayerController* OwningPlayer, const struct FText& Message, class UObject* __WorldContext, class Upopup_bpw_C** Popup);
	void STATIC_GetIconForEquipmentItem(class UEquipmentItem* EquipmentItem, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Icon);
	class UConfirmPopup_bpw_C* STATIC_Create_Confirmation_Popup(class APlayerController* OwningPlayer, const struct FText& Message, class UObject* __WorldContext);
	void STATIC_GetStatsFromCells(const class FString& ItemInstanceIDContainingCells, class UObject* __WorldContext, TArray<struct Floadout_stat_info>* Stats);
	void STATIC_GetRarityTextColour(EItemRarityLevelType Rarity, class UObject* __WorldContext, struct FLinearColor* Linear_Colour, struct FSlateColor* Slate_Colour__UI_);
	void STATIC_InsertInventoryItemSorted(TEnumAsByte<Ecatalog_item_sort_type> SortType, class UArchonInventoryItem* Item, class UObject* __WorldContext, TArray<struct Finventory_item_count>* ItemArrayRef);
	void STATIC_Format_text_ItemType(EItemGroupType Type, const class FString& ItemID, class UObject* __WorldContext, struct FText* Type_Name);
	void STATIC_GetDyeConfig(bool Equipped, const class FString& ItemInstanceId, const class FString& ItemID, EArmorType ArmourType_ifNotEquipped_, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Primary_Texture, TAssetPtr<class UTexture2D>* Secondary_Texture);
	void STATIC_GetEquipmentValueForLevel(float Base_Value, float Value_Per_Level, EUpgradeableItemLevel Item_Level, class UObject* __WorldContext, float* Level_Value);
	void STATIC_GetIconForItem(class UObject* __WorldContext, struct FArchonCatalogItem* CatalogItem, TAssetPtr<class UTexture2D>* Icon);
	class UArchonInventoryItem* STATIC_GetItem_from_Inventory_with_InstanceId(const class FString& ItemInstanceId, class UObject* __WorldContext);
	void STATIC_GetCurrentScreenAspectRatio(class UObject* __WorldContext, float* ExactRatio, TEnumAsByte<E_aspect_mode>* AvgAspectRatio);
	void STATIC_GetInputKeyInfo(const struct FKey& Key, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Default_Icon, class FString* Default_PlayerFacingName);
	void STATIC_GetWeaponMatchupText(float GlobalPower, float PrimaryElementPower, EElementType PrimaryElementType, class UObject* __WorldContext, struct FText* VsStrong, struct FText* VsWeak, struct FText* VsAllOrNeutral);
	void STATIC_GetElementFloatPairDeltas(class UObject* __WorldContext, TArray<struct Felement_float_pair>* Removing, TArray<struct Felement_float_pair>* Adding, TArray<struct Felement_float_pair>* Deltas);
	void STATIC_CombineElementFloatPairs(class UObject* __WorldContext, TArray<struct Felement_float_pair>* FloatPairs1, TArray<struct Felement_float_pair>* FloatPairs2, TArray<struct Felement_float_pair>* CombinedArray);
	void STATIC_SortElementFloatPairs(class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementFloatPairs, TArray<struct Felement_float_pair>* SortedElementFloatPairs);
	void STATIC_ConvertElementFloatArrayToHUDStatArray(TEnumAsByte<Eplayer_stat_type> StatType, TEnumAsByte<Estat_value_type> StatValueType, class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementFloatData, TArray<struct Floadout_stat_info>* HUDStatArray);
	void STATIC_SortLoadoutStats(class UObject* __WorldContext, TArray<struct Floadout_stat_info>* UnsortedHUDStatValues, TArray<struct Floadout_stat_info>* SortedHUDStatValues);
	void STATIC_Create_Popup_Message(class APlayerController* OwningPlayer, const struct FText& Message, class UObject* __WorldContext);
	bool STATIC_IsPartyMatchmaking(class APlayerController* PlayerController, class UObject* __WorldContext);
	void STATIC_GetRarityColour(EItemRarityLevelType Rarity, class UObject* __WorldContext, struct FLinearColor* Linear_Colour, struct FSlateColor* Slate_Colour__UI_);
	bool STATIC_Is_Item_Lantern(const class FString& ItemID, class UObject* __WorldContext);
	bool STATIC_Is_Item_Recipe(const class FString& ItemID, class UObject* __WorldContext);
	void STATIC_Get_Keyword_Count_for_Item_Id(const struct FName& Keyword, const class FString& ItemID, class UObject* __WorldContext, int* Count);
	void STATIC_Get_Keyword_Count_for_Armour_Item(const struct FName& Keyword, class UArchonInventoryItem* Item, class UObject* __WorldContext, int* Count);
	bool STATIC_Is_Holding_Interact_Key(class APlayerController* Target, class UObject* __WorldContext);
	bool STATIC_Is_Item_Weapon(const class FString& ItemID, class UObject* __WorldContext);
	EWeaponType STATIC_Get_Weapon_Type(const class FString& ItemID, class UObject* __WorldContext);
	TEnumAsByte<EquipmentVendor> STATIC_Get_Vendor_Item_Type(const class FString& ItemID, class UObject* __WorldContext);
	void STATIC_Get_Armour_Type(const class FString& ItemID, class UObject* __WorldContext, EArmorType* armour_type);
	bool STATIC_Is_Item_Armour(const class FString& ItemID, class UObject* __WorldContext);
	void STATIC_Setup_Input_Swap(class APlayerController* Player_Controller, class UObject* __WorldContext, struct FScriptDelegate* Swap_Event, bool* Using_Gamepad);
	void STATIC_Get_Popup_Layer(class UObject* __WorldContext, int* ZOrder);
	void STATIC_Get_Screen_Layer(class UObject* __WorldContext, int* ZOrder);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
