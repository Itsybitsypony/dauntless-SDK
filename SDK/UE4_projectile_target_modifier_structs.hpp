#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_projectile_target_modifier_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct projectile_target_modifier.projectile_target_modifier
// 0x0014
struct Fprojectile_target_modifier
{
	TEnumAsByte<Eprojectile_target_modifier_type>      ModifierType_2_E75347BD41D27E917C6E8AB14D398E0D;          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AmountMin_5_37E58BC8476BF7475C0A649DCD904976;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmountMax_7_9538345641B7C1159DDBCDB25E04868B;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleMin_11_285C09174660BF44921B9CAE04CF6F67;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleMax_14_1A6A62AA454F33E726D996813ECA3C95;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
