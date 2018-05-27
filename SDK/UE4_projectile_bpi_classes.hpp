#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass projectile_bpi.projectile_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Uprojectile_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass projectile_bpi.projectile_bpi_C");
		return ptr;
	}


	void UpdateParticlePosition(float DeltaSeconds, class Aprojectile_base_bp_C* ProjectileActor, struct FVector* Position, struct FRotator* Rotation);
	void SetProjectileMovementType(TEnumAsByte<Eprojectile_movement_type> NewMovementType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
