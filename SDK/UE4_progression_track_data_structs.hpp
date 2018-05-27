#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_progression_rank_table_row_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct progression_track_data.progression_track_data
// 0x0088
struct Fprogression_track_data
{
	struct FName                                       TrackName_29_22A4919245DAAB08729DAAB3449D5479;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Fprogression_rank_table_row>         Ranks_9_E2FD6F1C48AD68543399EEA911975DB5;                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fprogression_rank_table_row                 CurrentRank_8_6F6D108D451A99FA90D22FB046C036CA;           // 0x0018(0x0048) (Edit, BlueprintVisible)
	int                                                MaxProgression_16_2D75084C47D0C62C876AB1BA48E19F65;       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RemainingForNextRank_15_7E96C7784C6D395171CB3A960ABEFB8C; // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               RankIDs_20_24DCEF1847644EB899A0B2AE9914A128;              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       CurrentRankID_23_C9CAEFA94E6DC40D814AFDA286661727;        // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPrestigeTrack_31_3A0660824102536C26BE7192A1777F2D;      // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreTrack_33_86EC445A4A079DE4ADEDB889D513DD66;          // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VisibleInUI_35_3366B7BC4F724345EE001BABC65DFAEA;          // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	int                                                CurrentProgression_38_38F756AE4D033ABCF7CE4FAE92AA8CF2;   // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
