#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_override_default_turn_warp_btservice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ReceiveActivationAI
struct Uoverride_default_turn_warp_btservice_C_ReceiveActivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ReceiveDeactivationAI
struct Uoverride_default_turn_warp_btservice_C_ReceiveDeactivationAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ExecuteUbergraph_override_default_turn_warp_btservice
struct Uoverride_default_turn_warp_btservice_C_ExecuteUbergraph_override_default_turn_warp_btservice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
