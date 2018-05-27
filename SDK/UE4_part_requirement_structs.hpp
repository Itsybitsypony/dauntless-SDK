#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_boolean_combine_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct part_requirement.part_requirement
// 0x0038
struct Fpart_requirement
{
	TArray<struct FName>                               PartNamesToCheck_15_7F441CB14937D498C032AAB259F9B4CE;     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Eboolean_combine_type>                 PartListRequirementType_18_85F4C6AC4D1885E0952F5AB96D33C7BD;// 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<Ebehemoth_part_type>>           PartStateRequirements_11_E1D6F52549FFF776C34A26A856FECC78;// 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Ebehemoth_part_type>>           PartStateExclusions_10_ECC759B7463D0C437D2D099DFB238F9A;  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
