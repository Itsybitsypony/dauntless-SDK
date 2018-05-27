#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_status_effect_bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.GetStatusEffectByName
struct Ubpw_hud_status_effect_bar_C_GetStatusEffectByName_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class Ubpw_hud_status_effect_item_C*               StatusEffect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.GetUnusedStatusEffect
struct Ubpw_hud_status_effect_bar_C_GetUnusedStatusEffect_Params
{
	class Ubpw_hud_status_effect_item_C*               StatusEffectItem;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.Construct
struct Ubpw_hud_status_effect_bar_C_Construct_Params
{
};

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameplayEffectApplied
struct Ubpw_hud_status_effect_bar_C_OnGameplayEffectApplied_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameplayEffectRemoved
struct Ubpw_hud_status_effect_bar_C_OnGameplayEffectRemoved_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameEffectChanged
struct Ubpw_hud_status_effect_bar_C_OnGameEffectChanged_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.ExecuteUbergraph_bpw_hud_status_effect_bar
struct Ubpw_hud_status_effect_bar_C_ExecuteUbergraph_bpw_hud_status_effect_bar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
