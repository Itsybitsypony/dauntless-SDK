#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_blackboard_comparison_classes.hpp"
#include "UE4_montage_probability_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct alternate_attack_struct.alternate_attack_struct
// 0x0060
struct Falternate_attack_struct
{
	struct Fblackboard_comparison                      Comparison_2_F3B6197E4A217F2EBF21B0A442E1F779;            // 0x0000(0x0050) (Edit, BlueprintVisible)
	TArray<struct Fmontage_probability>                AlternateAttacks_10_FD418668401DFE2A7C36BBAFAAE928E5;     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
