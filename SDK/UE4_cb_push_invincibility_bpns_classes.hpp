#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cb_push_invincibility_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cb_push_invincibility_bpns.cb_push_invincibility_bpns_C
// 0x0004 (0x0044 - 0x0040)
class Ucb_push_invincibility_bpns_C : public UNotify_Invincibility_C
{
public:
	float                                              DurationScale;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cb_push_invincibility_bpns.cb_push_invincibility_bpns_C");
		return ptr;
	}


	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
