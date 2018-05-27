#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_base_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lanternhold_base_ab.lanternhold_base_ab_C.K2_CanActivateAbility
struct Ulanternhold_base_ab_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lanternhold_base_ab.lanternhold_base_ab_C.CallForDischarge
struct Ulanternhold_base_ab_C_CallForDischarge_Params
{
	class AArchonLantern**                             LanternObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lanternhold_base_ab.lanternhold_base_ab_C.ExecuteUbergraph_lanternhold_base_ab
struct Ulanternhold_base_ab_C_ExecuteUbergraph_lanternhold_base_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
