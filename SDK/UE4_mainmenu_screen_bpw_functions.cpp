// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mainmenu_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Umainmenu_screen_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.GetDefaultFocusedWidget");

	Umainmenu_screen_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Umainmenu_screen_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.GetVisibility_1");

	Umainmenu_screen_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_b_Store_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Umainmenu_screen_bpw_C::Get_b_Store_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_b_Store_bIsEnabled_1");

	Umainmenu_screen_bpw_C_Get_b_Store_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_b_Loadout_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Umainmenu_screen_bpw_C::Get_b_Loadout_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_b_Loadout_bIsEnabled_1");

	Umainmenu_screen_bpw_C_Get_b_Loadout_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.HidePauseShowHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToggleShowHelp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umainmenu_screen_bpw_C::HidePauseShowHelp(bool ToggleShowHelp)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.HidePauseShowHelp");

	Umainmenu_screen_bpw_C_HidePauseShowHelp_Params params;
	params.ToggleShowHelp = ToggleShowHelp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_BU_Character_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Umainmenu_screen_bpw_C::Get_BU_Character_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_BU_Character_Visibility_1");

	Umainmenu_screen_bpw_C_Get_BU_Character_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Umainmenu_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnKeyDown");

	Umainmenu_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnFailure_2FA8689F4747C9F8A66B2883262240C8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTitleNewsResult        Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Umainmenu_screen_bpw_C::OnFailure_2FA8689F4747C9F8A66B2883262240C8(const struct FTitleNewsResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnFailure_2FA8689F4747C9F8A66B2883262240C8");

	Umainmenu_screen_bpw_C_OnFailure_2FA8689F4747C9F8A66B2883262240C8_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnSuccess_2FA8689F4747C9F8A66B2883262240C8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTitleNewsResult        Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Umainmenu_screen_bpw_C::OnSuccess_2FA8689F4747C9F8A66B2883262240C8(const struct FTitleNewsResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnSuccess_2FA8689F4747C9F8A66B2883262240C8");

	Umainmenu_screen_bpw_C_OnSuccess_2FA8689F4747C9F8A66B2883262240C8_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.FetchTitleNews
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::FetchTitleNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.FetchTitleNews");

	Umainmenu_screen_bpw_C_FetchTitleNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.On Confirmed_Event_1
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::On_Confirmed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.On Confirmed_Event_1");

	Umainmenu_screen_bpw_C_On_Confirmed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.On Canceled_Event_1
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::On_Canceled_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.On Canceled_Event_1");

	Umainmenu_screen_bpw_C_On_Canceled_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Resume Game
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Resume_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Resume Game");

	Umainmenu_screen_bpw_C_Resume_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Escape_Out
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Escape_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Escape_Out");

	Umainmenu_screen_bpw_C_Escape_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Umainmenu_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Construct");

	Umainmenu_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_241_K2Node_ComponentBoundEvent_321_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_Button_CenteredBox_sm_241_K2Node_ComponentBoundEvent_321_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_241_K2Node_ComponentBoundEvent_321_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_Button_CenteredBox_sm_241_K2Node_ComponentBoundEvent_321_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_191_K2Node_ComponentBoundEvent_332_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_Button_CenteredBox_sm_191_K2Node_ComponentBoundEvent_332_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_191_K2Node_ComponentBoundEvent_332_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_Button_CenteredBox_sm_191_K2Node_ComponentBoundEvent_332_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_397_K2Node_ComponentBoundEvent_344_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_Button_CenteredBox_sm_397_K2Node_ComponentBoundEvent_344_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_397_K2Node_ComponentBoundEvent_344_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_Button_CenteredBox_sm_397_K2Node_ComponentBoundEvent_344_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Exit Direct From Submenu
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Exit_Direct_From_Submenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Exit Direct From Submenu");

	Umainmenu_screen_bpw_C_Exit_Direct_From_Submenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Options_Tab
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Options_Tab()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Options_Tab");

	Umainmenu_screen_bpw_C_Options_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_280_On Back__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_280_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_280_On Back__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_280_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupButtons
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::SetupButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupButtons");

	Umainmenu_screen_bpw_C_SetupButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.UpdateTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Umainmenu_screen_bpw_C::UpdateTooltip(const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.UpdateTooltip");

	Umainmenu_screen_bpw_C_UpdateTooltip_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Hide Help
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Hide_Help()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Hide Help");

	Umainmenu_screen_bpw_C_Hide_Help_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupCityOnlyButtons
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::SetupCityOnlyButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupCityOnlyButtons");

	Umainmenu_screen_bpw_C_SetupCityOnlyButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SignOut
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::SignOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SignOut");

	Umainmenu_screen_bpw_C_SignOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnAquireTopOfFocusStack
// (Event, Public, BlueprintEvent)

void Umainmenu_screen_bpw_C::OnAquireTopOfFocusStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnAquireTopOfFocusStack");

	Umainmenu_screen_bpw_C_OnAquireTopOfFocusStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Close Screen
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Close_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Close Screen");

	Umainmenu_screen_bpw_C_Close_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Remove Pause for End Of Match
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::Remove_Pause_for_End_Of_Match()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Remove Pause for End Of Match");

	Umainmenu_screen_bpw_C_Remove_Pause_for_End_Of_Match_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Controls_K2Node_ComponentBoundEvent_73_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__BU_Controls_K2Node_ComponentBoundEvent_73_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Controls_K2Node_ComponentBoundEvent_73_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__BU_Controls_K2Node_ComponentBoundEvent_73_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Party_K2Node_ComponentBoundEvent_188_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__BU_Party_K2Node_ComponentBoundEvent_188_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Party_K2Node_ComponentBoundEvent_188_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__BU_Party_K2Node_ComponentBoundEvent_188_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_0_K2Node_ComponentBoundEvent_248_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_mainMenuNav_button_0_K2Node_ComponentBoundEvent_248_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_0_K2Node_ComponentBoundEvent_248_ButtonClicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_button_0_K2Node_ComponentBoundEvent_248_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_K2Node_ComponentBoundEvent_249_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_mainMenuNav_button_K2Node_ComponentBoundEvent_249_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_K2Node_ComponentBoundEvent_249_ButtonClicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_button_K2Node_ComponentBoundEvent_249_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Social_K2Node_ComponentBoundEvent_1452_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__BU_Social_K2Node_ComponentBoundEvent_1452_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Social_K2Node_ComponentBoundEvent_1452_ButtonClicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__BU_Social_K2Node_ComponentBoundEvent_1452_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_Large_C_0_K2Node_ComponentBoundEvent_1630_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_mainMenuNav_button_Large_C_0_K2Node_ComponentBoundEvent_1630_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_Large_C_0_K2Node_ComponentBoundEvent_1630_ButtonClicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_button_Large_C_0_K2Node_ComponentBoundEvent_1630_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_pb_tall_customCategory_K2Node_ComponentBoundEvent_216_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_pb_tall_customCategory_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_pb_tall_customCategory_K2Node_ComponentBoundEvent_216_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_pb_tall_customCategory_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_inventory_K2Node_ComponentBoundEvent_788_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__button_inventory_K2Node_ComponentBoundEvent_788_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_inventory_K2Node_ComponentBoundEvent_788_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__button_inventory_K2Node_ComponentBoundEvent_788_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_style_K2Node_ComponentBoundEvent_812_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__button_style_K2Node_ComponentBoundEvent_812_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_style_K2Node_ComponentBoundEvent_812_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__button_style_K2Node_ComponentBoundEvent_812_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_map_K2Node_ComponentBoundEvent_837_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__button_map_K2Node_ComponentBoundEvent_837_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_map_K2Node_ComponentBoundEvent_837_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__button_map_K2Node_ComponentBoundEvent_837_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_load_K2Node_ComponentBoundEvent_865_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__button_load_K2Node_ComponentBoundEvent_865_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_load_K2Node_ComponentBoundEvent_865_Button Clicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__button_load_K2Node_ComponentBoundEvent_865_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupWeaponIcon
// (BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::SetupWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupWeaponIcon");

	Umainmenu_screen_bpw_C_SetupWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_store_C_182_K2Node_ComponentBoundEvent_215_ButtonClicked__DelegateSignature
// (BlueprintEvent)

void Umainmenu_screen_bpw_C::BndEvt__w_mainMenuNav_store_C_182_K2Node_ComponentBoundEvent_215_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_store_C_182_K2Node_ComponentBoundEvent_215_ButtonClicked__DelegateSignature");

	Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_store_C_182_K2Node_ComponentBoundEvent_215_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umainmenu_screen_bpw_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.InputSwap");

	Umainmenu_screen_bpw_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.ExecuteUbergraph_mainmenu_screen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umainmenu_screen_bpw_C::ExecuteUbergraph_mainmenu_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.ExecuteUbergraph_mainmenu_screen_bpw");

	Umainmenu_screen_bpw_C_ExecuteUbergraph_mainmenu_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.EscapeMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Umainmenu_screen_bpw_C::EscapeMenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.EscapeMenuClosed__DelegateSignature");

	Umainmenu_screen_bpw_C_EscapeMenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
