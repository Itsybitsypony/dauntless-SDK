#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_staggerable_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function staggerable_bpc.staggerable_bpc_C.GetTotalArmor
struct Ustaggerable_bpc_C_GetTotalArmor_Params
{
	float                                              TotalArmor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalInitalArmor;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.ReduceArmor
struct Ustaggerable_bpc_C_ReduceArmor_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmountRemaining;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.AddStaggerArmor
struct Ustaggerable_bpc_C_AddStaggerArmor_Params
{
	float                                              UnscaledArmorAmount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArmorDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ArmorGUID;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.OnRep_CloseToStaggerEffectsActive
struct Ustaggerable_bpc_C_OnRep_CloseToStaggerEffectsActive_Params
{
};

// Function staggerable_bpc.staggerable_bpc_C.GetIndexOfStaggerData
struct Ustaggerable_bpc_C_GetIndexOfStaggerData_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.RecordStaggerDamage
struct Ustaggerable_bpc_C_RecordStaggerDamage_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CausedAStagger;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.GetPlayerScalingFactor
struct Ustaggerable_bpc_C_GetPlayerScalingFactor_Params
{
	float                                              ScalingFactor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.ChangeStaggerStage
struct Ustaggerable_bpc_C_ChangeStaggerStage_Params
{
	bool                                               DoStagger;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewStaggerStage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMonsterPartComponent*                       StaggeredPart;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StaggerCauser;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.CanReceiveStaggerDamage
struct Ustaggerable_bpc_C_CanReceiveStaggerDamage_Params
{
	bool                                               Staggerable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.GetCurrentStaggerData
struct Ustaggerable_bpc_C_GetCurrentStaggerData_Params
{
	struct Fstagger_stage                              StaggerData;                                              // (Parm, OutParm)
};

// Function staggerable_bpc.staggerable_bpc_C.TryAddStaggerDamage
struct Ustaggerable_bpc_C_TryAddStaggerDamage_Params
{
	float                                              TotalBaseStaggerDamage;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PostCalcStaggerMultiplier;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamageStaggerMultiplier;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PerHitStaggerBonus;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerResistPenetrationPercent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMonsterPartComponent*                       StaggeredPart;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StaggerCausedByThisDamage;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamageDealt;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.ReceiveTick
struct Ustaggerable_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.ReceiveBeginPlay
struct Ustaggerable_bpc_C_ReceiveBeginPlay_Params
{
};

// Function staggerable_bpc.staggerable_bpc_C.MulticastCombatText
struct Ustaggerable_bpc_C_MulticastCombatText_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function staggerable_bpc.staggerable_bpc_C.AuthSendStaggerTelemetryData
struct Ustaggerable_bpc_C_AuthSendStaggerTelemetryData_Params
{
};

// Function staggerable_bpc.staggerable_bpc_C.MulticastTelemetryData
struct Ustaggerable_bpc_C_MulticastTelemetryData_Params
{
	TArray<struct Fstagger_telemetry_data>             StaggerTelemetryData;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function staggerable_bpc.staggerable_bpc_C.DegenStaggerArmor
struct Ustaggerable_bpc_C_DegenStaggerArmor_Params
{
};

// Function staggerable_bpc.staggerable_bpc_C.RefreshStaggerEffectsActive
struct Ustaggerable_bpc_C_RefreshStaggerEffectsActive_Params
{
};

// Function staggerable_bpc.staggerable_bpc_C.ExecuteUbergraph_staggerable_bpc
struct Ustaggerable_bpc_C_ExecuteUbergraph_staggerable_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
