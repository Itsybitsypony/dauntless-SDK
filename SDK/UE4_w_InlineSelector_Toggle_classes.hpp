#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_InlineSelector_Toggle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_InlineSelector_Toggle.w_InlineSelector_Toggle_C
// 0x0090 (0x0360 - 0x02D0)
class Uw_InlineSelector_Toggle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      ButtonHint_Image;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_SelectableButton_C*                       LeftButton;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_SelectableButton_C*                       RightButton;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Left_Label;                                               // 0x02F0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Right_Label;                                              // 0x0308(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Gamepad_Key;                                              // 0x0320(0x0018) (Edit, BlueprintVisible)
	int                                                SelectedIndex;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_Left_Selected;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_Right_Selected;                                        // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_InlineSelector_Toggle.w_InlineSelector_Toggle_C");
		return ptr;
	}


	void Select_Item(int Index);
	void Show_Button_Selected(class Uw_SelectableButton_C* Button);
	void Show_Button_Unselected(class Uw_SelectableButton_C* Button);
	void Get_Selected_Button(class Uw_SelectableButton_C** Button);
	void Select_Next_Item();
	void OnLoaded_A058EA6248D678A919D5DF91C635B70D(class UObject* Loaded);
	void Construct();
	void OnSynchronizeProperties();
	void Refresh();
	void Input_Swap(bool Using_Gamepad);
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_202_On_Clicked__DelegateSignature();
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_226_On_Clicked__DelegateSignature();
	void ExecuteUbergraph_w_InlineSelector_Toggle(int EntryPoint);
	void On_Right_Selected__DelegateSignature();
	void On_Left_Selected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
