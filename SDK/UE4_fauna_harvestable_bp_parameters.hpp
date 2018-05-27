#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_harvestable_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.EnableHighlightForDuration
struct Afauna_harvestable_bp_C_EnableHighlightForDuration_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.SetGrantItemID
struct Afauna_harvestable_bp_C_SetGrantItemID_Params
{
	class FString                                      GatherID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplaySpawnPosPreCalc
struct Afauna_harvestable_bp_C_ModifyEQSGameplaySpawnPosPreCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     InitialStartPosition;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InitialTargetPosition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewStartPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplaySpawnPosPostCalc
struct Afauna_harvestable_bp_C_ModifyEQSGameplaySpawnPosPostCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     FinalTargetPosition;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPosition;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplayData
struct Afauna_harvestable_bp_C_ModifyEQSGameplayData_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Feqs_spawn_query                            NewEQSSpawnQuery;                                         // (Parm, OutParm)
	bool                                               ModifiedData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.OnRep_Used
struct Afauna_harvestable_bp_C_OnRep_Used_Params
{
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.GetMesh
struct Afauna_harvestable_bp_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.GetFallbackProjectileSpawnOffset
struct Afauna_harvestable_bp_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.UserConstructionScript
struct Afauna_harvestable_bp_C_UserConstructionScript_Params
{
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ReceivedArchonAbilityDamage
struct Afauna_harvestable_bp_C_ReceivedArchonAbilityDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ReceiveBeginPlay
struct Afauna_harvestable_bp_C_ReceiveBeginPlay_Params
{
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.EQSActorSpawned
struct Afauna_harvestable_bp_C_EQSActorSpawned_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.SetLocoState
struct Afauna_harvestable_bp_C_SetLocoState_Params
{
	TEnumAsByte<Efauna_loco_state_enum>*               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.EQSProjectileSpawned
struct Afauna_harvestable_bp_C_EQSProjectileSpawned_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.SpawnShinyLoot
struct Afauna_harvestable_bp_C_SpawnShinyLoot_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   ShinyEQS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ExecuteUbergraph_fauna_harvestable_bp
struct Afauna_harvestable_bp_C_ExecuteUbergraph_fauna_harvestable_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
