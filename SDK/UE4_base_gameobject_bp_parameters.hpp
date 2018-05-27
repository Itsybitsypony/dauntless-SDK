#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_gameobject_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_gameobject_bp.base_gameobject_bp_C.GetMesh
struct Abase_gameobject_bp_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.GetFallbackProjectileSpawnOffset
struct Abase_gameobject_bp_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.GetLookAtVector
struct Abase_gameobject_bp_C_GetLookAtVector_Params
{
	struct FVector                                     LookAtVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.GetLookAtAlpha
struct Abase_gameobject_bp_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.GetDefaultElementalAttackType
struct Abase_gameobject_bp_C_GetDefaultElementalAttackType_Params
{
	EElementType                                       DefaultElementalAttackType;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.CanHitCBPushPullTarget
struct Abase_gameobject_bp_C_CanHitCBPushPullTarget_Params
{
	bool                                               Hits_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.SpawnWidgetComponentForFCT
struct Abase_gameobject_bp_C_SpawnWidgetComponentForFCT_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.UserConstructionScript
struct Abase_gameobject_bp_C_UserConstructionScript_Params
{
};

// Function base_gameobject_bp.base_gameobject_bp_C.ReceiveTick
struct Abase_gameobject_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.AuthDie
struct Abase_gameobject_bp_C_AuthDie_Params
{
};

// Function base_gameobject_bp.base_gameobject_bp_C.AuthOnKilled
struct Abase_gameobject_bp_C_AuthOnKilled_Params
{
};

// Function base_gameobject_bp.base_gameobject_bp_C.ReceiveBeginPlay
struct Abase_gameobject_bp_C_ReceiveBeginPlay_Params
{
};

// Function base_gameobject_bp.base_gameobject_bp_C.MulticastOnDeath
struct Abase_gameobject_bp_C_MulticastOnDeath_Params
{
};

// Function base_gameobject_bp.base_gameobject_bp_C.MulticastDamageText
struct Abase_gameobject_bp_C_MulticastDamageText_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasImpactLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.ReceivedArchonAbilityDamage
struct Abase_gameobject_bp_C_ReceivedArchonAbilityDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function base_gameobject_bp.base_gameobject_bp_C.TryAndDestroyWidgetComponentForFCT
struct Abase_gameobject_bp_C_TryAndDestroyWidgetComponentForFCT_Params
{
	class UWidgetComponent*                            WidgetComponentReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.ExecuteUbergraph_base_gameobject_bp
struct Abase_gameobject_bp_C_ExecuteUbergraph_base_gameobject_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_gameobject_bp.base_gameobject_bp_C.ServerOnKilled__DelegateSignature
struct Abase_gameobject_bp_C_ServerOnKilled__DelegateSignature_Params
{
	class Abase_gameobject_bp_C*                       KilledObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
