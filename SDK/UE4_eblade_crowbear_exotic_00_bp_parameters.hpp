#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eblade_crowbear_exotic_00_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetRangedModeTunables
struct Aeblade_crowbear_exotic_00_bp_C_GetRangedModeTunables_Params
{
	struct Fmspear_tunables_str                        Tunables;                                                 // (Parm, OutParm)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetMeterGainScale
struct Aeblade_crowbear_exotic_00_bp_C_GetMeterGainScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetCurrentMeterAmmoQuality
struct Aeblade_crowbear_exotic_00_bp_C_GetCurrentMeterAmmoQuality_Params
{
	float                                              CurrentAmmoQuality;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetLastFiredShotAmmoScale
struct Aeblade_crowbear_exotic_00_bp_C_GetLastFiredShotAmmoScale_Params
{
	float                                              LastFiredShotAmmoScale;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetMeter_AmmoQualityRanges
struct Aeblade_crowbear_exotic_00_bp_C_GetMeter_AmmoQualityRanges_Params
{
	float                                              AmmoQualityThresh_1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_3;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_4;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_5;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.PlayBlinkAnim
struct Aeblade_crowbear_exotic_00_bp_C_PlayBlinkAnim_Params
{
	float                                              ExplicitTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.CustomModifyDamageEventData
struct Aeblade_crowbear_exotic_00_bp_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData*                           DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.CanExecuteComboTransition
struct Aeblade_crowbear_exotic_00_bp_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.SpecialAttackReady
struct Aeblade_crowbear_exotic_00_bp_C_SpecialAttackReady_Params
{
	bool                                               QReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.UserConstructionScript
struct Aeblade_crowbear_exotic_00_bp_C_UserConstructionScript_Params
{
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.ReceiveTick
struct Aeblade_crowbear_exotic_00_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.Cheat Charge Weapon
struct Aeblade_crowbear_exotic_00_bp_C_Cheat_Charge_Weapon_Params
{
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.K2_OnEquip
struct Aeblade_crowbear_exotic_00_bp_C_K2_OnEquip_Params
{
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.Ember Charge - Tick
struct Aeblade_crowbear_exotic_00_bp_C_Ember_Charge___Tick_Params
{
	float*                                             Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeAnimOff
struct Aeblade_crowbear_exotic_00_bp_C_EyeAnimOff_Params
{
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeAnimOn
struct Aeblade_crowbear_exotic_00_bp_C_EyeAnimOn_Params
{
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeBlinkTick
struct Aeblade_crowbear_exotic_00_bp_C_EyeBlinkTick_Params
{
};

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.ExecuteUbergraph_eblade_crowbear_exotic_00_bp
struct Aeblade_crowbear_exotic_00_bp_C_ExecuteUbergraph_eblade_crowbear_exotic_00_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
