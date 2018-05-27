#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UMG_InteractionCallout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.SetNoRezMessage
struct UUMG_InteractionCallout_C_SetNoRezMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.ShowNoRezState
struct UUMG_InteractionCallout_C_ShowNoRezState_Params
{
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Construct
struct UUMG_InteractionCallout_C_Construct_Params
{
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Tick
struct UUMG_InteractionCallout_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Show Fill Progress
struct UUMG_InteractionCallout_C_Show_Fill_Progress_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Hide Fill Progress
struct UUMG_InteractionCallout_C_Hide_Fill_Progress_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.Input Swap
struct UUMG_InteractionCallout_C_Input_Swap_Params
{
	bool                                               Is_Using_Gamepad;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.HighlightInteraction
struct UUMG_InteractionCallout_C_HighlightInteraction_Params
{
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.UnhighlightInteraction
struct UUMG_InteractionCallout_C_UnhighlightInteraction_Params
{
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.CancelFill
struct UUMG_InteractionCallout_C_CancelFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.StartFill
struct UUMG_InteractionCallout_C_StartFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_InteractionCallout.UMG_InteractionCallout_C.ExecuteUbergraph_UMG_InteractionCallout
struct UUMG_InteractionCallout_C_ExecuteUbergraph_UMG_InteractionCallout_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
