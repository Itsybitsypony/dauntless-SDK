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

// UserDefinedStruct behemoth_intro_cinematic_data.behemoth_intro_cinematic_data
// 0x0078
struct Fbehemoth_intro_cinematic_data
{
	TAssetPtr<class ULevelSequence>                    IntroSequence_2_C27B4DB246F2179B90FF93B89DBF801C;         // 0x0000(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class UClass>                            CinematicProxyPlayerCharacterClassID_18_CADA98B744656465AE0605BA829B16AE;// 0x0020(0x0020) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TAssetPtr<class UClass>                            CinematicProxyBehemothClassID_17_93C5F2754CDD4F751FC278A09C8C5706;// 0x0040(0x0020) (Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                              TriggerRadius_5_3186B8774DCD3E155482829B3C677F3D;         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WitnessRadius_7_C586E9684C95C6F077B7AABB3AAA6700;         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnBehemothHidden_11_FA3455674CD0FDACBDEC0D9BCF07762A;  // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UClass*                                      CinematicMarkerClass_24_2A97A56A4AAC29E89447B7938C14B225; // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
