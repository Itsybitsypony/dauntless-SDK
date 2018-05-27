#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_coordination_message_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct agent_claims.agent_claims
// 0x0009
struct Fagent_claims
{
	class Uai_coordination_agent_bpc_C*                Agent_3_CA40513C4EFED33E54FED88AA82719EA;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ecoordination_message_type>            MessageType_7_B3446E1E47B909664EC5C08E4243CBF5;           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
