#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_attack_speed_low_health_buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.HandleEffects
struct Aattack_speed_low_health_buff_C_HandleEffects_Params
{
};

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.UserConstructionScript
struct Aattack_speed_low_health_buff_C_UserConstructionScript_Params
{
};

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.OnAdded
struct Aattack_speed_low_health_buff_C_OnAdded_Params
{
};

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.OnGameplayEventTriggered
struct Aattack_speed_low_health_buff_C_OnGameplayEventTriggered_Params
{
	struct FGameplayEventData*                         Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.ReceiveDestroyed
struct Aattack_speed_low_health_buff_C_ReceiveDestroyed_Params
{
};

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.ExecuteUbergraph_attack_speed_low_health_buff
struct Aattack_speed_low_health_buff_C_ExecuteUbergraph_attack_speed_low_health_buff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
