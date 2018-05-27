#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_listentry_charge_button_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.SetDustResult
struct Uw_listentry_charge_button_bpw_C_SetDustResult_Params
{
	class FString                                      DustResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.RefreshButtonLabel
struct Uw_listentry_charge_button_bpw_C_RefreshButtonLabel_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.CancelCraftInProgress
struct Uw_listentry_charge_button_bpw_C_CancelCraftInProgress_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.StartCraftingButton
struct Uw_listentry_charge_button_bpw_C_StartCraftingButton_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.TryStartCraftingButton
struct Uw_listentry_charge_button_bpw_C_TryStartCraftingButton_Params
{
	bool                                               CanCraftCurrentItem;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Refresh Gamepad Hint
struct Uw_listentry_charge_button_bpw_C_Refresh_Gamepad_Hint_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Get Player Inventory
struct Uw_listentry_charge_button_bpw_C_Get_Player_Inventory_Params
{
	class AArchonInventory*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Update Appearance
struct Uw_listentry_charge_button_bpw_C_Update_Appearance_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Set Progress Visible
struct Uw_listentry_charge_button_bpw_C_Set_Progress_Visible_Params
{
	bool                                               Is_Visible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Key Hold Ended
struct Uw_listentry_charge_button_bpw_C_Key_Hold_Ended_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Key Hold Started
struct Uw_listentry_charge_button_bpw_C_Key_Hold_Started_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF91F8AF9A50
struct Uw_listentry_charge_button_bpw_C_OnLoaded_A058EA6248D678A919D5DF91F8AF9A50_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.OnLoaded_6FCA1BA344BCD80C2E6017B0B4A98467
struct Uw_listentry_charge_button_bpw_C_OnLoaded_6FCA1BA344BCD80C2E6017B0B4A98467_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Construct
struct Uw_listentry_charge_button_bpw_C_Construct_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Tick
struct Uw_listentry_charge_button_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Key Hold Complete
struct Uw_listentry_charge_button_bpw_C_Key_Hold_Complete_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.On Key Hold Ended
struct Uw_listentry_charge_button_bpw_C_On_Key_Hold_Ended_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.On Key Hold Started
struct Uw_listentry_charge_button_bpw_C_On_Key_Hold_Started_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.OnAnimationFinished
struct Uw_listentry_charge_button_bpw_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Stop Crafting Animation
struct Uw_listentry_charge_button_bpw_C_Stop_Crafting_Animation_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Refresh_ParentWidget
struct Uw_listentry_charge_button_bpw_C_Refresh_ParentWidget_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
struct Uw_listentry_charge_button_bpw_C_BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
struct Uw_listentry_charge_button_bpw_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.OnSynchronizeProperties
struct Uw_listentry_charge_button_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.Input Swap
struct Uw_listentry_charge_button_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.RefreshButtonIcon
struct Uw_listentry_charge_button_bpw_C_RefreshButtonIcon_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.ResetButton
struct Uw_listentry_charge_button_bpw_C_ResetButton_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.SetupSalvageIcon
struct Uw_listentry_charge_button_bpw_C_SetupSalvageIcon_Params
{
	TAssetPtr<class UObject>                           Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.ExecuteUbergraph_w_listentry_charge_button_bpw
struct Uw_listentry_charge_button_bpw_C_ExecuteUbergraph_w_listentry_charge_button_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.On Mouse Up__DelegateSignature
struct Uw_listentry_charge_button_bpw_C_On_Mouse_Up__DelegateSignature_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.On Mouse Down__DelegateSignature
struct Uw_listentry_charge_button_bpw_C_On_Mouse_Down__DelegateSignature_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.RefreshParent__DelegateSignature
struct Uw_listentry_charge_button_bpw_C_RefreshParent__DelegateSignature_Params
{
};

// Function w_listentry_charge_button_bpw.w_listentry_charge_button_bpw_C.On Key Hold Complete__DelegateSignature
struct Uw_listentry_charge_button_bpw_C_On_Key_Hold_Complete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
