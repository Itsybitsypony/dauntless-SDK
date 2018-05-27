#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_HealingPylon_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HealingPylon_01.BP_HealingPylon_01_C
// 0x0008 (0x03E0 - 0x03D8)
class ABP_HealingPylon_01_C : public ABP_BasePylon_C
{
public:
	class UParticleSystemComponent*                    SpawnedLoopingParticle_1;                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HealingPylon_01.BP_HealingPylon_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
