#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_timed_particle_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass archon_timed_particle_bp.archon_timed_particle_bp_C
// 0x00CB (0x0143 - 0x0078)
class Uarchon_timed_particle_bp_C : public UArchonTimedParticleEffect
{
public:
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0078(0x00C8) (Edit, BlueprintVisible)
	struct Fplayer_requirements_str                    PlayerRequirements;                                       // 0x0140(0x0002) (Edit, BlueprintVisible)
	bool                                               PlayOnDisabledPart;                                       // 0x0142(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass archon_timed_particle_bp.archon_timed_particle_bp_C");
		return ptr;
	}


	bool ShouldSpawnParticle(class USkeletalMeshComponent** MeshComp);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
