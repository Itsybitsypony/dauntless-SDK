#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_states_enum_classes.hpp"
#include "UE4_behemoth_state_conditions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct behemoth_state_description.behemoth_state_description
// 0x0038
struct Fbehemoth_state_description
{
	TEnumAsByte<Ebehemoth_states_enum>                 State_3_9318B52B436FEC126FDC4B856FA2CC28;                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct Fbehemoth_state_conditions>          EntryConditions_8_7EDCE4C747D83B4D8A6EA88E9954DE69;       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Ebehemoth_states_enum>>         DisallowedStates_27_16316F5E4FECCAB3E0C2EEA4793A6C84;     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Ebehemoth_states_enum>>         RequiredStates_29_2E37E7FE4B0F3F893CB843B787DEED96;       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
