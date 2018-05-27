#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_bpi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function weapon_bpi.weapon_bpi_C.CreateGameplayCueFX
struct Uweapon_bpi_C_CreateGameplayCueFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UParticleSystem*                             Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_bpi.weapon_bpi_C.ActivateSpecialAbilities_Interface
struct Uweapon_bpi_C_ActivateSpecialAbilities_Interface_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_bpi.weapon_bpi_C.CallWeaponSpecificFunction
struct Uweapon_bpi_C_CallWeaponSpecificFunction_Params
{
	struct FName                                       Function_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_bpi.weapon_bpi_C.GetBackSocketName
struct Uweapon_bpi_C_GetBackSocketName_Params
{
	struct FName                                       BackSocket;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_bpi.weapon_bpi_C.GetUsesAutoAttachment
struct Uweapon_bpi_C_GetUsesAutoAttachment_Params
{
	bool                                               UsesAutoAttachment;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_bpi.weapon_bpi_C.SpecialAttackReady
struct Uweapon_bpi_C_SpecialAttackReady_Params
{
	bool                                               QReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_bpi.weapon_bpi_C.ActivateTrail
struct Uweapon_bpi_C_ActivateTrail_Params
{
	class UParticleSystem*                             InParticle_System;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLifetime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFirstSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             InSecondaryParticle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondarySocketName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InAspectColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
