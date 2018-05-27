#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_equipped_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lantern_equipped_ab.lantern_equipped_ab_C.CanGainLanternChargeFromActor
struct Ulantern_equipped_ab_C_CanGainLanternChargeFromActor_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanGainLanternCharge;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_equipped_ab.lantern_equipped_ab_C.K2_ActivateAbility
struct Ulantern_equipped_ab_C_K2_ActivateAbility_Params
{
};

// Function lantern_equipped_ab.lantern_equipped_ab_C.OnPostMitigationHitWithWeapon_Event_2
struct Ulantern_equipped_ab_C_OnPostMitigationHitWithWeapon_Event_2_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpostmit_damage_summary                     PostMitigationDamageSummary;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function lantern_equipped_ab.lantern_equipped_ab_C.OnPostMitigationDealtAnyDamage_Event_1
struct Ulantern_equipped_ab_C_OnPostMitigationDealtAnyDamage_Event_1_Params
{
	struct Fpostmit_damage_summary                     PostMitigationDamageSummary;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_equipped_ab.lantern_equipped_ab_C.ExecuteUbergraph_lantern_equipped_ab
struct Ulantern_equipped_ab_C_ExecuteUbergraph_lantern_equipped_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
