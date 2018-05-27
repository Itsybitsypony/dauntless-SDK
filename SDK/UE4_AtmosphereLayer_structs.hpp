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

// UserDefinedStruct AtmosphereLayer.AtmosphereLayer
// 0x0040
struct FAtmosphereLayer
{
	float                                              height_2_B3A724AB4C42BD55BC261B8185157E79;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              density_4_136B467848A13C5E28910ABA9773AEF5;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              priority_18_2DB087DB4164F8BB135B8387F8AA4B9A;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lifetime_21_0F11C6AF44422911393E38A596870FC7;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     speed_7_322D910A4E322006CAA53EACC9204048;                 // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     scale_9_7DC6FF3242F083A23CF3EF9820D83D7C;                 // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     emitter_scale_15_709752FC43B53BDB6185CAB26DAA4770;        // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UMaterialInstance*                           material_12_B99C0DBA41FF4392A80992828566639E;             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
