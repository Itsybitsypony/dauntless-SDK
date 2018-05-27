#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_condition_requirement_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct playercontroller_requirements.playercontroller_requirements
// 0x0019
struct Fplayercontroller_requirements
{
	TEnumAsByte<Econdition_requirement_type>           ConditionType_16_0987262E4BB6798AF7C91FA00255017C;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StyleHunterRequired_17_A49BBF8D4BDBD31E69E3EF940E61A72B;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<class FString>                              RequiredItemIDs_6_F0EC824A44DE22A65F74DAA02A154B8C;       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RequiresUnlockedCraftableItems_20_97DF48034E8A850B73F701AD8419A6DC;// 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
