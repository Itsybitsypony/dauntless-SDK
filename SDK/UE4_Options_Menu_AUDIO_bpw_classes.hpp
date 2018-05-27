#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_AUDIO_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C
// 0x0078 (0x0348 - 0x02D0)
class UOptions_Menu_AUDIO_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  Audio_ScrollBox;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               w_Options_DynamicRange_Toggle_bpw;                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Slider_bpw_C*               w_Options_FX_Slider_bpw;                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               w_Options_HeadphoneMode_Toggle_bpw_1;                     // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Slider_bpw_C*               w_Options_Music_Slider_bpw;                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Slider_bpw_C*               w_Options_Voice_Slider_bpw;                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BackToRoot;                                               // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdateTooltip;                                            // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FAudioOptions                               CurrentAudioState;                                        // 0x0328(0x0010) (Edit, BlueprintVisible)
	struct FAudioOptions                               StoredAudioState;                                         // 0x0338(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Menu_AUDIO_bpw.Options_Menu_AUDIO_bpw_C");
		return ptr;
	}


	void ApplyState(class UArchonOptionUserWidget* RootMenu);
	void UpdateUI();
	void HasStateChanged(bool* HasChanged);
	void RestoreState();
	void SaveState();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void Gamepad_Cancel();
	void BndEvt__w_Options_Entry_Slider_bpw_K2Node_ComponentBoundEvent_2_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__w_Options_Entry_Slider_bpw_0_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__w_Options_Entry_Slider_bpw_1_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__w_Options_Entry_Toggle_bpw_K2Node_ComponentBoundEvent_5_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__w_Options_Entry_Toggle_bpw_0_K2Node_ComponentBoundEvent_6_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__w_Options_ButtonBar_K2Node_ComponentBoundEvent_969_ButtonBack__DelegateSignature();
	void BndEvt__w_Options_Entry_Slider_bpw_K2Node_ComponentBoundEvent_41_SliderValueChanged__DelegateSignature(float Value);
	void BndEvt__w_Options_Entry_Slider_bpw_0_K2Node_ComponentBoundEvent_75_SliderValueChanged__DelegateSignature(float Value);
	void BndEvt__w_Options_Entry_Slider_bpw_1_K2Node_ComponentBoundEvent_88_SliderValueChanged__DelegateSignature(float Value);
	void BndEvt__w_Options_DynamicRange_Toggle_bpw_K2Node_ComponentBoundEvent_849_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__w_Options_HeadphoneMode_Toggle_bpw_0_K2Node_ComponentBoundEvent_861_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void ExecuteUbergraph_Options_Menu_AUDIO_bpw(int EntryPoint);
	void UpdateTooltip__DelegateSignature(const struct FText& Tooltip);
	void BacktoRoot__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
