#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_EquipmentVendor_new_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C
// 0x0178 (0x04C8 - 0x0350)
class Ubpw_EquipmentVendor_new_C : public UArchonVendorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            CraftItem_anim;                                           // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_ChargeButton_C*                           CraftingButton;                                           // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                EquipmentSets;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FullscreenContainer_C*                    FullscreenContainer;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ItemCrafted_txt;                                          // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EquipmentDetail_C*                        ItemDetail;                                               // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  itemName_txt;                                             // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  SetBox;                                                   // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EquipmentProgression_C*                   SetProgression;                                           // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_button_legend_C*                          w_button_legend;                                          // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_tabs_scaleable_bpw_C*                     WeaponTabs;                                               // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EquipmentVendor_Set_Armour_C*             Last_Armour_Set;                                          // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_EquipmentVendor_Set_Weapon_C*             Last_Weapon_Set;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_EquipmentVendor_Set_Lantern_C*            Last_Lantern_Set;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uw_EquipmentVendor_Item_C*                   Current_Item;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Crafting_Input_Held;                                   // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              Widget_Start_Time;                                        // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AArchonInventory*                            Inventory;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Waiting_for_Item_Grant;                                   // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Waiting_for_Animation;                                    // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03EA(0x0006) MISSED OFFSET
	class Avendor_interactive_bp_C*                    Vendor;                                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Last_Focused_Item_Index;                                  // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EquipmentVendor>                       Vendor_Type;                                              // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeaponType                                        Weapon_Filter;                                            // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Block_Crafting_Key;                                       // 0x03FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03FF(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuClosed;                                             // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CameraToCraftTarget;                                      // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CameraToNPC;                                              // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EnableQuestButtonOnStart_;                                // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class Apart_display_InWorldSpawner_bp_C*           SpawnerReference;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class FString                                      BundledRecipe_ItemStringID;                               // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     WeaponLocation;                                           // 0x0450(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Update3dItem;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EmptyRecipeList;                                          // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	int                                                CraftableRecipes_ByThisVendor;                            // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NPC_CameraRotation;                                       // 0x0478(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NPC_CameraLocation;                                       // 0x0484(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Crafting_CameraLocationOffset;                            // 0x0490(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Crafting_CameraRotationOffset;                            // 0x049C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OG_NPC_FoV;                                               // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<struct FName>                               EquipmentItemIds;                                         // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       VendorProgressTrackName;                                  // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C");
		return ptr;
	}


	void GetLanternSetWidget(const class FString& Set_Name, bool* Found_Widget, class Uw_EquipmentVendor_Set_Lantern_C** Widget);
	void SetupLanternSetWidget(const class FString& Set_Name);
	class UWidget* GetDefaultFocusedWidget();
	void Set_Weapon_Filter(int Selection);
	void Get_All_Items_For_Vendor();
	void GetAndStore_NPCCamera();
	void DoCraftVO(class UArchonInventoryItem* InventoryItem);
	void Get_Crafted_Item(class UCraftingRecipeDataAsset* Recipe, class FString* ItemID);
	void Get_Desired_Current_Item_Focus(class UWidget** DesiredFocusWidget);
	void Get_Desired_Detail_Item_Focus(class UWidget** DesiredFocusWidget);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void GetText_CraftedItem();
	void _3D_Viewer(const class FString& ItemID);
	bool Is_Holding_Crafting_Key();
	void Custom_Equipment_Vendor_Setup();
	struct FText Get_Weapon_Filter_Label(EWeaponType Index);
	bool Is_Weapon_Filter_Key(const struct FKey& Key);
	void Get_Desired_Item_Set_Focus(class UWidget** DesiredFocusWidget);
	void Get_Weapon_Set_Widget(const class FString& Set_Name, bool* Found_Widget, class Uw_EquipmentVendor_Set_Weapon_C** Widget);
	void Setup_Weapon_Set_Widget(const class FString& Set_Name);
	void Setup_Armour_Set_Widget(const class FString& Set_Name);
	bool Has_Crafting_Item_Focus();
	bool Show_Quest_Button_on_start_();
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	bool Should_Display_Set(const class FString& Set_Name);
	class AArchonInventory* Get_Inventory();
	void Build_Crafting_Payload(struct FCraftingPayload* Payload);
	void Try_Crafting_Item(bool* Request_Sent);
	void Get_Armour_Set_Widget(const class FString& Set_Name, bool* Found_Widget, class Uw_EquipmentVendor_Set_Armour_C** Widget);
	void Start_Crafting_Button();
	bool Can_Craft_Current_Item();
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	bool Is_Crafting_Button_Key(const struct FKey& Key);
	void Setup_Vendor(const TScriptInterface<class Uinteractable_npc_interface_C>& Vendor_NPC);
	void On_Show_Vendor();
	void BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature();
	void Intro_VendorSelect();
	void NPCInteractInitialize(class Avendor_interactive_bp_C* Vendor, const struct Fnpc_ui_struct& NPCMenuTuning);
	void Construct();
	void BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On_Back__DelegateSignature();
	void BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On_Next__DelegateSignature();
	void On_Item_Hovered(class Uw_EquipmentVendor_Item_C* Item, int Item_Index);
	void Refresh_Vendor_Items();
	void BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On_Key_Hold_Complete__DelegateSignature();
	void On_Crafted_Item_Granted();
	void BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Vendor_Refresh__DelegateSignature();
	void BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On_Mouse_Down__DelegateSignature();
	void BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Mouse_Up__DelegateSignature();
	void Close_Screen();
	void On_Weapon_Filter_Changed();
	void Init3dViewer();
	void Update_3d_Preview();
	void On_Armour_Set_Details(const class FString& SetName);
	void On_Escape_Set_Details();
	void GTFO();
	void SetCamera_Crafting();
	void SetCamera_Return();
	void ResetCamera();
	void On_Item_Upgraded();
	void BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature(int NewMode);
	void ExecuteUbergraph_bpw_EquipmentVendor_new(int EntryPoint);
	void Update3dItem__DelegateSignature();
	void CameraToNPC__DelegateSignature();
	void CameraToCraftTarget__DelegateSignature();
	void OnMenuClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
