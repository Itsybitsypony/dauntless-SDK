#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ammo_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ammo_bpc.ammo_bpc_C.AuthReloadNumAmmo
struct Uammo_bpc_C_AuthReloadNumAmmo_Params
{
	int                                                AmmoToReload;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoWeaponScale;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.GetAmmoIndexScale
struct Uammo_bpc_C_GetAmmoIndexScale_Params
{
	int                                                AmmoIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.ClampMeterScaleToAmmo
struct Uammo_bpc_C_ClampMeterScaleToAmmo_Params
{
};

// Function ammo_bpc.ammo_bpc_C.DebugOutputAmmoScale
struct Uammo_bpc_C_DebugOutputAmmoScale_Params
{
};

// Function ammo_bpc.ammo_bpc_C.AuthSetAmmoIndexMeterScale
struct Uammo_bpc_C_AuthSetAmmoIndexMeterScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.AuthReloadWeaponWithAmmoScale
struct Uammo_bpc_C_AuthReloadWeaponWithAmmoScale_Params
{
	float                                              AmmoScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.GetCurrentAmmoScale
struct Uammo_bpc_C_GetCurrentAmmoScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.OnRep_AmmoMeterScale
struct Uammo_bpc_C_OnRep_AmmoMeterScale_Params
{
};

// Function ammo_bpc.ammo_bpc_C.AuthRemoveCurrentAmmoMeterScaleIndex
struct Uammo_bpc_C_AuthRemoveCurrentAmmoMeterScaleIndex_Params
{
};

// Function ammo_bpc.ammo_bpc_C.AuthSetCurrentMeterScale
struct Uammo_bpc_C_AuthSetCurrentMeterScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.OnRep_CurrentAmmoCount
struct Uammo_bpc_C_OnRep_CurrentAmmoCount_Params
{
};

// Function ammo_bpc.ammo_bpc_C.IsAmmoDepleted
struct Uammo_bpc_C_IsAmmoDepleted_Params
{
	bool                                               OutOfAmmo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.AuthReloadWeapon
struct Uammo_bpc_C_AuthReloadWeapon_Params
{
};

// Function ammo_bpc.ammo_bpc_C.AuthAdjustAmmoCount
struct Uammo_bpc_C_AuthAdjustAmmoCount_Params
{
	int                                                AmmoAdjustment;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.AuthSetAmmoCount
struct Uammo_bpc_C_AuthSetAmmoCount_Params
{
	int                                                Ammo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.ReceiveBeginPlay
struct Uammo_bpc_C_ReceiveBeginPlay_Params
{
};

// Function ammo_bpc.ammo_bpc_C.ReceiveTick
struct Uammo_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.ExecuteUbergraph_ammo_bpc
struct Uammo_bpc_C_ExecuteUbergraph_ammo_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.ServerOnAmmoAdjustedPreClamp__DelegateSignature
struct Uammo_bpc_C_ServerOnAmmoAdjustedPreClamp__DelegateSignature_Params
{
	int                                                OldAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.OnAmmoMeterScaleUpdated__DelegateSignature
struct Uammo_bpc_C_OnAmmoMeterScaleUpdated__DelegateSignature_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.ServerOnReloadWeapon__DelegateSignature
struct Uammo_bpc_C_ServerOnReloadWeapon__DelegateSignature_Params
{
};

// Function ammo_bpc.ammo_bpc_C.ServerOnAmmoAdjusted__DelegateSignature
struct Uammo_bpc_C_ServerOnAmmoAdjusted__DelegateSignature_Params
{
	int                                                AdjustedAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ammo_bpc.ammo_bpc_C.OnAmmoCountChanged__DelegateSignature
struct Uammo_bpc_C_OnAmmoCountChanged__DelegateSignature_Params
{
	int                                                NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
