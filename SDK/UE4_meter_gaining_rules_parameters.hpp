#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_meter_gaining_rules_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function meter_gaining_rules.meter_gaining_rules_C.CanWeaponBuildMeterOffTarget
struct Umeter_gaining_rules_C_CanWeaponBuildMeterOffTarget_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanLifeStealFromThisTarget;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBuildLanternChargeFromThisTarget;                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBuildWeaponMeterFromThisTarget;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
