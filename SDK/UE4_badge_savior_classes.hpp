#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_badge_savior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass badge_savior.badge_savior_C
// 0x0000 (0x0410 - 0x0410)
class Abadge_savior_C : public Abadge_base_bp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass badge_savior.badge_savior_C");
		return ptr;
	}


	void GetSpecificBadgeScore(class Aplayer_state_bp_C** PlayerState, bool* HitBadgeThreshold, float* ImpressivenessScore, TEnumAsByte<Ebadge_elite_status>* EliteLevel);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif