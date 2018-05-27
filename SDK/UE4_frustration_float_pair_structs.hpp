#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_frustration_reason_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct frustration_float_pair.frustration_float_pair
// 0x0008
struct Ffrustration_float_pair
{
	TEnumAsByte<Ebehemoth_frustration_reason>          Reason_5_858FB4EE4FBA7AD62B5C55996B3F0DF1;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Amount_2_37AF2A10471DB1BB6D48BA9C42AE21C3;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
