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

// UserDefinedStruct postmit_damage_summary.postmit_damage_summary
// 0x0014
struct Fpostmit_damage_summary
{
	float                                              CoreDamage_9_ACFB4BB44895F06A0ED0168CEBE11E65;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PartDamage_10_D8BA6DC849953D397E77D0AAB5BE964A;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamage_11_1904C4FB45546E208147A9B280C90C1A;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExposeDamage_12_EFE04A264C743DAF4BFAF2B8BC7C76E0;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PremitigationBaseDamage_17_1BD7CC954AA3233021E26FBFE49B02D4;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
