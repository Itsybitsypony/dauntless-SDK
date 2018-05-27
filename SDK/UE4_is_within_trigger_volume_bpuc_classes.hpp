#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_is_within_trigger_volume_bpuc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass is_within_trigger_volume_bpuc.is_within_trigger_volume_bpuc_C
// 0x0018 (0x0050 - 0x0038)
class Uis_within_trigger_volume_bpuc_C : public UUnlockCondition_Blueprint
{
public:
	class AActor*                                      TriggerVolume;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              TriggerVolumeNames;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass is_within_trigger_volume_bpuc.is_within_trigger_volume_bpuc_C");
		return ptr;
	}


	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
