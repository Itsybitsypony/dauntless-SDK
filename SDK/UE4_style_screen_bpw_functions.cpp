// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function style_screen_bpw.style_screen_bpw_C.Get IconFromItemID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)

void Ustyle_screen_bpw_C::Get_IconFromItemID(const class FString& ItemID, TAssetPtr<class UTexture2D>* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Get IconFromItemID");

	Ustyle_screen_bpw_C_Get_IconFromItemID_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function style_screen_bpw.style_screen_bpw_C.GetBannerIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem_Banner* Banner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)

void Ustyle_screen_bpw_C::GetBannerIcon(class UArchonInventoryItem_Banner* Banner, TAssetPtr<class UTexture2D>* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.GetBannerIcon");

	Ustyle_screen_bpw_C_GetBannerIcon_Params params;
	params.Banner = Banner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function style_screen_bpw.style_screen_bpw_C.Get_PlayerName_txt_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ustyle_screen_bpw_C::Get_PlayerName_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Get_PlayerName_txt_Text_1");

	Ustyle_screen_bpw_C_Get_PlayerName_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_screen_bpw.style_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ustyle_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.OnKeyDown");

	Ustyle_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  emoteID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature(const class FString& emoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_57_PlayEmote__DelegateSignature_Params params;
	params.emoteID = emoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature
// (BlueprintEvent)

void Ustyle_screen_bpw_C::BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_68_ResetEmote__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ArrivalEmote                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature(const class FString& ArrivalEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__EmotesMenu_K2Node_ComponentBoundEvent_146_PlayArrivalEmote__DelegateSignature_Params params;
	params.ArrivalEmote = ArrivalEmote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature(const class FString& Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__BannersMenu_K2Node_ComponentBoundEvent_180_SetPaperdoll_BannerEmote__DelegateSignature_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FBannerCustomizationItemIDs BannerIDs                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ustyle_screen_bpw_C::BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_30_BannerUpdateEvent_UpdateAll__DelegateSignature_Params params;
	params.BannerIDs = BannerIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveDyeSlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_45_BannerUpdateEvent_ByPart_Dye__DelegateSignature_Params params;
	params.RowName = RowName;
	params.ActiveDyeSlot = ActiveDyeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_59_BannerUpdateEvent_ByPart_Item__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ustyle_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Construct");

	Ustyle_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_screen_bpw_C::BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button Clicked__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__w_Button_Titles_K2Node_ComponentBoundEvent_56_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_72_ExitEmoteMenu__DelegateSignature_Params params;
	params.Screen_Mode = Screen_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.StyleMenu_Back
// (BlueprintCallable, BlueprintEvent)

void Ustyle_screen_bpw_C::StyleMenu_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.StyleMenu_Back");

	Ustyle_screen_bpw_C_StyleMenu_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_screen_bpw_C::BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button Clicked__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__Category_Banners_K2Node_ComponentBoundEvent_170_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_screen_bpw_C::BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button Clicked__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__Category_Emotes_K2Node_ComponentBoundEvent_183_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenMode_VanityMenu> ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__debug_BannerCustomization_bpw_K2Node_ComponentBoundEvent_393_ScreenMode_ChangeScreenMode__DelegateSignature_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Screen_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_548_EmoteMenu_ScreenModeChange__DelegateSignature_Params params;
	params.Screen_Mode = Screen_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Exit Emotes
// (BlueprintCallable, BlueprintEvent)

void Ustyle_screen_bpw_C::Exit_Emotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Exit Emotes");

	Ustyle_screen_bpw_C_Exit_Emotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_screen_bpw_C::BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button Clicked__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__Category_Flares_K2Node_ComponentBoundEvent_54_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__TitlesMenu_K2Node_ComponentBoundEvent_141_UpdateTitleDisplay__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_screen_bpw_C::BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button Clicked__DelegateSignature");

	Ustyle_screen_bpw_C_BndEvt__w_Button_Arrival_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.RefreshCategoryButton Icons
// (BlueprintCallable, BlueprintEvent)

void Ustyle_screen_bpw_C::RefreshCategoryButton_Icons()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.RefreshCategoryButton Icons");

	Ustyle_screen_bpw_C_RefreshCategoryButton_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.ExecuteUbergraph_style_screen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::ExecuteUbergraph_style_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.ExecuteUbergraph_style_screen_bpw");

	Ustyle_screen_bpw_C_ExecuteUbergraph_style_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_BannerEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  BannerEmote                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::Paperdoll_BannerEmote__DelegateSignature(const class FString& BannerEmote)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_BannerEmote__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_BannerEmote__DelegateSignature_Params params;
	params.BannerEmote = BannerEmote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayMoth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::Paperdoll_PlayMoth__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayMoth__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_PlayMoth__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayArrival__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ArrivalID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::Paperdoll_PlayArrival__DelegateSignature(const class FString& ArrivalID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayArrival__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_PlayArrival__DelegateSignature_Params params;
	params.ArrivalID = ArrivalID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.UpdatePlayerTitleOnOtherMenus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerTItle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::UpdatePlayerTitleOnOtherMenus__DelegateSignature(const class FString& PlayerTItle)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.UpdatePlayerTitleOnOtherMenus__DelegateSignature");

	Ustyle_screen_bpw_C_UpdatePlayerTitleOnOtherMenus__DelegateSignature_Params params;
	params.PlayerTItle = PlayerTItle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.ScreenModeChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenMode_VanityMenu> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::ScreenModeChange__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.ScreenModeChange__DelegateSignature");

	Ustyle_screen_bpw_C_ScreenModeChange__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_ResetEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ustyle_screen_bpw_C::Paperdoll_ResetEmote__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_ResetEmote__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_ResetEmote__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  emoteID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_screen_bpw_C::Paperdoll_PlayEmote__DelegateSignature(const class FString& emoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_PlayEmote__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_PlayEmote__DelegateSignature_Params params;
	params.emoteID = emoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_UpdateBanner__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBannerCustomizationItemIDs Banner_IDs                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Ustyle_screen_bpw_C::Paperdoll_UpdateBanner__DelegateSignature(const struct FBannerCustomizationItemIDs& Banner_IDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_UpdateBanner__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_UpdateBanner__DelegateSignature_Params params;
	params.Banner_IDs = Banner_IDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.Paperdoll_UpdateDye__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveDyeSlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_screen_bpw_C::Paperdoll_UpdateDye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.Paperdoll_UpdateDye__DelegateSignature");

	Ustyle_screen_bpw_C_Paperdoll_UpdateDye__DelegateSignature_Params params;
	params.RowName = RowName;
	params.ActiveDyeSlot = ActiveDyeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_screen_bpw.style_screen_bpw_C.ExitVanityMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ustyle_screen_bpw_C::ExitVanityMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_screen_bpw.style_screen_bpw_C.ExitVanityMenu__DelegateSignature");

	Ustyle_screen_bpw_C_ExitVanityMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
