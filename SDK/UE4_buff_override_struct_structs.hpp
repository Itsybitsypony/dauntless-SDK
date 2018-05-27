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

// UserDefinedStruct buff_override_struct.buff_override_struct
// 0x0011
struct Fbuff_override_struct
{
	TArray<class UClass*>                              BuffListToAdd_9_6E44BF4E46DF87D388A93CA7D8E7CCC2;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               ReplaceOriginalBuff_8_B91481C8417D537D0822F6A9E5F526C9;   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
