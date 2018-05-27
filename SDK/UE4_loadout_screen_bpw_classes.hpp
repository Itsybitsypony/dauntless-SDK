#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loadout_screen_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass loadout_screen_bpw.loadout_screen_bpw_C
// 0x01F0 (0x04E0 - 0x02F0)
class Uloadout_screen_bpw_C : public UArchonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            ArmourStage_to_MainStage;                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ConsumablesStage_to_MainStage;                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            MainStage_to_Wepstage;                                    // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            MainStage_to_TEMPLATE;                                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            MainStage_to_ConsumablesStage;                            // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            MainStage_to_ArmourStage;                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            WepStage_to_MainStage;                                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Loadout_Section_Weapon_C*                 _1WeaponStage;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Loadout_Section_Armour_C*                 _2ArmourStage;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Loadout_Section_Consumables_C*            _3ConsumableStage;                                        // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FakeFocusReceiveCaster_C*                 focusDown;                                                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FakeFocusReceiveCaster_C*                 focusLeft;                                                // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FakeFocusReceiveCaster_C*                 focusRight;                                               // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FullscreenContainer_C*                    FullscreenBG;                                             // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Reference_Stage1;                                         // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_5;                                              // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_6;                                              // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_7;                                              // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_8;                                              // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_165;                                            // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FakeFocusReceiveCaster_C*                 WFocusCenterHolder;                                       // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    LoadoutCategoryHovered;                                   // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LoadoutCategorySelected_L_Weapons;                        // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LoadoutCategorySelected_R_Armour;                         // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LoadoutCategorySelected_Consumables;                      // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackToMainStage_From;                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<ELoadout_ScreenMode>                   ScreenMode_Loadout;                                       // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdatePaperdoll_EquipNewItem;                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EWeaponType                                        Focused_WeaponType;                                       // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Earmor_slot_enum>                      Focused_ArmourType;                                       // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    RefreshPaperdoll_Pose;                                    // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Focused_QuickSlotIndex;                                   // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdatePaperdoll_ArmourTint;                               // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ExitLoadout;                                              // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FKey                                        Gamepad_Key_OpenAdvancedMenu;                             // 0x0448(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                FocusedSlot;                                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class FString                                      StoreURL_Path;                                            // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    UpdatePaperdollCam_LocRot;                                // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ResetCamera;                                              // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdatePaperdoll_Anim;                                     // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               BlockInputV;                                              // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    BlockParentInput;                                         // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Upaperdoll_scene_component_C*                PaperdollScene;                                           // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInCity;                                                 // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdatePaperdoll_Transmog;                                 // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass loadout_screen_bpw.loadout_screen_bpw_C");
		return ptr;
	}


	ESlateVisibility GetVisibility_1();
	struct FText Get_TextBlock_7_Text_1();
	struct FText Get_TextBlock_6_Text_1();
	struct FText Get_TextBlock_5_Text_1();
	struct FText GetText_1();
	void OpenStorefromSelectedItemInstanceID(int FocusedSlot, EItemGroupType Kind);
	void CategorySubGroups_Focus_Enable(bool Enable_WeaponEquipSlot, bool Enable_ArmourButton, bool Enable_ConsumableButton);
	void ClearTooltips(bool Weapons, bool Armour, bool Consumable);
	void Category_Focus_Enable(bool Enable_WeaponCatFocus, bool Enable_ArmourCatFocus, bool Enable_Consumable_Focus);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void ArmourIntro_BySlot_PlayAnimation(TEnumAsByte<Earmor_slot_enum> SlotClicked);
	void BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature(TEnumAsByte<Earmor_slot_enum> EquipSlotClicked);
	void LoadoutMenu_FocusOnStart();
	void BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature(const class FString& ItemID, EItemGroupType ItemType, const class FString& ItemInstanceId);
	void HoverLeft();
	void HoverRight();
	void Hover_Down();
	void BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature();
	void BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature();
	void BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam);
	void OnAnimationFinished(class UWidgetAnimation** Animation);
	void ani_ResetMainStage();
	void BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode);
	void BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature(const class FString& ItemID, EItemGroupType Kind);
	void BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature(EWeaponType WeaponType);
	void BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature(const struct FDyeVariant& DyeStruct, EArmorType ArmourSlot);
	void BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature(TEnumAsByte<Earmor_slot_enum> focused_Slot);
	void Construct();
	void BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature();
	void BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature();
	void BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature();
	void LoadoutBack();
	void MenuNav_ToMainstage_FromConsumables();
	void MenuNav_ToMainstage_FromWeapons();
	void MenuNav_ToMainStage_FromArmour();
	void ExitWeaponCellStage();
	void OpenWebStore();
	void CloseTintWindow();
	void OpenAdvancedMenu();
	void GTFO();
	void BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode);
	void FocusWeapons();
	void FocusArmour();
	void CocusConsumables();
	void BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode);
	void PushFocus(TEnumAsByte<ELoadout_ScreenMode> Selection);
	void BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On_Back__DelegateSignature();
	void BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature();
	void BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature(const class FString& InstanceId, int SlotIndex, EItemGroupType Kind);
	void UpdatePaperdolLCamera(const struct FVector& Location, const struct FRotator& Rotation);
	void BlockInput(bool BlockInput);
	void BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature(const class FString& InstanceId, const class FString& ItemID);
	void BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId);
	void BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature(EWeaponType WeaponType);
	void BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature();
	void BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature(int quickslot);
	void BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature();
	void ExecuteUbergraph_loadout_screen_bpw(int EntryPoint);
	void UpdatePaperdoll_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId);
	void BlockParentInput__DelegateSignature(bool BlockInput);
	void UpdatePaperdoll_Anim__DelegateSignature(EItemGroupType Kind);
	void ResetCamera__DelegateSignature();
	void UpdatePaperdollCam_LocRot__DelegateSignature(const struct FVector& Location, const struct FRotator& Rotation);
	void ExitLoadout__DelegateSignature();
	void UpdatePaperdoll_ArmourTint__DelegateSignature(const struct FDyeVariant& NewParam, EArmorType NewParam1);
	void RefreshPaperdoll_Pose__DelegateSignature(EWeaponType NewParam);
	void UpdatePaperdoll_EquipNewItem__DelegateSignature(const class FString& ItemID, EItemGroupType Type, const class FString& InstanceId);
	void BackToMainStage_From__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode);
	void LoadoutCategorySelected_Consumables__DelegateSignature();
	void LoadoutCategorySelected_R_Armour__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam);
	void LoadoutCategorySelected_L_Weapons__DelegateSignature(EWeaponType NewParam);
	void LoadoutCategoryHovered__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Category);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
