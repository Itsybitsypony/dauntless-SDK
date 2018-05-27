#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_target_accessibility_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct target_data.target_data
// 0x0020
struct Ftarget_data
{
	class AActor*                                      Target_3_247DF80B4CFFA9F56BC187BC1D3D5D43;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Etarget_accessibility_type>            Accessibility_5_E0E4D2E1436F9334F82DE48AD1B9F856;         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              PathCost_10_1E06F84444334DA7817D00823DE446DF;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PathExists_13_3BDA8F9744EAF4399413AABB01FB8606;           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TargetScore_16_58320D3749F3460DEC590B98EC13953C;          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastSeenTimestamp_18_4D3C8E7E4A6BB85C48B33E9702BA28FF;    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastAccessibleTimestamp_21_7F74BF66407ABA07648AD79781DDC8A4;// 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
