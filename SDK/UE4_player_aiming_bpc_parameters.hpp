#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_aiming_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_aiming_bpc.player_aiming_bpc_C.Client_StartAiming
struct Uplayer_aiming_bpc_C_Client_StartAiming_Params
{
	struct Fplayer_aim_request                         AimRequest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_aiming_bpc.player_aiming_bpc_C.Client_StopAiming
struct Uplayer_aiming_bpc_C_Client_StopAiming_Params
{
};

// Function player_aiming_bpc.player_aiming_bpc_C.Internal_SetAimState
struct Uplayer_aiming_bpc_C_Internal_SetAimState_Params
{
	TEnumAsByte<Eplayer_aiming_state>                  NewAimState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_aiming_bpc.player_aiming_bpc_C.ReceiveTick
struct Uplayer_aiming_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_aiming_bpc.player_aiming_bpc_C.ExecuteUbergraph_player_aiming_bpc
struct Uplayer_aiming_bpc_C_ExecuteUbergraph_player_aiming_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
