#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_CONTROLS_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C
// 0x0068 (0x0338 - 0x02D0)
class UOptions_Menu_CONTROLS_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Uw_Options_Entry_Slider_bpw_C*               CameraSensitivity;                                        // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  Controls_ScrollBox;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               Gamepad_InvertXAxis;                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               Gamepad_InvertYAxis;                                      // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               Mouse_InvertXAxis;                                        // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               Mouse_InvertYAxis;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BackToRoot;                                               // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdateTooltip;                                            // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FControlsOptions                            StoredControlOptions;                                     // 0x0328(0x0008) (Edit, BlueprintVisible)
	struct FControlsOptions                            CurrentControlOptions;                                    // 0x0330(0x0008) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Menu_CONTROLS_bpw.Options_Menu_CONTROLS_bpw_C");
		return ptr;
	}


	void UpdateUI();
	void ApplyState(class UArchonOptionUserWidget* RootMenu);
	void RestoreState();
	void SaveState();
	void HasStateChanged(bool* HasChanged);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void BndEvt__InvertYAxis_Gamepad_K2Node_ComponentBoundEvent_46_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__InvertxAxis_Gamepad_K2Node_ComponentBoundEvent_57_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__Mouse_InvertYAxis_K2Node_ComponentBoundEvent_64_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__Mouse_InvertXAxis_K2Node_ComponentBoundEvent_68_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_188_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__CameraSensitivity_K2Node_ComponentBoundEvent_248_SliderValueChanged__DelegateSignature(float Value);
	void Gamepad_Cancel();
	void BndEvt__Gamepad_InvertYAxis_K2Node_ComponentBoundEvent_55_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__Gamepad_InvertXAxis_K2Node_ComponentBoundEvent_63_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__Mouse_InvertYAxis_K2Node_ComponentBoundEvent_72_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__Mouse_InvertXAxis_K2Node_ComponentBoundEvent_82_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void ExecuteUbergraph_Options_Menu_CONTROLS_bpw(int EntryPoint);
	void UpdateTooltip__DelegateSignature(const struct FText& Tooltip);
	void BacktoRoot__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
