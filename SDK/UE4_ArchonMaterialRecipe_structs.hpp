#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ArchonMaterialRecipe.EArchonNoiseType
enum class EArchonNoiseType : uint8_t
{
	ArchonNoise_Sinusoid           = 0,
	ArchonNoise_Perlin             = 1,
	ArchonNoise_PeriodicPerlin     = 2,
	ArchonNoise_Simplex            = 3,
	ArchonNoise_SparseConvolution  = 4,
	ArchonNoise_Flow               = 5,
	ArchonNoise_PeriodicFlow       = 6,
	ArchonNoise_WorleyF1           = 7,
	ArchonNoise_WorleyF2           = 8,
	ArchonNoise_Alligator          = 9,
	ArchonNoise_MAX                = 10
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
