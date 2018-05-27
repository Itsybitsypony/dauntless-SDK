#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_charge_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cblades_charge_ab.cblades_charge_ab_C.DebugOutputToLog
struct Ucblades_charge_ab_C_DebugOutputToLog_Params
{
	class FString                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function cblades_charge_ab.cblades_charge_ab_C.OnChange_188098F342CEA3DF8EFDFDB89C89F3EC
struct Ucblades_charge_ab_C_OnChange_188098F342CEA3DF8EFDFDB89C89F3EC_Params
{
	bool                                               bMatchesComparison;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_charge_ab.cblades_charge_ab_C.K2_ActivateAbility
struct Ucblades_charge_ab_C_K2_ActivateAbility_Params
{
};

// Function cblades_charge_ab.cblades_charge_ab_C.OnPostMitigationHitWithWeapon_Event_1
struct Ucblades_charge_ab_C_OnPostMitigationHitWithWeapon_Event_1_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpostmit_damage_summary                     PostMitigationDamageSummary;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function cblades_charge_ab.cblades_charge_ab_C.ExecuteUbergraph_cblades_charge_ab
struct Ucblades_charge_ab_C_ExecuteUbergraph_cblades_charge_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
