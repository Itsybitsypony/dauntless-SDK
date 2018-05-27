#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Pylon_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.PylonTick
struct UAbility_QuickItem_Healing_Pylon_01_C_PylonTick_Params
{
	struct FVector*                                    PylonLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.HealVFX
struct UAbility_QuickItem_Healing_Pylon_01_C_HealVFX_Params
{
	class AActor*                                      VFXTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C.ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01
struct UAbility_QuickItem_Healing_Pylon_01_C_ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
