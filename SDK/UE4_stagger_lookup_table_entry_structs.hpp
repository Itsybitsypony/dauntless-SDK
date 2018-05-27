#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_stagger_type_classes.hpp"
#include "UE4_stagger_option_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct stagger_lookup_table_entry.stagger_lookup_table_entry
// 0x001C
struct Fstagger_lookup_table_entry
{
	TEnumAsByte<Estagger_type>                         StaggerType_2_4598B65D4A5AF005ACF09BB2AD04E4C1;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct Fstagger_option>                     Montages_21_351F3A49485F819A9C0BE8A2FDD9F689;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumLoops_24_F634ACC34872F11F106C6D88591DFA6A;             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
