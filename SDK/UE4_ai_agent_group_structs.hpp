#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_agent_claims_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ai_agent_group.ai_agent_group
// 0x0040
struct Fai_agent_group
{
	struct FGuid                                       GroupID_7_26D47DAB4577B828474B968EFCA61F55;               // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class Uai_coordination_agent_bpc_C*>        Agents_14_724A7F554E6FCCACD21DD5A6CD7FEE29;               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fagent_claims>                       Claims_18_590183FC4004261CA818B9A8FACAA7BA;               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class Uai_group_rule_obj_C*>                Rules_25_3599B6E148D788253CB2D4B2AE77CB3A;                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
