#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_projectile_raw_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ms_projectile_raw_bp.ms_projectile_raw_bp_C
// 0x0008 (0x06E0 - 0x06D8)
class Ams_projectile_raw_bp_C : public Ams_projectile_base_bp_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ms_projectile_raw_bp.ms_projectile_raw_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
