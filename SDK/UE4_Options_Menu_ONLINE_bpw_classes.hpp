#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_ONLINE_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C
// 0x0040 (0x0310 - 0x02D0)
class UOptions_Menu_ONLINE_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UScrollBox*                                  Online_ScrollBox;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Options_Entry_PickerBox_bpw_C*            TeamInvites;                                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    UpdateTooltip;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackToRoot;                                               // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FOnlineOptions                              StoredOnlineOptions;                                      // 0x0308(0x0004) (Edit, BlueprintVisible)
	struct FOnlineOptions                              CurrentOnlineOptions;                                     // 0x030C(0x0004) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C");
		return ptr;
	}


	void ApplyState(class UArchonOptionUserWidget* RootMenu);
	void RestoreState();
	void SaveState();
	void HasStateChanged(bool* HasChanged);
	void UpdateUI();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void Gamepad_Cancel();
	void BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature(const struct FText& Tooltip);
	void BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature(int PickerValue);
	void ExecuteUbergraph_Options_Menu_ONLINE_bpw(int EntryPoint);
	void BacktoRoot__DelegateSignature();
	void UpdateTooltip__DelegateSignature(const struct FText& Tooltip);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
