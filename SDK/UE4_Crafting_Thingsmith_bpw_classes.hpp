#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Crafting_Thingsmith_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C
// 0x0449 (0x0739 - 0x02F0)
class UCrafting_Thingsmith_bpw_C : public UArchonUserWidget_bpw_C
{
public:
	class UWidgetAnimation*                            Craft_RolloverHighlight_anim;                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FullscreenContainer_C*                    w_FullscreenContainer;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    On_MenuClosed;                                            // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UBasicCraft_Recipe_C*>                RecipeButtons;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                      Currently_Selected_Recipe;                                // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	class UBasicCraft_Recipe_C*                        CurrentlySelectedSetDisplay;                              // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewRecipeSelection;                                       // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCraftPressedDispatcher;                                 // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Apart_display_scenecapture_bp_C*             StudioReference;                                          // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCrafting_Thingsmith_bpw_C*                  ThingSmith;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      RecipeTag;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UArchonSpeaker*                              NPCIdentity;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       VendorTitle;                                              // 0x0380(0x0018) (Edit, BlueprintVisible)
	struct FText                                       VendorType;                                               // 0x0398(0x0018) (Edit, BlueprintVisible)
	class AArchonPlayerController*                     PlayerController;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               EmptyRecipeList;                                          // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              Widget_Start_Time;                                        // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RemoveRecipeOnCraft;                                      // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableQuestButton_OnIntro;                                // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03C2(0x0006) MISSED OFFSET
	TArray<class FString>                              AllCraftableRecipes;                                      // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CraftableRecipes_ByThisVendor;                            // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class Uw_Button_LargeVendorChoice_C*               QuestButton_Intro;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       CraftingHint;                                             // 0x03E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                KnownRecipes_ByThisVendor;                                // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<class FString>                              Bundled;                                                  // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      BundledRecipe_ItemStringID;                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      Vendor;                                                   // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               QuestNPC;                                                 // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpawnAlternateQuestWidget;                              // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UDataTable*>                          CraftedItemCatalogList;                                   // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPlayFabCraftedCatalogTableData             LocalCraftedItemData;                                     // 0x0458(0x02E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseInventoryRecipeList;                                   // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crafting_Thingsmith_bpw.Crafting_Thingsmith_bpw_C");
		return ptr;
	}


	class UWidget* GetDefaultFocusedWidget();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void OnSpawnAlternateQuestWidget__DelegateSignature();
	void OnCraftPressedDispatcher__DelegateSignature(bool Successful_Purchase);
	void NewRecipeSelection__DelegateSignature(const class FString& RecipeID);
	void On_MenuClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
