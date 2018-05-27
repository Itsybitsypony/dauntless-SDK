#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_legend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_button_legend.w_button_legend_C
// 0x0110 (0x03E0 - 0x02D0)
class Uw_button_legend_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              Controller_Hint_Box;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              Hint_Box;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              Mouse_Hint_Box;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<struct FKey, struct FText>                    Buttons;                                                  // 0x02F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FKey, struct FText>                    ControllerOnlyButtons;                                    // 0x0340(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FText>                   MouseOnlyButtons;                                         // 0x0390(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_button_legend.w_button_legend_C");
		return ptr;
	}


	void Get_Button_Hint_From_Box(const struct FKey& Key, class UPanelWidget* Panel, class Uw_button_legend_hint_C** ButtonHint, bool* Found);
	void Get_Action(const struct FName& Action, class Uw_button_legend_action_hint_C** Button_Hint, bool* Found);
	void Find_Action(const struct FName& Action, class Uw_button_legend_action_hint_C** Button_Hint);
	void Clear_Action(struct FName* Action);
	void Add_Action(bool Enabled, struct FName* Action, struct FText* Label, struct FScriptDelegate* Event);
	void Add_Controller_Only_Button(const struct FKey& Key, const struct FText& Label);
	void Set_Button_Visibility(const struct FKey& Key, bool IsVisible);
	void Get_Button_Hint(const struct FKey& Key, class Uw_button_legend_hint_C** Button_Hint, bool* Found);
	void Find_Button_Hint(const struct FKey& Key, bool ControllerOnly, class Uw_button_legend_hint_C** Button_Hint);
	void Clear_Button(const struct FKey& Key);
	void Add_Button(const struct FKey& Key, const struct FText& Label);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void On_Input_Swap(bool UsingGamepad);
	void ExecuteUbergraph_w_button_legend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
