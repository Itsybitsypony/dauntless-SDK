#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_beam_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ms_beam_base_bp.ms_beam_base_bp_C
// 0x0027 (0x0618 - 0x05F1)
class Ams_beam_base_bp_C : public Abase_beam_bp_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    source_particle;                                          // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    particle_system_beam;                                     // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        InsideMesh;                                               // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MiddleMesh;                                               // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ms_beam_base_bp.ms_beam_base_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
