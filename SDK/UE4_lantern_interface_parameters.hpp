#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lantern_interface.lantern_interface_C.InstantDischargePrimaryInterface
struct Ulantern_interface_C_InstantDischargePrimaryInterface_Params
{
};

// Function lantern_interface.lantern_interface_C.GetCurrentSecondaryChargeInterface
struct Ulantern_interface_C_GetCurrentSecondaryChargeInterface_Params
{
	float                                              CurrentSecondaryCharge;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetSingleChargeCostInterface
struct Ulantern_interface_C_GetSingleChargeCostInterface_Params
{
	float                                              SingleChargeCost;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.InstantDischargeSecondaryInterface
struct Ulantern_interface_C_InstantDischargeSecondaryInterface_Params
{
};

// Function lantern_interface.lantern_interface_C.GetMaximumChargeInterface
struct Ulantern_interface_C_GetMaximumChargeInterface_Params
{
	float                                              MaximumCharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.StartDischargeInterface
struct Ulantern_interface_C_StartDischargeInterface_Params
{
	float                                              DischargeDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetPrimaryChargePercentInterface
struct Ulantern_interface_C_GetPrimaryChargePercentInterface_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.RegisterToModifyAddCharge
struct Ulantern_interface_C_RegisterToModifyAddCharge_Params
{
};

// Function lantern_interface.lantern_interface_C.AddChargeInterface
struct Ulantern_interface_C_AddChargeInterface_Params
{
	float                                              Charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetLanternMesh
struct Ulantern_interface_C_GetLanternMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeLoopEndSound
struct Ulantern_interface_C_GetDischargeLoopEndSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeEndedSound
struct Ulantern_interface_C_GetDischargeEndedSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeEndedEffect
struct Ulantern_interface_C_GetDischargeEndedEffect_Params
{
	class UParticleSystem*                             Effect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeLoopStartSound
struct Ulantern_interface_C_GetDischargeLoopStartSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeVO
struct Ulantern_interface_C_GetDischargeVO_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeStartedSound
struct Ulantern_interface_C_GetDischargeStartedSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeLoopStartEffect
struct Ulantern_interface_C_GetDischargeLoopStartEffect_Params
{
	class UParticleSystem*                             Effect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_interface.lantern_interface_C.GetDischargeStartedEffect
struct Ulantern_interface_C_GetDischargeStartedEffect_Params
{
	class UParticleSystem*                             Effect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
