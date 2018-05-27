#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_statemanager_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetTimeUntilStateChange
struct Ubehemoth_statemanager_bpc_C_GetTimeUntilStateChange_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WaitingForStateChange;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.AlterTimeOfPersistantStateChange
struct Ubehemoth_statemanager_bpc_C_AlterTimeOfPersistantStateChange_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 StateToChange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaChange;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundAStateChange;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NewTimeUntilFinish;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetStateDelayIndex
struct Ubehemoth_statemanager_bpc_C_GetStateDelayIndex_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.SetStateDelayIndex
struct Ubehemoth_statemanager_bpc_C_SetStateDelayIndex_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.CheckStateChangeValidity
struct Ubehemoth_statemanager_bpc_C_CheckStateChangeValidity_Params
{
	struct Fbehemoth_state_conditions                  Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<Ebehemoth_states_enum>                 Trigger_State;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_states_enum>                 StateThatFailed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estatemanager_check_result>            Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.RemoveQueuedStateChanges
struct Ubehemoth_statemanager_bpc_C_RemoveQueuedStateChanges_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.IncrementStateDelayIndex
struct Ubehemoth_statemanager_bpc_C_IncrementStateDelayIndex_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ThrowDuplicateRuleError
struct Ubehemoth_statemanager_bpc_C_ThrowDuplicateRuleError_Params
{
	class FString                                      Base_Error_Text;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 StateEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.GetIndexOfStateChange
struct Ubehemoth_statemanager_bpc_C_GetIndexOfStateChange_Params
{
	TArray<struct Fbehemoth_state_conditions>          ConditionArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 StateEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ReceiveBeginPlay
struct Ubehemoth_statemanager_bpc_C_ReceiveBeginPlay_Params
{
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ReceiveTick
struct Ubehemoth_statemanager_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.AuthOnStateChanged_Event_1
struct Ubehemoth_statemanager_bpc_C_AuthOnStateChanged_Event_1_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 What_Happened;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_statemanager_bpc.behemoth_statemanager_bpc_C.ExecuteUbergraph_behemoth_statemanager_bpc
struct Ubehemoth_statemanager_bpc_C_ExecuteUbergraph_behemoth_statemanager_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
