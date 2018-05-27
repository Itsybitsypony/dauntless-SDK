#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_revive_indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_revive_indicator.w_revive_indicator_C.Set Player Name
struct Uw_revive_indicator_C_Set_Player_Name_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_revive_indicator.w_revive_indicator_C.Set Tracked Player
struct Uw_revive_indicator_C_Set_Tracked_Player_Params
{
	class APawn*                                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Update Offscreen Visibility
struct Uw_revive_indicator_C_Update_Offscreen_Visibility_Params
{
	bool                                               IsOffscreen;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Update Revives Disabled
struct Uw_revive_indicator_C_Update_Revives_Disabled_Params
{
	bool                                               IsDisabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Update Is Being Revived
struct Uw_revive_indicator_C_Update_Is_Being_Revived_Params
{
	bool                                               IsBeingRevived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Construct
struct Uw_revive_indicator_C_Construct_Params
{
};

// Function w_revive_indicator.w_revive_indicator_C.Destruct
struct Uw_revive_indicator_C_Destruct_Params
{
};

// Function w_revive_indicator.w_revive_indicator_C.HighlightInteraction
struct Uw_revive_indicator_C_HighlightInteraction_Params
{
};

// Function w_revive_indicator.w_revive_indicator_C.UnhighlightInteraction
struct Uw_revive_indicator_C_UnhighlightInteraction_Params
{
};

// Function w_revive_indicator.w_revive_indicator_C.Tick
struct Uw_revive_indicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Player Is Down
struct Uw_revive_indicator_C_Player_Is_Down_Params
{
	class APawn*                                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.StartFill
struct Uw_revive_indicator_C_StartFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.CancelFill
struct Uw_revive_indicator_C_CancelFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Show Fill Progress
struct Uw_revive_indicator_C_Show_Fill_Progress_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Update Revive Progress
struct Uw_revive_indicator_C_Update_Revive_Progress_Params
{
};

// Function w_revive_indicator.w_revive_indicator_C.Hide Fill Progress
struct Uw_revive_indicator_C_Hide_Fill_Progress_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.Input Swap
struct Uw_revive_indicator_C_Input_Swap_Params
{
	bool                                               Is_Using_Gamepad;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator.w_revive_indicator_C.ExecuteUbergraph_w_revive_indicator
struct Uw_revive_indicator_C_ExecuteUbergraph_w_revive_indicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
