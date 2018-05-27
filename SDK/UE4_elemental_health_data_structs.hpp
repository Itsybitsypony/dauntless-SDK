#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_elemental_health_init_data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct elemental_health_data.elemental_health_data
// 0x0050
struct Felemental_health_data
{
	TMap<EElementType, struct Felemental_health_init_data> StageData_38_AFE8350C40F4FF7405B8138071E0391B;            // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
