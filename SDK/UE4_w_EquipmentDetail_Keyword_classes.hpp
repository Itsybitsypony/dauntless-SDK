#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentDetail_Keyword_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C
// 0x00D8 (0x03A8 - 0x02D0)
class Uw_EquipmentDetail_Keyword_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                BonusDescriptions;                                        // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      IconImage;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TitleDisplay;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       Keyword;                                                  // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KeywordCount;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ActiveAbilities;                                          // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Increase_Tint;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Decrease_Tint;                                            // 0x0320(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Disabled_Tint;                                            // 0x0330(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class Uw_EquipmentDetail_KeywordDescription_C*> AbilityDescriptionWidgets;                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class Uw_EquipmentDetail_KeywordDescription_C*> PreviewAbilityDescriptionWidgets;                         // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Normal_Tint;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FText                                       Keyword_Display_Name;                                     // 0x0370(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0388(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C");
		return ptr;
	}


	class Uw_EquipmentDetail_KeywordDescription_C* Create_Keyword_Description_Widget_With_Count(class UClass* Ability_Class, int MinimumCount);
	void GetAllKeywordAbilities(struct FArmourSetTableData* Set_Data, TArray<class UClass*>* Abilities);
	void Show_Preview_TooltipItemOnly(int Delta);
	void Clear_Preview();
	void Tint_Widget(const struct FLinearColor& Color);
	void Set_as_Removed_Keyword();
	void Set_as_New_Keyword();
	class Uw_EquipmentDetail_KeywordDescription_C* Create_Keyword_Description_Widget(class UClass* Ability_Class);
	void Get_Keyword_Abilities_for_Count(int Count, struct FArmourSetTableData* Set_Data, TArray<class UClass*>* Abilities);
	void Setup(const struct FName& Keyword, int Count, int Delta, bool ShowAllSetBonuses);
	void Show_Preview(int Delta);
	void OnLoaded_70846176465CE6AAB9AC7094AAF6D71E(class UObject* Loaded);
	void Load_Icon();
	void ExecuteUbergraph_w_EquipmentDetail_Keyword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
