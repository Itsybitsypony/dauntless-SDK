#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_event_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function progression_event_bpw.progression_event_bpw_C.Setup Animation
struct Uprogression_event_bpw_C_Setup_Animation_Params
{
	struct Fprogression_event                          progression_event;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_event_bpw.progression_event_bpw_C.Bar Fill Finished
struct Uprogression_event_bpw_C_Bar_Fill_Finished_Params
{
};

// Function progression_event_bpw.progression_event_bpw_C.Bar Fill Started
struct Uprogression_event_bpw_C_Bar_Fill_Started_Params
{
};

// Function progression_event_bpw.progression_event_bpw_C.Tick
struct Uprogression_event_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_event_bpw.progression_event_bpw_C.Construct
struct Uprogression_event_bpw_C_Construct_Params
{
};

// Function progression_event_bpw.progression_event_bpw_C.ExecuteUbergraph_progression_event_bpw
struct Uprogression_event_bpw_C_ExecuteUbergraph_progression_event_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_event_bpw.progression_event_bpw_C.AnimationFinished__DelegateSignature
struct Uprogression_event_bpw_C_AnimationFinished__DelegateSignature_Params
{
	struct Fprogression_event                          Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
