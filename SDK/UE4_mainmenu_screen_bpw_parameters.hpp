#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mainmenu_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.GetDefaultFocusedWidget
struct Umainmenu_screen_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.GetVisibility_1
struct Umainmenu_screen_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_b_Store_bIsEnabled_1
struct Umainmenu_screen_bpw_C_Get_b_Store_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_b_Loadout_bIsEnabled_1
struct Umainmenu_screen_bpw_C_Get_b_Loadout_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.HidePauseShowHelp
struct Umainmenu_screen_bpw_C_HidePauseShowHelp_Params
{
	bool                                               ToggleShowHelp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Get_BU_Character_Visibility_1
struct Umainmenu_screen_bpw_C_Get_BU_Character_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnKeyDown
struct Umainmenu_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnFailure_2FA8689F4747C9F8A66B2883262240C8
struct Umainmenu_screen_bpw_C_OnFailure_2FA8689F4747C9F8A66B2883262240C8_Params
{
	struct FTitleNewsResult                            Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnSuccess_2FA8689F4747C9F8A66B2883262240C8
struct Umainmenu_screen_bpw_C_OnSuccess_2FA8689F4747C9F8A66B2883262240C8_Params
{
	struct FTitleNewsResult                            Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.FetchTitleNews
struct Umainmenu_screen_bpw_C_FetchTitleNews_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.On Confirmed_Event_1
struct Umainmenu_screen_bpw_C_On_Confirmed_Event_1_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.On Canceled_Event_1
struct Umainmenu_screen_bpw_C_On_Canceled_Event_1_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Resume Game
struct Umainmenu_screen_bpw_C_Resume_Game_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Escape_Out
struct Umainmenu_screen_bpw_C_Escape_Out_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Construct
struct Umainmenu_screen_bpw_C_Construct_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_241_K2Node_ComponentBoundEvent_321_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_Button_CenteredBox_sm_241_K2Node_ComponentBoundEvent_321_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_191_K2Node_ComponentBoundEvent_332_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_Button_CenteredBox_sm_191_K2Node_ComponentBoundEvent_332_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_Button_CenteredBox_sm_397_K2Node_ComponentBoundEvent_344_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_Button_CenteredBox_sm_397_K2Node_ComponentBoundEvent_344_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Exit Direct From Submenu
struct Umainmenu_screen_bpw_C_Exit_Direct_From_Submenu_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Options_Tab
struct Umainmenu_screen_bpw_C_Options_Tab_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_280_On Back__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_280_On_Back__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupButtons
struct Umainmenu_screen_bpw_C_SetupButtons_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.UpdateTooltip
struct Umainmenu_screen_bpw_C_UpdateTooltip_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Hide Help
struct Umainmenu_screen_bpw_C_Hide_Help_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupCityOnlyButtons
struct Umainmenu_screen_bpw_C_SetupCityOnlyButtons_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SignOut
struct Umainmenu_screen_bpw_C_SignOut_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.OnAquireTopOfFocusStack
struct Umainmenu_screen_bpw_C_OnAquireTopOfFocusStack_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Close Screen
struct Umainmenu_screen_bpw_C_Close_Screen_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.Remove Pause for End Of Match
struct Umainmenu_screen_bpw_C_Remove_Pause_for_End_Of_Match_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Controls_K2Node_ComponentBoundEvent_73_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__BU_Controls_K2Node_ComponentBoundEvent_73_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Party_K2Node_ComponentBoundEvent_188_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__BU_Party_K2Node_ComponentBoundEvent_188_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_0_K2Node_ComponentBoundEvent_248_ButtonClicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_button_0_K2Node_ComponentBoundEvent_248_ButtonClicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_K2Node_ComponentBoundEvent_249_ButtonClicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_button_K2Node_ComponentBoundEvent_249_ButtonClicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__BU_Social_K2Node_ComponentBoundEvent_1452_ButtonClicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__BU_Social_K2Node_ComponentBoundEvent_1452_ButtonClicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_button_Large_C_0_K2Node_ComponentBoundEvent_1630_ButtonClicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_button_Large_C_0_K2Node_ComponentBoundEvent_1630_ButtonClicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_pb_tall_customCategory_K2Node_ComponentBoundEvent_216_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_pb_tall_customCategory_K2Node_ComponentBoundEvent_216_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_inventory_K2Node_ComponentBoundEvent_788_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__button_inventory_K2Node_ComponentBoundEvent_788_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_style_K2Node_ComponentBoundEvent_812_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__button_style_K2Node_ComponentBoundEvent_812_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_map_K2Node_ComponentBoundEvent_837_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__button_map_K2Node_ComponentBoundEvent_837_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__button_load_K2Node_ComponentBoundEvent_865_Button Clicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__button_load_K2Node_ComponentBoundEvent_865_Button_Clicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.SetupWeaponIcon
struct Umainmenu_screen_bpw_C_SetupWeaponIcon_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.BndEvt__w_mainMenuNav_store_C_182_K2Node_ComponentBoundEvent_215_ButtonClicked__DelegateSignature
struct Umainmenu_screen_bpw_C_BndEvt__w_mainMenuNav_store_C_182_K2Node_ComponentBoundEvent_215_ButtonClicked__DelegateSignature_Params
{
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.InputSwap
struct Umainmenu_screen_bpw_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.ExecuteUbergraph_mainmenu_screen_bpw
struct Umainmenu_screen_bpw_C_ExecuteUbergraph_mainmenu_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainmenu_screen_bpw.mainmenu_screen_bpw_C.EscapeMenuClosed__DelegateSignature
struct Umainmenu_screen_bpw_C_EscapeMenuClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
