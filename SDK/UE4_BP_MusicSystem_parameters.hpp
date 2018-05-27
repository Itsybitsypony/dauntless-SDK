#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MusicSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MusicSystem.BP_MusicSystem_C.ToggleDebugMusicSystem
struct ABP_MusicSystem_C_ToggleDebugMusicSystem_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MusicSystem.BP_MusicSystem_C.NotifyIntroCinematicStarted
struct ABP_MusicSystem_C_NotifyIntroCinematicStarted_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MusicSystem.BP_MusicSystem_C.NotifyIntroCinematicCompleted
struct ABP_MusicSystem_C_NotifyIntroCinematicCompleted_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MaxDangerActive
struct ABP_MusicSystem_C_OnRep_MaxDangerActive_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.SetBehemothState
struct ABP_MusicSystem_C_SetBehemothState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MusicState
struct ABP_MusicSystem_C_OnRep_MusicState_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_MatchState
struct ABP_MusicSystem_C_OnRep_MatchState_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.OnRep_BehemothsState
struct ABP_MusicSystem_C_OnRep_BehemothsState_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.EvaluateMusicState
struct ABP_MusicSystem_C_EvaluateMusicState_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.UserConstructionScript
struct ABP_MusicSystem_C_UserConstructionScript_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.ReceiveBeginPlay
struct ABP_MusicSystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_MusicSystem.BP_MusicSystem_C.ReceiveTick
struct ABP_MusicSystem_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MusicSystem.BP_MusicSystem_C.ExecuteUbergraph_BP_MusicSystem
struct ABP_MusicSystem_C_ExecuteUbergraph_BP_MusicSystem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
