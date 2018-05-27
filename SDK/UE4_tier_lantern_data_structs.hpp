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

// UserDefinedStruct tier_lantern_data.tier_lantern_data
// 0x0014
struct Ftier_lantern_data
{
	class UMaterialInstance*                           lantern_basic_MI_20_4A28A530469E8C5300A3A68C70F3A9F2;     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             particle_type_16_37A027684D45A997DFC3C68B29D0B537;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              emissive_scale_15_F455542B4D446680149221825306D072;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
