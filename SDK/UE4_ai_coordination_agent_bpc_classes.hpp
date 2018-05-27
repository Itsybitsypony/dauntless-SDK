#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_coordination_agent_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ai_coordination_agent_bpc.ai_coordination_agent_bpc_C
// 0x0049 (0x0219 - 0x01D0)
class Uai_coordination_agent_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	struct FGuid                                       MainGroupID;                                              // 0x01D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceFromGroupMembers;                              // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugEnabled;                                             // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	TArray<struct Fcoordination_message>               MessageQueue;                                             // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MinDistanceBetweenBehemoths;                              // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0204(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstantMessageReceived;                                 // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CoordinationEnabled;                                      // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ai_coordination_agent_bpc.ai_coordination_agent_bpc_C");
		return ptr;
	}


	void AllowExecutionOfRules(bool* AllowExecutionOfRules);
	void ClearPendingMessagesOfType(TEnumAsByte<Ecoordination_message_type> MessageType);
	void AddMessage(const struct Fcoordination_message& Message);
	void AddInstantMessage(const struct Fcoordination_message& Message);
	void DebugPrintMessage(float Duration, const struct FLinearColor& TextColor, struct Fcoordination_message* coordination_message);
	void GetMessages(TArray<struct Fcoordination_message>* Messages);
	void AddDeferredMessage(const struct Fcoordination_message& Message);
	void ConsumeNextMessage();
	void GetNextMessage(bool* MessageExists, struct Fcoordination_message* TopMessage);
	void GetAllies(TArray<class AActor*>* Allies);
	void Initialize(const struct FGuid& GroupId);
	void GetAICoordinationManager(class Uai_coordination_manager_bpc_C** AICoordinationManager);
	void CheckDistanceFromGroupMembers();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ai_coordination_agent_bpc(int EntryPoint);
	void OnInstantMessageReceived__DelegateSignature(const struct Fcoordination_message& InstantMessage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
