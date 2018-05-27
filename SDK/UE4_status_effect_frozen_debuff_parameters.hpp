#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_status_effect_frozen_debuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.StopFrozenAnimation
struct Astatus_effect_frozen_debuff_C_StopFrozenAnimation_Params
{
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.UserConstructionScript
struct Astatus_effect_frozen_debuff_C_UserConstructionScript_Params
{
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.MulticastOnAdded
struct Astatus_effect_frozen_debuff_C_MulticastOnAdded_Params
{
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveTick
struct Astatus_effect_frozen_debuff_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveBeginPlay
struct Astatus_effect_frozen_debuff_C_ReceiveBeginPlay_Params
{
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnRemoved
struct Astatus_effect_frozen_debuff_C_OnRemoved_Params
{
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveDestroyed
struct Astatus_effect_frozen_debuff_C_ReceiveDestroyed_Params
{
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnGameplayEventTriggered
struct Astatus_effect_frozen_debuff_C_OnGameplayEventTriggered_Params
{
	struct FGameplayEventData*                         Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnDamageReceived
struct Astatus_effect_frozen_debuff_C_OnDamageReceived_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ExecuteUbergraph_status_effect_frozen_debuff
struct Astatus_effect_frozen_debuff_C_ExecuteUbergraph_status_effect_frozen_debuff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
