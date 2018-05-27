#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_speed_or_duration_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct speed_or_duration_info.speed_or_duration_info
// 0x0010
struct Fspeed_or_duration_info
{
	TEnumAsByte<Espeed_or_duration_type>               SpeedOrDuration_2_E27285FE4C0CAC5FD9DBB0ABEE43D079;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinValue_8_0211CFF243670073D880DAB1E8286AD5;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue_9_38A2D93048B4F751A2B6AD88877DC06A;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              INTERNAL_CalculatedValue_11_C7E2B1C449E94487203A9AB15BB0BF67;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
