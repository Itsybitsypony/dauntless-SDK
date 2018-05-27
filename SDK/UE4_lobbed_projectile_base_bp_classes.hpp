#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobbed_projectile_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lobbed_projectile_base_bp.lobbed_projectile_base_bp_C
// 0x001B (0x0668 - 0x064D)
class Alobbed_projectile_base_bp_C : public Aprojectile_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	float                                              MinDistanceForScaling;                                    // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceForScaling;                                    // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeightAtMinDistance;                                  // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeightAtMaxDistance;                                  // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateralSpeedAtMinDistance;                                // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateralSpeedAtMaxDistance;                                // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lobbed_projectile_base_bp.lobbed_projectile_base_bp_C");
		return ptr;
	}


	void AuthInitializeLobbedProjectile(const struct FVector& Target);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
