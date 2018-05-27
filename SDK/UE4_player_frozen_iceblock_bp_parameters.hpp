#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_frozen_iceblock_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.DestroyShard
struct Aplayer_frozen_iceblock_bp_C_DestroyShard_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ShardSpawn
struct Aplayer_frozen_iceblock_bp_C_ShardSpawn_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.UserConstructionScript
struct Aplayer_frozen_iceblock_bp_C_UserConstructionScript_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Timeline_6__FinishedFunc
struct Aplayer_frozen_iceblock_bp_C_Timeline_6__FinishedFunc_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Timeline_6__UpdateFunc
struct Aplayer_frozen_iceblock_bp_C_Timeline_6__UpdateFunc_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceiveDestroyed
struct Aplayer_frozen_iceblock_bp_C_ReceiveDestroyed_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Server_DestroyedShard
struct Aplayer_frozen_iceblock_bp_C_Server_DestroyedShard_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceiveBeginPlay
struct Aplayer_frozen_iceblock_bp_C_ReceiveBeginPlay_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceivePointDamage
struct Aplayer_frozen_iceblock_bp_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.BndEvt__Shard_07_K2Node_ComponentBoundEvent_359_ComponentBeginOverlapSignature__DelegateSignature
struct Aplayer_frozen_iceblock_bp_C_BndEvt__Shard_07_K2Node_ComponentBoundEvent_359_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ClientDestructionVFX
struct Aplayer_frozen_iceblock_bp_C_ClientDestructionVFX_Params
{
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.SetData
struct Aplayer_frozen_iceblock_bp_C_SetData_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Ustatus_effect_base_ab_C*                    Ability;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ExecuteUbergraph_player_frozen_iceblock_bp
struct Aplayer_frozen_iceblock_bp_C_ExecuteUbergraph_player_frozen_iceblock_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
