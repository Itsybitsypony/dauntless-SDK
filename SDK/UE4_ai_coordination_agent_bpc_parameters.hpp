#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_coordination_agent_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AllowExecutionOfRules
struct Uai_coordination_agent_bpc_C_AllowExecutionOfRules_Params
{
	bool                                               AllowExecutionOfRules;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ClearPendingMessagesOfType
struct Uai_coordination_agent_bpc_C_ClearPendingMessagesOfType_Params
{
	TEnumAsByte<Ecoordination_message_type>            MessageType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddMessage
struct Uai_coordination_agent_bpc_C_AddMessage_Params
{
	struct Fcoordination_message                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddInstantMessage
struct Uai_coordination_agent_bpc_C_AddInstantMessage_Params
{
	struct Fcoordination_message                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.DebugPrintMessage
struct Uai_coordination_agent_bpc_C_DebugPrintMessage_Params
{
	struct Fcoordination_message                       coordination_message;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetMessages
struct Uai_coordination_agent_bpc_C_GetMessages_Params
{
	TArray<struct Fcoordination_message>               Messages;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddDeferredMessage
struct Uai_coordination_agent_bpc_C_AddDeferredMessage_Params
{
	struct Fcoordination_message                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ConsumeNextMessage
struct Uai_coordination_agent_bpc_C_ConsumeNextMessage_Params
{
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetNextMessage
struct Uai_coordination_agent_bpc_C_GetNextMessage_Params
{
	bool                                               MessageExists;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct Fcoordination_message                       TopMessage;                                               // (Parm, OutParm)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetAllies
struct Uai_coordination_agent_bpc_C_GetAllies_Params
{
	TArray<class AActor*>                              Allies;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.Initialize
struct Uai_coordination_agent_bpc_C_Initialize_Params
{
	struct FGuid                                       GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetAICoordinationManager
struct Uai_coordination_agent_bpc_C_GetAICoordinationManager_Params
{
	class Uai_coordination_manager_bpc_C*              AICoordinationManager;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.CheckDistanceFromGroupMembers
struct Uai_coordination_agent_bpc_C_CheckDistanceFromGroupMembers_Params
{
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ReceiveTick
struct Uai_coordination_agent_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ReceiveBeginPlay
struct Uai_coordination_agent_bpc_C_ReceiveBeginPlay_Params
{
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ExecuteUbergraph_ai_coordination_agent_bpc
struct Uai_coordination_agent_bpc_C_ExecuteUbergraph_ai_coordination_agent_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.OnInstantMessageReceived__DelegateSignature
struct Uai_coordination_agent_bpc_C_OnInstantMessageReceived__DelegateSignature_Params
{
	struct Fcoordination_message                       InstantMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
