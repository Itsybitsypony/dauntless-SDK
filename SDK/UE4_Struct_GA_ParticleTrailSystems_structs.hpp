#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Enum_GA_ParticleTrails_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_GA_ParticleTrailSystems.Struct_GA_ParticleTrailSystems
// 0x0010
struct FStruct_GA_ParticleTrailSystems
{
	TEnumAsByte<Enum_GA_ParticleTrails>                GAParticleType_23_8C63F0C549AF2F27706736905CF2A2F5;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             TrailParticleSystem_21_1424F76C408FEE62790F5589C3BF0968;  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
