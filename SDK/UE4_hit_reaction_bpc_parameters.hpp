#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hit_reaction_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function hit_reaction_bpc.hit_reaction_bpc_C.TelemetryPlayerDowned
struct Uhit_reaction_bpc_C_TelemetryPlayerDowned_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.GetHitReactionEntryInfo
struct Uhit_reaction_bpc_C_GetHitReactionEntryInfo_Params
{
	struct FHitReactionTableEntry                      HitReactionEntry;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.DebugInfo
struct Uhit_reaction_bpc_C_DebugInfo_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.ConvertAngleToDirection
struct Uhit_reaction_bpc_C_ConvertAngleToDirection_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVictimRelativeHitDirection                        Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.GetImpactDirection
struct Uhit_reaction_bpc_C_GetImpactDirection_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	EVictimRelativeHitDirection                        Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.GetAttackerDirection
struct Uhit_reaction_bpc_C_GetAttackerDirection_Params
{
	class AActor*                                      InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVictimRelativeHitDirection                        AttackerDirection;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AttackerAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.FilterGameplayTagContainer
struct Uhit_reaction_bpc_C_FilterGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       InstigatorTags;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       Filter_By;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DebugPrint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       FilteredTags;                                             // (Parm, OutParm)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.GetMatchingHitReaction
struct Uhit_reaction_bpc_C_GetMatchingHitReaction_Params
{
	TArray<struct FHitReactionTableEntry>              HitReactionTable;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGameplayTagContainer                       Filter_By;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitReactionTableEntry                      MatchingEntry;                                            // (Parm, OutParm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.OnDamageReceived
struct Uhit_reaction_bpc_C_OnDamageReceived_Params
{
	struct FGameplayTagContainer                       InstigatorTags;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.ReceiveTick
struct Uhit_reaction_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.OnOperationEnd
struct Uhit_reaction_bpc_C_OnOperationEnd_Params
{
	class UArchonGameplayOperation*                    Op;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.OnEndOperation
struct Uhit_reaction_bpc_C_OnEndOperation_Params
{
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.UpdateOperation
struct Uhit_reaction_bpc_C_UpdateOperation_Params
{
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.ReceiveBeginPlay
struct Uhit_reaction_bpc_C_ReceiveBeginPlay_Params
{
};

// Function hit_reaction_bpc.hit_reaction_bpc_C.ExecuteUbergraph_hit_reaction_bpc
struct Uhit_reaction_bpc_C_ExecuteUbergraph_hit_reaction_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
