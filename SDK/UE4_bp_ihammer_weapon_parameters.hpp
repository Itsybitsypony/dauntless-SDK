#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_ihammer_weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.IsAmmoShellPrimed
struct Abp_ihammer_weapon_C_IsAmmoShellPrimed_Params
{
	bool                                               IsPrimed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.PrimeAmmoShell
struct Abp_ihammer_weapon_C_PrimeAmmoShell_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.RemovePrimedAmmoShell
struct Abp_ihammer_weapon_C_RemovePrimedAmmoShell_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.CanExecuteComboTransition
struct Abp_ihammer_weapon_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.CustomModifyDamageEventData
struct Abp_ihammer_weapon_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData*                           DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.SpecialAttackReady
struct Abp_ihammer_weapon_C_SpecialAttackReady_Params
{
	bool                                               QReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Get Appropriate Weapon Trails
struct Abp_ihammer_weapon_C_Get_Appropriate_Weapon_Trails_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.UserConstructionScript
struct Abp_ihammer_weapon_C_UserConstructionScript_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Eject Clip
struct Abp_ihammer_weapon_C_Eject_Clip_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Spawn Shell Casing
struct Abp_ihammer_weapon_C_Spawn_Shell_Casing_Params
{
	int                                                Amount_To_Spawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnAmmoCountChanged
struct Abp_ihammer_weapon_C_OnAmmoCountChanged_Params
{
	int                                                NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnAmmoAdjusted
struct Abp_ihammer_weapon_C_OnAmmoAdjusted_Params
{
	int                                                AdjustedAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnReloadWeapon
struct Abp_ihammer_weapon_C_OnReloadWeapon_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientAdjustAmmo
struct Abp_ihammer_weapon_C_ClientAdjustAmmo_Params
{
	int                                                Adjusted_Amount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientOnReloadWeapon
struct Abp_ihammer_weapon_C_ClientOnReloadWeapon_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnNotifyReloadInputWindowStarted
struct Abp_ihammer_weapon_C_OnNotifyReloadInputWindowStarted_Params
{
	float                                              TotalDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnNotifyReloadInputWindowEnded
struct Abp_ihammer_weapon_C_OnNotifyReloadInputWindowEnded_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ReloadVFX
struct Abp_ihammer_weapon_C_ReloadVFX_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.AuthBroadcastInstantReloadEffects
struct Abp_ihammer_weapon_C_AuthBroadcastInstantReloadEffects_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.MulticastInstantReloadEffects
struct Abp_ihammer_weapon_C_MulticastInstantReloadEffects_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboEnded
struct Abp_ihammer_weapon_C_OnComboEnded_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboBuffered
struct Abp_ihammer_weapon_C_OnComboBuffered_Params
{
	EArchonAttackActionKey*                            PrimaryKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier*                    ModifierKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboNextMove
struct Abp_ihammer_weapon_C_OnComboNextMove_Params
{
	struct FComboInputBuffer*                          ComboInputBuffer;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.K2_OnEquip
struct Abp_ihammer_weapon_C_K2_OnEquip_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientTestForOwner
struct Abp_ihammer_weapon_C_ClientTestForOwner_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Cheat Charge Weapon
struct Abp_ihammer_weapon_C_Cheat_Charge_Weapon_Params
{
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ReceiveTick
struct Abp_ihammer_weapon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ExecuteUbergraph_bp_ihammer_weapon
struct Abp_ihammer_weapon_C_ExecuteUbergraph_bp_ihammer_weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Active Reload Complete Dispatcher__DelegateSignature
struct Abp_ihammer_weapon_C_Active_Reload_Complete_Dispatcher__DelegateSignature_Params
{
	bool                                               Active_Reload_Success_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Active Reload Start Dispatcher__DelegateSignature
struct Abp_ihammer_weapon_C_Active_Reload_Start_Dispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
