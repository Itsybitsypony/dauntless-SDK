#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_pull_projectile_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.CanPullHitTarget
struct Acblades_pull_projectile_bp_C_CanPullHitTarget_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPull;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.RotateToTarget
struct Acblades_pull_projectile_bp_C_RotateToTarget_Params
{
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.GetLaunchVelocity
struct Acblades_pull_projectile_bp_C_GetLaunchVelocity_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  Player_Character;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Hit_Point;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.DEPRECIATED_GetLaunchVelocity
struct Acblades_pull_projectile_bp_C_DEPRECIATED_GetLaunchVelocity_Params
{
	class ACharacter*                                  PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LaunchVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.UserConstructionScript
struct Acblades_pull_projectile_bp_C_UserConstructionScript_Params
{
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ReceiveHit
struct Acblades_pull_projectile_bp_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.SetHomingTarget
struct Acblades_pull_projectile_bp_C_SetHomingTarget_Params
{
	class UPrimitiveComponent*                         HomingTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ReceiveBeginPlay
struct Acblades_pull_projectile_bp_C_ReceiveBeginPlay_Params
{
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.DebugDrawProjectileSphere
struct Acblades_pull_projectile_bp_C_DebugDrawProjectileSphere_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.BndEvt__Colliding Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature
struct Acblades_pull_projectile_bp_C_BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.AuthCollide
struct Acblades_pull_projectile_bp_C_AuthCollide_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ExecuteUbergraph_cblades_pull_projectile_bp
struct Acblades_pull_projectile_bp_C_ExecuteUbergraph_cblades_pull_projectile_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
