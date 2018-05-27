#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interruptable_looping_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass interruptable_looping_bttask.interruptable_looping_bttask_C
// 0x0094 (0x0134 - 0x00A0)
class Uinterruptable_looping_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoopMontageUntilState>                TaskState;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              TimeLimit;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimeoutHandle;                                            // 0x00B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UNetworkedMontageComponent*                  MontageComp;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimInstance*                               AnimInstance;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExitSection;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fblackboard_comparison_and_name             BlackboardComparisonSection;                              // 0x00D8(0x0058) (Edit, BlueprintVisible)
	float                                              PlayRate;                                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interruptable_looping_bttask.interruptable_looping_bttask_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void MontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void EndTask(bool Succeeded);
	void ExitMontage();
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void StopLooping();
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ExecuteUbergraph_interruptable_looping_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
