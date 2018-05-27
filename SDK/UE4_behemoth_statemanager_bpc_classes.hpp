#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_statemanager_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_statemanager_bpc.behemoth_statemanager_bpc_C
// 0x0051 (0x0221 - 0x01D0)
class Ubehemoth_statemanager_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fbehemoth_state_description>         StateInfos;                                               // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABp_Behemoth_C*                              OwningBehemoth;                                           // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                L_FoundEntry;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                L_FoundCancel;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fbehemoth_statemanager_timedevent>   DesiredStateChanges;                                      // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fbehemoth_state_int_pair>            DelayScalingIndex;                                        // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Estatemanager_enter_or_cancel>         L_EnterOrCancel;                                          // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowDebugInfo;                                            // 0x0219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x021A(0x0002) MISSED OFFSET
	int                                                DesiredStateChangeIndex;                                  // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               L_FoundDuplicate;                                         // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_statemanager_bpc.behemoth_statemanager_bpc_C");
		return ptr;
	}


	void GetTimeUntilStateChange(TEnumAsByte<Ebehemoth_states_enum> State, bool* WaitingForStateChange, float* TotalDuration, float* RemainingTime);
	void AlterTimeOfPersistantStateChange(TEnumAsByte<Ebehemoth_states_enum> StateToChange, float DeltaChange, bool* FoundAStateChange, float* NewTimeUntilFinish);
	void GetStateDelayIndex(TEnumAsByte<Ebehemoth_states_enum> State, int* Index);
	void SetStateDelayIndex(TEnumAsByte<Ebehemoth_states_enum> State, int Value);
	void CheckStateChangeValidity(const struct Fbehemoth_state_conditions& Condition, TEnumAsByte<Ebehemoth_states_enum> Trigger_State, TEnumAsByte<Ebehemoth_states_enum>* StateThatFailed, TEnumAsByte<Estatemanager_check_result>* Result);
	void RemoveQueuedStateChanges(TEnumAsByte<Ebehemoth_states_enum> State);
	void IncrementStateDelayIndex(TEnumAsByte<Ebehemoth_states_enum> State);
	void ThrowDuplicateRuleError(const class FString& Base_Error_Text, TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateEvent);
	void GetIndexOfStateChange(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateEvent, TArray<struct Fbehemoth_state_conditions>* ConditionArray, int* FoundIndex);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void AuthOnStateChanged_Event_1(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> What_Happened);
	void ExecuteUbergraph_behemoth_statemanager_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
