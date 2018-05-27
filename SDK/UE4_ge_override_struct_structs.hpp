#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_effect_magitudes_struct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ge_override_struct.ge_override_struct
// 0x0011
struct Fge_override_struct
{
	TArray<struct Feffect_magitudes_struct>            GameplayEffectListToApply_12_6E44BF4E46DF87D388A93CA7D8E7CCC2;// 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ReplaceOriginalGameplayEffect_13_B91481C8417D537D0822F6A9E5F526C9;// 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
