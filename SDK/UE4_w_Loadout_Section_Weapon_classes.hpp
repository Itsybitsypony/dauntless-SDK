#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C
// 0x0158 (0x0428 - 0x02D0)
class Uw_Loadout_Section_Weapon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            WeaponCellInfusion_Outro;                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            WeaponCellInfusion_Intro;                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            WeaponStage_Outro;                                        // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            WeaponStage_Intro;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     BigTriClickArea;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox_EquippedTooltip;                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox_PreviewTooltip;                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_LoadoutSec_Wep_Button_C*                  Wep_Button;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    WeaponCategorySelected;                                   // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponCategoryHovered;                                    // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class FString>                              Weapons_Swords;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              Weapons_Axes;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              Weapons_ChainBlades;                                      // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              Weapons_MortarSpears;                                     // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              Weapons_Hammers;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    PaperdollUpdate_Kind;                                     // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EWeaponType                                        FocusedWeaponType;                                        // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        EquippedWeaponType;                                       // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    PaperdollUpdate_Weapon4Pose;                              // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                EquippedIndex;                                            // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class Uloadout_screen_bpw_C*                       RootMenu;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PushFocus;                                                // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UUniformGridSlot*                            NewVar_1;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class Uw_Loadout_GridItem_C*>               WepGridArray;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ActiveInstanceID;                                         // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    BlockParentInput;                                         // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Uw_equipitem_tooltip_manager_C*              PreviewTooltipManager;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PaperdollUpdate_Transmog;                                 // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Uw_button_legend_C*                          ButtonLegend;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C");
		return ptr;
	}


	bool CanModifyItems();
	bool CanInspectItem(class UArchonInventoryItem* Item);
	void Clear_Button_Legend_Action(const struct FName& Action);
	void Update_Button_Legend_Action(bool Show, const struct FName& Action, const struct FText& Label, bool Enabled, struct FScriptDelegate* Event);
	bool CanInfuseCell(class UObject* Object);
	void GetTransmogOrItemId(class UArchonInventoryItem* WeaponItem, class FString* ItemID);
	ESlateVisibility GetVisibility_1();
	void SetupWeaponGrid(EWeaponType FocusedWeaponType);
	ESlateVisibility Get_BigClickArea_0_Visibility_1();
	void UpdateWeaponPaperdoll(const class FString& ItemID);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature();
	void BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature();
	void BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature();
	void BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature(EWeaponType NewParam);
	void GridItem_UnHovered(const class FString& InstanceId, const class FString& ItemID, int Index);
	void UnFocused();
	void BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature();
	void Clear_Preview_Tooltip();
	void SetRootReference(class Uloadout_screen_bpw_C* Root_Menu, class UUserWidget* ButtonLegend);
	void BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode);
	void EmptyGrid_UnHovered();
	void OnItemClicked_Event_1(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex);
	void OnItemFocused_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index);
	void SetActiveInstanceIDToEquippedWeapon();
	void OnItemSecondaryClicked(const class FString& InstanceId, const class FString& ItemID, int Index);
	void Add_Context_Actions(class Ucontext_menu_bpw_C* ContextMenu, const class FString& ItemInstanceId);
	void OnOpenInfuse();
	void OnOpenDyes();
	void OnOpenTransmog();
	void OnSalvage();
	void EquipItem_Weapon(const class FString& InstanceId, int Index);
	void OpenCellInfusion(const class FString& InstanceId);
	void OpenTransmogWindow(const class FString& InstanceId);
	void Update_Paperdoll_Transmog(const class FString& InstanceId, const class FString& TransmogId);
	void BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button_Hovered__DelegateSignature();
	void Show_Context_Menu(const class FString& InstanceId);
	void BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button_Clicked__DelegateSignature(EWeaponType WeaponType);
	void Refresh_Button_Legend();
	void OnButtonLegendInfuse();
	void OnButtonLegendDye();
	void OnButtonLegendTransmog();
	void Clear_Weapon_Button_Legend_Actions();
	void Construct();
	void Leave_Weapon_Section();
	void OnCellInfusionClosed();
	void OnInspect();
	void OnButtonLegendInspect();
	void OpenInspect(const class FString& ItemInstanceId);
	void CommitOnLoadoutChanged();
	void ExecuteUbergraph_w_Loadout_Section_Weapon(int EntryPoint);
	void PaperdollUpdate_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId);
	void BlockParentInput__DelegateSignature(bool BlockInput);
	void PushFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode);
	void PaperdollUpdate_Weapon4Pose__DelegateSignature(EWeaponType WeaponType);
	void PaperdollUpdate_Kind__DelegateSignature(const class FString& ItemID, EItemGroupType Kind);
	void WeaponCategoryHovered__DelegateSignature();
	void WeaponCategorySelected__DelegateSignature(EWeaponType WeaponType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
