#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eqs_base_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.TryRegisterGameplayGUID
struct Uweapon_eqs_base_ab_C_TryRegisterGameplayGUID_Params
{
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.GetManualTargets
struct Uweapon_eqs_base_ab_C_GetManualTargets_Params
{
	struct FName                                       SourceWeaponBoneName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.K2_ActivateAbility
struct Uweapon_eqs_base_ab_C_K2_ActivateAbility_Params
{
};

// Function weapon_eqs_base_ab.weapon_eqs_base_ab_C.ExecuteUbergraph_weapon_eqs_base_ab
struct Uweapon_eqs_base_ab_C_ExecuteUbergraph_weapon_eqs_base_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
