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

// UserDefinedStruct stagger_telemetry_data.stagger_telemetry_data
// 0x0010
struct Fstagger_telemetry_data
{
	class AArchonCharacter*                            Instigator_2_5C4B4EA74CE4EDD3012C9682E6604292;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TotalStaggerDamage_6_3164963048E101FE3B71228914FBBFB5;    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumStaggers_9_7A10727148B579B3C8C4A2A1D3054633;           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
