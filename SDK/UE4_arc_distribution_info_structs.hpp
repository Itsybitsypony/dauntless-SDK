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

// UserDefinedStruct arc_distribution_info.arc_distribution_info
// 0x0014
struct Farc_distribution_info
{
	float                                              DepthMin_12_8A01571E4299F99E45CDBF8E615DBA14;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthMax_14_A59BFDDB4585D172F5F0098E6ED42D0C;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleHoriz_3_585550084F0B40EC1C2EF3B71C1F6D73;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleCenter_16_799C47284DC1B460C5F8F796BD428292;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaHeight_18_EAD2F7CB4F3D9370BF251E8DF289FECA;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
