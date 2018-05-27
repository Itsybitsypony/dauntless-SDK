#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_coordination_manager_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ai_coordination_manager_bpc.ai_coordination_manager_bpc_C
// 0x004C (0x021C - 0x01D0)
class Uai_coordination_manager_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fai_agent_group>                     AgentGroups;                                              // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TaskStateChanged;                                         // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               DebugEnabled;                                             // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	TArray<class Uai_coordination_agent_bpc_C*>        LocalAgents;                                              // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Uai_coordination_agent_bpc_C*                L_BestAgent;                                              // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L_BestDistSqr;                                            // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ai_coordination_manager_bpc.ai_coordination_manager_bpc_C");
		return ptr;
	}


	void RemoveAgentFromGroup(class Uai_coordination_agent_bpc_C* Agent, const struct FGuid& GroupId);
	void RemoveClaimsByAgent(const struct FGuid& GroupId, class Uai_coordination_agent_bpc_C* Agent);
	void ClearPendingMessagesOfType(TEnumAsByte<Ecoordination_message_type> MessageType, const struct FGuid& GroupId);
	void GetMessageTargets(const struct Fcoordination_message& Message, const struct FGuid& GroupId, TArray<class Uai_coordination_agent_bpc_C*>* Agents);
	void PushMessageToGroup(const struct FGuid& GroupId, struct Fcoordination_message* coordination_message);
	void RemoveClaimByType(const struct FGuid& GroupId, TEnumAsByte<Ecoordination_message_type> Type);
	void FindIndexOfClaim(int GroupIndex, TEnumAsByte<Ecoordination_message_type> TaskType, int* ClaimIndex);
	void ClaimExists(const struct FGuid& GroupId, TEnumAsByte<Ecoordination_message_type> Type, bool* ClaimExists);
	void AddClaim(class Uai_coordination_agent_bpc_C* ClaimingAgent, TEnumAsByte<Ecoordination_message_type> ClaimedType);
	void FindFirstIndexOfAgent(class Uai_coordination_agent_bpc_C* Agent, int* GroupIndex, int* AgentIndex);
	void AddAgentToGroup(class Uai_coordination_agent_bpc_C* Agent, const struct FGuid& GroupId);
	void GetGroupMembers(const struct FGuid& GroupId, TArray<class Uai_coordination_agent_bpc_C*>* Agents);
	void FindIndexOfGroup(const struct FGuid& GroupId, int* Index);
	void CreateAgentGroup(TArray<class UClass*>* Rules, struct FGuid* GroupGUID);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateGroups();
	void ExecuteUbergraph_ai_coordination_manager_bpc(int EntryPoint);
	void TaskStateChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
