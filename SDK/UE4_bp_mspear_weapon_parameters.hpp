#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_mspear_weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetMeter_AmmoQualityRanges
struct Abp_mspear_weapon_C_GetMeter_AmmoQualityRanges_Params
{
	float                                              AmmoQualityThresh_1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_3;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_4;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_5;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetLastFiredShotAmmoScale
struct Abp_mspear_weapon_C_GetLastFiredShotAmmoScale_Params
{
	float                                              LastFiredShotAmmoScale;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentMeterAmmoQuality
struct Abp_mspear_weapon_C_GetCurrentMeterAmmoQuality_Params
{
	float                                              CurrentAmmoQuality;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetMeterGainScale
struct Abp_mspear_weapon_C_GetMeterGainScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetRangedModeTunables
struct Abp_mspear_weapon_C_GetRangedModeTunables_Params
{
	struct Fmspear_tunables_str                        Tunables;                                                 // (Parm, OutParm)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.CanExecuteComboTransition
struct Abp_mspear_weapon_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.CustomModifyDamageEventData
struct Abp_mspear_weapon_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData*                           DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentAmmoScale
struct Abp_mspear_weapon_C_GetCurrentAmmoScale_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentAimAccuracy
struct Abp_mspear_weapon_C_GetCurrentAimAccuracy_Params
{
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.UserConstructionScript
struct Abp_mspear_weapon_C_UserConstructionScript_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.CallWeaponSpecificFunction
struct Abp_mspear_weapon_C_CallWeaponSpecificFunction_Params
{
	struct FName*                                      Function_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.EndAiming
struct Abp_mspear_weapon_C_EndAiming_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.OnNotifyAimAccuracyStarted
struct Abp_mspear_weapon_C_OnNotifyAimAccuracyStarted_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.OnComboEnd_Event_1
struct Abp_mspear_weapon_C_OnComboEnd_Event_1_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.ServerOnAmmoAdjustedPreClamp_Event_1
struct Abp_mspear_weapon_C_ServerOnAmmoAdjustedPreClamp_Event_1_Params
{
	int                                                OldAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.OnComboIncremented_Event_1
struct Abp_mspear_weapon_C_OnComboIncremented_Event_1_Params
{
	EArchonAttackActionKey                             AttackType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.ReceiveTick
struct Abp_mspear_weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.Cheat Charge Weapon
struct Abp_mspear_weapon_C_Cheat_Charge_Weapon_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.K2_OnEquip
struct Abp_mspear_weapon_C_K2_OnEquip_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.ReceiveBeginPlay
struct Abp_mspear_weapon_C_ReceiveBeginPlay_Params
{
};

// Function bp_mspear_weapon.bp_mspear_weapon_C.ExecuteUbergraph_bp_mspear_weapon
struct Abp_mspear_weapon_C_ExecuteUbergraph_bp_mspear_weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
