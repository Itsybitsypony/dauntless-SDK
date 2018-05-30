#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Enum_CompareOperators_classes.hpp"
#include "UE4_blackboard_comparable_key_type_classes.hpp"
#include "UE4_simplified_blackboard_key_data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct blackboard_comparison.blackboard_comparison
// 0x0050
struct Fblackboard_comparison
{
	struct FName                                       LeftSideBlackboardVarName_5_59F577134FE346CF2B217691DF645309;// 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CompareOperators>                 Operator_14_032E1C034D6915A30B9A3182F2CFED17;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eblackboard_comparable_key_type>       Type_15_E481EEA9437AC73313EA739A22D1ABC0;                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct Fsimplified_blackboard_key_data             RightSideData_9_3D507A8B472F2921D4416F9EA58E0E10;         // 0x0010(0x0040) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
