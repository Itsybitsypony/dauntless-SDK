#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_break_part_descriptions_classes.hpp"
#include "UE4_stagger_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct part_break_stage.part_break_stage
// 0x0010
struct Fpart_break_stage
{
	TEnumAsByte<Ebreak_part_descriptions>              PartBreakDescription_81_F02FC7404C14B0C4C604A5B52827B0C9; // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerTypeOnBreak_New_96_3BF8A31940530603FD3FB8BFB76EDCD2;// 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              PartMaxHealthToAddOnBreak_69_45816E3F414C079E6389C69F48C6A2EB;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentMissingHealthToHealOtherPartsOnBreak_70_3746C8D048A7692481D370BE16CC75C2;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLootDrops_57_81F772BD48826EC5FEBB70A860F2BA41;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
