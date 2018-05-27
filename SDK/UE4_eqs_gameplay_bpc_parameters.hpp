#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eqs_gameplay_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnGameplay
struct Ueqs_gameplay_bpc_C_AuthSpawnGameplay_Params
{
	struct Ftimed_gameplay_event                       TimedGameplayEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GameplayRequestGUID;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnActors_Manual
struct Ueqs_gameplay_bpc_C_AuthSpawnActors_Manual_Params
{
	struct Feqs_actor_data                             ActorData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FVector>                             Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GameplayRequestGUID;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnAimedProjectiles_Manual
struct Ueqs_gameplay_bpc_C_AuthSpawnAimedProjectiles_Manual_Params
{
	struct Feqs_aimed_projectile_data                  ProjectileData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GameplayRequestGUID;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.CreateTargettingDataFromEQS
struct Ueqs_gameplay_bpc_C_CreateTargettingDataFromEQS_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           EQSQueryInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Ugameplay_targetting_data_C*                 GameplayTargettingData;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnAimedProjectiles
struct Ueqs_gameplay_bpc_C_AuthSpawnAimedProjectiles_Params
{
	struct Feqs_aimed_projectile_data                  AimedProjectileData;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       RequestGUID;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnActors
struct Ueqs_gameplay_bpc_C_AuthSpawnActors_Params
{
	struct Feqs_actor_data                             ActorData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       RequestGUID;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnLobbedProjectiles
struct Ueqs_gameplay_bpc_C_AuthSpawnLobbedProjectiles_Params
{
	struct Feqs_lobbed_projectile_data                 LobbedProjectileData;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       RequestGUID;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthTryStopRequest
struct Ueqs_gameplay_bpc_C_AuthTryStopRequest_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               RemovedRequest;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.TryRegisterSpawnedActor
struct Ueqs_gameplay_bpc_C_TryRegisterSpawnedActor_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetEQSGameplayDataFromPersistent
struct Ueqs_gameplay_bpc_C_GetEQSGameplayDataFromPersistent_Params
{
	struct Fpersistent_eqs_spawn_data                  PersistentEQSData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Feqs_gameplay_data                          EqsGameplayData;                                          // (Parm, OutParm)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetEQSGameplayData
struct Ueqs_gameplay_bpc_C_GetEQSGameplayData_Params
{
	struct Feqs_spawn_query                            SpawnQuery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Feqs_gameplay_data                          EqsGameplayData;                                          // (Parm, OutParm)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.DumpStateIfDebugEnabled
struct Ueqs_gameplay_bpc_C_DumpStateIfDebugEnabled_Params
{
	struct Fpersistent_eqs_spawn_data                  PersistentData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      Prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetRequestDebugString
struct Ueqs_gameplay_bpc_C_GetRequestDebugString_Params
{
	struct Fpersistent_eqs_spawn_data                  Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      RequestDebugString;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.PrintStringIfDebugEnabled
struct Ueqs_gameplay_bpc_C_PrintStringIfDebugEnabled_Params
{
	class FString                                      String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetFirstIndex
struct Ueqs_gameplay_bpc_C_GetFirstIndex_Params
{
	int                                                NumItems;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eeqs_result_iteration_method>          Method;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.MoveToNextTarget
struct Ueqs_gameplay_bpc_C_MoveToNextTarget_Params
{
	int                                                TargetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpersistent_eqs_spawn_data                  PersistentData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Fpersistent_eqs_spawn_data                  UpdatedData;                                              // (Parm, OutParm)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ChooseNextTargetIndex
struct Ueqs_gameplay_bpc_C_ChooseNextTargetIndex_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eeqs_result_iteration_method>          Method;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AvailableRandomIndexes;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TotalNumTargets;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        RemainingRandomIndexes;                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.TickPersistentProjectileSpawn
struct Ueqs_gameplay_bpc_C_TickPersistentProjectileSpawn_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Epersistent_eqs_gameplay_update_result> Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ValidateComponent
struct Ueqs_gameplay_bpc_C_ValidateComponent_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetInstigator
struct Ueqs_gameplay_bpc_C_GetInstigator_Params
{
	class APawn*                                       Instigator;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnEQSGameplayEventFinished
struct Ueqs_gameplay_bpc_C_OnEQSGameplayEventFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ReceiveBeginPlay
struct Ueqs_gameplay_bpc_C_ReceiveBeginPlay_Params
{
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthApplyBuffs
struct Ueqs_gameplay_bpc_C_AuthApplyBuffs_Params
{
	class UEnvQuery*                                   Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              BuffClasses;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxTargets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnQueryFinishedEvent_Event_1
struct Ueqs_gameplay_bpc_C_OnQueryFinishedEvent_Event_1_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ReceiveTick
struct Ueqs_gameplay_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthAddOngoingGameplaySpawn
struct Ueqs_gameplay_bpc_C_AuthAddOngoingGameplaySpawn_Params
{
	struct Feqs_spawn_query                            NewEQSSpawnQuery;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthStoreEQSActorResultInBlackboard
struct Ueqs_gameplay_bpc_C_AuthStoreEQSActorResultInBlackboard_Params
{
	class UEnvQuery*                                   EQSQuery;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       BlackboardResultName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnQueryFinishedEvent_Event_2
struct Ueqs_gameplay_bpc_C_OnQueryFinishedEvent_Event_2_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ExecuteUbergraph_eqs_gameplay_bpc
struct Ueqs_gameplay_bpc_C_ExecuteUbergraph_eqs_gameplay_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnSpawnedProjectile__DelegateSignature
struct Ueqs_gameplay_bpc_C_OnSpawnedProjectile__DelegateSignature_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
