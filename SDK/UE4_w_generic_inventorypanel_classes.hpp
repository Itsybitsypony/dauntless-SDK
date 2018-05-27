#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_generic_inventorypanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_generic_inventorypanel.w_generic_inventorypanel_C
// 0x0030 (0x0368 - 0x0338)
class Uw_generic_inventorypanel_C : public Uw_base_inventorypanel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_1;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSalvageButtonClicked;                                   // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTooltipWarningChanged;                                  // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_generic_inventorypanel.w_generic_inventorypanel_C");
		return ptr;
	}


	void GetChild(int* ChildIndex, class UWidget** ChildWidget);
	void OnDataViewChanged();
	void AddItem(const class FString& InstanceId, int Index);
	void ItemClicked(const class FString& InstanceId, const class FString& ItemID, int Index);
	void FocusChildIndex(int* ChildIndex);
	void DustButtonClicked(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount);
	void GetTooltipWarning_Event_1(const class FString& TooltipString);
	void ItemHovered(const class FString& InstanceId, const class FString& ItemID, int Index, class UWidget* Widget);
	void ItemUnhovered(const class FString& InstanceId, const class FString& ItemID, int Index, class UWidget* Widget);
	void Bind_to_ItemButtonClicked(class Uw_equipment_list_entry_bpw_C* List_Entry);
	void Bind_to_ItemButtonSecondaryClicked(class Uw_equipment_list_entry_bpw_C* List_Entry);
	void ItemSecondaryClicked(const class FString& InstanceId, const class FString& ItemID, int Index);
	void ExecuteUbergraph_w_generic_inventorypanel(int EntryPoint);
	void OnTooltipWarningChanged__DelegateSignature(const class FString& TooltipString);
	void OnSalvageButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
