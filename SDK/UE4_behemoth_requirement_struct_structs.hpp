#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_part_requirement_classes.hpp"
#include "UE4_simplified_blackboard_key_data_classes.hpp"
#include "UE4_behemoth_req_state_type_classes.hpp"
#include "UE4_behemoth_states_enum_classes.hpp"
#include "UE4_Enum_CompareOperators_classes.hpp"
#include "UE4_blackboard_comparable_key_type_classes.hpp"
#include "UE4_require_or_exclude_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct behemoth_requirement_struct.behemoth_requirement_struct
// 0x00C8
struct Fbehemoth_requirement_struct
{
	TEnumAsByte<Ebehemoth_states_enum>                 StateRequirement_2_E3F34BB84439B826A77CC798F8F0DCD6;      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_req_state_type>              StateRequirementType_29_187586EB4988DF3126E81BB84E147F89; // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FName                                       ServerBlackboardKey_19_CFC4ECC34A9780E31CF17B87F7C70382;  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CompareOperators>                 ServerBlackboardKeyCompareOperator_21_63AF1C794CF66AEAD36BBF9B126090F8;// 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eblackboard_comparable_key_type>       ServerBlackboardKeyCompareType_27_9A1B6BEB469C3A17348C7CA0DEDB1781;// 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct Fsimplified_blackboard_key_data             ServerBlackboardKeyComparerValue_28_20031432463A5B945F3EF08F72511200;// 0x0018(0x0040) (Edit, BlueprintVisible)
	class FString                                      RequireBehemothArchetypeName_40_4EFA194E4238B80FF48BA996D736D9B6;// 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Erequire_or_exclude>                   ArchetypeCondition_56_DAA91AB54D0F4049A260B7B42676373F;   // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       RequireBehemothClassificationName_44_B20DC9FB48010C6FB98808B33AAFF949;// 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Erequire_or_exclude>                   ClassificationCondition_57_433FC97A451E85A7F7517CA2531E1232;// 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FName                                       RequireBehemothFunctionSuccess_39_046856314C52F25D595DB3877606FB0D;// 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RequireIntactPartName_61_5D1213C743B5E0D12CD8D994104EBD02;// 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fpart_requirement                           PartRequirements_65_1261C89D452F7CED29F782B3861EA152;     // 0x0090(0x0038) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
