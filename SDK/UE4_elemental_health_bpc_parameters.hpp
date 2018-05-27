#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_elemental_health_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentStage
struct Uelemental_health_bpc_C_GetCurrentStage_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.InitializeHealth
struct Uelemental_health_bpc_C_InitializeHealth_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.MoveToNextStage
struct Uelemental_health_bpc_C_MoveToNextStage_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.AuthProcessDebuffStates
struct Uelemental_health_bpc_C_AuthProcessDebuffStates_Params
{
	struct FName                                       DebuffObjectName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.AuthHandleApplyStatus
struct Uelemental_health_bpc_C_AuthHandleApplyStatus_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMonsterPartActor*                           PartDamaged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasHitResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function elemental_health_bpc.elemental_health_bpc_C.CreateSpecHandles
struct Uelemental_health_bpc_C_CreateSpecHandles_Params
{
};

// Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentMaxHealth
struct Uelemental_health_bpc_C_GetCurrentMaxHealth_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentHealth
struct Uelemental_health_bpc_C_GetCurrentHealth_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.AuthRegenHealth
struct Uelemental_health_bpc_C_AuthRegenHealth_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.AuthTryAddElementalDamage
struct Uelemental_health_bpc_C_AuthTryAddElementalDamage_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AMonsterPartActor*                           PartDamaged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HasHitResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.ReceiveBeginPlay
struct Uelemental_health_bpc_C_ReceiveBeginPlay_Params
{
};

// Function elemental_health_bpc.elemental_health_bpc_C.ReceiveTick
struct Uelemental_health_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.MultiShowElementalHealth
struct Uelemental_health_bpc_C_MultiShowElementalHealth_Params
{
};

// Function elemental_health_bpc.elemental_health_bpc_C.OnComponentActivate
struct Uelemental_health_bpc_C_OnComponentActivate_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.MultiMoveToNextStage
struct Uelemental_health_bpc_C_MultiMoveToNextStage_Params
{
	EElementType                                       NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function elemental_health_bpc.elemental_health_bpc_C.ExecuteUbergraph_elemental_health_bpc
struct Uelemental_health_bpc_C_ExecuteUbergraph_elemental_health_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
