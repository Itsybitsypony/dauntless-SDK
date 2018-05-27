#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_end_montage_from_loco_state_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass end_montage_from_loco_state_bpns.end_montage_from_loco_state_bpns_C
// 0x0001 (0x0031 - 0x0030)
class Uend_montage_from_loco_state_bpns_C : public UAnimNotifyState
{
public:
	TEnumAsByte<ELocomotionState>                      NotEqualTo;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass end_montage_from_loco_state_bpns.end_montage_from_loco_state_bpns_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
