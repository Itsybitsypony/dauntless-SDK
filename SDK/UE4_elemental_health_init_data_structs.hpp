#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct elemental_health_init_data.elemental_health_init_data
// 0x000C
struct Felemental_health_init_data
{
	float                                              PercentageOfCoreHealth_20_FC28CF09473948EEB1EF158BF4487BA0;// 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegenRate_16_78F917574E72642E6671059CA723F597;            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfCoreHealthArmourOnProc_29_B1EA492C46341078010D8790E3624B4E;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
