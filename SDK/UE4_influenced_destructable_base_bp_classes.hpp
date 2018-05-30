#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_influenced_destructable_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass influenced_destructable_base_bp.influenced_destructable_base_bp_C
// 0x0034 (0x03BC - 0x0388)
class Ainfluenced_destructable_base_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           InfluenceTester;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                InfluencerEvaluateTimer;                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>                 Influencers;                                              // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              EvaluationRateInSeconds;                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass influenced_destructable_base_bp.influenced_destructable_base_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Evaluate();
	void BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnInfluencerAdded(class UPrimitiveComponent* InfluencerComponent, class AActor* InfluencerActor);
	void OnInfluencerRemoved(class UPrimitiveComponent* InfluencerComponent, class AActor* InfluencerActor);
	void ExecuteUbergraph_influenced_destructable_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
