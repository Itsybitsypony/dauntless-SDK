#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_progression_rank_dependency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct progression_rank_table_row.progression_rank_table_row
// 0x0048
struct Fprogression_rank_table_row
{
	int                                                Rank_2_DCAA5C3E45871C4F6B4EEC9245E9AB9D;                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       DisplayName_5_F1B01A704B8AFAB0FBA898B70A529B23;           // 0x0008(0x0018) (Edit, BlueprintVisible)
	int                                                RequiredPoints_14_314E5DEE464BCB3FA51435AE63EF7797;       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<class FString>                              ItemsToGrant_13_8D69DB774F566B170A4DD9BCA827F549;         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fprogression_rank_dependency>        OtherTrackDependencies_18_92410B424E5E24E5766C0D931F25303E;// 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
