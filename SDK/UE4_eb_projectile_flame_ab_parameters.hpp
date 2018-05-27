#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_projectile_flame_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.Spawn Projectile
struct Ueb_projectile_flame_ab_C_Spawn_Projectile_Params
{
	float                                              Projectile_Rotation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.K2_ActivateAbility
struct Ueb_projectile_flame_ab_C_K2_ActivateAbility_Params
{
};

// Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.ExecuteUbergraph_eb_projectile_flame_ab
struct Ueb_projectile_flame_ab_C_ExecuteUbergraph_eb_projectile_flame_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
