#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_screen_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass style_screen_bpw.style_screen_bpw_C
// 0x0110 (0x0400 - 0x02F0)
class Ustyle_screen_bpw_C : public UArchonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	class Ustyle_banners_bpw_C*                        BannersMenu;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Button_Vanity_Category_C*                 Category_Banners;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Button_Vanity_Category_C*                 Category_Emotes;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Button_Vanity_Category_C*                 Category_Flares;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                CategoryButtons;                                          // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ustyle_emotes_bpw_C*                         EmotesMenu;                                               // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ustyle_flares_bpw_C*                         FlareMENU;                                                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Ustyle_titles_bpw_C*                         TitlesMenu;                                               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Button_Vanity_Category_C*                 w_Button_Arrival;                                         // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_Button_C*                                 w_Button_Titles;                                          // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class Uw_FullscreenContainer_C*                    w_FullscreenContainer;                                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ExitVanityMenu;                                           // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EScreenMode_VanityMenu>                ScreenMode;                                               // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Paperdoll_UpdateDye;                                      // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paperdoll_UpdateBanner;                                   // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paperdoll_PlayEmote;                                      // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paperdoll_ResetEmote;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ScreenModeChange;                                         // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdatePlayerTitleOnOtherMenus;                            // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paperdoll_PlayArrival;                                    // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paperdoll_PlayMoth;                                       // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paperdoll_BannerEmote;                                    // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass style_screen_bpw.style_screen_bpw_C");
		return ptr;
	}


	void Get_IconFromItemID(const class FString& ItemID, TAssetPtr<class UTexture2D>* Icon);
	void GetBannerIcon(class UArchonInventoryItem_Banner* Banner, TAssetPtr<class UTexture2D>* Icon);
	struct FText Get_PlayerName_txt_Text_1();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature(const class FString& emoteID);
	void BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature();
	void BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature(const class FString& ArrivalEmote);
	void BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature(const class FString& Emote);
	void BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerIDs);
	void BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot);
	void BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature(const class FString& ItemID);
	void Construct();
	void BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button_Clicked__DelegateSignature();
	void BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode);
	void StyleMenu_Back();
	void BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button_Clicked__DelegateSignature();
	void BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button_Clicked__DelegateSignature();
	void BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> ScreenMode);
	void BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode);
	void Exit_Emotes();
	void BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button_Clicked__DelegateSignature();
	void BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature(const class FString& ItemID);
	void BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature();
	void RefreshCategoryButton_Icons();
	void ExecuteUbergraph_style_screen_bpw(int EntryPoint);
	void Paperdoll_BannerEmote__DelegateSignature(const class FString& BannerEmote);
	void Paperdoll_PlayMoth__DelegateSignature(const class FString& ItemID);
	void Paperdoll_PlayArrival__DelegateSignature(const class FString& ArrivalID);
	void UpdatePlayerTitleOnOtherMenus__DelegateSignature(const class FString& PlayerTItle);
	void ScreenModeChange__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Mode);
	void Paperdoll_ResetEmote__DelegateSignature();
	void Paperdoll_PlayEmote__DelegateSignature(const class FString& emoteID);
	void Paperdoll_UpdateBanner__DelegateSignature(const struct FBannerCustomizationItemIDs& Banner_IDs);
	void Paperdoll_UpdateDye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot);
	void ExitVanityMenu__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
