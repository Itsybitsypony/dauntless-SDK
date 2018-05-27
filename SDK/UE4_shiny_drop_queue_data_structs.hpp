#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_Archon_classes.hpp"
#include "UE4_behemoth_bodypart_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct shiny_drop_queue_data.shiny_drop_queue_data
// 0x0026
struct Fshiny_drop_queue_data
{
	class FString                                      LootID_2_93924E934D2E2A218B9AE89B6C4D4242;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGuid                                       ShinyGUID_5_CD599D5B4635F603F74AE9A31A61ECE8;             // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ShinyLifetime_8_20AFEFA64A020063E3C04EBD9CA75959;         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               MinRarityToShow_17_573E32E04A1EE40D1FB106BE30645ABE;      // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_bodypart_type>               BrokenBodyPart_22_EC9AD84B4365AE53209DE1BBFE394BE2;       // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
