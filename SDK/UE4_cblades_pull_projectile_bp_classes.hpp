#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_pull_projectile_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cblades_pull_projectile_bp.cblades_pull_projectile_bp_C
// 0x005D (0x06AA - 0x064D)
class Acblades_pull_projectile_bp_C : public Aprojectile_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (Transient, DuplicateTransient)
	float                                              Speed;                                                    // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SinceSpawnDelta;                                          // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PullToPositionOffset;                                     // 0x0668(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Debug_DrawRadius;                                         // 0x0674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	float                                              PullSpeed;                                                // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPullPosition;                                       // 0x067C(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	class UCapsuleComponent*                           CachedOwnerCapsuleComponent;                              // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ActorToIgnore;                                            // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UPrimitiveComponent*                         TargetActor;                                              // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bValidPullHitTarget;                                      // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_PullHitTarget;                                      // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cblades_pull_projectile_bp.cblades_pull_projectile_bp_C");
		return ptr;
	}


	void CanPullHitTarget(class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool* CanPull);
	void RotateToTarget(class USceneComponent* TargetComponent, bool* Success);
	struct FVector GetLaunchVelocity(float Height, class ACharacter* Player_Character, const struct FVector& Hit_Point);
	void DEPRECIATED_GetLaunchVelocity(class ACharacter* PlayerCharacter, const struct FVector& HitPoint, struct FVector* LaunchVector);
	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void SetHomingTarget(class UPrimitiveComponent* HomingTarget);
	void ReceiveBeginPlay();
	void DebugDrawProjectileSphere(const struct FVector& Location, bool IsServer, float Duration);
	void BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AuthCollide(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& HitLocation);
	void ExecuteUbergraph_cblades_pull_projectile_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
