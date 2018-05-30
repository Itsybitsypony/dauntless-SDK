#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Compare_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Compare_btdeco.Compare_btdeco_C
// 0x0070 (0x0110 - 0x00A0)
class UCompare_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      LeftSideKey;                                              // 0x00A0(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<Enum_CompareOperators>                 CompareOperator;                                          // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eblackboard_comparable_key_type>       CompareType;                                              // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseResult;                                            // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
	struct Fsimplified_blackboard_key_data             RightSideData;                                            // 0x00D0(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Compare_btdeco.Compare_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
