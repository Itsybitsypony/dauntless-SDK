#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_destructible_01_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function destructible_01_bp.destructible_01_bp_C.UserConstructionScript
struct Adestructible_01_bp_C_UserConstructionScript_Params
{
};

// Function destructible_01_bp.destructible_01_bp_C.Evaluate
struct Adestructible_01_bp_C_Evaluate_Params
{
};

// Function destructible_01_bp.destructible_01_bp_C.ReceivePointDamage
struct Adestructible_01_bp_C_ReceivePointDamage_Params
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

// Function destructible_01_bp.destructible_01_bp_C.MultiDestruct
struct Adestructible_01_bp_C_MultiDestruct_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function destructible_01_bp.destructible_01_bp_C.ReceiveBeginPlay
struct Adestructible_01_bp_C_ReceiveBeginPlay_Params
{
};

// Function destructible_01_bp.destructible_01_bp_C.OnInfluencerAdded
struct Adestructible_01_bp_C_OnInfluencerAdded_Params
{
	class UPrimitiveComponent**                        InfluencerComponent;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InfluencerActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function destructible_01_bp.destructible_01_bp_C.OnInfluencerRemoved
struct Adestructible_01_bp_C_OnInfluencerRemoved_Params
{
	class UPrimitiveComponent**                        InfluencerComponent;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InfluencerActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function destructible_01_bp.destructible_01_bp_C.ExecuteUbergraph_destructible_01_bp
struct Adestructible_01_bp_C_ExecuteUbergraph_destructible_01_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
