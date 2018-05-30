#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_flytolocationsetup_bpt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass flytolocationsetup_bpt.flytolocationsetup_bpt_C
// 0x0058 (0x00F8 - 0x00A0)
class Uflytolocationsetup_bpt_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Destination;                                              // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              CurrentTime;                                              // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DestLoc;                                                  // 0x00D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Behemoth;                                                 // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USplineComponent*                            splineComp;                                               // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeScale;                                                // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyTime;                                                  // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass flytolocationsetup_bpt.flytolocationsetup_bpt_C");
		return ptr;
	}


	void MakeSpline(TArray<struct FVector>* SplinePoints, float* Speed);
	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_flytolocationsetup_bpt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
