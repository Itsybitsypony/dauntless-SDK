#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vfx_and_sound_bpfl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass vfx_and_sound_bpfl.vfx_and_sound_bpfl_C
// 0x0000 (0x0028 - 0x0028)
class Uvfx_and_sound_bpfl_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass vfx_and_sound_bpfl.vfx_and_sound_bpfl_C");
		return ptr;
	}


	void STATIC_SpawnGroundDebris(const struct FVector& StaticLocation, int DebrisIntensity, class UObject* __WorldContext);
	void STATIC_GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, class UObject* __WorldContext, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName);
	struct FName STATIC_ExtractSwitchFromTags(const struct FGameplayTagContainer& Tag_Container, class UObject* __WorldContext, TArray<struct FGameplayTag>* Array);
	void STATIC_GetWeaponHitLocationAndDirection(const struct FGameplayTagContainer& Tags, class AArchonCharacter* Attacker, const struct FHitResult& HitInfo, class UObject* __WorldContext, struct FVector* Location, struct FRotator* Rotation);
	void STATIC_Debris_VFX_and_Sound_Trigger(class USkeletalMeshComponent* Skeletal_Mesh, const struct FName& Socket_Name, const struct FVector& Velocity_Vector, bool Is_High, class AActor* Actor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
