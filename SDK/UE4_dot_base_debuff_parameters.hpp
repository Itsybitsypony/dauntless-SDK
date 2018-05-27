#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_base_debuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function dot_base_debuff.dot_base_debuff_C.UpdateEffectTime
struct Adot_base_debuff_C_UpdateEffectTime_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dot_base_debuff.dot_base_debuff_C.UserConstructionScript
struct Adot_base_debuff_C_UserConstructionScript_Params
{
};

// Function dot_base_debuff.dot_base_debuff_C.ReceiveTick
struct Adot_base_debuff_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dot_base_debuff.dot_base_debuff_C.ReceiveDestroyed
struct Adot_base_debuff_C_ReceiveDestroyed_Params
{
};

// Function dot_base_debuff.dot_base_debuff_C.OnAdded
struct Adot_base_debuff_C_OnAdded_Params
{
};

// Function dot_base_debuff.dot_base_debuff_C.AuthDoDamage
struct Adot_base_debuff_C_AuthDoDamage_Params
{
};

// Function dot_base_debuff.dot_base_debuff_C.MulticastOnAdded
struct Adot_base_debuff_C_MulticastOnAdded_Params
{
};

// Function dot_base_debuff.dot_base_debuff_C.MulticastCombatText
struct Adot_base_debuff_C_MulticastCombatText_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dot_base_debuff.dot_base_debuff_C.ExecuteUbergraph_dot_base_debuff
struct Adot_base_debuff_C_ExecuteUbergraph_dot_base_debuff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
