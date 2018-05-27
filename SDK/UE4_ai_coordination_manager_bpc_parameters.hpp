#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_coordination_manager_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveAgentFromGroup
struct Uai_coordination_manager_bpc_C_RemoveAgentFromGroup_Params
{
	class Uai_coordination_agent_bpc_C*                Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveClaimsByAgent
struct Uai_coordination_manager_bpc_C_RemoveClaimsByAgent_Params
{
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class Uai_coordination_agent_bpc_C*                Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ClearPendingMessagesOfType
struct Uai_coordination_manager_bpc_C_ClearPendingMessagesOfType_Params
{
	TEnumAsByte<Ecoordination_message_type>            MessageType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.GetMessageTargets
struct Uai_coordination_manager_bpc_C_GetMessageTargets_Params
{
	struct Fcoordination_message                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<class Uai_coordination_agent_bpc_C*>        Agents;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.PushMessageToGroup
struct Uai_coordination_manager_bpc_C_PushMessageToGroup_Params
{
	struct Fcoordination_message                       coordination_message;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveClaimByType
struct Uai_coordination_manager_bpc_C_RemoveClaimByType_Params
{
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<Ecoordination_message_type>            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindIndexOfClaim
struct Uai_coordination_manager_bpc_C_FindIndexOfClaim_Params
{
	int                                                GroupIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ecoordination_message_type>            TaskType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClaimIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ClaimExists
struct Uai_coordination_manager_bpc_C_ClaimExists_Params
{
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<Ecoordination_message_type>            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClaimExists;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.AddClaim
struct Uai_coordination_manager_bpc_C_AddClaim_Params
{
	class Uai_coordination_agent_bpc_C*                ClaimingAgent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ecoordination_message_type>            ClaimedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindFirstIndexOfAgent
struct Uai_coordination_manager_bpc_C_FindFirstIndexOfAgent_Params
{
	class Uai_coordination_agent_bpc_C*                Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AgentIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.AddAgentToGroup
struct Uai_coordination_manager_bpc_C_AddAgentToGroup_Params
{
	class Uai_coordination_agent_bpc_C*                Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.GetGroupMembers
struct Uai_coordination_manager_bpc_C_GetGroupMembers_Params
{
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<class Uai_coordination_agent_bpc_C*>        Agents;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindIndexOfGroup
struct Uai_coordination_manager_bpc_C_FindIndexOfGroup_Params
{
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.CreateAgentGroup
struct Uai_coordination_manager_bpc_C_CreateAgentGroup_Params
{
	TArray<class UClass*>                              Rules;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       GroupGUID;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ReceiveTick
struct Uai_coordination_manager_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ReceiveBeginPlay
struct Uai_coordination_manager_bpc_C_ReceiveBeginPlay_Params
{
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.UpdateGroups
struct Uai_coordination_manager_bpc_C_UpdateGroups_Params
{
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ExecuteUbergraph_ai_coordination_manager_bpc
struct Uai_coordination_manager_bpc_C_ExecuteUbergraph_ai_coordination_manager_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.TaskStateChanged__DelegateSignature
struct Uai_coordination_manager_bpc_C_TaskStateChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
