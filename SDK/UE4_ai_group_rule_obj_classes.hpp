#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_group_rule_obj_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ai_group_rule_obj.ai_group_rule_obj_C
// 0x0000 (0x0028 - 0x0028)
class Uai_group_rule_obj_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ai_group_rule_obj.ai_group_rule_obj_C");
		return ptr;
	}


	void EvaluateRule(const struct Fai_agent_group& AgentGroup, class Uai_coordination_manager_bpc_C* AiManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
