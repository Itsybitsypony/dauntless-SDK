#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPicker_Simple_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C
// 0x01A0 (0x0470 - 0x02D0)
class Uw_CC_ColourPicker_Simple_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Uw_SwappableButton_C*                        CancelButton;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_InlineSelector_Toggle_C*                  IrisSelector_HIDDEN;                                      // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_CC_ColourPickerPalette_C*                 Picker;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_SwappableButton_C*                        SaveButton;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterial*                                   Eye_Color;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ColourPicker_Cancelled;                                   // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ColourPicker_Saved;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FLinearColor                                Last_PrimaryColor1;                                       // 0x0320(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Last_SecondaryColor_2;                                    // 0x0330(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Last_PrimaryColor_3;                                      // 0x0340(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Last_Secondary_Color_3;                                   // 0x0350(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                RightEye_SlotIndex;                                       // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LeftEye_SlotIndex;                                        // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EyeControl_Index;                                         // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FName                                       Current_Material_Parameter;                               // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Changing_Primary;                                      // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UTexture2D*                                  ColorPaletteGradient;                                     // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   ColorPaletteDropper;                                      // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColourPicker_TableStruct                   DataTable_Row;                                            // 0x0390(0x0088) (Edit, BlueprintVisible)
	class FString                                      UIName_PaletteName;                                       // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTexture*                                    UI_Icon;                                                  // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Primary_Material_Parameter;                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Secondary_Material_Parameter;                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Character;                                                // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Palette_In_Focus;                                         // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Character_Head_Mesh;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterHair_Mesh;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ColourPicker_SelectionChanged;                            // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_CC_ColourPicker_Simple.w_CC_ColourPicker_Simple_C");
		return ptr;
	}


	void Revert_Colour();
	void Setup_Revert_Colours();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void HairColourSwitch_Assigner(const struct FLinearColor& Value, int EyeIndex);
	void Refresh_Iris_Toggle();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Construct();
	void Cancel();
	void Save();
	void BndEvt__IrisSelector_K2Node_ComponentBoundEvent_116_On_Left_Selected__DelegateSignature();
	void BndEvt__IrisSelector_K2Node_ComponentBoundEvent_127_On_Right_Selected__DelegateSignature();
	void SetPrimaryColor(const struct FLinearColor& Color);
	void SetSecondaryColor(const struct FLinearColor& Color);
	void ExecuteUbergraph_w_CC_ColourPicker_Simple(int EntryPoint);
	void ColourPicker_SelectionChanged__DelegateSignature();
	void ColourPicker_Saved__DelegateSignature();
	void ColourPicker_Cancelled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
