#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawnedactor_manager_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.RemoveSpawnedActor
struct Uspawnedactor_manager_bpc_C_RemoveSpawnedActor_Params
{
	int                                                ClassIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RefIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.UpdateAllowedAmount
struct Uspawnedactor_manager_bpc_C_UpdateAllowedAmount_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AllowedAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etoo_many_actors_strategy>             FutureOverflowStrategy;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eupdate_max_actors_strategy>           WhatToDoWithCurrentOverflows;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetSpawnedActorDataForClass
struct Uspawnedactor_manager_bpc_C_GetSpawnedActorDataForClass_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DataExists;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct Fspawnedactor_manager_info                  ActorData;                                                // (Parm, OutParm)
	int                                                DataIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.CanSpawnActor
struct Uspawnedactor_manager_bpc_C_CanSpawnActor_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetSpawnedActorsOfClass
struct Uspawnedactor_manager_bpc_C_GetSpawnedActorsOfClass_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.Internal_GetActorRef
struct Uspawnedactor_manager_bpc_C_Internal_GetActorRef_Params
{
	int                                                ClassIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RefIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetIndexOfSpawnedActorClass
struct Uspawnedactor_manager_bpc_C_GetIndexOfSpawnedActorClass_Params
{
	class UClass*                                      ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetIndexOfSpawnedActor
struct Uspawnedactor_manager_bpc_C_GetIndexOfSpawnedActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClassIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RefIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.AuthRegisterSpawnedActor
struct Uspawnedactor_manager_bpc_C_AuthRegisterSpawnedActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.OnDestroyed_Event_1
struct Uspawnedactor_manager_bpc_C_OnDestroyed_Event_1_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.Internal_RemoveActor
struct Uspawnedactor_manager_bpc_C_Internal_RemoveActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.ReceiveTick
struct Uspawnedactor_manager_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.ExecuteUbergraph_spawnedactor_manager_bpc
struct Uspawnedactor_manager_bpc_C_ExecuteUbergraph_spawnedactor_manager_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
