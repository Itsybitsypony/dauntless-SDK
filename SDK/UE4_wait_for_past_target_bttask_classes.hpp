#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wait_for_past_target_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wait_for_past_target_bttask.wait_for_past_target_bttask_C
// 0x0080 (0x0120 - 0x00A0)
class Uwait_for_past_target_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<Ewait_for_blackboard_type>             TimeWaitType;                                             // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              MaximumTimeToWait;                                        // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeStamp;                                           // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInFutureToPredictTargetPos;                           // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConditionsAreTrue;                                        // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FVector                                     L_TargetPos;                                              // 0x00E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToTargetToEndEarly;                               // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             OffsetLocationsToNavTest;                                 // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CollisionTest_XLenght;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TurnQueued;                                               // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	float                                              TimeAfterPassingTargetToStop;                             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FTimerHandle                                L_TurnQuee;                                               // 0x0118(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wait_for_past_target_bttask.wait_for_past_target_bttask_C");
		return ptr;
	}


	void WillCollideWithTerrain(class AActor* ParentActor, bool* ShouldStop);
	void IsPastTarget(class APawn* Pawn, const struct FVector& TargetPos, bool* PastTarget, bool* GoingToCollide);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void QueuedTurn();
	void Finish(bool Success);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_wait_for_past_target_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
