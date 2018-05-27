#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_GAMEPLAY_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ApplyCurrentGenderIdentity
struct UOptions_Menu_GAMEPLAY_bpw_C_ApplyCurrentGenderIdentity_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.GetPlayerGenderIdentity
struct UOptions_Menu_GAMEPLAY_bpw_C_GetPlayerGenderIdentity_Params
{
	EArchonGender                                      GenderId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.SetGenderIdentityAvailability
struct UOptions_Menu_GAMEPLAY_bpw_C_SetGenderIdentityAvailability_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ApplyState
struct UOptions_Menu_GAMEPLAY_bpw_C_ApplyState_Params
{
	class UArchonOptionUserWidget*                     RootMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.RestoreState
struct UOptions_Menu_GAMEPLAY_bpw_C_RestoreState_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.SaveState
struct UOptions_Menu_GAMEPLAY_bpw_C_SaveState_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.HasStateChanged
struct UOptions_Menu_GAMEPLAY_bpw_C_HasStateChanged_Params
{
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.UpdateUI
struct UOptions_Menu_GAMEPLAY_bpw_C_UpdateUI_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.OnKeyDown
struct UOptions_Menu_GAMEPLAY_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__HideHelmet_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_VO_K2Node_ComponentBoundEvent_1_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_Text_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_8_FocusReceived_Tooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_21_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.Gamepad Cancel
struct UOptions_Menu_GAMEPLAY_bpw_C_Gamepad_Cancel_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_VO_K2Node_ComponentBoundEvent_60_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.Construct
struct UOptions_Menu_GAMEPLAY_bpw_C_Construct_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Language_Text_K2Node_ComponentBoundEvent_75_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_85_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__HideHelmet_K2Node_ComponentBoundEvent_106_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_118_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_138_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__w_Options_Entry_PickerBox_bpw_134_K2Node_ComponentBoundEvent_155_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_82_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__GenderIdentity_K2Node_ComponentBoundEvent_103_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_286_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BndEvt__PartyInvitesPicker_K2Node_ComponentBoundEvent_290_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw
struct UOptions_Menu_GAMEPLAY_bpw_C_ExecuteUbergraph_Options_Menu_GAMEPLAY_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.BacktoRoot__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_BacktoRoot__DelegateSignature_Params
{
};

// Function Options_Menu_GAMEPLAY_bpw.Options_Menu_GAMEPLAY_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_GAMEPLAY_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
