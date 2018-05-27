// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_root_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_root_bpw.social_menu_root_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Usocial_menu_root_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.GetDefaultFocusedWidget");

	Usocial_menu_root_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.SwitchToPartyTab
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_root_bpw_C::SwitchToPartyTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.SwitchToPartyTab");

	Usocial_menu_root_bpw_C_SwitchToPartyTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.GetPlayerSigilTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture>      Texture                        (Parm, OutParm)

void Usocial_menu_root_bpw_C::GetPlayerSigilTexture(TAssetPtr<class UTexture>* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.GetPlayerSigilTexture");

	Usocial_menu_root_bpw_C_GetPlayerSigilTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnCloseContextMenu
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_root_bpw_C::OnCloseContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnCloseContextMenu");

	Usocial_menu_root_bpw_C_OnCloseContextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnOpenContextMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             MenuAnchor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::OnOpenContextMenu(class UMenuAnchor* MenuAnchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnOpenContextMenu");

	Usocial_menu_root_bpw_C_OnOpenContextMenu_Params params;
	params.MenuAnchor = MenuAnchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.InitializeTabs
// (Public, BlueprintCallable, BlueprintEvent)

void Usocial_menu_root_bpw_C::InitializeTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.InitializeTabs");

	Usocial_menu_root_bpw_C_InitializeTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.CycleSocialTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CycleRight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::CycleSocialTab(bool CycleRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.CycleSocialTab");

	Usocial_menu_root_bpw_C_CycleSocialTab_Params params;
	params.CycleRight = CycleRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Usocial_menu_root_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnKeyDown");

	Usocial_menu_root_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnLoaded_A058EA6248D678A919D5DF919398FEF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::OnLoaded_A058EA6248D678A919D5DF919398FEF4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnLoaded_A058EA6248D678A919D5DF919398FEF4");

	Usocial_menu_root_bpw_C_OnLoaded_A058EA6248D678A919D5DF919398FEF4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnLoaded_A058EA6248D678A919D5DF910FE18D91
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::OnLoaded_A058EA6248D678A919D5DF910FE18D91(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnLoaded_A058EA6248D678A919D5DF910FE18D91");

	Usocial_menu_root_bpw_C_OnLoaded_A058EA6248D678A919D5DF910FE18D91_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnLoaded_0FA30E414CABBB494261B89886F72F26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::OnLoaded_0FA30E414CABBB494261B89886F72F26(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnLoaded_0FA30E414CABBB494261B89886F72F26");

	Usocial_menu_root_bpw_C_OnLoaded_0FA30E414CABBB494261B89886F72F26_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_root_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.Construct");

	Usocial_menu_root_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.ExitSocialMenu
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_root_bpw_C::ExitSocialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.ExitSocialMenu");

	Usocial_menu_root_bpw_C_ExitSocialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.SetSelectedTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_social_menu_tab_button_bpw_C* Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_social_menu_tab_body_bpw_C* BodyPanel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::SetSelectedTab(class Uw_social_menu_tab_button_bpw_C* Tab, class Uw_social_menu_tab_body_bpw_C* BodyPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.SetSelectedTab");

	Usocial_menu_root_bpw_C_SetSelectedTab_Params params;
	params.Tab = Tab;
	params.BodyPanel = BodyPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_root_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.Refresh");

	Usocial_menu_root_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_root_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.OnSynchronizeProperties");

	Usocial_menu_root_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_56_On Back__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_root_bpw_C::BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_56_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_56_On Back__DelegateSignature");

	Usocial_menu_root_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_56_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__FriendsTabButton_K2Node_ComponentBoundEvent_100_OnTabSelected__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_root_bpw_C::BndEvt__FriendsTabButton_K2Node_ComponentBoundEvent_100_OnTabSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__FriendsTabButton_K2Node_ComponentBoundEvent_100_OnTabSelected__DelegateSignature");

	Usocial_menu_root_bpw_C_BndEvt__FriendsTabButton_K2Node_ComponentBoundEvent_100_OnTabSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__PartyTabButton_K2Node_ComponentBoundEvent_149_OnTabSelected__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_root_bpw_C::BndEvt__PartyTabButton_K2Node_ComponentBoundEvent_149_OnTabSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__PartyTabButton_K2Node_ComponentBoundEvent_149_OnTabSelected__DelegateSignature");

	Usocial_menu_root_bpw_C_BndEvt__PartyTabButton_K2Node_ComponentBoundEvent_149_OnTabSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__GuildTabButton_K2Node_ComponentBoundEvent_156_OnTabSelected__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_root_bpw_C::BndEvt__GuildTabButton_K2Node_ComponentBoundEvent_156_OnTabSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__GuildTabButton_K2Node_ComponentBoundEvent_156_OnTabSelected__DelegateSignature");

	Usocial_menu_root_bpw_C_BndEvt__GuildTabButton_K2Node_ComponentBoundEvent_156_OnTabSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__RecentTabButton_K2Node_ComponentBoundEvent_167_OnTabSelected__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_root_bpw_C::BndEvt__RecentTabButton_K2Node_ComponentBoundEvent_167_OnTabSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__RecentTabButton_K2Node_ComponentBoundEvent_167_OnTabSelected__DelegateSignature");

	Usocial_menu_root_bpw_C_BndEvt__RecentTabButton_K2Node_ComponentBoundEvent_167_OnTabSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__RecruitTabButton_K2Node_ComponentBoundEvent_59_OnTabSelected__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_root_bpw_C::BndEvt__RecruitTabButton_K2Node_ComponentBoundEvent_59_OnTabSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.BndEvt__RecruitTabButton_K2Node_ComponentBoundEvent_59_OnTabSelected__DelegateSignature");

	Usocial_menu_root_bpw_C_BndEvt__RecruitTabButton_K2Node_ComponentBoundEvent_59_OnTabSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::InputSwap(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.InputSwap");

	Usocial_menu_root_bpw_C_InputSwap_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.ExecuteUbergraph_social_menu_root_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::ExecuteUbergraph_social_menu_root_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.ExecuteUbergraph_social_menu_root_bpw");

	Usocial_menu_root_bpw_C_ExecuteUbergraph_social_menu_root_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_root_bpw.social_menu_root_bpw_C.SocialMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_root_bpw_C::SocialMenuClosed__DelegateSignature(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_root_bpw.social_menu_root_bpw_C.SocialMenuClosed__DelegateSignature");

	Usocial_menu_root_bpw_C_SocialMenuClosed__DelegateSignature_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
