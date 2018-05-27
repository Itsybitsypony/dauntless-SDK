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

// UserDefinedStruct behemoth_statemanager_timedevent.behemoth_statemanager_timedevent
// 0x0039
struct Fbehemoth_statemanager_timedevent
{
	float                                              ServerGameTime_2_E9CDD6B34B1372753E1588B6DBA55B3A;        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequestEnteredTimestamp_19_8FBC53D742418FEBADFF31957DB36BB7;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_states_enum>                 StateToChange_6_D10D01E1422D74522D0D90A07CF91156;         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct Fbehemoth_state_conditions                  ConditionThatCausedEvent_12_0B287DAE489F6960CD88C9B389480D98;// 0x0010(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<Ebehemoth_states_enum>                 StateThatTriggeredEvent_16_54E00DB74A2EEB956358CA93ADF36FCB;// 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
