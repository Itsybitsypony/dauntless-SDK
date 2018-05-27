#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_generic_action_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct generic_action_set_entry.generic_action_set_entry
// 0x0018
struct Fgeneric_action_set_entry
{
	TEnumAsByte<Ebehemoth_generic_action_type>         ActionType_2_EC461284450D386A93DB5F86A3AF0D81;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        PossibleMontages_7_68912FA64B578459D4DD42B221C5BF5C;      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
