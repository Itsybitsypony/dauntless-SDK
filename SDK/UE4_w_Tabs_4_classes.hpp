#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Tabs_4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_Tabs_4.w_Tabs_3_C
// 0x00E0 (0x03B0 - 0x02D0)
class Uw_Tabs_3_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      ButtonHint_Left;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ButtonHint_Right;                                         // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_SelectableButton_C*                       Tab_1;                                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_SelectableButton_C*                       Tab_2;                                                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_SelectableButton_C*                       Tab_3;                                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Tab_0_Label;                                              // 0x0300(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Tab_1_Label;                                              // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Tab_2_Label;                                              // 0x0330(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Gamepad_Left_Key;                                         // 0x0348(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Gamepad_Right_Key;                                        // 0x0360(0x0018) (Edit, BlueprintVisible)
	int                                                SelectedIndex;                                            // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Left_Selected;                                         // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_Right_Selected;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_Tab_Selected;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Tabs_4.w_Tabs_3_C");
		return ptr;
	}


	void Select_Previous_Item();
	void Select_Item(int Index);
	void Show_Button_Selected(class Uw_SelectableButton_C* Button);
	void Show_Button_Unselected(class Uw_SelectableButton_C* Button);
	void Get_Selected_Button(class Uw_SelectableButton_C** Button);
	void Select_Next_Item();
	void OnLoaded_A058EA6248D678A919D5DF911E731643(class UObject* Loaded);
	void OnLoaded_A058EA6248D678A919D5DF91DF07D857(class UObject* Loaded);
	void Construct();
	void OnSynchronizeProperties();
	void Refresh();
	void Input_Swap(bool Using_Gamepad);
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On_Clicked__DelegateSignature();
	void BndEvt__Tab_1_K2Node_ComponentBoundEvent_4_On_Clicked__DelegateSignature();
	void BndEvt__Tab_2_K2Node_ComponentBoundEvent_5_On_Clicked__DelegateSignature();
	void ExecuteUbergraph_w_Tabs_4(int EntryPoint);
	void On_Tab_Selected__DelegateSignature(int Index);
	void On_Right_Selected__DelegateSignature();
	void On_Left_Selected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
