#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_damaging_aura_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.CanUseInMontage
struct Ulanternhold_damaging_aura_ab_C_CanUseInMontage_Params
{
	class UAnimMontage**                               ActiveMontage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.K2_ActivateAbility
struct Ulanternhold_damaging_aura_ab_C_K2_ActivateAbility_Params
{
};

// Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.ExecuteUbergraph_lanternhold_damaging_aura_ab
struct Ulanternhold_damaging_aura_ab_C_ExecuteUbergraph_lanternhold_damaging_aura_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
