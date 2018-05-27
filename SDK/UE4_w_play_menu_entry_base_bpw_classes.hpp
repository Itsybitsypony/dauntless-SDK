#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_entry_base_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C
// 0x0060 (0x0330 - 0x02D0)
class Uw_play_menu_entry_base_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	bool                                               DebugNotificationVisibility;                              // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Pending_View;                                         // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Viewing;                                               // 0x02DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02DB(0x0001) MISSED OFFSET
	float                                              View_Time;                                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayMenuListEntrySelected;                              // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayMenuListEntryFocused;                               // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayMenuListEntryLostFocus;                             // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               HuntIds;                                                  // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      DetailPanelClass;                                         // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SecondaryMenuDetailPanelClass;                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C");
		return ptr;
	}


	void SetIsSelected(bool Selected);
	void ExecuteUbergraph_w_play_menu_entry_base_bpw(int EntryPoint);
	void OnPlayMenuListEntryLostFocus__DelegateSignature(class Uw_play_menu_entry_base_bpw_C* Entry);
	void OnPlayMenuListEntryFocused__DelegateSignature(class Uw_play_menu_entry_base_bpw_C* FocusedEntry);
	void OnPlayMenuListEntrySelected__DelegateSignature(class Uw_play_menu_entry_base_bpw_C* SelectedEntry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
