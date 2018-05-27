#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function atmospheres_interface.atmospheres_interface_C.SetWindRotation
struct Uatmospheres_interface_C_SetWindRotation_Params
{
	float                                              SetWindRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_interface.atmospheres_interface_C.GetWeatherType
struct Uatmospheres_interface_C_GetWeatherType_Params
{
	TEnumAsByte<Eweather_type_enum>                    Weather;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
