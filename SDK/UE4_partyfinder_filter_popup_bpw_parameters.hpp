#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_partyfinder_filter_popup_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.AddRegionHeader
struct Upartyfinder_filter_popup_bpw_C_AddRegionHeader_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.AddHuntCheckbox
struct Upartyfinder_filter_popup_bpw_C_AddHuntCheckbox_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ContextName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.HandleCommit
struct Upartyfinder_filter_popup_bpw_C_HandleCommit_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnKeyDown
struct Upartyfinder_filter_popup_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnFocusReceived
struct Upartyfinder_filter_popup_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.PopulateHunts
struct Upartyfinder_filter_popup_bpw_C_PopulateHunts_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.ValidateCommit
struct Upartyfinder_filter_popup_bpw_C_ValidateCommit_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.Construct
struct Upartyfinder_filter_popup_bpw_C_Construct_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__InviteToGuildText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_BndEvt__InviteToGuildText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_72_OnClicked__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_72_OnClicked__DelegateSignature_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__FarmCheckbox_K2Node_ComponentBoundEvent_85_OnCheckStateChanged__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_BndEvt__FarmCheckbox_K2Node_ComponentBoundEvent_85_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__BreakCheckbox_K2Node_ComponentBoundEvent_94_OnCheckStateChanged__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_BndEvt__BreakCheckbox_K2Node_ComponentBoundEvent_94_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_377_OnButtonClickedEvent__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_377_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnConfirmCreate
struct Upartyfinder_filter_popup_bpw_C_OnConfirmCreate_Params
{
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.ExecuteUbergraph_partyfinder_filter_popup_bpw
struct Upartyfinder_filter_popup_bpw_C_ExecuteUbergraph_partyfinder_filter_popup_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnCommit__DelegateSignature
struct Upartyfinder_filter_popup_bpw_C_OnCommit__DelegateSignature_Params
{
	class FString                                      Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               RequireGather;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RequireBreaks;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
