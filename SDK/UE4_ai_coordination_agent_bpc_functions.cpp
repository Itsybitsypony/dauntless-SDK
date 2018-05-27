// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_coordination_agent_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AllowExecutionOfRules
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           AllowExecutionOfRules          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_agent_bpc_C::AllowExecutionOfRules(bool* AllowExecutionOfRules)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AllowExecutionOfRules");

	Uai_coordination_agent_bpc_C_AllowExecutionOfRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowExecutionOfRules != nullptr)
		*AllowExecutionOfRules = params.AllowExecutionOfRules;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ClearPendingMessagesOfType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ecoordination_message_type> MessageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_agent_bpc_C::ClearPendingMessagesOfType(TEnumAsByte<Ecoordination_message_type> MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ClearPendingMessagesOfType");

	Uai_coordination_agent_bpc_C_ClearPendingMessagesOfType_Params params;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uai_coordination_agent_bpc_C::AddMessage(const struct Fcoordination_message& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddMessage");

	Uai_coordination_agent_bpc_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddInstantMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uai_coordination_agent_bpc_C::AddInstantMessage(const struct Fcoordination_message& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddInstantMessage");

	Uai_coordination_agent_bpc_C_AddInstantMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.DebugPrintMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   coordination_message           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uai_coordination_agent_bpc_C::DebugPrintMessage(float Duration, const struct FLinearColor& TextColor, struct Fcoordination_message* coordination_message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.DebugPrintMessage");

	Uai_coordination_agent_bpc_C_DebugPrintMessage_Params params;
	params.Duration = Duration;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (coordination_message != nullptr)
		*coordination_message = params.coordination_message;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetMessages
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fcoordination_message> Messages                       (Parm, OutParm, ZeroConstructor)

void Uai_coordination_agent_bpc_C::GetMessages(TArray<struct Fcoordination_message>* Messages)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetMessages");

	Uai_coordination_agent_bpc_C_GetMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddDeferredMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uai_coordination_agent_bpc_C::AddDeferredMessage(const struct Fcoordination_message& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.AddDeferredMessage");

	Uai_coordination_agent_bpc_C_AddDeferredMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ConsumeNextMessage
// (Public, BlueprintCallable, BlueprintEvent)

void Uai_coordination_agent_bpc_C::ConsumeNextMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ConsumeNextMessage");

	Uai_coordination_agent_bpc_C_ConsumeNextMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetNextMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MessageExists                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct Fcoordination_message   TopMessage                     (Parm, OutParm)

void Uai_coordination_agent_bpc_C::GetNextMessage(bool* MessageExists, struct Fcoordination_message* TopMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetNextMessage");

	Uai_coordination_agent_bpc_C_GetNextMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageExists != nullptr)
		*MessageExists = params.MessageExists;
	if (TopMessage != nullptr)
		*TopMessage = params.TopMessage;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetAllies
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Allies                         (Parm, OutParm, ZeroConstructor)

void Uai_coordination_agent_bpc_C::GetAllies(TArray<class AActor*>* Allies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetAllies");

	Uai_coordination_agent_bpc_C_GetAllies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allies != nullptr)
		*Allies = params.Allies;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   GroupId                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uai_coordination_agent_bpc_C::Initialize(const struct FGuid& GroupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.Initialize");

	Uai_coordination_agent_bpc_C_Initialize_Params params;
	params.GroupId = GroupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetAICoordinationManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class Uai_coordination_manager_bpc_C* AICoordinationManager          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_agent_bpc_C::GetAICoordinationManager(class Uai_coordination_manager_bpc_C** AICoordinationManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.GetAICoordinationManager");

	Uai_coordination_agent_bpc_C_GetAICoordinationManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AICoordinationManager != nullptr)
		*AICoordinationManager = params.AICoordinationManager;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.CheckDistanceFromGroupMembers
// (BlueprintCallable, BlueprintEvent)

void Uai_coordination_agent_bpc_C::CheckDistanceFromGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.CheckDistanceFromGroupMembers");

	Uai_coordination_agent_bpc_C_CheckDistanceFromGroupMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_agent_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ReceiveTick");

	Uai_coordination_agent_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uai_coordination_agent_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ReceiveBeginPlay");

	Uai_coordination_agent_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ExecuteUbergraph_ai_coordination_agent_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uai_coordination_agent_bpc_C::ExecuteUbergraph_ai_coordination_agent_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.ExecuteUbergraph_ai_coordination_agent_bpc");

	Uai_coordination_agent_bpc_C_ExecuteUbergraph_ai_coordination_agent_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.OnInstantMessageReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   InstantMessage                 (BlueprintVisible, BlueprintReadOnly, Parm)

void Uai_coordination_agent_bpc_C::OnInstantMessageReceived__DelegateSignature(const struct Fcoordination_message& InstantMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_coordination_agent_bpc.ai_coordination_agent_bpc_C.OnInstantMessageReceived__DelegateSignature");

	Uai_coordination_agent_bpc_C_OnInstantMessageReceived__DelegateSignature_Params params;
	params.InstantMessage = InstantMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
