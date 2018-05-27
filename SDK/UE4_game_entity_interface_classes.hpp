#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_game_entity_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass game_entity_interface.game_entity_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ugame_entity_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass game_entity_interface.game_entity_interface_C");
		return ptr;
	}


	void CanHitCBPushPullTarget(bool* Hits_);
	void GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType);
	void GetLookAtAlpha(float* LookAtAlpha);
	void GetLookAtVector(struct FVector* LookAtVector);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
