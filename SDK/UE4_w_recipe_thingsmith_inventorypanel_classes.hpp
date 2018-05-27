#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_recipe_thingsmith_inventorypanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C
// 0x0048 (0x0380 - 0x0338)
class Uw_recipe_thingsmith_inventorypanel_C : public Uw_base_inventorypanel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_1;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSalvageButtonClicked;                                   // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTooltipWarningChanged;                                  // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                L_Index;                                                  // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGamepadConfirmButtonPressed;                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C");
		return ptr;
	}


	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void GetChild(int* ChildIndex, class UWidget** ChildWidget);
	void OnDataViewChanged();
	void AddItem(const class FString& ItemID, int Index);
	void FocusChildIndex(int* ChildIndex);
	void On_Select___Dispatcher_Event_1(class UBasicCraft_Recipe_C* Recipe_Widget, const class FString& SelectedRecipeID);
	void UpdateRecipeListFromCatalogs(TArray<class UDataTable*> ItemCatalogs);
	void Construct();
	void OnClientInventoryChanged();
	void RefreshItemStates();
	void ExecuteUbergraph_w_recipe_thingsmith_inventorypanel(int EntryPoint);
	void OnGamepadConfirmButtonPressed__DelegateSignature();
	void OnTooltipWarningChanged__DelegateSignature(const class FString& TooltipString);
	void OnSalvageButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
