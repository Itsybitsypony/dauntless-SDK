#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_transmog_targets_panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_transmog_targets_panel.w_transmog_targets_panel_C
// 0x0058 (0x0390 - 0x0338)
class Uw_transmog_targets_panel_C : public Uw_base_inventorypanel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  TargetsScrollbox;                                         // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    On_Target_Selected;                                       // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class Uw_transmog_button_C*>                TransmogButtons;                                          // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    On_Clear_Selected;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Uw_transmog_clear_button_C*                  ClearTransmogButton;                                      // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      SourceItemId;                                             // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_transmog_targets_panel.w_transmog_targets_panel_C");
		return ptr;
	}


	void Set_Source_Transmog_Item(const class FString& ItemID);
	void Get_Transmog_Button(const class FString& ItemID, class UWidget** Button);
	void Select_Transmog_Target_Button(const class FString& ItemID);
	void GetChild(int* ChildIndex, class UWidget** ChildWidget);
	void OnDataViewChanged();
	void Add_Transmog_Target(const class FString& ItemID);
	void On_Transmog_Item_Clicked(class UArchonUserButton* Button);
	void On_Transmog_Item_Focused(class UArchonUserButton* Button);
	void Add_Transmog_Clear();
	void On_Clear_Transmog_Clicked(class UArchonUserButton* Button);
	void On_Clear_Transmog_Focused(class UArchonUserButton* Button);
	void ExecuteUbergraph_w_transmog_targets_panel(int EntryPoint);
	void On_Clear_Selected__DelegateSignature();
	void On_Target_Selected__DelegateSignature(const class FString& ItemID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
