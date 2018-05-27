#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_override_weapon_ability_dmgrow_ns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass override_weapon_ability_dmgrow_ns.override_weapon_ability_dmgrow_ns_C
// 0x0008 (0x0038 - 0x0030)
class Uoverride_weapon_ability_dmgrow_ns_C : public UAnimNotifyState
{
public:
	struct FName                                       DamageRowOverride;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass override_weapon_ability_dmgrow_ns.override_weapon_ability_dmgrow_ns_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
