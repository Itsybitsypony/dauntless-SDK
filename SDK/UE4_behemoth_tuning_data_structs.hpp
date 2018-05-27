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

// UserDefinedStruct behemoth_tuning_data.behemoth_tuning_data
// 0x001C
struct Fbehemoth_tuning_data
{
	float                                              HealthScale_12_B2A784E04A6C63ED6D77AB9F82896B3F;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BonusPctOfMaxHealthToParts_5_CA857B8D47CCE227569DF1840AE1FE3A;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PartHealthScale_16_BB5C6E554907196C6F0BC6837E26211D;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BonusPctOfMaxHealthToExpose_7_BA37731A4600576001B1DD842353A025;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExposeHealthScale_19_CBBE24FD42400A898B6A7DB9A13D7DA8;    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerHealthScale_13_A8C73DCA470D25E05E270F9DA83CE919;   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageScale_22_CECA89BF458CBE92036EC9876991219B;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
