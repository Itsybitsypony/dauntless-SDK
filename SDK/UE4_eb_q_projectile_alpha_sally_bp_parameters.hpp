#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_projectile_alpha_sally_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.UserConstructionScript
struct Aeb_q_projectile_alpha_sally_bp_C_UserConstructionScript_Params
{
};

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveBeginPlay
struct Aeb_q_projectile_alpha_sally_bp_C_ReceiveBeginPlay_Params
{
};

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveTick
struct Aeb_q_projectile_alpha_sally_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.OnProjectileStopped
struct Aeb_q_projectile_alpha_sally_bp_C_OnProjectileStopped_Params
{
};

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveHit
struct Aeb_q_projectile_alpha_sally_bp_C_ReceiveHit_Params
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

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ProjectileExploded
struct Aeb_q_projectile_alpha_sally_bp_C_ProjectileExploded_Params
{
	struct FVector*                                    ExplosionLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ExecuteUbergraph_eb_q_projectile_alpha_sally_bp
struct Aeb_q_projectile_alpha_sally_bp_C_ExecuteUbergraph_eb_q_projectile_alpha_sally_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
