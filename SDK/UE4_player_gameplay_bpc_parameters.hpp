#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_gameplay_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_gameplay_bpc.player_gameplay_bpc_C.AuthStartGameplay
struct Uplayer_gameplay_bpc_C_AuthStartGameplay_Params
{
	TArray<struct Ftimed_gameplay_event>               TimedGameplayEvents;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Fbeam_request>                       Beams;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_gameplay_bpc.player_gameplay_bpc_C.AuthStopGameplay
struct Uplayer_gameplay_bpc_C_AuthStopGameplay_Params
{
};

// Function player_gameplay_bpc.player_gameplay_bpc_C.AuthRegisterGameplayGUID
struct Uplayer_gameplay_bpc_C_AuthRegisterGameplayGUID_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_gameplay_bpc.player_gameplay_bpc_C.ExecuteUbergraph_player_gameplay_bpc
struct Uplayer_gameplay_bpc_C_ExecuteUbergraph_player_gameplay_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
