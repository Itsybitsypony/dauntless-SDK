#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wpn_trail_spawned_vfx_bpo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wpn_trail_spawned_vfx_bpo.wpn_trail_spawned_vfx_bpo_C
// 0x0010 (0x0038 - 0x0028)
class Uwpn_trail_spawned_vfx_bpo_C : public UObject
{
public:
	TArray<class UParticleSystemComponent*>            particles;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wpn_trail_spawned_vfx_bpo.wpn_trail_spawned_vfx_bpo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
