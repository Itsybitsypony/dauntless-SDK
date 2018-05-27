#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Options_Entry_Slider_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_Options_Entry_Slider_bpw.w_Options_Entry_Slider_bpw_C
// 0x0085 (0x0355 - 0x02D0)
class Uw_Options_Entry_Slider_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Uw_OptionSlider_bpw_C*                       Slider;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TXT_label;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Label;                                                    // 0x02E8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SliderLabel;                                              // 0x0300(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    FocusReceived;                                            // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       Tooltip;                                                  // 0x0328(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    SliderValueChanged;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Value;                                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockInput;                                               // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Options_Entry_Slider_bpw.w_Options_Entry_Slider_bpw_C");
		return ptr;
	}


	struct FLinearColor Get_Slider_ColorAndOpacity_1();
	void Refresh();
	void BlockInput_();
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void EditorSync_SetTextButton();
	void EditorSync_SetTextLabel();
	struct FText UI_SetTextLabel();
	void OnSynchronizeProperties();
	void Construct();
	void BndEvt__w_OptionSlider_bpw_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature(float NewValue);
	void UpdateSlider(float NewValue);
	void ExecuteUbergraph_w_Options_Entry_Slider_bpw(int EntryPoint);
	void SliderValueChanged__DelegateSignature(float Value);
	void FocusReceived__DelegateSignature(const struct FText& Tooltip);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
