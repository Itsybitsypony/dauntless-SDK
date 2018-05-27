#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_eqs_spawn_query_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct persistent_eqs_spawn_data.persistent_eqs_spawn_data
// 0x02E8
struct Fpersistent_eqs_spawn_data
{
	int                                                CurrentTargetIndex_14_A309B6A648A0E4DB40871DAF0C5F62A4;   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumTargetsConsidered_37_AD6C84D64498177099A0E09B88C0B7B7; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentProjectileIndexOnThisTarget_38_A8ECDC77425A2D7C16D1FAA7867CE76D;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ProjectilesUntilNextTarget_23_1FF2D3A645D1CC9D7AF046A3D5C7962B;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastSpawnTimeStamp_20_9D9646E74C09A4C8A5F721BA82A132CD;   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct Feqs_spawn_query                            SpawnQuery_63_3FB82B3D4EAD510AEB66BC8618244F43;           // 0x0020(0x0290) (Edit, BlueprintVisible)
	struct FGuid                                       SharedDamageGUID_29_84A9BC3545E0960DDE55CCBCB962A068;     // 0x02B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<int>                                        AvailableIndexesForRandomSampling_34_2D3B13C34C48D6AFCE47DE9E62FDBADF;// 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FirstSpawnTimeStamp_61_043B16E24436FE448A80F2A994E3A23B;  // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsSpawned_67_3173D18D49D64D8550C606A553ADEE6C;         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SpawnGUID_70_D153089D40E800F63DED83B4D5D1668B;            // 0x02D8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
