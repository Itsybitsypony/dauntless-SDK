#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_frost_damage_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.IsFreezeUser
struct Udot_frost_damage_ab_C_IsFreezeUser_Params
{
	class AArchonCharacter*                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFreezeUser;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.ScaleFreezeThresholdByFrostWeaponUsers
struct Udot_frost_damage_ab_C_ScaleFreezeThresholdByFrostWeaponUsers_Params
{
};

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.DisableOtherParts
struct Udot_frost_damage_ab_C_DisableOtherParts_Params
{
};

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.ApplyEffect
struct Udot_frost_damage_ab_C_ApplyEffect_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContectHandle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.K2_ActivateAbility
struct Udot_frost_damage_ab_C_K2_ActivateAbility_Params
{
};

// Function dot_frost_damage_ab.dot_frost_damage_ab_C.ExecuteUbergraph_dot_frost_damage_ab
struct Udot_frost_damage_ab_C_ExecuteUbergraph_dot_frost_damage_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
