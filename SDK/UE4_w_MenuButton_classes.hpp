#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_MenuButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_MenuButton.w_MenuButton_C
// 0x0419 (0x06E9 - 0x02D0)
class Uw_MenuButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Display_Text;                                             // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    Menu_Button_Clicked;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Button_Index;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FText                                       Button_Label;                                             // 0x0300(0x0018) (Edit, BlueprintVisible)
	bool                                               Has_Explicit_Focus;                                       // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_User_Focus;                                           // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x031A(0x0006) MISSED OFFSET
	struct FButtonStyle                                Button_Style;                                             // 0x0320(0x02A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 Button_Style_Normal;                                      // 0x05C8(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 Button_Style_Focused;                                     // 0x0658(0x0090) (Edit, BlueprintVisible)
	bool                                               AllowMouseHoverFocus;                                     // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_MenuButton.w_MenuButton_C");
		return ptr;
	}


	void Handle_Button();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void Show_Button_Focus(bool Is_Focused);
	void Setup_Button(class UButton* Button);
	void Setup_Button_Parameters(const struct FText& Label, int Index);
	void BndEvt__ButtonBacker_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature();
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void OnSynchronizeProperties();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_w_MenuButton(int EntryPoint);
	void Menu_Button_Clicked__DelegateSignature(int ClickedIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
