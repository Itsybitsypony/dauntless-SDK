#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_partyfinder_filter_region_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_partyfinder_filter_region_bpw.w_partyfinder_filter_region_bpw_C
// 0x0060 (0x0330 - 0x02D0)
class Uw_partyfinder_filter_region_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  Region;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                                 LabelColor;                                               // 0x02E0(0x0028) (Edit, BlueprintVisible)
	struct FText                                       Label;                                                    // 0x0308(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_partyfinder_filter_region_bpw.w_partyfinder_filter_region_bpw_C");
		return ptr;
	}


	void Construct();
	void OnSynchronizeProperties();
	void BndEvt__FilterCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_w_partyfinder_filter_region_bpw(int EntryPoint);
	void OnCheckStateChanged__DelegateSignature(bool IsChecked);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
