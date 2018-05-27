// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_group_rule_obj_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ai_group_rule_obj.ai_group_rule_obj_C.EvaluateRule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fai_agent_group         AgentGroup                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class Uai_coordination_manager_bpc_C* AiManager                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_group_rule_obj_C::EvaluateRule(const struct Fai_agent_group& AgentGroup, class Uai_coordination_manager_bpc_C* AiManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_group_rule_obj.ai_group_rule_obj_C.EvaluateRule");

	Uai_group_rule_obj_C_EvaluateRule_Params params;
	params.AgentGroup = AgentGroup;
	params.AiManager = AiManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
