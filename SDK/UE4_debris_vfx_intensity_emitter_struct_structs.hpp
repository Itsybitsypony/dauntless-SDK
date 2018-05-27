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
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct debris_vfx_intensity_emitter_struct.debris_vfx_intensity_emitter_struct
// 0x0024
struct Fdebris_vfx_intensity_emitter_struct
{
	int                                                intensity_8_ABE157F14BDC7F35CBC9A59771DD36DB;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             particle_system_11_49B96CAA4796BE18B00ECB829D028745;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   decal_material_18_6EC0D38A41F773C6AA1E87890E1F3BD3;       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     decal_size_19_10178F8F48BD3E6B198C34A1DA1DEDC8;           // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
