#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_weapon_bpi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function eb_weapon_bpi.eb_weapon_bpi_C.GetUsesBaseWeaponSuperMode
struct Ueb_weapon_bpi_C_GetUsesBaseWeaponSuperMode_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eb_weapon_bpi.eb_weapon_bpi_C.GetIsInSuperMode
struct Ueb_weapon_bpi_C_GetIsInSuperMode_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eb_weapon_bpi.eb_weapon_bpi_C.GetMaxEmberCharge
struct Ueb_weapon_bpi_C_GetMaxEmberCharge_Params
{
	float                                              MaxCharge;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eb_weapon_bpi.eb_weapon_bpi_C.GetCurrentEmberCharge
struct Ueb_weapon_bpi_C_GetCurrentEmberCharge_Params
{
	float                                              CurrentCharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function eb_weapon_bpi.eb_weapon_bpi_C.Evaluate Ember Charge
struct Ueb_weapon_bpi_C_Evaluate_Ember_Charge_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
