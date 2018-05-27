#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPickerButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_CC_ColourPickerButton.w_CC_ColourPickerButton_C
// 0x0060 (0x0330 - 0x02D0)
class Uw_CC_ColourPickerButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Uw_Button_C*                                 Button;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ColourPickerBUPressed;                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FLinearColor                                Colour_Left1;                                             // 0x02F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Colour_Right1;                                            // 0x0300(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Colour_Right2;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Colour_Left2;                                             // 0x0320(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_CC_ColourPickerButton.w_CC_ColourPickerButton_C");
		return ptr;
	}


	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_Button_Clicked__DelegateSignature();
	void ExecuteUbergraph_w_CC_ColourPickerButton(int EntryPoint);
	void ColourPickerBUPressed__DelegateSignature(const struct FLinearColor& PrimaryColour, const struct FLinearColor& SecondaryColour, const struct FLinearColor& Primary2, const struct FLinearColor& Secondary2);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
