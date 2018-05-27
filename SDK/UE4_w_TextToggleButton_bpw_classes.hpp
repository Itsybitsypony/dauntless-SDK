#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_TextToggleButton_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_TextToggleButton_bpw.w_TextToggleButton_bpw_C
// 0x0071 (0x0341 - 0x02D0)
class Uw_TextToggleButton_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UCheckBox*                                   ToggleButton;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  txt_ToggleLabel;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Text_Unchecked;                                           // 0x02E8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Text_Checked;                                             // 0x0300(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Text_Undetermined;                                        // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    ToggleStateChange;                                        // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	ECheckBoxState                                     CheckedState;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_TextToggleButton_bpw.w_TextToggleButton_bpw_C");
		return ptr;
	}


	ECheckBoxState Get_ToggleButton_CheckedState_1();
	void Refresh(bool Condition);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void Sync_SetText();
	struct FText GetText_1();
	void OnSynchronizeProperties();
	void BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Set_Toggle_State(bool CheckedState);
	void ExecuteUbergraph_w_TextToggleButton_bpw(int EntryPoint);
	void ToggleStateChange__DelegateSignature(bool State);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
