#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_group_rule_obj_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ai_group_rule_obj.ai_group_rule_obj_C.EvaluateRule
struct Uai_group_rule_obj_C_EvaluateRule_Params
{
	struct Fai_agent_group                             AgentGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Uai_coordination_manager_bpc_C*              AiManager;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
