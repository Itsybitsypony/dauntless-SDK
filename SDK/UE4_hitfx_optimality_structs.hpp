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

// UserDefinedStruct hitfx_optimality.hitfx_optimality
// 0x0044
struct Fhitfx_optimality
{
	class UParticleSystem*                             optimal_9_7FFCB0AD4C9FC5B83136DC8131644C17;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              optimal_RateScale_43_D7721B3A48E5D75A703AEB8AD5CBB4D9;    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              optimal_SizeScale_32_F7461A5E451534B56A37B98C12F16890;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              optimal_SphereRadius_19_8BB161D7491AE977C73CE99A20C43F3D; // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystem*                             standard_10_24B9EC22479FAE6AAC886CB65B44ADA1;             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              standard_RateScale_41_39B130DF49FD55908DDC42982A6B9DE6;   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              standard_SizeScale_33_B266B43243B434DDABBADAA0854BD66C;   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              standard_SphereRadius_20_075E7635451C05914376CAA73CDED62C;// 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UParticleSystem*                             sub_optimal_11_B42397194910035C451E5AB162102F12;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sub_optimal_RateScale_42_96EEBDC24AC1548CCDE49096337860F1;// 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sub_optimal_SizeScale_34_2D9C487C44165BB62AB621A51E233B36;// 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sub_optimal_SphereRadius_22_A2DECC174800D3BB64A1E1B48030CDEF;// 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
