#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_statecondition_type_classes.hpp"
#include "UE4_behemoth_states_enum_classes.hpp"
#include "UE4_behemoth_state_event_classes.hpp"
#include "UE4_blackboard_comparison_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct behemoth_state_conditions.behemoth_state_conditions
// 0x0028
struct Fbehemoth_state_conditions
{
	TEnumAsByte<Ebehemoth_statecondition_type>         ConditionType_3_6F4E9F164F234D5591A3CFADF902D208;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_states_enum>                 StateVar_6_95BE92874DBB8E4ABFB50E97E6F1668F;              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 StateChangeType_15_A79218DE450459839213129A704535C6;      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TArray<float>                                      ScalingDelay_11_6674B5344D3F761B31857E84351405EE;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fblackboard_comparison>              ConditionRequirements_19_1F217EB5434E809067927B98F3F6A05B;// 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
