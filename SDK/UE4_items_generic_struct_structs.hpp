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

// UserDefinedStruct items_generic_struct.items_generic_struct
// 0x0019
struct Fitems_generic_struct
{
	int                                                ItemID_5_4039BA224133CD85A8C1D09A66E03B17;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       ItemName_2_1EDFC51F4258412C3F4A339F35560A19;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ItemIcon_8_45C0D7704D2288FCBA7E5B9B96D25507;              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MemberVar_11_D73C0E3241A860D80C1A37A59ACA9B5F;            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
