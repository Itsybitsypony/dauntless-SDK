#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_slayer_bot_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function slayer_bot_bp.slayer_bot_bp_C.OnRep_WeaponEquipped?
struct Aslayer_bot_bp_C_OnRep_WeaponEquipped__Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.SetupWeapon
struct Aslayer_bot_bp_C_SetupWeapon_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.MatchBehemothPower
struct Aslayer_bot_bp_C_MatchBehemothPower_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.AddRandomPOIs
struct Aslayer_bot_bp_C_AddRandomPOIs_Params
{
	TArray<class AActor*>                              TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function slayer_bot_bp.slayer_bot_bp_C.BuildCityPath
struct Aslayer_bot_bp_C_BuildCityPath_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.SetupArmor
struct Aslayer_bot_bp_C_SetupArmor_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.MakeRandomDye
struct Aslayer_bot_bp_C_MakeRandomDye_Params
{
	struct FDyeVariant                                 Dye;                                                      // (Parm, OutParm)
};

// Function slayer_bot_bp.slayer_bot_bp_C.UserConstructionScript
struct Aslayer_bot_bp_C_UserConstructionScript_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.ReceiveBeginPlay
struct Aslayer_bot_bp_C_ReceiveBeginPlay_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.ReceiveTick
struct Aslayer_bot_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function slayer_bot_bp.slayer_bot_bp_C.OnDoPivotDelegate
struct Aslayer_bot_bp_C_OnDoPivotDelegate_Params
{
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OverridePivotMontage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function slayer_bot_bp.slayer_bot_bp_C.OnPivotAborted
struct Aslayer_bot_bp_C_OnPivotAborted_Params
{
};

// Function slayer_bot_bp.slayer_bot_bp_C.AuthEquipWeapon
struct Aslayer_bot_bp_C_AuthEquipWeapon_Params
{
	class AArchonWeapon*                               Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function slayer_bot_bp.slayer_bot_bp_C.ExecuteUbergraph_slayer_bot_bp
struct Aslayer_bot_bp_C_ExecuteUbergraph_slayer_bot_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
