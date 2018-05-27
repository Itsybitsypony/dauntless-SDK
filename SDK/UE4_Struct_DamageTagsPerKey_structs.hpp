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

// UserDefinedStruct Struct_DamageTagsPerKey.Struct_DamageTagsPerKey
// 0x0018
struct FStruct_DamageTagsPerKey
{
	TArray<struct FName>                               PartTags_7_8D118A00476208C88300CC8938DA6E6F;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       DamageTableKey_6_E97E0B3640ACF869A2806298D2140426;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
