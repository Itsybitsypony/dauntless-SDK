#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_EquipmentVendor_Item.w_EquipmentVendor_Item_C
// 0x0B28 (0x0DF8 - 0x02D0)
class Uw_EquipmentVendor_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      HoverHint;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_HoverIndicator_C*                         HoverIndicator;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ItemIcon;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x02F8(0x0020) (Edit, BlueprintVisible)
	class UEquipmentItem*                              Equipment;                                                // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FButtonStyle                                Equipped_Style;                                           // 0x0320(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                Available_Style;                                          // 0x05C8(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                Uncraftable_Style;                                        // 0x0870(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                Locked_Style;                                             // 0x0B18(0x02A8) (Edit, BlueprintVisible)
	bool                                               Has_Button_In_Focus;                                      // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0DC1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Hover;                                                 // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Set_Item_Index;                                           // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	class AArchonInventory*                            Inventory;                                                // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class FString                                      SetId;                                                    // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_EquipmentVendor_Item.w_EquipmentVendor_Item_C");
		return ptr;
	}


	bool Can_Craft();
	class FString Get_Set_Id();
	void Get_Armour_Type(EArmorType* ArmorType);
	void Setup_Progression_Item(const class FString& Item_ID, TEnumAsByte<EProgressionLink> Progress);
	void Get_Item_Tier(class UArchonInventoryItem* Item, int* Tier);
	void Setup(class UEquipmentItem* Equipment_Item, const class FString& Set);
	void Reset();
	void Get_Crafting_Button_Label(struct FText* Label, bool* IsUpgrade);
	class AArchonInventory* Get_Player_Inventory();
	void Get_Archon_Catalog(class UArchonCatalog** Catalog);
	void From_Catalog_Item(struct FArchonCatalogItem* ArchonCatalogItem);
	void OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5(class UObject* Loaded);
	void Construct();
	void Icon_Updated(TAssetPtr<class UTexture2D> Icon);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Show_Hover();
	void Hide_Hover();
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature();
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void On_Item_Refreshed();
	void Focus_Item();
	void ExecuteUbergraph_w_EquipmentVendor_Item(int EntryPoint);
	void On_Hover__DelegateSignature(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
