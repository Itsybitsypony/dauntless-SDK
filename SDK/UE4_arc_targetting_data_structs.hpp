#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct arc_targetting_data.arc_targetting_data
// 0x0018
struct Farc_targetting_data
{
	float                                              Range_2_DCC8128B4E74CB571EC0A9A7F244752D;                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle_4_BF57868746F2CC64F87A32BBFF883E25;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArcCenterAngle_6_61508CA042D9902B2BBB1193D5F8D6D4;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CenterOffset_10_E7A804F145E1FEBDCDA5A9BF8278A2C8;         // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
