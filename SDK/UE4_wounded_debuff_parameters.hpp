#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wounded_debuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function wounded_debuff.wounded_debuff_C.GetInitialMitigatedDuration
struct Awounded_debuff_C_GetInitialMitigatedDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wounded_debuff.wounded_debuff_C.InitializeMovementCheckArray
struct Awounded_debuff_C_InitializeMovementCheckArray_Params
{
};

// Function wounded_debuff.wounded_debuff_C.CheckMovementOverTime
struct Awounded_debuff_C_CheckMovementOverTime_Params
{
	bool                                               HasMoved;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wounded_debuff.wounded_debuff_C.UserConstructionScript
struct Awounded_debuff_C_UserConstructionScript_Params
{
};

// Function wounded_debuff.wounded_debuff_C.Timeline_0__FinishedFunc
struct Awounded_debuff_C_Timeline_0__FinishedFunc_Params
{
};

// Function wounded_debuff.wounded_debuff_C.Timeline_0__UpdateFunc
struct Awounded_debuff_C_Timeline_0__UpdateFunc_Params
{
};

// Function wounded_debuff.wounded_debuff_C.OnGameplayEventTriggered
struct Awounded_debuff_C_OnGameplayEventTriggered_Params
{
	struct FGameplayEventData*                         Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function wounded_debuff.wounded_debuff_C.MulticastPlayWoundedEffects
struct Awounded_debuff_C_MulticastPlayWoundedEffects_Params
{
};

// Function wounded_debuff.wounded_debuff_C.OnAdded
struct Awounded_debuff_C_OnAdded_Params
{
};

// Function wounded_debuff.wounded_debuff_C.OnGameplayEffectRemoved
struct Awounded_debuff_C_OnGameplayEffectRemoved_Params
{
};

// Function wounded_debuff.wounded_debuff_C.AuthCheckMovement
struct Awounded_debuff_C_AuthCheckMovement_Params
{
};

// Function wounded_debuff.wounded_debuff_C.ReceiveDestroyed
struct Awounded_debuff_C_ReceiveDestroyed_Params
{
};

// Function wounded_debuff.wounded_debuff_C.ExecuteUbergraph_wounded_debuff
struct Awounded_debuff_C_ExecuteUbergraph_wounded_debuff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
