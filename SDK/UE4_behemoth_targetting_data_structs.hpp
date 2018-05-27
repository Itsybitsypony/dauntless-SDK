#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_arc_targetting_data_classes.hpp"
#include "UE4_behemoth_targetting_type_classes.hpp"
#include "UE4_targetting_data_strategy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct behemoth_targetting_data.behemoth_targetting_data
// 0x001D
struct Fbehemoth_targetting_data
{
	TEnumAsByte<Ebehemoth_targetting_type>             TargettingType_6_B6CE332A4E26AD485AF9208CB9DDB71B;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct Farc_targetting_data                        ArcData_5_C67CE4F7400DF898FFA3088E6E65D80F;               // 0x0004(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Etargetting_data_strategy>             WhatToDoWithTargetsHit_11_D7C6EBF8471B291B58C1AAB729286280;// 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
