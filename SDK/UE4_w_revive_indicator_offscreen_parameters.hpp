#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_revive_indicator_offscreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Revives Disabled
struct Uw_revive_indicator_offscreen_C_Update_Revives_Disabled_Params
{
	bool                                               IsDisabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Is Being Revived
struct Uw_revive_indicator_offscreen_C_Update_Is_Being_Revived_Params
{
	bool                                               IsBeingRevived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Offscreen Rotation
struct Uw_revive_indicator_offscreen_C_Update_Offscreen_Rotation_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Update Offscreen Visibility
struct Uw_revive_indicator_offscreen_C_Update_Offscreen_Visibility_Params
{
	bool                                               IsOffscreen;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Tick
struct Uw_revive_indicator_offscreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.Construct
struct Uw_revive_indicator_offscreen_C_Construct_Params
{
};

// Function w_revive_indicator_offscreen.w_revive_indicator_offscreen_C.ExecuteUbergraph_w_revive_indicator_offscreen
struct Uw_revive_indicator_offscreen_C_ExecuteUbergraph_w_revive_indicator_offscreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
