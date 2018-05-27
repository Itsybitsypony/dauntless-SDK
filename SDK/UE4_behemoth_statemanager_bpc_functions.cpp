// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_statemanager_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetTimeUntilStateChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WaitingForStateChange          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::GetTimeUntilStateChange(TEnumAsByte<Ebehemoth_states_enum> State, bool* WaitingForStateChange, float* TotalDuration, float* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetTimeUntilStateChange");

	Ubehemoth_statemanager_bpc_C_GetTimeUntilStateChange_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitingForStateChange != nullptr)
		*WaitingForStateChange = params.WaitingForStateChange;
	if (TotalDuration != nullptr)
		*TotalDuration = params.TotalDuration;
	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.AlterTimeOfPersistantStateChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> StateToChange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaChange                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundAStateChange              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NewTimeUntilFinish             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::AlterTimeOfPersistantStateChange(TEnumAsByte<Ebehemoth_states_enum> StateToChange, float DeltaChange, bool* FoundAStateChange, float* NewTimeUntilFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.AlterTimeOfPersistantStateChange");

	Ubehemoth_statemanager_bpc_C_AlterTimeOfPersistantStateChange_Params params;
	params.StateToChange = StateToChange;
	params.DeltaChange = DeltaChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundAStateChange != nullptr)
		*FoundAStateChange = params.FoundAStateChange;
	if (NewTimeUntilFinish != nullptr)
		*NewTimeUntilFinish = params.NewTimeUntilFinish;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetStateDelayIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::GetStateDelayIndex(TEnumAsByte<Ebehemoth_states_enum> State, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetStateDelayIndex");

	Ubehemoth_statemanager_bpc_C_GetStateDelayIndex_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.SetStateDelayIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::SetStateDelayIndex(TEnumAsByte<Ebehemoth_states_enum> State, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.SetStateDelayIndex");

	Ubehemoth_statemanager_bpc_C_SetStateDelayIndex_Params params;
	params.State = State;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.CheckStateChangeValidity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbehemoth_state_conditions Condition                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<Ebehemoth_states_enum> Trigger_State                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_states_enum> StateThatFailed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estatemanager_check_result> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::CheckStateChangeValidity(const struct Fbehemoth_state_conditions& Condition, TEnumAsByte<Ebehemoth_states_enum> Trigger_State, TEnumAsByte<Ebehemoth_states_enum>* StateThatFailed, TEnumAsByte<Estatemanager_check_result>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.CheckStateChangeValidity");

	Ubehemoth_statemanager_bpc_C_CheckStateChangeValidity_Params params;
	params.Condition = Condition;
	params.Trigger_State = Trigger_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateThatFailed != nullptr)
		*StateThatFailed = params.StateThatFailed;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.RemoveQueuedStateChanges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::RemoveQueuedStateChanges(TEnumAsByte<Ebehemoth_states_enum> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.RemoveQueuedStateChanges");

	Ubehemoth_statemanager_bpc_C_RemoveQueuedStateChanges_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.IncrementStateDelayIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::IncrementStateDelayIndex(TEnumAsByte<Ebehemoth_states_enum> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.IncrementStateDelayIndex");

	Ubehemoth_statemanager_bpc_C_IncrementStateDelayIndex_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ThrowDuplicateRuleError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Base_Error_Text                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> StateEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::ThrowDuplicateRuleError(const class FString& Base_Error_Text, TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ThrowDuplicateRuleError");

	Ubehemoth_statemanager_bpc_C_ThrowDuplicateRuleError_Params params;
	params.Base_Error_Text = Base_Error_Text;
	params.State = State;
	params.StateEvent = StateEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetIndexOfStateChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbehemoth_state_conditions> ConditionArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> StateEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::GetIndexOfStateChange(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateEvent, TArray<struct Fbehemoth_state_conditions>* ConditionArray, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetIndexOfStateChange");

	Ubehemoth_statemanager_bpc_C_GetIndexOfStateChange_Params params;
	params.State = State;
	params.StateEvent = StateEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConditionArray != nullptr)
		*ConditionArray = params.ConditionArray;
	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubehemoth_statemanager_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ReceiveBeginPlay");

	Ubehemoth_statemanager_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ReceiveTick");

	Ubehemoth_statemanager_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.AuthOnStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> What_Happened                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::AuthOnStateChanged_Event_1(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> What_Happened)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.AuthOnStateChanged_Event_1");

	Ubehemoth_statemanager_bpc_C_AuthOnStateChanged_Event_1_Params params;
	params.State = State;
	params.What_Happened = What_Happened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ExecuteUbergraph_behemoth_statemanager_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_statemanager_bpc_C::ExecuteUbergraph_behemoth_statemanager_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ExecuteUbergraph_behemoth_statemanager_bpc");

	Ubehemoth_statemanager_bpc_C_ExecuteUbergraph_behemoth_statemanager_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
