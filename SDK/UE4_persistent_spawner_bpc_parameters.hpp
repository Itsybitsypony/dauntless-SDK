#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_persistent_spawner_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.DoSpawn
struct Upersistent_spawner_bpc_C_DoSpawn_Params
{
	int                                                RequestIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.GetIndexOfUniqueKey
struct Upersistent_spawner_bpc_C_GetIndexOfUniqueKey_Params
{
	struct FName                                       Search_Key;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.AuthAddPersistentSpawnRequest
struct Upersistent_spawner_bpc_C_AuthAddPersistentSpawnRequest_Params
{
	struct Fpersistent_spawn_params                    Request;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.AuthRemovePersistentSpawnRequest
struct Upersistent_spawner_bpc_C_AuthRemovePersistentSpawnRequest_Params
{
	struct FName                                       UniqueKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.ReceiveTick
struct Upersistent_spawner_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.ExecuteUbergraph_persistent_spawner_bpc
struct Upersistent_spawner_bpc_C_ExecuteUbergraph_persistent_spawner_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.OnSpawnedProjectile__DelegateSignature
struct Upersistent_spawner_bpc_C_OnSpawnedProjectile__DelegateSignature_Params
{
	class Aprojectile_base_bp_C*                       SpawnedProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.OnSpawnedActor__DelegateSignature
struct Upersistent_spawner_bpc_C_OnSpawnedActor__DelegateSignature_Params
{
	class AActor*                                      SpawnedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
