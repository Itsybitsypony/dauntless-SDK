#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_stagger_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct stagger_stage.stagger_stage
// 0x0014
struct Fstagger_stage
{
	float                                              StaggerDamageRequired_2_ED9A7D084436C10492BAE7945A5BE0AB; // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerRegenPerSecond_9_B54B3CF24C87FB20F5E1769F306B9ABC; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerPerHitArmor_12_1ED7A2D6428863FD4B88C48C9B45CB42;   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerType_6_575831B54F9972080BBD4E9D4649E582;           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              TemporaryArmorOnStagger_19_2C02063F4C28FF13A53EAEBE8FCFE227;// 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
