#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_aether_vent_base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_aether_vent_base.bp_aether_vent_base_C.SetInteractionAvailability
struct Abp_aether_vent_base_C_SetInteractionAvailability_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.OnRep_VentActivated
struct Abp_aether_vent_base_C_OnRep_VentActivated_Params
{
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.CanUserStartInteraction 
struct Abp_aether_vent_base_C_CanUserStartInteraction__Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.AdjustAetherEffects
struct Abp_aether_vent_base_C_AdjustAetherEffects_Params
{
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.AdjustComponentToGround
struct Abp_aether_vent_base_C_AdjustComponentToGround_Params
{
	class USceneComponent*                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.ReduceEmber
struct Abp_aether_vent_base_C_ReduceEmber_Params
{
	float                                              Ammount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.OnRep_EmberLeft
struct Abp_aether_vent_base_C_OnRep_EmberLeft_Params
{
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.UserConstructionScript
struct Abp_aether_vent_base_C_UserConstructionScript_Params
{
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.ReceiveBeginPlay
struct Abp_aether_vent_base_C_ReceiveBeginPlay_Params
{
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.OnUserCompletedInteraction
struct Abp_aether_vent_base_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_aether_vent_base.bp_aether_vent_base_C.ExecuteUbergraph_bp_aether_vent_base
struct Abp_aether_vent_base_C_ExecuteUbergraph_bp_aether_vent_base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
