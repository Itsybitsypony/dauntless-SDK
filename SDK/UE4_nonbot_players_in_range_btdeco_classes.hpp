#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_nonbot_players_in_range_btdeco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass nonbot_players_in_range_btdeco.nonbot_players_in_range_btdeco_C
// 0x002C (0x00CC - 0x00A0)
class Unonbot_players_in_range_btdeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Target;                                                   // 0x00A0(0x0028) (Edit, BlueprintVisible)
	float                                              Distance;                                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass nonbot_players_in_range_btdeco.nonbot_players_in_range_btdeco_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
