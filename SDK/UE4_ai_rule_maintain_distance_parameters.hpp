#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_rule_maintain_distance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ai_rule_maintain_distance.ai_rule_maintain_distance_C.EvaluateRule
struct Uai_rule_maintain_distance_C_EvaluateRule_Params
{
	struct Fai_agent_group*                            AgentGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Uai_coordination_manager_bpc_C**             AiManager;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_rule_maintain_distance.ai_rule_maintain_distance_C.ExecuteUbergraph_ai_rule_maintain_distance
struct Uai_rule_maintain_distance_C_ExecuteUbergraph_ai_rule_maintain_distance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
