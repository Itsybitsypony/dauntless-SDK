#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Base_FlareProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Base_FlareProjectile.BP_Base_FlareProjectile_C
// 0x00D0 (0x0458 - 0x0388)
class ABP_Base_FlareProjectile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UMarkerComponent*                            Marker;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TrailAttachPoint;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement1;                                        // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement1;                                      // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max_Rotation_Speed;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Rotation_Speed;                                       // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Launch_Velocity;                                      // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Launch_velocity;                                      // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shell_Max_Life;                                           // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shell_min_life;                                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBurstTime;                                             // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBurstTime;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionParticleTemplate;                                // 0x03D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ParticleLife;                                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurstTime;                                                // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShellTrailTemplate;                                       // 0x03E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TrailRelativeOffset;                                      // 0x03F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TrailRelativeRotation;                                    // 0x03FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    TrailEmitter;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    burst;                                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ExplosionSound;                                           // 0x0418(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Flare_Material;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    FlareTexture;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FlareColor;                                               // 0x0430(0x0010) (Edit, BlueprintVisible, Net, IsPlainOldData)
	class UMaterialInterface*                          SmokeMaterial;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    SmokeTexture;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               LaunchSound;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_FlareProjectile.BP_Base_FlareProjectile_C");
		return ptr;
	}


	class UMarkerComponent* GetMarkerComponent();
	void OnRep_DefaultFlare();
	void UserConstructionScript();
	void ExplodeShapedBurst();
	void Explode();
	void Stop_Particles();
	void ReceiveDestroyed();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Base_FlareProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
