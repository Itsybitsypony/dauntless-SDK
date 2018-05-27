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

// UserDefinedStruct progression_core_table_row.progression_core_table_row
// 0x001C
struct Fprogression_core_table_row
{
	int                                                PointsRequired_7_1C1B4B464962079A124649AD2F89FEAA;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      ItemToGrant_9_2376B3C9438827326487339EC0B644F3;           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PatrolBoost_12_D2933F0B4ACCC80F43CE62B27055C8EE;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
