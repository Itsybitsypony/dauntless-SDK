#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawn_projectile_class_bpn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass spawn_projectile_class_bpn.spawn_projectile_class_bpn_C
// 0x0118 (0x0150 - 0x0038)
class Uspawn_projectile_class_bpn_C : public UAnimNotify
{
public:
	struct Fprojectile_data_struct                     ProjectileData;                                           // 0x0038(0x0048) (Edit, BlueprintVisible)
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0080(0x00C8) (Edit, BlueprintVisible)
	struct FName                                       BoneName;                                                 // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass spawn_projectile_class_bpn.spawn_projectile_class_bpn_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
