#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_add_buffs_to_attacks_ns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass add_buffs_to_attacks_ns.add_buffs_to_attacks_ns_C
// 0x00D8 (0x0108 - 0x0030)
class Uadd_buffs_to_attacks_ns_C : public UAnimNotifyState
{
public:
	TArray<class UClass*>                              BuffsToAddOnHit;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0040(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass add_buffs_to_attacks_ns.add_buffs_to_attacks_ns_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
