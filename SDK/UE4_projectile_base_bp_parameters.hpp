#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function projectile_base_bp.projectile_base_bp_C.UpdateParticlePosition
struct Aprojectile_base_bp_C_UpdateParticlePosition_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aprojectile_base_bp_C*                       ProjectileActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.CanHitCBPushPullTarget
struct Aprojectile_base_bp_C_CanHitCBPushPullTarget_Params
{
	bool                                               Hits_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.GetDefaultElementalAttackType
struct Aprojectile_base_bp_C_GetDefaultElementalAttackType_Params
{
	EElementType                                       DefaultElementalAttackType;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.GetLookAtVector
struct Aprojectile_base_bp_C_GetLookAtVector_Params
{
	struct FVector                                     LookAtVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.GetLookAtAlpha
struct Aprojectile_base_bp_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.GetMesh
struct Aprojectile_base_bp_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.GetFallbackProjectileSpawnOffset
struct Aprojectile_base_bp_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.CanHitThisTarget
struct Aprojectile_base_bp_C_CanHitThisTarget_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.AudioSetIsLocal
struct Aprojectile_base_bp_C_AudioSetIsLocal_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.AuthSweepHit
struct Aprojectile_base_bp_C_AuthSweepHit_Params
{
	class USceneComponent*                             CollisionReference;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.AuthBecomeLobbedProjectile
struct Aprojectile_base_bp_C_AuthBecomeLobbedProjectile_Params
{
	struct FVector                                     TargetPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              MinDistanceForScaling;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceForScaling;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeightAtMinDistance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeightAtMaxDistance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LateralSpeedAtMinDistance;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LateralSpeedAtMaxDistance;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.Server - Apply Damage
struct Aprojectile_base_bp_C_Server___Apply_Damage_Params
{
	class AActor*                                      Target_Actor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit_Info;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.UserConstructionScript
struct Aprojectile_base_bp_C_UserConstructionScript_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.SetProjectileMovementType
struct Aprojectile_base_bp_C_SetProjectileMovementType_Params
{
	TEnumAsByte<Eprojectile_movement_type>             NewMovementType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.ReceiveTick
struct Aprojectile_base_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.ReceiveBeginPlay
struct Aprojectile_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.MulticastVelocityAndGravityChanges
struct Aprojectile_base_bp_C_MulticastVelocityAndGravityChanges_Params
{
	struct FVector                                     NewVel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              NewGravity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.CalculateHoming
struct Aprojectile_base_bp_C_CalculateHoming_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.MulticastVelocity
struct Aprojectile_base_bp_C_MulticastVelocity_Params
{
	struct FVector                                     NewVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
struct Aprojectile_base_bp_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.AuthOnProjectileDamageOverlap
struct Aprojectile_base_bp_C_AuthOnProjectileDamageOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.ProjectileExploded
struct Aprojectile_base_bp_C_ProjectileExploded_Params
{
	struct FVector                                     ExplosionLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.OnProjectileStopped
struct Aprojectile_base_bp_C_OnProjectileStopped_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.SpawnActor_Destroy
struct Aprojectile_base_bp_C_SpawnActor_Destroy_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.DebugMulticastDrawProjectileSphere
struct Aprojectile_base_bp_C_DebugMulticastDrawProjectileSphere_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.Multi_Explode
struct Aprojectile_base_bp_C_Multi_Explode_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.AuthSweepHitEvent
struct Aprojectile_base_bp_C_AuthSweepHitEvent_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.Multi_Hit
struct Aprojectile_base_bp_C_Multi_Hit_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.Multi_ProjectileStopped
struct Aprojectile_base_bp_C_Multi_ProjectileStopped_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.ReceiveDestroyed
struct Aprojectile_base_bp_C_ReceiveDestroyed_Params
{
};

// Function projectile_base_bp.projectile_base_bp_C.ExecuteUbergraph_projectile_base_bp
struct Aprojectile_base_bp_C_ExecuteUbergraph_projectile_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.OnProjectileStopped_Dispatcher__DelegateSignature
struct Aprojectile_base_bp_C_OnProjectileStopped_Dispatcher__DelegateSignature_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function projectile_base_bp.projectile_base_bp_C.OnProjectileExploded__DelegateSignature
struct Aprojectile_base_bp_C_OnProjectileExploded__DelegateSignature_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
