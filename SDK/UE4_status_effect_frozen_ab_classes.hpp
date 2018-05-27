#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_status_effect_frozen_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass status_effect_frozen_ab.status_effect_frozen_ab_C
// 0x0018 (0x05A8 - 0x0590)
class Ustatus_effect_frozen_ab_C : public Ustatus_effect_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	float                                              Duration;                                                 // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class Aplayer_frozen_iceblock_bp_C*                SpawnedIceBlock;                                          // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass status_effect_frozen_ab.status_effect_frozen_ab_C");
		return ptr;
	}


	void OnCancelled_66B25C5F40C7908344367EBF62A9A9A2();
	void OnInterrupted_66B25C5F40C7908344367EBF62A9A9A2();
	void OnBlendOut_66B25C5F40C7908344367EBF62A9A9A2();
	void OnCompleted_66B25C5F40C7908344367EBF62A9A9A2();
	void OnFinish_6F0682724B3933C242A5C384D1AB3BD0();
	void DidNotSpawn_885F3C144D1284316C847A8D5628354D(class AActor* SpawnedActor);
	void Success_885F3C144D1284316C847A8D5628354D(class AActor* SpawnedActor);
	void K2_OnEndAbility();
	void ServerOnIceBlockDestroyed();
	void OnIceBlockDestroyed();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_status_effect_frozen_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
