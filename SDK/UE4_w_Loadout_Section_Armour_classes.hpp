#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Armour_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_Loadout_Section_Armour.w_Loadout_Section_Armour_C
// 0x0210 (0x04E0 - 0x02D0)
class Uw_Loadout_Section_Armour_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            CloseArmourCellMenuAnim;                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            OpenArmourCellMenuAnimation;                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ArmourStage_Outro;                                        // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ArmourStage_Intro;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     BigTriClickArea;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_LoadoutSec_Armour_Button_C*               Loadout_Armour_Button;                                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Reference_Stage1;                                         // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox_EquippedTooltip_ArmourStage;                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox_PreviewTooltip;                                 // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ArmourCategorySelected;                                   // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ArmourCategoryHovered;                                    // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class FString>                              InstanceIDs_Legs;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              InstanceIDs_Arms;                                         // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              InstanceIDs_Helms;                                        // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              InstanceIDs_Lanterns;                                     // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              InstanceIDs_Chests;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    ArmourCategorySelected_BySlot;                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<Earmor_slot_enum>                      FocusedArmourSlot;                                        // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ArmourCat_PaperdollUpdate;                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SendFocus;                                                // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdateArmourDyes_PaperDoll;                               // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TintWindow_Closed;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                EquippedGridIndex_Legs;                                   // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EquippedGridIndex_Arms;                                   // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EquippedGridIndex_Head;                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EquippedGridIndex_Lantern;                                // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EquippedGridIndex_Torso;                                  // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClearTooltips;                                            // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                LanternGridLength;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class FString                                      FocusedEquippedItemID;                                    // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      FocusedEquippedInstanceID;                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class Uloadout_screen_bpw_C*                       MenuRoot;                                                 // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ParentBlockInput;                                         // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class FString                                      L_NewInstanceID;                                          // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      L_NewItemID;                                              // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      EquippedTooltipInstanceID;                                // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      PreviewTooltipInstanceID;                                 // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      L_InstanceID;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Uw_equipitem_tooltip_manager_C*              EquippedTooltipMgr;                                       // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_equipitem_tooltip_manager_C*              PreviewTooltipMgr;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                L_NewGridFocusIndex;                                      // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ArmourTransmogUpdated;                                    // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Uw_button_legend_C*                          ButtonLegend;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Loadout_Section_Armour.w_Loadout_Section_Armour_C");
		return ptr;
	}


	bool CanModifyItems();
	bool CanInspectItem(class UArchonInventoryItem* Item);
	void Clear_Button_Legend_Action(const struct FName& Action);
	void Update_Button_Legend_Action(bool Show, const struct FName& Action, const struct FText& Label, bool Enabled, struct FScriptDelegate* Event);
	void Server_Assign_Armour_Item(class UArchonInventoryItem* Item, TEnumAsByte<Earmor_slot_enum> ArmorSlot);
	bool CanInfuseCell(class UObject* Item);
	ESlateVisibility GetVisibility_1();
	ESlateVisibility Get_BigClickArea_Visibility();
	void GetEquippedItem(TEnumAsByte<Earmor_slot_enum> Selection, class FString* ItemID, class FString* ItemInstanceId);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void GamepadFocused(TEnumAsByte<Earmor_slot_enum> ArmourSlot);
	void ClearPreviewTooltip();
	void SetRootReference(class Uloadout_screen_bpw_C* Root, class UUserWidget* ButtonLegend);
	void BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature();
	void ClearEquippedTooltip();
	void BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature();
	void BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode);
	void OpenCellMenu();
	void OpenCellInfusion(const class FString& InstanceId);
	void UpdateFocusedInstance(const class FString& InstanceId);
	void OpenTintWindow(const class FString& InstanceId);
	void BlockInput(bool BlockInput);
	void ArmorCategorySelected(TEnumAsByte<Earmor_slot_enum> EquipSlotClicked, bool PushFocustoGrid_);
	void AttachToLoadoutGrid();
	void OnItemClicked_Event_1(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex);
	void OnItemHovered_Event_1(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex);
	void OnItemFocused_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index);
	void SetEquippedTooltipInstanceID(const class FString& NewTooltipInstanceID);
	void SetPreviewTooltipInstanceID(const class FString& NewTooltipInstanceID);
	void FocusArmorSlot(TEnumAsByte<Earmor_slot_enum> Slot);
	void BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature(TEnumAsByte<Earmor_slot_enum> FocusedSlot);
	void OnItemSecondaryClick(const class FString& InstanceId, const class FString& ItemID, int Index);
	void Show_Context_Menu(const class FString& InstanceId);
	void Add_Context_Actions(class Ucontext_menu_bpw_C* ContextMenu, const class FString& ItemInstanceId);
	void OnOpenInfuse();
	void OnOpenDyes();
	void OnOpenTransmog();
	void OnSalvage();
	void EquipItem(const class FString& InstanceId, const class FString& ItemID, int Index);
	void BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature(TEnumAsByte<Earmor_slot_enum> Slot);
	void Update_Paperdoll_Tints(const struct FDyeVariant& DyeStruct, EArmorType ArmourPart);
	void BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button_Hovered__DelegateSignature(TEnumAsByte<Earmor_slot_enum> Armour_Slot);
	void OpenTransmogWindow(const class FString& InstanceId);
	void Update_Paperdoll_Transmog(const class FString& InstanceId, const class FString& TransmogId);
	void BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button_Clicked__DelegateSignature();
	void Refresh_Button_Legend();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnButtonLegendInfuse();
	void OnButtonLegendDye();
	void OnButtonLegendTransmog();
	void Construct();
	void Leave_Armour_Section();
	void Clear_Armour_Button_Legend_Actions();
	void OnInspect();
	void BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature();
	void OnButtonLegendInspect();
	void OpenInspect(const class FString& ItemInstanceId);
	void Cell_Infusion_Closed();
	void CommitOnLoadoutChanged();
	void ExecuteUbergraph_w_Loadout_Section_Armour(int EntryPoint);
	void ArmourTransmogUpdated__DelegateSignature(const class FString& InstanceId, const class FString& ItemID);
	void NewEventDispatcher_0__DelegateSignature();
	void ParentBlockInput__DelegateSignature(bool BlockInput);
	void ClearTooltips__DelegateSignature();
	void TintWindow_Closed__DelegateSignature(TEnumAsByte<Earmor_slot_enum> focused_Slot);
	void UpdateArmourDyes_PaperDoll__DelegateSignature(const struct FDyeVariant& DyeStruct, EArmorType ArmourSlot);
	void SendFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode);
	void ArmourCat_PaperdollUpdate__DelegateSignature(const class FString& ItemID, EItemGroupType ItemType, const class FString& ItemInstanceId);
	void ArmourCategorySelected_BySlot__DelegateSignature(TEnumAsByte<Earmor_slot_enum> EquipSlotClicked);
	void ArmourCategoryHovered__DelegateSignature();
	void ArmourCategorySelected__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
