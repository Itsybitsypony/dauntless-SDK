#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ihammer_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ihammer_interface.ihammer_interface_C.AuthBroadcastInstantReloadEffects
struct Uihammer_interface_C_AuthBroadcastInstantReloadEffects_Params
{
};

// Function ihammer_interface.ihammer_interface_C.ReloadVFX
struct Uihammer_interface_C_ReloadVFX_Params
{
};

// Function ihammer_interface.ihammer_interface_C.IsAmmoShellPrimed
struct Uihammer_interface_C_IsAmmoShellPrimed_Params
{
	bool                                               IsPrimed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ihammer_interface.ihammer_interface_C.RemovePrimedAmmoShell
struct Uihammer_interface_C_RemovePrimedAmmoShell_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ihammer_interface.ihammer_interface_C.PrimeAmmoShell
struct Uihammer_interface_C_PrimeAmmoShell_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
