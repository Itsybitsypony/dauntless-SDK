#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Options_Entry_Keybind_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.StopAwaitingInput
struct Uw_Options_Entry_Keybind_bpw_C_StopAwaitingInput_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearKey
struct Uw_Options_Entry_Keybind_bpw_C_ClearKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               LookupOnly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WillClearKey;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearActionMapping
struct Uw_Options_Entry_Keybind_bpw_C_ClearActionMapping_Params
{
	struct FInputActionKeyMapping                      ActionMapping;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearCurrentActiveState
struct Uw_Options_Entry_Keybind_bpw_C_ClearCurrentActiveState_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnPreviewKeyDown
struct Uw_Options_Entry_Keybind_bpw_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsKeyValidForSlot
struct Uw_Options_Entry_Keybind_bpw_C_IsKeyValidForSlot_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetBindingSlot
struct Uw_Options_Entry_Keybind_bpw_C_GetBindingSlot_Params
{
	bool                                               Primary;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Secondary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Gamepad;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EActionKeyMappingType                              Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetNewMapping
struct Uw_Options_Entry_Keybind_bpw_C_SetNewMapping_Params
{
	struct FInputActionKeyMapping                      OldActionMapping;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                        NewKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsValidInputMapping;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputAxisKeyMapping                        OldAxisMapping;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsValidAxisMapping;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAxisMapping;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EActionKeyMappingType                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Clear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnFocusReceived
struct Uw_Options_Entry_Keybind_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetScale
struct Uw_Options_Entry_Keybind_bpw_C_GetScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsValidAxisMapping
struct Uw_Options_Entry_Keybind_bpw_C_IsValidAxisMapping_Params
{
	struct FInputAxisKeyMapping                        AxisMapping;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsValidInputMapping
struct Uw_Options_Entry_Keybind_bpw_C_IsValidInputMapping_Params
{
	struct FInputActionKeyMapping                      InputMapping;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.DoesAxisDirectionMatch
struct Uw_Options_Entry_Keybind_bpw_C_DoesAxisDirectionMatch_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetAxisMapping
struct Uw_Options_Entry_Keybind_bpw_C_SetAxisMapping_Params
{
	struct FInputAxisKeyMapping                        OldKeyMapping;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                        NewKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsCurrentlyMapped;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EActionKeyMappingType                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Clear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetAxisMappingForActiveSlot
struct Uw_Options_Entry_Keybind_bpw_C_GetAxisMappingForActiveSlot_Params
{
	struct FInputAxisKeyMapping                        AxisMapping;                                              // (Parm, OutParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UpdateKey
struct Uw_Options_Entry_Keybind_bpw_C_UpdateKey_Params
{
	struct FKey                                        Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Clear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeyWasBound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnPreviewMouseButtonDown
struct Uw_Options_Entry_Keybind_bpw_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsAreadyBound
struct Uw_Options_Entry_Keybind_bpw_C_IsAreadyBound_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsAlreadyBound;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetActionMappingForActiveSlot
struct Uw_Options_Entry_Keybind_bpw_C_GetActionMappingForActiveSlot_Params
{
	struct FInputActionKeyMapping                      ActionMapping;                                            // (Parm, OutParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UpdateWidgetUI
struct Uw_Options_Entry_Keybind_bpw_C_UpdateWidgetUI_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnWidgetClicked
struct Uw_Options_Entry_Keybind_bpw_C_OnWidgetClicked_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetActionMapping
struct Uw_Options_Entry_Keybind_bpw_C_SetActionMapping_Params
{
	struct FInputActionKeyMapping                      OldKeyMapping;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                        NewKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsCurrentlyMapped;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EActionKeyMappingType                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Clear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Get Secondary Key Label Text
struct Uw_Options_Entry_Keybind_bpw_C_Get_Secondary_Key_Label_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetVisibility_1
struct Uw_Options_Entry_Keybind_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Get Primary Key Label Text
struct Uw_Options_Entry_Keybind_bpw_C_Get_Primary_Key_Label_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.EditorSync_SetTextLabel
struct Uw_Options_Entry_Keybind_bpw_C_EditorSync_SetTextLabel_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UI_SetTextLabel
struct Uw_Options_Entry_Keybind_bpw_C_UI_SetTextLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnLoaded_DE51A12B4DFDDCCB0FD2E2B4B6494B86
struct Uw_Options_Entry_Keybind_bpw_C_OnLoaded_DE51A12B4DFDDCCB0FD2E2B4B6494B86_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Construct
struct Uw_Options_Entry_Keybind_bpw_C_Construct_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnSynchronizeProperties
struct Uw_Options_Entry_Keybind_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__PrimaryKeyButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct Uw_Options_Entry_Keybind_bpw_C_BndEvt__PrimaryKeyButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.LoadWidgetGamepadIcon
struct Uw_Options_Entry_Keybind_bpw_C_LoadWidgetGamepadIcon_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__Key2Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_Options_Entry_Keybind_bpw_C_BndEvt__Key2Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
struct Uw_Options_Entry_Keybind_bpw_C_BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.TryUpdateKey
struct Uw_Options_Entry_Keybind_bpw_C_TryUpdateKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Clear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ConfirmUpdateKey
struct Uw_Options_Entry_Keybind_bpw_C_ConfirmUpdateKey_Params
{
};

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ExecuteUbergraph_w_Options_Entry_Keybind_bpw
struct Uw_Options_Entry_Keybind_bpw_C_ExecuteUbergraph_w_Options_Entry_Keybind_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
