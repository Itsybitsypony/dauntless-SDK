// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_coordination_manager_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveAgentFromGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uai_coordination_agent_bpc_C* Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uai_coordination_manager_bpc_C::RemoveAgentFromGroup(class Uai_coordination_agent_bpc_C* Agent, const struct FGuid& GroupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveAgentFromGroup");

	Uai_coordination_manager_bpc_C_RemoveAgentFromGroup_Params params;
	params.Agent = Agent;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveClaimsByAgent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class Uai_coordination_agent_bpc_C* Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::RemoveClaimsByAgent(const struct FGuid& GroupId, class Uai_coordination_agent_bpc_C* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveClaimsByAgent");

	Uai_coordination_manager_bpc_C_RemoveClaimsByAgent_Params params;
	params.GroupId = GroupId;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ClearPendingMessagesOfType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ecoordination_message_type> MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uai_coordination_manager_bpc_C::ClearPendingMessagesOfType(TEnumAsByte<Ecoordination_message_type> MessageType, const struct FGuid& GroupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ClearPendingMessagesOfType");

	Uai_coordination_manager_bpc_C_ClearPendingMessagesOfType_Params params;
	params.MessageType = MessageType;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.GetMessageTargets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<class Uai_coordination_agent_bpc_C*> Agents                         (Parm, OutParm, ZeroConstructor)

void Uai_coordination_manager_bpc_C::GetMessageTargets(const struct Fcoordination_message& Message, const struct FGuid& GroupId, TArray<class Uai_coordination_agent_bpc_C*>* Agents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.GetMessageTargets");

	Uai_coordination_manager_bpc_C_GetMessageTargets_Params params;
	params.Message = Message;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Agents != nullptr)
		*Agents = params.Agents;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.PushMessageToGroup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   coordination_message           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uai_coordination_manager_bpc_C::PushMessageToGroup(const struct FGuid& GroupId, struct Fcoordination_message* coordination_message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.PushMessageToGroup");

	Uai_coordination_manager_bpc_C_PushMessageToGroup_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (coordination_message != nullptr)
		*coordination_message = params.coordination_message;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveClaimByType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<Ecoordination_message_type> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::RemoveClaimByType(const struct FGuid& GroupId, TEnumAsByte<Ecoordination_message_type> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.RemoveClaimByType");

	Uai_coordination_manager_bpc_C_RemoveClaimByType_Params params;
	params.GroupId = GroupId;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindIndexOfClaim
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GroupIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ecoordination_message_type> TaskType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClaimIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::FindIndexOfClaim(int GroupIndex, TEnumAsByte<Ecoordination_message_type> TaskType, int* ClaimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindIndexOfClaim");

	Uai_coordination_manager_bpc_C_FindIndexOfClaim_Params params;
	params.GroupIndex = GroupIndex;
	params.TaskType = TaskType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClaimIndex != nullptr)
		*ClaimIndex = params.ClaimIndex;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ClaimExists
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<Ecoordination_message_type> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClaimExists                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::ClaimExists(const struct FGuid& GroupId, TEnumAsByte<Ecoordination_message_type> Type, bool* ClaimExists)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ClaimExists");

	Uai_coordination_manager_bpc_C_ClaimExists_Params params;
	params.GroupId = GroupId;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClaimExists != nullptr)
		*ClaimExists = params.ClaimExists;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.AddClaim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uai_coordination_agent_bpc_C* ClaimingAgent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ecoordination_message_type> ClaimedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::AddClaim(class Uai_coordination_agent_bpc_C* ClaimingAgent, TEnumAsByte<Ecoordination_message_type> ClaimedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.AddClaim");

	Uai_coordination_manager_bpc_C_AddClaim_Params params;
	params.ClaimingAgent = ClaimingAgent;
	params.ClaimedType = ClaimedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindFirstIndexOfAgent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uai_coordination_agent_bpc_C* Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GroupIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AgentIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::FindFirstIndexOfAgent(class Uai_coordination_agent_bpc_C* Agent, int* GroupIndex, int* AgentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindFirstIndexOfAgent");

	Uai_coordination_manager_bpc_C_FindFirstIndexOfAgent_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroupIndex != nullptr)
		*GroupIndex = params.GroupIndex;
	if (AgentIndex != nullptr)
		*AgentIndex = params.AgentIndex;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.AddAgentToGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uai_coordination_agent_bpc_C* Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uai_coordination_manager_bpc_C::AddAgentToGroup(class Uai_coordination_agent_bpc_C* Agent, const struct FGuid& GroupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.AddAgentToGroup");

	Uai_coordination_manager_bpc_C_AddAgentToGroup_Params params;
	params.Agent = Agent;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.GetGroupMembers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<class Uai_coordination_agent_bpc_C*> Agents                         (Parm, OutParm, ZeroConstructor)

void Uai_coordination_manager_bpc_C::GetGroupMembers(const struct FGuid& GroupId, TArray<class Uai_coordination_agent_bpc_C*>* Agents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.GetGroupMembers");

	Uai_coordination_manager_bpc_C_GetGroupMembers_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Agents != nullptr)
		*Agents = params.Agents;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindIndexOfGroup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::FindIndexOfGroup(const struct FGuid& GroupId, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.FindIndexOfGroup");

	Uai_coordination_manager_bpc_C_FindIndexOfGroup_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.CreateAgentGroup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Rules                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   GroupGUID                      (Parm, OutParm, IsPlainOldData)

void Uai_coordination_manager_bpc_C::CreateAgentGroup(TArray<class UClass*>* Rules, struct FGuid* GroupGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.CreateAgentGroup");

	Uai_coordination_manager_bpc_C_CreateAgentGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rules != nullptr)
		*Rules = params.Rules;
	if (GroupGUID != nullptr)
		*GroupGUID = params.GroupGUID;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ReceiveTick");

	Uai_coordination_manager_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uai_coordination_manager_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ReceiveBeginPlay");

	Uai_coordination_manager_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.UpdateGroups
// (BlueprintCallable, BlueprintEvent)

void Uai_coordination_manager_bpc_C::UpdateGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.UpdateGroups");

	Uai_coordination_manager_bpc_C_UpdateGroups_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ExecuteUbergraph_ai_coordination_manager_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_manager_bpc_C::ExecuteUbergraph_ai_coordination_manager_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.ExecuteUbergraph_ai_coordination_manager_bpc");

	Uai_coordination_manager_bpc_C_ExecuteUbergraph_ai_coordination_manager_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.TaskStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uai_coordination_manager_bpc_C::TaskStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_manager_bpc.ai_coordination_manager_bpc_C.TaskStateChanged__DelegateSignature");

	Uai_coordination_manager_bpc_C_TaskStateChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
