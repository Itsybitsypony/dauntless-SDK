#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_test_attribute_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass test_attribute_btdeco.test_attribute_btdeco_C
// 0x0050 (0x00F0 - 0x00A0)
class Utest_attribute_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayAttribute                          Attribute;                                                // 0x00A0(0x0020) (Edit, BlueprintVisible)
	TEnumAsByte<Enum_CompareOperators>                 Operator;                                                 // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      ActorToTest;                                              // 0x00C8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass test_attribute_btdeco.test_attribute_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
