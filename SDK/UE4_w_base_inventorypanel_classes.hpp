#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_inventorypanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_base_inventorypanel.w_base_inventorypanel_C
// 0x0068 (0x0338 - 0x02D0)
class Uw_base_inventorypanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemUnHovered;                                          // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Aui_inventory_datamodel_C*                   InventoryModel;                                           // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnItemFocused;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                CurrentFocusedIndex;                                      // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Einventorypanel_focus_strategy>        WhatToDoWhenFocused;                                      // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemSecondaryClicked;                                   // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_base_inventorypanel.w_base_inventorypanel_C");
		return ptr;
	}


	void GetDesiredFocusWidget(class UWidget** DesiredFocusWidget);
	void FocusChildByItemOrInstanceID(const class FString& ItemID, const class FString& InstanceId, int* ChildIndexFocused);
	void GetChild(int ChildIndex, class UWidget** ChildWidget);
	void ResetLastFocusedIndex();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void GetCurrentFocusedIndex(int* CurrentFocusedIndex);
	void FocusChildIndex(int ChildIndex);
	void SortInventoryPanel(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection);
	void Construct();
	void Destruct();
	void OnDataViewChanged();
	void OnItemFocused_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index);
	void ExecuteUbergraph_w_base_inventorypanel(int EntryPoint);
	void OnItemSecondaryClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index);
	void OnItemFocused__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index);
	void OnItemUnHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int UnHoveredIndex);
	void OnItemHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex);
	void OnItemClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
