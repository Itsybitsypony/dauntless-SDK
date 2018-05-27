#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_banner_plant_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass banner_plant_ab.banner_plant_ab_C
// 0x0014 (0x05A4 - 0x0590)
class Ubanner_plant_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	class Abanner_base_bp_C*                           SpawnedBannerReference;                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BannerDuration;                                           // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass banner_plant_ab.banner_plant_ab_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void DestroyActiveBanner();
	void OnCancelled_694552184707FA54A89019A60BF2ED0A();
	void OnInterrupted_694552184707FA54A89019A60BF2ED0A();
	void OnBlendOut_694552184707FA54A89019A60BF2ED0A();
	void OnCompleted_694552184707FA54A89019A60BF2ED0A();
	void DidNotSpawn_9FD3B0874A8C6B360BAF96AF82290913(class AActor* SpawnedActor);
	void Success_9FD3B0874A8C6B360BAF96AF82290913(class AActor* SpawnedActor);
	void OnLoaded_4614AC24450C5A4181285C8787F0B689(class UObject* Loaded);
	void K2_ActivateAbility();
	void OnAnimInterrupted();
	void ExecuteUbergraph_banner_plant_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
