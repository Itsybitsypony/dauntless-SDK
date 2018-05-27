#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_turn_warp_to_attacker_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass turn_warp_to_attacker_bpns.turn_warp_to_attacker_bpns_C
// 0x000D (0x0055 - 0x0048)
class Uturn_warp_to_attacker_bpns_C : public UTurnWarpWindowNotify
{
public:
	struct FRotator                                    RotationOffset;                                           // 0x0048(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableDebug;                                              // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass turn_warp_to_attacker_bpns.turn_warp_to_attacker_bpns_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
