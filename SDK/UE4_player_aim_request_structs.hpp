#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct player_aim_request.player_aim_request
// 0x0028
struct Fplayer_aim_request
{
	class UParticleSystem*                             AimingParticle_5_FD82F81F4154363EAC825A9E18949A04;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance_9_3BB2DBBD41CCB7FEA7099A95483C28DC;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       AimingParticleSourceBone_12_BF4ED10E4084F25B49A980A524B46BF9;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GroundBlocksTargetting_21_E8B836D442C4DAD1AB30D6AE237B874B;// 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToGround_24_BFAD535548B228CE5F09BB8026C9DD24;         // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class UParticleSystem*                             EndPointIndicator_20_16A9B120438A252D61454EA0555D2E8E;    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
