#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_tabs_scaleable_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C
// 0x00F0 (0x03C0 - 0x02D0)
class Uw_tabs_scaleable_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Button1;                                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Button2;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              TabBox;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_tab_imagebutton_bpw_C*                    Active_Category;                                          // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKey                                        GamepadBuR;                                               // 0x02F8(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        GamepadBuL;                                               // 0x0310(0x0018) (Edit, BlueprintVisible)
	bool                                               UsingGamepad;                                             // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    TabSelected;                                              // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                ActiveIndex;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	TArray<class Uw_tab_imagebutton_bpw_C*>            ButtonArray;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultIndex;                                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Invalid;                                                  // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                IndexMax;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TArray<struct FText>                               Tabs_text;                                                // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fw_tabs_data_struct>                 UnlockableTabs;                                           // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Eui_icon_mode>                         TabDisplayMode;                                           // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	float                                              Tab_Width_Override;                                       // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tab_Height_Override;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontSizeOverride;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocalActiveIndex;                                         // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalLeftTabFound;                                        // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	TArray<TAssetPtr<class UObject>>                   IconArray;                                                // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C");
		return ptr;
	}


	TAssetPtr<class UObject> GetTabIcon(int Index);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	ESlateVisibility VisibilityUsingGamepad();
	void Has_Active_Category(bool* Return_Value);
	void OnLoaded_A058EA6248D678A919D5DF9185C63225(class UObject* Loaded);
	void OnLoaded_A058EA6248D678A919D5DF91A184542C(class UObject* Loaded);
	void Construct();
	void Handle_New_Category(class Uw_tab_imagebutton_bpw_C* Category_Button);
	void Focus_Default_Category();
	void Refresh();
	void CategoryClicked(int NewModeIndex);
	void NextCategory();
	void PreviousCategory();
	void Input_Swap(bool Using_Gamepad);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_w_tabs_scaleable_bpw(int EntryPoint);
	void Invalid__DelegateSignature();
	void TabSelected__DelegateSignature(int NewMode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
