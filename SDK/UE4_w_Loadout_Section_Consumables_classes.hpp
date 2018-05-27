#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Consumables_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C
// 0x0170 (0x0440 - 0x02D0)
class Uw_Loadout_Section_Consumables_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ConsumablesStage_Outro;                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ConsumablesStage_Intro;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     BigTriClickArea1;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     BigTriClickArea2;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     BigTriClickArea3;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ConsumableLabel;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_LoadoutSec_Consumables_Button_C*          Consumables_Button;                                       // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Reference_Stage1;                                         // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  TooltipBox;                                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ConsumablesCategorySelected;                              // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ConsumablesCategoryHovered;                               // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class FString>                              QuickItems_Healing;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              QuickItems_Defence;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              QuickItems_Offence;                                       // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              QuickItems_Flares;                                        // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              QuickItems_Airsupplies;                                   // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EQuickItemSlot                                     ActiveConsumableSlot;                                     // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SendFocus_to_Weapons;                                     // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SendFocus_to_Armour;                                      // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       SlotTypeName;                                             // 0x03B8(0x0018) (Edit, BlueprintVisible)
	class Uloadout_screen_bpw_C*                       Menu_Root;                                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OpenStore_from_Item;                                      // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                EquippedIndex_Healing;                                    // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TArray<class Uw_Loadout_GridItem_C*>               GridArray;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                EquippedIndex_Def;                                        // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EquippedIndex_Off;                                        // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EquippedIndex_Flare;                                      // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EquippedIndex_AirDrops;                                   // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EItemGroupType>                             QuickItemTYpes;                                           // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ActiveSlot;                                               // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class AArchonInventory*                            Inventory;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AArchonLoadout*                              LOADOUT;                                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Uw_Consumable_tooltip_manager_C*             TooltipMan;                                               // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C");
		return ptr;
	}


	void GetQuickSlotWidgetByIndex(int SlotIndex, TArray<class Uw_loadout_quickslot_C*>* Array, class Uw_loadout_quickslot_C** Array_Element);
	ESlateVisibility Get_BigTriClickArea_Visibility_1();
	struct FText Get_quickItem_categoryLabel_Text_1();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void Construct();
	void EquipQuickItem(const class FString& ItemInstanceId, const class FString& ItemID, int Index);
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature();
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature();
	void Grid_Item_UNFOCUSED();
	void Clear_Tooltip();
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main_Button_Hovered__DelegateSignature();
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature(const class FString& ItemID, int Quick_Slot_Index);
	void Set_Root_Reference(class Uloadout_screen_bpw_C* Root);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature();
	void OpenStorefromItem(const class FString& ItemInstanceId, int GridSlot, EItemGroupType NewParam);
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature(EItemGroupType Kind);
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main_Button_Clicked__DelegateSignature();
	void UpdateInventoryPanel(int QuickItemIndex);
	void OnInventoryItemClicked(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex);
	void OnItemHovered(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex);
	void OnItemFocused(const class FString& InstanceId, const class FString& ItemID, int Index);
	void OnItemUnHovered(const class FString& InstanceId, const class FString& ItemID, int UnHoveredIndex);
	void BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature(int quickslot);
	void OnAssignQuickItemComplete();
	void Bind_to_Inventory_Item_Clicked(class Uw_base_inventorypanel_C* InventoryPanel);
	void Bind_to_Inventory_Item_Focus(class Uw_base_inventorypanel_C* InventoryPanel);
	void Bind_to_Inventory_Item_Hover(class Uw_base_inventorypanel_C* InventoryPanel);
	void Refresh_All_Slots();
	void ExecuteUbergraph_w_Loadout_Section_Consumables(int EntryPoint);
	void OpenStore_from_Item__DelegateSignature(const class FString& InstanceId, int SlotIndex, EItemGroupType Kind);
	void SendFocus_to_Armour__DelegateSignature();
	void SendFocus_to_Weapons__DelegateSignature();
	void ConsumablesCategoryHovered__DelegateSignature();
	void ConsumablesCategorySelected__DelegateSignature(int quickslot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
