#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_ChargeButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_ChargeButton.w_ChargeButton_C.HideMessage
struct Uw_ChargeButton_C_HideMessage_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.ShowMessage
struct Uw_ChargeButton_C_ShowMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_ChargeButton.w_ChargeButton_C.RefreshButtonLabel
struct Uw_ChargeButton_C_RefreshButtonLabel_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.CancelCraftInProgress
struct Uw_ChargeButton_C_CancelCraftInProgress_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.StartCraftingButton
struct Uw_ChargeButton_C_StartCraftingButton_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.TryStartCraftingButton
struct Uw_ChargeButton_C_TryStartCraftingButton_Params
{
	bool                                               CanCraftCurrentItem;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Set Energy Wave Intensity
struct Uw_ChargeButton_C_Set_Energy_Wave_Intensity_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Refresh Gamepad Hint
struct Uw_ChargeButton_C_Refresh_Gamepad_Hint_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Clear Components
struct Uw_ChargeButton_C_Clear_Components_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.Get Player Inventory
struct Uw_ChargeButton_C_Get_Player_Inventory_Params
{
	class AArchonInventory*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Setup Equipment
struct Uw_ChargeButton_C_Setup_Equipment_Params
{
	class UEquipmentItem*                              Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Update Appearance
struct Uw_ChargeButton_C_Update_Appearance_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Set Progress Visible
struct Uw_ChargeButton_C_Set_Progress_Visible_Params
{
	bool                                               Is_Visible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Key Hold Ended
struct Uw_ChargeButton_C_Key_Hold_Ended_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.Key Hold Started
struct Uw_ChargeButton_C_Key_Hold_Started_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.OnLoaded_A058EA6248D678A919D5DF9119466E69
struct Uw_ChargeButton_C_OnLoaded_A058EA6248D678A919D5DF9119466E69_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Construct
struct Uw_ChargeButton_C_Construct_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.Tick
struct Uw_ChargeButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Key Hold Complete
struct Uw_ChargeButton_C_Key_Hold_Complete_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.On Key Hold Ended
struct Uw_ChargeButton_C_On_Key_Hold_Ended_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.On Key Hold Started
struct Uw_ChargeButton_C_On_Key_Hold_Started_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.OnAnimationFinished
struct Uw_ChargeButton_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.Stop Crafting Animation
struct Uw_ChargeButton_C_Stop_Crafting_Animation_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.Vendor Refresh
struct Uw_ChargeButton_C_Vendor_Refresh_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
struct Uw_ChargeButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
struct Uw_ChargeButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.OnSynchronizeProperties
struct Uw_ChargeButton_C_OnSynchronizeProperties_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.Input Swap
struct Uw_ChargeButton_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.RefreshButtonIcon
struct Uw_ChargeButton_C_RefreshButtonIcon_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.ExecuteUbergraph_w_ChargeButton
struct Uw_ChargeButton_C_ExecuteUbergraph_w_ChargeButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_ChargeButton.w_ChargeButton_C.On Mouse Up__DelegateSignature
struct Uw_ChargeButton_C_On_Mouse_Up__DelegateSignature_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.On Mouse Down__DelegateSignature
struct Uw_ChargeButton_C_On_Mouse_Down__DelegateSignature_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.On Vendor Refresh__DelegateSignature
struct Uw_ChargeButton_C_On_Vendor_Refresh__DelegateSignature_Params
{
};

// Function w_ChargeButton.w_ChargeButton_C.On Key Hold Complete__DelegateSignature
struct Uw_ChargeButton_C_On_Key_Hold_Complete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
