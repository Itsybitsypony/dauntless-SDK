#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass aoe_base_bp.aoe_base_bp_C
// 0x00D8 (0x0460 - 0x0388)
class Aaoe_base_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    p_aoe_vfx;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            SphereCollision;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Player_Size_Proxy;                                        // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Spawn_Point;                                              // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Impact_Particle_System;                                   // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AoESound_Player;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AoESound_NonPlayer;                                       // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SharedGUID;                                               // 0x03D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ShareGUIDWithOtherAoEs;                                   // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	TArray<struct FHitResult>                          HitArray;                                                 // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              debug_text_duration;                                      // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debug_hit_placement;                                      // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CameraOffsetHit;                                          // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawHitArea;                                              // 0x03FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03FF(0x0001) MISSED OFFSET
	float                                              CollisionRadius;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BuffsToApplyOnHit;                                        // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseConeCollision;                                         // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              ConeAngleDegrees;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CalculatePreciseHitLocation;                              // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDrawCollision;                                       // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableGroundDebris;                                       // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0423(0x0001) MISSED OFFSET
	int                                                DebrisIntensity;                                          // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystemToUse;                                      // 0x0428(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Audio_;                                                   // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              Audio_Delay;                                              // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_Volume;                                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       IgnoreTargetsWithTheseTags;                               // 0x0440(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass aoe_base_bp.aoe_base_bp_C");
		return ptr;
	}


	void GetPrimitiveOverlappingComponents(class UPrimitiveComponent* Primitive_Component, TArray<struct FHitResult>* HitResults);
	void GetDamageToApply(const struct FName& DamageKey, float* PhysicalDamage, float* DamageBlunt, float* DamageCutting, float* DamagePiercing, float* DamageElemental, float* DamageTrue, TArray<struct FGameplayTag>* AssetTags);
	void GetCustomDamageScale(class AActor* TargetActor, float* Scale);
	void GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName);
	void FilterHitsByConeCheck(float ConeAngleDegrees, const struct FRotator& ConeRotation, const struct FVector& ConeLocation, TArray<struct FHitResult>* HitResults, TArray<struct FHitResult>* OutHitResults);
	void OnActorHitByAoE(class AActor* HitActor);
	void GenerateSafeEmitterSpawnLocation(struct FVector* SpawnLocation, struct FRotator* SpawnRotation);
	void ReturnHitActorFromComponent(class UActorComponent* HitComponent, int Index, TArray<class UMonsterPartComponent*>* HitParts, class AActor** HitActor);
	void ReturnCollisionTypes(class UPrimitiveComponent* Primitive, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes);
	void ApplySingleHitDamage(class UShapeComponent* DamageShape, const struct FName& DamageRowName);
	void ApplyDividedDamage(class UShapeComponent* DamageShape, const struct FName& DamageRowName);
	void UserConstructionScript();
	void Play_Hit_Effects(class UParticleSystem* Particle_System_To_Spawn, const struct FVector& World_Location);
	void DrawDebugCollision();
	void DrawDebugLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color);
	void ReceiveBeginPlay();
	void DrawDebugSphere();
	void ExecuteUbergraph_aoe_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
