#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_loco_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct behemoth_loco_info.behemoth_loco_info
// 0x0010
struct Fbehemoth_loco_info
{
	TEnumAsByte<Ebehemoth_loco_type>                   LocoType_2_17A1837B48953D94309D428D9746F477;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MovementSpeed_5_63BD850F4A0ADA594F03A9BC4714B6DE;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PathFollowingPivotSet_10_2D93F703491B28483860C9ADB6726AD7;// 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
