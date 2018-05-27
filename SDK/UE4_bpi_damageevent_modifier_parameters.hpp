#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_damageevent_modifier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_damageevent_modifier.bpi_damageevent_modifier_C.GetModifyDamageEventPriority
struct Ubpi_damageevent_modifier_C_GetModifyDamageEventPriority_Params
{
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_damageevent_modifier.bpi_damageevent_modifier_C.CustomModifyDamageEventData
struct Ubpi_damageevent_modifier_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
