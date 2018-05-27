#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_axe_weapon_bpi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function axe_weapon_bpi.axe_weapon_bpi_C.GetCurrentDetermination
struct Uaxe_weapon_bpi_C_GetCurrentDetermination_Params
{
	int                                                Determination;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function axe_weapon_bpi.axe_weapon_bpi_C.SetDeterminationOverride
struct Uaxe_weapon_bpi_C_SetDeterminationOverride_Params
{
	int                                                DeterminationLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function axe_weapon_bpi.axe_weapon_bpi_C.SetCurrentChargeLevel
struct Uaxe_weapon_bpi_C_SetCurrentChargeLevel_Params
{
	int                                                CurrentChargeLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function axe_weapon_bpi.axe_weapon_bpi_C.GetDeterminationOnHitPerChargeLevel
struct Uaxe_weapon_bpi_C_GetDeterminationOnHitPerChargeLevel_Params
{
	TArray<int>                                        DeterminationOnHitPerChargeLevel;                         // (Parm, OutParm, ZeroConstructor)
};

// Function axe_weapon_bpi.axe_weapon_bpi_C.GetCurrentChargeLevel
struct Uaxe_weapon_bpi_C_GetCurrentChargeLevel_Params
{
	int                                                ChargeLevel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
