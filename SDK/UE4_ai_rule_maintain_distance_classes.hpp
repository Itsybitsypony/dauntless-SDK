#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_rule_maintain_distance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ai_rule_maintain_distance.ai_rule_maintain_distance_C
// 0x0014 (0x003C - 0x0028)
class Uai_rule_maintain_distance_C : public Uai_group_rule_obj_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (Transient, DuplicateTransient)
	float                                              MinDistance;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentBuildupPerSecondOutOfRange;                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ai_rule_maintain_distance.ai_rule_maintain_distance_C");
		return ptr;
	}


	void EvaluateRule(struct Fai_agent_group* AgentGroup, class Uai_coordination_manager_bpc_C** AiManager);
	void ExecuteUbergraph_ai_rule_maintain_distance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
