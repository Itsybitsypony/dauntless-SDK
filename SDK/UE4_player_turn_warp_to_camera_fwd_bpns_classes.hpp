#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_turn_warp_to_camera_fwd_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_turn_warp_to_camera_fwd_bpns.player_turn_warp_to_camera_fwd_bpns_C
// 0x0000 (0x0048 - 0x0048)
class Uplayer_turn_warp_to_camera_fwd_bpns_C : public UTurnWarpWindowNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_turn_warp_to_camera_fwd_bpns.player_turn_warp_to_camera_fwd_bpns_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
