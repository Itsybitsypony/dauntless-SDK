#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_TeamDisplay_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_EndOfHunt_TeamDisplay_bpw.w_EndOfHunt_TeamDisplay_bpw_C
// 0x0090 (0x0360 - 0x02D0)
class Uw_EndOfHunt_TeamDisplay_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            TeamEntry;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      FakeStage;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EndOfHunT_TeamSlot_bpw_C*                 teamdisplay_slot_2;                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EndOfHunT_TeamSlot_bpw_C*                 teamdisplay_slot_3;                                       // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EndOfHunT_TeamSlot_bpw_C*                 teamdisplay_slot_4;                                       // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_EndOfHunT_TeamSlot_bpw_C*                 teamdisplay_slot_5;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class Uw_EndOfHunT_TeamSlot_bpw_C*>         Team_Display_Slot_Array;                                  // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    AddBehemothCore;                                          // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AddStyleCore;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class Abadge_base_bp_C*>                    AvailableBadges;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MOTH_ID;                                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<class AArchonCharacter*>                    TeamArray;                                                // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_EndOfHunt_TeamDisplay_bpw.w_EndOfHunt_TeamDisplay_bpw_C");
		return ptr;
	}


	void Slot1_Entry();
	void Slot2_Entry();
	void Slot3_Entry();
	void Slot4_Entry();
	void TriggerCoreAnimation();
	void BndEvt__teamdisplay_slot_2_K2Node_ComponentBoundEvent_26_AddBehemothCore__DelegateSignature(const class FString& BehCoreItemID);
	void BndEvt__teamdisplay_slot_2_K2Node_ComponentBoundEvent_31_AddStyleCore__DelegateSignature();
	void BndEvt__teamdisplay_slot_4_K2Node_ComponentBoundEvent_34_AddBehemothCore__DelegateSignature(const class FString& BehCoreItemID);
	void BndEvt__teamdisplay_slot_4_K2Node_ComponentBoundEvent_41_AddStyleCore__DelegateSignature();
	void BndEvt__teamdisplay_slot_1_K2Node_ComponentBoundEvent_46_AddBehemothCore__DelegateSignature(const class FString& BehCoreItemID);
	void BndEvt__teamdisplay_slot_1_K2Node_ComponentBoundEvent_55_AddStyleCore__DelegateSignature();
	void BndEvt__teamdisplay_slot_3_K2Node_ComponentBoundEvent_62_AddBehemothCore__DelegateSignature(const class FString& BehCoreItemID);
	void BndEvt__teamdisplay_slot_3_K2Node_ComponentBoundEvent_73_AddStyleCore__DelegateSignature();
	void Initialize(TArray<struct Fbadge_infos> BadgeInfos);
	void ExecuteUbergraph_w_EndOfHunt_TeamDisplay_bpw(int EntryPoint);
	void AddStyleCore__DelegateSignature(const class FString& PlayerId, int Index);
	void AddBehemothCore__DelegateSignature(int PlayerIndex, const class FString& BehCoreItemID, const class FString& PlayerId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
