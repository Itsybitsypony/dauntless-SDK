#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_slot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Get_image_status_ready_ColorAndOpacity_1
struct Uw_lobby_slot_bpw_C_Get_image_status_ready_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetVisibility_hover
struct Uw_lobby_slot_bpw_C_GetVisibility_hover_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.status_ready_hideShow
struct Uw_lobby_slot_bpw_C_status_ready_hideShow_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetVisibility_HasFocus
struct Uw_lobby_slot_bpw_C_GetVisibility_HasFocus_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Get_image_status_ready_Brush_1
struct Uw_lobby_slot_bpw_C_Get_image_status_ready_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetScreenspacePositionPlayer
struct Uw_lobby_slot_bpw_C_GetScreenspacePositionPlayer_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetStatusReady
struct Uw_lobby_slot_bpw_C_SetStatusReady_Params
{
	bool                                               ReadyStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetupWidget
struct Uw_lobby_slot_bpw_C_SetupWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetScreenspacePosition
struct Uw_lobby_slot_bpw_C_SetScreenspacePosition_Params
{
	struct FGeometry                                   TopLevelGeometry;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.ResetAssignment
struct Uw_lobby_slot_bpw_C_ResetAssignment_Params
{
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.AssignPaperDoll
struct Uw_lobby_slot_bpw_C_AssignPaperDoll_Params
{
	class Alobby_paperdoll_bp_C*                       Paperdoll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.AssignPlayer
struct Uw_lobby_slot_bpw_C_AssignPlayer_Params
{
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
struct Uw_lobby_slot_bpw_C_BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params
{
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Construct
struct Uw_lobby_slot_bpw_C_Construct_Params
{
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Tick
struct Uw_lobby_slot_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.ExecuteUbergraph_w_lobby_slot_bpw
struct Uw_lobby_slot_bpw_C_ExecuteUbergraph_w_lobby_slot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.LobbySlotClicked__DelegateSignature
struct Uw_lobby_slot_bpw_C_LobbySlotClicked__DelegateSignature_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_lobby_slot_bpw_C*                         SlotWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
