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

// UserDefinedStruct monster_part_info_struct.monster_part_info_struct
// 0x001C
struct Fmonster_part_info_struct
{
	class FString                                      PartName_2_EC3F8CC2456BACEBC146B69CC93FAAE2;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PartCurrentHealth_5_1B1968764AE1860BAC49C7A5DDBBAC49;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PartMaxHealth_9_D5BB20CA4BFD61152FD1A6BDB2B42F92;         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPartStage_13_0315484647292B1BDF725B9958866CF7;     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
