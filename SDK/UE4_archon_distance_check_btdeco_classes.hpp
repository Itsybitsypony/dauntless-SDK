#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_distance_check_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass archon_distance_check_btdeco.archon_distance_check_btdeco_C
// 0x00D8 (0x0178 - 0x00A0)
class Uarchon_distance_check_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Origin;                                                   // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Target;                                                   // 0x00C8(0x0028) (Edit, BlueprintVisible)
	float                                              PredictTargetHorizFuturePosTime;                          // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct Fsimplified_blackboard_key_data             MinDistance;                                              // 0x00F8(0x0040) (Edit, BlueprintVisible)
	struct Fsimplified_blackboard_key_data             MaxDistance;                                              // 0x0138(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass archon_distance_check_btdeco.archon_distance_check_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
