#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_AttackCombo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_AttackCombo.BPI_AttackCombo_C.GetInputActionKeyHeld
struct UBPI_AttackCombo_C_GetInputActionKeyHeld_Params
{
	bool                                               PrimaryAttackHeld;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SecondaryAttackHeld;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SpecialAttackHeld;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AttackCombo.BPI_AttackCombo_C.ServerTellClient_StartNextMove
struct UBPI_AttackCombo_C_ServerTellClient_StartNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_AttackCombo.BPI_AttackCombo_C.GetDefaultWarpSmoothing
struct UBPI_AttackCombo_C_GetDefaultWarpSmoothing_Params
{
	float                                              Smoothing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AttackCombo.BPI_AttackCombo_C.SetWarpSmoothing
struct UBPI_AttackCombo_C_SetWarpSmoothing_Params
{
	float                                              Smoothing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AttackCombo.BPI_AttackCombo_C.Set Slow Charge State
struct UBPI_AttackCombo_C_Set_Slow_Charge_State_Params
{
	bool                                               Slow_State_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_AttackCombo.BPI_AttackCombo_C.ApplyHitPause
struct UBPI_AttackCombo_C_ApplyHitPause_Params
{
	float                                              HitPauseDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
