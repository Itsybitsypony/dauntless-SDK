#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_debris_vfx_intensity_emitter_struct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct debris_vfx_struct.debris_vfx_struct
// 0x0010
struct Fdebris_vfx_struct
{
	TArray<struct Fdebris_vfx_intensity_emitter_struct> vfx_asset_32_A8424F344C7A86702A76D4B8AD97704B;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
