#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BPW_DebugInventory.BPW_DebugInventory_C
// 0x01B0 (0x04A0 - 0x02F0)
class UBPW_DebugInventory_C : public UArchonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class Udebug_ArmourTinting_Panel_C*                bpw_armor_tintcontrol_loadout;                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ustyle_emotes_bpw_C*                         bpw_debug_emotes;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ubpw_debug_quest_viewer_C*                   bpw_debug_quest_viewer_C_55;                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_DebugCatalogScreen_C*                   BPW_DebugCatalogScreen;                                   // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_DebugCellScreen_C*                      BPW_DebugCellScreen;                                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_DebugChallengeScreen_C*                 BPW_DebugChallengeScreen;                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_DebugCommandsScreen_C*                  BPW_DebugCommandsScreen;                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_DebugInventoryScreen_C*                 BPW_DebugInventoryScreen;                                 // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBPW_DebugLoadoutScreen_C*                   BPW_DebugLoadoutScreen;                                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_1;                                                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Banners;                                           // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Catalog;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Cells;                                             // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Challenges;                                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_DataModel;                                         // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Exit;                                              // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     button_inventory;                                         // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Loadout;                                           // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Quests;                                            // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Tinting;                                           // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ustyle_banners_bpw_C*                        debug_BannerCustomization_bpw_499;                        // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     debug_x;                                                  // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     DebugEmotesButton;                                        // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_3;                                                  // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_test_inventorydatamodel_C*                w_test_inventorydatamodel;                                // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             WidgetSwitcher_38;                                        // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ubpw_debug_quest_viewer_C*                   CurrentActiveQuestViewer;                                 // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Abanner_base_bp_C*                           Banner;                                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicBannerMaterial;                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      OG_BackgroundColourRowName;                               // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      OG_SigilColourRowName;                                    // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      OG_BorderColourRowName;                                   // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UParticleSystem>                   OG_VFX;                                                   // 0x0410(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture>                          OG_SigilPattern;                                          // 0x0430(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class USkeletalMesh>                     OG_Standard;                                              // 0x0450(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             VFXReference;                                             // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UMaterialInstance>                 OG_FabricMaterial;                                        // 0x0478(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class Upaperdoll_scene_component_C*                PaperdollScene;                                           // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_DebugInventory.BPW_DebugInventory_C");
		return ptr;
	}


	class UWidget* GetDefaultFocusedWidget();
	void ShowChallenges();
	void ShowDataModel();
	void ShowCells();
	void ShowDebugCommands();
	void Set_SigilDyeSurfaceType(class UMaterialInstanceDynamic* InputPin, EArmourDyeSurfaceType Selection);
	void Set_BorderDyeSurfaceType(class UMaterialInstanceDynamic* InputPin, EArmourDyeSurfaceType Selection);
	void Set_FabricDyeSurfaceType(class UMaterialInstanceDynamic* InputPin, EArmourDyeSurfaceType Selection);
	void ShowTinting();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void ShowLoadout();
	void ShowCatalog();
	void ShowInventory();
	void OnLoaded_9EA2D14B47EE7C91239632AB84B21F61(class UObject* Loaded);
	void OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8(class UObject* Loaded);
	void OnLoaded_1D18E0784A8669F687D90686988DAA83(class UObject* Loaded);
	void OnLoaded_3401DEEF476AF8B4FAA930A291129175(class UObject* Loaded);
	void OnLoaded_6D437E5544B6B78808CAD4A90D711683(class UObject* Loaded);
	void OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B(class UObject* Loaded);
	void OnLoaded_A704830146CF5BA966ABF594D7D5EEAE(class UObject* Loaded);
	void OnLoaded_643D9DA748556155B5C0D7BEE3701D7E(class UObject* Loaded);
	void OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2(class UObject* Loaded);
	void OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20(class UObject* Loaded);
	void OnLoaded_8B27C243488D883A279982B07D8E8C7B(class UObject* Loaded);
	void OnLoaded_C5B3EF544EDF5898C520E4897CCFC684(class UObject* Loaded);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature(const class FString& emoteID);
	void BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature();
	void SpawnBanner();
	void RefreshBanner();
	void BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerIDs);
	void BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Category);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature();
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature();
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature(EWeaponType NewParam);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature();
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature();
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature();
	void SetBannerMaterial();
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature(const class FString& ItemID, EItemGroupType Type, const class FString& InstanceId);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature(EWeaponType NewParam);
	void BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature(const struct FDyeVariant& NewParam, EArmorType NewParam1);
	void BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature();
	void BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BPW_DebugInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
