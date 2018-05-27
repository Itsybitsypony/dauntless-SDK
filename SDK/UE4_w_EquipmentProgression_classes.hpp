#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_EquipmentProgression.w_EquipmentProgression_C
// 0x0068 (0x0338 - 0x02D0)
class Uw_EquipmentProgression_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ProgressionTypeDisplay;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox;                                                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  SetTitleDisplay;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                TierBox;                                                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AArchonInventory*                            Inventory;                                                // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class Uw_EquipmentProgression_Tier_Armour_C*> ArmourTierWidgets;                                        // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SetName;                                                  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    On_Item_Hovered;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_EquipmentProgression.w_EquipmentProgression_C");
		return ptr;
	}


	bool Player_Has_Recipe_for_Bundle(const class FString& BundleId, class FString* RecipeID);
	void Get_Bundle_Id(const class FString& Category, int Tier, class FString* ItemID);
	bool Bundle_Has_Recipe(const class FString& Category, int Tier);
	void Get_Item_Id(const class FString& Category, int Tier, class FString* ItemID);
	void Get_Higher_Tier_Progress_Link(int Tier, TArray<TEnumAsByte<EProgressionLink>>* CategoryProgress, TEnumAsByte<EProgressionLink>* Progress);
	void Get_Lower_Tier_Progress_Link(int Tier, TArray<TEnumAsByte<EProgressionLink>>* CategoryProgress, TEnumAsByte<EProgressionLink>* Progress);
	bool Has_Recipe(TEnumAsByte<EProgressionLink> Progress);
	class FString Get_Armour_Item_Id(int Tier, const class FString& Category, bool Recipe);
	void Setup_Armour_Category_Progression(const class FString& Category, TArray<TEnumAsByte<EProgressionLink>>* CategoryProgression);
	bool Player_Can_Craft_Item(const class FString& ItemID);
	TEnumAsByte<EProgressionLink> Get_Armour_Tier_Progress(const class FString& Category, int PlayerTier, int Tier);
	void Read_Armour_Progression(const class FString& Category, int PlayerTier, TArray<TEnumAsByte<EProgressionLink>>* Progress);
	void Get_Recipe(TArray<class FString>* BundleItems, bool* Has_Recipe, class FString* RecipeID);
	void Get_Armour_Tier_Widget(int Tier, class Uw_EquipmentProgression_Tier_Armour_C** Widget);
	void Set_Name(const class FString& SetName);
	void Setup_Armour_Progression(const class FString& SetName, bool AutoFocus, EArmorType Manual_Focus, TArray<class UArchonInventoryItem*>* InventoryItems);
	void Item_Hover(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index);
	void ExecuteUbergraph_w_EquipmentProgression(int EntryPoint);
	void On_Item_Hovered__DelegateSignature(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
