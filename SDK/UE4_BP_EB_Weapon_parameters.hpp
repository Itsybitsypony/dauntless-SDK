#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_EB_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_EB_Weapon.BP_EB_Weapon_C.GetUsesBaseWeaponSuperMode
struct ABP_EB_Weapon_C_GetUsesBaseWeaponSuperMode_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.GetIsInSuperMode
struct ABP_EB_Weapon_C_GetIsInSuperMode_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.GetMaxEmberCharge
struct ABP_EB_Weapon_C_GetMaxEmberCharge_Params
{
	float                                              MaxCharge;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.GetCurrentEmberCharge
struct ABP_EB_Weapon_C_GetCurrentEmberCharge_Params
{
	float                                              CurrentCharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.CustomModifyDamageEventData
struct ABP_EB_Weapon_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData*                           DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnRep_InSuperMode
struct ABP_EB_Weapon_C_OnRep_InSuperMode_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.CanExecuteComboTransition
struct ABP_EB_Weapon_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.SpecialAttackReady
struct ABP_EB_Weapon_C_SpecialAttackReady_Params
{
	bool                                               QReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Set Attack Speed Rate
struct ABP_EB_Weapon_C_Set_Attack_Speed_Rate_Params
{
	float                                              New_Attack_Speed_Rate;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Add Ember Charge On Hit
struct ABP_EB_Weapon_C_Add_Ember_Charge_On_Hit_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Update Ember Charge Decay
struct ABP_EB_Weapon_C_Update_Ember_Charge_Decay_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Debug Set Weapon Color
struct ABP_EB_Weapon_C_Debug_Set_Weapon_Color_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Consume Ember Charge
struct ABP_EB_Weapon_C_Consume_Ember_Charge_Params
{
	float                                              Amount_To_Consume;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Get Current Ember Charge Percent
struct ABP_EB_Weapon_C_Get_Current_Ember_Charge_Percent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.UserConstructionScript
struct ABP_EB_Weapon_C_UserConstructionScript_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeWindowEnd
struct ABP_EB_Weapon_C_OnEmberChargeWindowEnd_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeWindowStart
struct ABP_EB_Weapon_C_OnEmberChargeWindowStart_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeFail
struct ABP_EB_Weapon_C_OnEmberChargeFail_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Trigger Charge Meter Delay
struct ABP_EB_Weapon_C_Trigger_Charge_Meter_Delay_Params
{
	bool                                               High_Delay_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Ember Charge - Tick
struct ABP_EB_Weapon_C_Ember_Charge___Tick_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Evaluate Ember Charge
struct ABP_EB_Weapon_C_Evaluate_Ember_Charge_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.ReceiveTick
struct ABP_EB_Weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboStarted
struct ABP_EB_Weapon_C_OnComboStarted_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboNextMove
struct ABP_EB_Weapon_C_OnComboNextMove_Params
{
	struct FComboInputBuffer*                          ComboInputBuffer;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboEnded
struct ABP_EB_Weapon_C_OnComboEnded_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeSuccessful
struct ABP_EB_Weapon_C_OnEmberChargeSuccessful_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.Cheat Charge Weapon
struct ABP_EB_Weapon_C_Cheat_Charge_Weapon_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.K2_OnEquip
struct ABP_EB_Weapon_C_K2_OnEquip_Params
{
};

// Function BP_EB_Weapon.BP_EB_Weapon_C.ExecuteUbergraph_BP_EB_Weapon
struct ABP_EB_Weapon_C_ExecuteUbergraph_BP_EB_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
