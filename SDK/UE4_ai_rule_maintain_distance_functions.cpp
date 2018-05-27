// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_rule_maintain_distance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ai_rule_maintain_distance.ai_rule_maintain_distance_C.EvaluateRule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fai_agent_group*        AgentGroup                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class Uai_coordination_manager_bpc_C** AiManager                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_rule_maintain_distance_C::EvaluateRule(struct Fai_agent_group* AgentGroup, class Uai_coordination_manager_bpc_C** AiManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_rule_maintain_distance.ai_rule_maintain_distance_C.EvaluateRule");

	Uai_rule_maintain_distance_C_EvaluateRule_Params params;
	params.AgentGroup = AgentGroup;
	params.AiManager = AiManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_rule_maintain_distance.ai_rule_maintain_distance_C.ExecuteUbergraph_ai_rule_maintain_distance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_rule_maintain_distance_C::ExecuteUbergraph_ai_rule_maintain_distance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_rule_maintain_distance.ai_rule_maintain_distance_C.ExecuteUbergraph_ai_rule_maintain_distance");

	Uai_rule_maintain_distance_C_ExecuteUbergraph_ai_rule_maintain_distance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
