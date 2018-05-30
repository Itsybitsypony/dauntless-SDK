#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function style_screen_bpw.style_screen_bpw_C.Get IconFromItemID
struct Ustyle_screen_bpw_C_Get_IconFromItemID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
};

// Function style_screen_bpw.style_screen_bpw_C.GetBannerIcon
struct Ustyle_screen_bpw_C_GetBannerIcon_Params
{
	class UArchonInventoryItem_Banner*                 Banner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
};

// Function style_screen_bpw.style_screen_bpw_C.Get_PlayerName_txt_Text_1
struct Ustyle_screen_bpw_C_Get_PlayerName_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_screen_bpw.style_screen_bpw_C.OnKeyDown
struct Ustyle_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature_Params
{
	class FString                                      emoteID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature_Params
{
	class FString                                      ArrivalEmote;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature_Params
{
	class FString                                      Emote;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature_Params
{
	struct FBannerCustomizationItemIDs                 BannerIDs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDyeSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.Construct
struct Ustyle_screen_bpw_C_Construct_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button Clicked__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button_Clicked__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature_Params
{
	TEnumAsByte<EScreenMode_VanityMenu>                Screen_Mode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.StyleMenu_Back
struct Ustyle_screen_bpw_C_StyleMenu_Back_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button Clicked__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button_Clicked__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button Clicked__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button_Clicked__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature_Params
{
	TEnumAsByte<EScreenMode_VanityMenu>                ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature_Params
{
	TEnumAsByte<EScreenMode_VanityMenu>                Screen_Mode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.Exit Emotes
struct Ustyle_screen_bpw_C_Exit_Emotes_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button Clicked__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button_Clicked__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button Clicked__DelegateSignature
struct Ustyle_screen_bpw_C_BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.RefreshCategoryButton Icons
struct Ustyle_screen_bpw_C_RefreshCategoryButton_Icons_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.ExecuteUbergraph_style_screen_bpw
struct Ustyle_screen_bpw_C_ExecuteUbergraph_style_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_BannerEmote__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_BannerEmote__DelegateSignature_Params
{
	class FString                                      BannerEmote;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayMoth__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_PlayMoth__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayArrival__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_PlayArrival__DelegateSignature_Params
{
	class FString                                      ArrivalID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.UpdatePlayerTitleOnOtherMenus__DelegateSignature
struct Ustyle_screen_bpw_C_UpdatePlayerTitleOnOtherMenus__DelegateSignature_Params
{
	class FString                                      PlayerTItle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.ScreenModeChange__DelegateSignature
struct Ustyle_screen_bpw_C_ScreenModeChange__DelegateSignature_Params
{
	TEnumAsByte<EScreenMode_VanityMenu>                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_ResetEmote__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_ResetEmote__DelegateSignature_Params
{
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayEmote__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_PlayEmote__DelegateSignature_Params
{
	class FString                                      emoteID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_UpdateBanner__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_UpdateBanner__DelegateSignature_Params
{
	struct FBannerCustomizationItemIDs                 Banner_IDs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_UpdateDye__DelegateSignature
struct Ustyle_screen_bpw_C_Paperdoll_UpdateDye__DelegateSignature_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDyeSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_screen_bpw.style_screen_bpw_C.ExitVanityMenu__DelegateSignature
struct Ustyle_screen_bpw_C_ExitVanityMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
