#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mspear_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function mspear_interface.mspear_interface_C.GetMeter_AmmoQualityRanges
struct Umspear_interface_C_GetMeter_AmmoQualityRanges_Params
{
	float                                              AmmoQualityThresh_1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_3;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_4;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AmmoQualityThresh_5;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoMax;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mspear_interface.mspear_interface_C.GetLastFiredShotAmmoScale
struct Umspear_interface_C_GetLastFiredShotAmmoScale_Params
{
	float                                              LastFiredShotAmmoScale;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mspear_interface.mspear_interface_C.GetCurrentMeterAmmoQuality
struct Umspear_interface_C_GetCurrentMeterAmmoQuality_Params
{
	float                                              CurrentAmmoQuality;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mspear_interface.mspear_interface_C.GetMeterGainScale
struct Umspear_interface_C_GetMeterGainScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mspear_interface.mspear_interface_C.GetRangedModeTunables
struct Umspear_interface_C_GetRangedModeTunables_Params
{
	struct Fmspear_tunables_str                        Tunables;                                                 // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
