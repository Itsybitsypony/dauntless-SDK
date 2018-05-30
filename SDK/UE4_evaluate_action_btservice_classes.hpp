#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_evaluate_action_btservice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass evaluate_action_btservice.evaluate_action_btservice_C
// 0x0098 (0x0130 - 0x0098)
class Uevaluate_action_btservice_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      AttackTargetKey;                                          // 0x00A0(0x0028) (Edit, BlueprintVisible)
	class ABP_BehemothAction_C*                        CurrentAction;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      TopScoreKey;                                              // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ChosenActionKey;                                          // 0x00F8(0x0028) (Edit, BlueprintVisible)
	float                                              TopScore;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class ABP_BehemothAction_C*                        TopAction;                                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass evaluate_action_btservice.evaluate_action_btservice_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_evaluate_action_btservice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
