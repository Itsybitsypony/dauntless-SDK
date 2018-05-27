#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_INTERFACE_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C
// 0x0090 (0x0360 - 0x02D0)
class UOptions_Menu_INTERFACE_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Uw_Options_Entry_Slider_bpw_C*               ChatWindowOpacity;                                        // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            ChatWindowTextSize;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            ColourBlindMode;                                          // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            GamepadArt;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  Interface_ScrollBox;                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               ProfanityFilter;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            UIDisplayMode;                                            // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    UpdateTooltip;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackToRoot;                                               // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FInterfaceOptions                           StoredInterfaceOptions;                                   // 0x0330(0x0018) (Edit, BlueprintVisible)
	struct FInterfaceOptions                           CurrentInterfaceOptions;                                  // 0x0348(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Menu_INTERFACE_bpw.Options_Menu_INTERFACE_bpw_C");
		return ptr;
	}


	void ApplyState(class UArchonOptionUserWidget* RootMenu);
	void HasStateChanged(bool* HasChanged);
	void RestoreState();
	void SaveState();
	void UpdateUI();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void GamepadCancel();
	void BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_30_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__UIDisplayMode_K2Node_ComponentBoundEvent_35_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__GamepadArt_K2Node_ComponentBoundEvent_38_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__GamepadArt_K2Node_ComponentBoundEvent_45_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_50_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__ProfanityFilter_K2Node_ComponentBoundEvent_59_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__ChatWindowOpacity_K2Node_ComponentBoundEvent_77_SliderValueChanged__DelegateSignature(float Value);
	void BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_86_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__ChatWindowTextSize_K2Node_ComponentBoundEvent_99_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_110_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__ColourBlindMode_K2Node_ComponentBoundEvent_125_PickerUpdated__DelegateSignature(int PickerValue);
	void ExecuteUbergraph_Options_Menu_INTERFACE_bpw(int EntryPoint);
	void BacktoRoot__DelegateSignature();
	void UpdateTooltip__DelegateSignature(const struct FText& Tooltip);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
