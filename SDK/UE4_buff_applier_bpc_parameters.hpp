#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_buff_applier_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function buff_applier_bpc.buff_applier_bpc_C.ClearProjectileClassBuffs
struct Ubuff_applier_bpc_C_ClearProjectileClassBuffs_Params
{
	class UClass*                                      Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function buff_applier_bpc.buff_applier_bpc_C.AddProjectileClassBuffs
struct Ubuff_applier_bpc_C_AddProjectileClassBuffs_Params
{
	class UClass*                                      ProjectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fbuff_override_struct                       BuffOverrides;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function buff_applier_bpc.buff_applier_bpc_C.ClearGameplayEffectOverrides
struct Ubuff_applier_bpc_C_ClearGameplayEffectOverrides_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function buff_applier_bpc.buff_applier_bpc_C.AddGameplayEffectOverride
struct Ubuff_applier_bpc_C_AddGameplayEffectOverride_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fge_override_struct                         OverrideData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function buff_applier_bpc.buff_applier_bpc_C.AddGameplayEffects
struct Ubuff_applier_bpc_C_AddGameplayEffects_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Feffect_magitudes_struct>            GameplayEffects;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function buff_applier_bpc.buff_applier_bpc_C.ClearBuffOverrides
struct Ubuff_applier_bpc_C_ClearBuffOverrides_Params
{
	class UClass*                                      BuffClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function buff_applier_bpc.buff_applier_bpc_C.AddBuffOverride
struct Ubuff_applier_bpc_C_AddBuffOverride_Params
{
	class UClass*                                      Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fbuff_override_struct                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function buff_applier_bpc.buff_applier_bpc_C.TryAddBuff
struct Ubuff_applier_bpc_C_TryAddBuff_Params
{
	class UClass*                                      BuffClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OptionalHitResult;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               StartBuff;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBuff*                                 BuffRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               BuffWasReplacedByOverrides;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function buff_applier_bpc.buff_applier_bpc_C.OnSpawnedProjectile_Event_1
struct Ubuff_applier_bpc_C_OnSpawnedProjectile_Event_1_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function buff_applier_bpc.buff_applier_bpc_C.ExecuteUbergraph_buff_applier_bpc
struct Ubuff_applier_bpc_C_ExecuteUbergraph_buff_applier_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
