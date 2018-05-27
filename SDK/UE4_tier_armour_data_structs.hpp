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

// UserDefinedStruct tier_armour_data.tier_armour_data
// 0x002C
struct Ftier_armour_data
{
	class UMaterialInstance*                           default_MI_17_4A28A530469E8C5300A3A68C70F3A9F2;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           cloth_MI_18_E19170274688FFBD064DCEA52C433870;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           subsurface_MI_6_FD431F1248A0AAD85FD5598FFE13C562;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           anisotropic_MI_19_AC4A6FDC4AC8632CC07405A69EAF169A;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             particle_type_16_37A027684D45A997DFC3C68B29D0B537;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              emissive_scale_15_F455542B4D446680149221825306D072;       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
