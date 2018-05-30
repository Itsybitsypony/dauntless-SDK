#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_audio_enter_flee_state_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ReceiveExecuteAI
struct Uaudio_enter_flee_state_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ReceiveAbort
struct Uaudio_enter_flee_state_bttask_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ExecuteUbergraph_audio_enter_flee_state_bttask
struct Uaudio_enter_flee_state_bttask_C_ExecuteUbergraph_audio_enter_flee_state_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
