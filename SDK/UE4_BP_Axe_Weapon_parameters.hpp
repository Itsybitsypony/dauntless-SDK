#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Axe_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetCurrentDetermination
struct ABP_Axe_Weapon_C_GetCurrentDetermination_Params
{
	int                                                Determination;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetDeterminationOverride
struct ABP_Axe_Weapon_C_SetDeterminationOverride_Params
{
	int                                                DeterminationLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetCurrentChargeLevel
struct ABP_Axe_Weapon_C_GetCurrentChargeLevel_Params
{
	int                                                ChargeLevel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetDeterminationOnHitPerChargeLevel
struct ABP_Axe_Weapon_C_GetDeterminationOnHitPerChargeLevel_Params
{
	TArray<int>                                        DeterminationOnHitPerChargeLevel;                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.CanExecuteComboTransition
struct ABP_Axe_Weapon_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.IsPreviousChargeActive
struct ABP_Axe_Weapon_C_IsPreviousChargeActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetPreviousChargeLevel
struct ABP_Axe_Weapon_C_SetPreviousChargeLevel_Params
{
	int                                                ChargeLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SpecialAttackReady
struct ABP_Axe_Weapon_C_SpecialAttackReady_Params
{
	bool                                               QReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.InternalClearChargeParticles
struct ABP_Axe_Weapon_C_InternalClearChargeParticles_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisableDeterminationAudio
struct ABP_Axe_Weapon_C_DisableDeterminationAudio_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.EnableDeterminationAudio
struct ABP_Axe_Weapon_C_EnableDeterminationAudio_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisableDeterminationVFX
struct ABP_Axe_Weapon_C_DisableDeterminationVFX_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.EnableDeterminationVFX
struct ABP_Axe_Weapon_C_EnableDeterminationVFX_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Modify Damage Row Name Based On Scriptable Hook
struct ABP_Axe_Weapon_C_Modify_Damage_Row_Name_Based_On_Scriptable_Hook_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Spawn Charge Level Particle & Audio
struct ABP_Axe_Weapon_C_Spawn_Charge_Level_Particle___Audio_Params
{
	int                                                Charge_level;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnRep_Current Charge Level
struct ABP_Axe_Weapon_C_OnRep_Current_Charge_Level_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Spawn Charge Level Change Particle - Old Flash Color Implementation
struct ABP_Axe_Weapon_C_Spawn_Charge_Level_Change_Particle___Old_Flash_Color_Implementation_Params
{
	int                                                New_Charge_Level;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Get Appropriate Weapon Trails
struct ABP_Axe_Weapon_C_Get_Appropriate_Weapon_Trails_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Debug Set Weapon Color
struct ABP_Axe_Weapon_C_Debug_Set_Weapon_Color_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.UserConstructionScript
struct ABP_Axe_Weapon_C_UserConstructionScript_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultOne__FinishedFunc
struct ABP_Axe_Weapon_C_ChargeMultOne__FinishedFunc_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultOne__UpdateFunc
struct ABP_Axe_Weapon_C_ChargeMultOne__UpdateFunc_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultTwo__FinishedFunc
struct ABP_Axe_Weapon_C_ChargeMultTwo__FinishedFunc_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultTwo__UpdateFunc
struct ABP_Axe_Weapon_C_ChargeMultTwo__UpdateFunc_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultThree__FinishedFunc
struct ABP_Axe_Weapon_C_ChargeMultThree__FinishedFunc_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultThree__UpdateFunc
struct ABP_Axe_Weapon_C_ChargeMultThree__UpdateFunc_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl1
struct ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl2
struct ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl3
struct ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl3_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.ReadyToLevel
struct ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_ReadyToLevel_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.VFX.Axe.Special
struct ABP_Axe_Weapon_C_GameplayCue_VFX_Axe_Special_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl4
struct ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl4_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl5
struct ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl5_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboStarted
struct ABP_Axe_Weapon_C_OnComboStarted_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboEnded
struct ABP_Axe_Weapon_C_OnComboEnded_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnChargeLevelChanged
struct ABP_Axe_Weapon_C_OnChargeLevelChanged_Params
{
	int*                                               PreviousChargeLevel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewChargeLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Cheat Charge Weapon
struct ABP_Axe_Weapon_C_Cheat_Charge_Weapon_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboNextMove
struct ABP_Axe_Weapon_C_OnComboNextMove_Params
{
	struct FComboInputBuffer*                          ComboInputBuffer;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.K2_OnUnEquip
struct ABP_Axe_Weapon_C_K2_OnUnEquip_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Clear Charge Level
struct ABP_Axe_Weapon_C_Clear_Charge_Level_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Clear Charge Particles
struct ABP_Axe_Weapon_C_Clear_Charge_Particles_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnMoveSkill
struct ABP_Axe_Weapon_C_OnMoveSkill_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnChargeEnded
struct ABP_Axe_Weapon_C_OnChargeEnded_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.CallWeaponSpecificFunction
struct ABP_Axe_Weapon_C_CallWeaponSpecificFunction_Params
{
	struct FName*                                      Function_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ActivateSuper
struct ABP_Axe_Weapon_C_ActivateSuper_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnRep_Equipped?
struct ABP_Axe_Weapon_C_OnRep_Equipped__Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ClientTestForOwner
struct ABP_Axe_Weapon_C_ClientTestForOwner_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetCurrentChargeLevel
struct ABP_Axe_Weapon_C_SetCurrentChargeLevel_Params
{
	int                                                CurrentChargeLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeOnePlayerMaterial
struct ABP_Axe_Weapon_C_ChargeOnePlayerMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeTwoPlayerMaterial
struct ABP_Axe_Weapon_C_ChargeTwoPlayerMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeThreePlayerMaterial
struct ABP_Axe_Weapon_C_ChargeThreePlayerMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboIncremented_Event_1
struct ABP_Axe_Weapon_C_OnComboIncremented_Event_1_Params
{
	EArchonAttackActionKey                             AttackType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ReceiveBeginPlay
struct ABP_Axe_Weapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationOneAxeMaterial
struct ABP_Axe_Weapon_C_DeterminationOneAxeMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationTwoAxeMaterial
struct ABP_Axe_Weapon_C_DeterminationTwoAxeMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationThreeAxeMaterial
struct ABP_Axe_Weapon_C_DeterminationThreeAxeMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationZeroAxeMaterial
struct ABP_Axe_Weapon_C_DeterminationZeroAxeMaterial_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisablePlayerEffects
struct ABP_Axe_Weapon_C_DisablePlayerEffects_Params
{
};

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ExecuteUbergraph_BP_Axe_Weapon
struct ABP_Axe_Weapon_C_ExecuteUbergraph_BP_Axe_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
