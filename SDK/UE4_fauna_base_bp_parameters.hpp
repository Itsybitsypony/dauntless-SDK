#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function fauna_base_bp.fauna_base_bp_C.CanHitCBPushPullTarget
struct Afauna_base_bp_C_CanHitCBPushPullTarget_Params
{
	bool                                               Hits_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.GetDefaultElementalAttackType
struct Afauna_base_bp_C_GetDefaultElementalAttackType_Params
{
	EElementType                                       DefaultElementalAttackType;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.GetLookAtAlpha
struct Afauna_base_bp_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.GetLookAtVector
struct Afauna_base_bp_C_GetLookAtVector_Params
{
	struct FVector                                     LookAtVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.GetMesh
struct Afauna_base_bp_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.GetFallbackProjectileSpawnOffset
struct Afauna_base_bp_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.UpdateLookAtTarget
struct Afauna_base_bp_C_UpdateLookAtTarget_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.UpdateMeshOrientation
struct Afauna_base_bp_C_UpdateMeshOrientation_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.GetPivotMontageForAngle
struct Afauna_base_bp_C_GetPivotMontageForAngle_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.DoPivot
struct Afauna_base_bp_C_DoPivot_Params
{
	TEnumAsByte<Epivot_target_type>                    PivotTargetType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotToLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PivotTargetActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotToActorPredictionTime;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.IsPivoting?
struct Afauna_base_bp_C_IsPivoting__Params
{
	bool                                               StillPivoting;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.AbortPivot
struct Afauna_base_bp_C_AbortPivot_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.OnPivotEnded
struct Afauna_base_bp_C_OnPivotEnded_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.OnPivotAnimEnded
struct Afauna_base_bp_C_OnPivotAnimEnded_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BlendOutDelegate;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function fauna_base_bp.fauna_base_bp_C.SetupPathFollowing
struct Afauna_base_bp_C_SetupPathFollowing_Params
{
	class UArchonPathFollowingComponent*               ArchonPathFollowing;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.UserConstructionScript
struct Afauna_base_bp_C_UserConstructionScript_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.ReceiveBeginPlay
struct Afauna_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.ReceiveTick
struct Afauna_base_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.OnDoPivotDelegate
struct Afauna_base_bp_C_OnDoPivotDelegate_Params
{
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OverridePivotMontage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.OnPivotAborted
struct Afauna_base_bp_C_OnPivotAborted_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.OnPivotStarted
struct Afauna_base_bp_C_OnPivotStarted_Params
{
};

// Function fauna_base_bp.fauna_base_bp_C.OnMontageBlendingOut_Event
struct Afauna_base_bp_C_OnMontageBlendingOut_Event_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.ReceivePossessed
struct Afauna_base_bp_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.SetLocoState
struct Afauna_base_bp_C_SetLocoState_Params
{
	TEnumAsByte<Efauna_loco_state_enum>                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_bp.fauna_base_bp_C.ExecuteUbergraph_fauna_base_bp
struct Afauna_base_bp_C_ExecuteUbergraph_fauna_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
