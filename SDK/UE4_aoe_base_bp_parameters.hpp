#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function aoe_base_bp.aoe_base_bp_C.GetPrimitiveOverlappingComponents
struct Aaoe_base_bp_C_GetPrimitiveOverlappingComponents_Params
{
	class UPrimitiveComponent*                         Primitive_Component;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function aoe_base_bp.aoe_base_bp_C.GetDamageToApply
struct Aaoe_base_bp_C_GetDamageToApply_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageBlunt;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageCutting;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamagePiercing;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageElemental;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTrue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        AssetTags;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function aoe_base_bp.aoe_base_bp_C.GetCustomDamageScale
struct Aaoe_base_bp_C_GetCustomDamageScale_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.GetDebrisData
struct Aaoe_base_bp_C_GetDebrisData_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fdebris_vfx_struct                          FoundVFX;                                                 // (Parm, OutParm)
	bool                                               HasFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurfaceName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.FilterHitsByConeCheck
struct Aaoe_base_bp_C_FilterHitsByConeCheck_Params
{
	TArray<struct FHitResult>                          HitResults;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              ConeAngleDegrees;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ConeRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ConeLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FHitResult>                          OutHitResults;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function aoe_base_bp.aoe_base_bp_C.OnActorHitByAoE
struct Aaoe_base_bp_C_OnActorHitByAoE_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.GenerateSafeEmitterSpawnLocation
struct Aaoe_base_bp_C_GenerateSafeEmitterSpawnLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.ReturnHitActorFromComponent
struct Aaoe_base_bp_C_ReturnHitActorFromComponent_Params
{
	class UActorComponent*                             HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMonsterPartComponent*>               HitParts;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.ReturnCollisionTypes
struct Aaoe_base_bp_C_ReturnCollisionTypes_Params
{
	class UPrimitiveComponent*                         Primitive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function aoe_base_bp.aoe_base_bp_C.ApplySingleHitDamage
struct Aaoe_base_bp_C_ApplySingleHitDamage_Params
{
	class UShapeComponent*                             DamageShape;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageRowName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.ApplyDividedDamage
struct Aaoe_base_bp_C_ApplyDividedDamage_Params
{
	class UShapeComponent*                             DamageShape;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DamageRowName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.UserConstructionScript
struct Aaoe_base_bp_C_UserConstructionScript_Params
{
};

// Function aoe_base_bp.aoe_base_bp_C.Play Hit Effects
struct Aaoe_base_bp_C_Play_Hit_Effects_Params
{
	class UParticleSystem*                             Particle_System_To_Spawn;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     World_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.DrawDebugCollision
struct Aaoe_base_bp_C_DrawDebugCollision_Params
{
};

// Function aoe_base_bp.aoe_base_bp_C.DrawDebugLine
struct Aaoe_base_bp_C_DrawDebugLine_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function aoe_base_bp.aoe_base_bp_C.ReceiveBeginPlay
struct Aaoe_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function aoe_base_bp.aoe_base_bp_C.DrawDebugSphere
struct Aaoe_base_bp_C_DrawDebugSphere_Params
{
};

// Function aoe_base_bp.aoe_base_bp_C.ExecuteUbergraph_aoe_base_bp
struct Aaoe_base_bp_C_ExecuteUbergraph_aoe_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
