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

// UserDefinedStruct AtmosphereRing.AtmosphereRing
// 0x0044
struct FAtmosphereRing
{
	float                                              radius_19_C08FC3D44C0A7E291F8D2FAB90679D77;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              emitter_height_36_70C52BB246633B16DBDD139B12241006;       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              density_26_2AAE9C014E2BA1FB92429783BFA67A56;              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lifetime_32_0D9304B34DAB3F319483ACA52EED1DF9;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     speed_20_5938764C45D8F7D8A281F895DC3F8A7B;                // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     position_35_DEE5B3094F53D0565EA79A994F3493E5;             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     scale_21_24873B87473FA6C8D6624CB5A95E8C74;                // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UMaterialInstance*                           material_12_8D20167B4E9CC4B07B44B78C97705232;             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                priority_29_70CE70BA4380BBB54789A7A03B262F26;             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
