#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_GAMEPLAY_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C
// 0x00C1 (0x0391 - 0x02D0)
class UOptions_Menu_GAMEPLAY_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Uw_Options_Entry_PickerBox_bpw_C*            CombatText;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  CurrentBuildNumber;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  Gameplay_ScrollBox;                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            GenderIdentityPicker;                                     // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            HideHelmet;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            Language_Text;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            Language_VO;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            NamePlates;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            PartyInvitesPicker;                                       // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_Toggle_bpw_C*               Subtitles;                                                // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    UpdateTooltip;                                            // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackToRoot;                                               // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FGameplayOptions                            StoredGamePlayOptions;                                    // 0x0348(0x001C) (Edit, BlueprintVisible)
	struct FGameplayOptions                            CurrentGameplayOptions;                                   // 0x0364(0x001C) (Edit, BlueprintVisible)
	TArray<EArchonGender>                              GenderIdentityList;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	EArchonGender                                      CurrentGenderIdentity;                                    // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C");
		return ptr;
	}


	void ApplyCurrentGenderIdentity();
	void GetPlayerGenderIdentity(EArchonGender* GenderId, bool* IsValid);
	void SetGenderIdentityAvailability();
	void ApplyState(class UArchonOptionUserWidget* RootMenu);
	void RestoreState();
	void SaveState();
	void HasStateChanged(bool* HasChanged);
	void UpdateUI();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void Gamepad_Cancel();
	void BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature(int PickerValue);
	void Construct();
	void BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature(ECheckBoxState State);
	void BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature(int PickerValue);
	void BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature(int PickerValue);
	void ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw(int EntryPoint);
	void BacktoRoot__DelegateSignature();
	void UpdateTooltip__DelegateSignature(const struct FText& Tooltip);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
