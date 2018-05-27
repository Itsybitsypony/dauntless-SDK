#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_distance_is_greater_than_to_nearest_actor_of_class_bpuc1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_distance_is_greater_than_to_nearest_actor_of_class_bpuc1.player_distance_is_greater_than_to_nearest_actor_of_class_bpuc1_C
// 0x000C (0x0044 - 0x0038)
class Uplayer_distance_is_greater_than_to_nearest_actor_of_class_bpuc1_C : public UUnlockCondition_Blueprint
{
public:
	class UClass*                                      OtherActorClass;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_distance_is_greater_than_to_nearest_actor_of_class_bpuc1.player_distance_is_greater_than_to_nearest_actor_of_class_bpuc1_C");
		return ptr;
	}


	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
