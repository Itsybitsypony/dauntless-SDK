#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_status_effect_item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.SetData
struct Ubpw_hud_status_effect_item_C_SetData_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.UpdateStatusEffect
struct Ubpw_hud_status_effect_item_C_UpdateStatusEffect_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.DeactivateStatusEffect
struct Ubpw_hud_status_effect_item_C_DeactivateStatusEffect_Params
{
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.ActivateStatusEffect
struct Ubpw_hud_status_effect_item_C_ActivateStatusEffect_Params
{
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.SetIcon
struct Ubpw_hud_status_effect_item_C_SetIcon_Params
{
	class UObject*                                     Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.Construct
struct Ubpw_hud_status_effect_item_C_Construct_Params
{
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.Tick
struct Ubpw_hud_status_effect_item_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_status_effect_item.bpw_hud_status_effect_item_C.ExecuteUbergraph_bpw_hud_status_effect_item
struct Ubpw_hud_status_effect_item_C_ExecuteUbergraph_bpw_hud_status_effect_item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
