#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_coordination_message_type_classes.hpp"
#include "UE4_message_restrictions_classes.hpp"
#include "UE4_agent_allocation_type_classes.hpp"
#include "UE4_task_exclusivity_classes.hpp"
#include "UE4_task_assignment_strategy_classes.hpp"
#include "UE4_message_handling_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct coordination_message.coordination_message
// 0x0020
struct Fcoordination_message
{
	TEnumAsByte<Ecoordination_message_type>            TaskType_10_0A537BAE4D3F703F17CBB5A6F84D1D94;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eagent_allocation_type>                AgentAllocationType_19_96D88E2142E6D26FA53020B2240B105C;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Emessage_restrictions>                 AgentRestrictions_46_B831AA4D42775E70394E049103B38F96;    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etask_exclusivity>                     TaskExclusivity_22_24284CFA4569D9BAA1E968B087DA49C4;      // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etask_assignment_strategy>             AssignmentStrategy_25_31AD990F4A508FC741C6939698F162FB;   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Emessage_handling_type>                MessageHandlingStrategy_49_7B88B94D4B2AD622E917A7B0D42D16E7;// 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              Priority_37_D5181E08496BBBF3B32FFDB90D429960;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UObject*                                     PayloadObject_43_0FD066224756187E3DEFF18A1E04B15D;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uai_coordination_agent_bpc_C*                INTERNAL_SourceAgent_34_F2B0F76A4F1D283758D20E8C70BD3E47; // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
