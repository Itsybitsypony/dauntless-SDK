#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cooldown_btdeco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cooldown_btdeco.cooldown_btdeco_C.GetNewCooldown
struct Ucooldown_btdeco_C_GetNewCooldown_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewCooldown;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cooldown_btdeco.cooldown_btdeco_C.GetCooldownStartTime
struct Ucooldown_btdeco_C_GetCooldownStartTime_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CooldownStartTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cooldown_btdeco.cooldown_btdeco_C.PerformConditionCheckAI
struct Ucooldown_btdeco_C_PerformConditionCheckAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cooldown_btdeco.cooldown_btdeco_C.ReceiveObserverActivatedAI
struct Ucooldown_btdeco_C_ReceiveObserverActivatedAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cooldown_btdeco.cooldown_btdeco_C.ReceiveObserverDeactivatedAI
struct Ucooldown_btdeco_C_ReceiveObserverDeactivatedAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cooldown_btdeco.cooldown_btdeco_C.ExecuteUbergraph_cooldown_btdeco
struct Ucooldown_btdeco_C_ExecuteUbergraph_cooldown_btdeco_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
