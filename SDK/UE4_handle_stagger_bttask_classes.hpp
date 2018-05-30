#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_handle_stagger_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass handle_stagger_bttask.handle_stagger_bttask_C
// 0x0060 (0x0100 - 0x00A0)
class Uhandle_stagger_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct Fstagger_instance                           CurrentStaggerInstance;                                   // 0x00A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                ChosenMontage;                                            // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimInstance*                               AnimInstanceRef;                                          // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       Owner;                                                    // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMontageIndex;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        MontageSequence;                                          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass handle_stagger_bttask.handle_stagger_bttask_C");
		return ptr;
	}


	void PickBestStagger(TArray<struct Fstagger_option>* StaggerOptions, int* BestIndex);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void Cleanup(bool ClearStaggerCount);
	void PlayMontage(class UAnimMontage* Montage);
	void ExecuteUbergraph_handle_stagger_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
