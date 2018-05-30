#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_tag_float_struct_classes.hpp"
#include "UE4_behemoth_type_enum_classes.hpp"
#include "UE4_Archon_classes.hpp"
#include "UE4_condition_requirement_type_classes.hpp"
#include "UE4_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct conditional_break_data.conditional_break_data
// 0x0068
struct Fconditional_break_data
{
	TArray<TEnumAsByte<Ebehemoth_bodypart_type>>       RequirePartTypes_3_71933D5C43DB919B7ECA5EBFFBED2093;      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Ebehemoth_states_enum>>         RequireAnyOfTheseBehemothStates_21_E1D2E219491BDBB06DD2E68F20E2DF03;// 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TimeFromStartOfFightThisPartCanBeObtained_15_FB0A98224DC86F5F4607A48B49BD9949;// 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomChance_17_125F9D3D445100AAC6B2F4BA80FDC579;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Ftag_float_struct>                   AddToRandomChanceIfHuntTagsMatch_45_30BF33974961B385CA009AA7740B12DF;// 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Ebehemoth_type_enum>                   RequireBehemothType_20_13FB1CD34509B94734E78297BD0C08C1;  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FQuestRequirement>                   PlayerQuestRequirements_28_3C9F1F214422D5A103B914945B5B2009;// 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Econdition_requirement_type>           QuestRequirementType_44_29EB22D74DCF9AB9640878A744878CD2; // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         Reward_41_30C6B35941F2A5D18BC18CAF587894E3;               // 0x0058(0x0010) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
