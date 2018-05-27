#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass projectile_base_bp.projectile_base_bp_C
// 0x0245 (0x064D - 0x0408)
class Aprojectile_base_bp_C : public AAbilityActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Colliding_Body;                                           // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OwningPawn;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       DamageKey;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vertical_Height_Offset;                                   // 0x0438(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Max_Distance_Before_Fall;                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vertical_Fall_Rate;                                       // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Fall_Rate;                                            // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	struct FVector                                     DecalLocation;                                            // 0x0448(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               FollowGround;                                             // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SharedDamageGUID;                                         // 0x0455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0456(0x0002) MISSED OFFSET
	struct FGuid                                       DamageGUID;                                               // 0x0458(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       SharedDamageGUIDName;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatModifier;                                            // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreGroundPitchAdjustment;                              // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              FollowGroundSpeed;                                        // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class AActor*                                      HomingTarget;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              HomingAccel;                                              // 0x0488(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdjustedLocation;                                         // 0x048C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AdjustedRotation;                                         // 0x0498(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalSpeed2d;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HomingLockOnAngle;                                        // 0x04A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	TArray<class UAkAudioEventBase*>                   AKEventsOnExplode;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DisableCollisionOnExplode;                                // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideOnExplode;                                            // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnStop;                                            // 0x04C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnHit;                                             // 0x04C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopProjectileOnExplode;                                  // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableParticleOnExplode;                                 // 0x04C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x04C6(0x0002) MISSED OFFSET
	float                                              PostExplodeLifeSpan;                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplodeDelayOnTerrain;                                    // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Farchon_impulse>                     ImpulsesToSpawnOnStop;                                    // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Farchon_impulse>                     ImpulsesToSpawnOnExplode;                                 // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Farchon_impulse>                     ImpulsesToSpawnOnHit;                                     // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Farchon_impulse>                     ImpulsesToSpawnOnStart;                                   // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DisableCollisionOnStop;                                   // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsingOldParticleSystem;                                   // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0512(0x0006) MISSED OFFSET
	TArray<class UClass*>                              BuffsToApplyOnHit;                                        // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Eprojectile_movement_type>             ProjectileMovementType;                                   // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	struct FVector                                     LobbedProjectileTarget;                                   // 0x052C(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              L_EstimatedTimeToGround;                                  // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L_EstimatedTimeToTarget;                                  // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LobbedProjectileInitialVelocity;                          // 0x0540(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              OptionalEQSSpawnTimeOffset;                               // 0x054C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eprojectile_homing_type>               HomingType;                                               // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseInitialHeightAsVerticalHeightOffset;                   // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopProjectileIfOffEdge;                                  // 0x0552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0553(0x0001) MISSED OFFSET
	float                                              DamageActivationDelay;                                    // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExplodeOnExpire;                                          // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	float                                              ExpireTime;                                               // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StopProjectileOnExpire;                                   // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableParticleOnExpire;                                  // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0562(0x0002) MISSED OFFSET
	int                                                MaxNumberOfHits;                                          // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitCooldown;                                              // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              L_LastHitTime;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                L_NumHits;                                                // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OptionalProjectileIndex;                                  // 0x0574(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               L_StopAllMovement;                                        // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDrawStartPosition;                                   // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDrawPath;                                            // 0x057A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x057B(0x0001) MISSED OFFSET
	float                                              CustomProjectileDamageScale;                              // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugProjectile;                                          // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              GroundFollowCheckRadius;                                  // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousFramePosition;                                    // 0x0588(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypesOnHitSweep;                                    // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class AActor*, float>                         ActorsToIgnoreOnHitSweep;                                 // 0x05A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      L_SweepedHitActor;                                        // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CollisionSweepCollisionProfileNames;                      // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBeforeCanBeHItAgain;                                  // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnProjectileExploded;                                     // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnProjectileStopped_Dispatcher;                           // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct Fconditional_damage_row>             AdditionalDamageRows;                                     // 0x0638(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              ImpulsesToSpawnOnStop_AudioDelay;                         // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BuffOnHitCanApplyToSelf;                                  // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass projectile_base_bp.projectile_base_bp_C");
		return ptr;
	}


	void UpdateParticlePosition(float DeltaSeconds, class Aprojectile_base_bp_C* ProjectileActor, struct FVector* Position, struct FRotator* Rotation);
	void CanHitCBPushPullTarget(bool* Hits_);
	void GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType);
	void GetLookAtVector(struct FVector* LookAtVector);
	void GetLookAtAlpha(float* LookAtAlpha);
	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void CanHitThisTarget(class AActor* TargetActor, bool* CanHit);
	void AudioSetIsLocal();
	void AuthSweepHit(class USceneComponent* CollisionReference);
	void AuthBecomeLobbedProjectile(const struct FVector& TargetPos, float MinDistanceForScaling, float MaxDistanceForScaling, float PeakHeightAtMinDistance, float PeakHeightAtMaxDistance, float LateralSpeedAtMinDistance, float LateralSpeedAtMaxDistance);
	void Server___Apply_Damage(class AActor* Target_Actor, const struct FHitResult& Hit_Info, class UPrimitiveComponent* OtherComponent);
	void UserConstructionScript();
	void SetProjectileMovementType(TEnumAsByte<Eprojectile_movement_type> NewMovementType);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void MulticastVelocityAndGravityChanges(const struct FVector& NewVel, float NewGravity);
	void CalculateHoming(float DeltaSeconds);
	void MulticastVelocity(const struct FVector& NewVelocity);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void AuthOnProjectileDamageOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FHitResult& SweepResult);
	void ProjectileExploded(const struct FVector& ExplosionLocation);
	void OnProjectileStopped();
	void SpawnActor_Destroy();
	void DebugMulticastDrawProjectileSphere(const struct FVector& Location, float Duration, float Thickness, const struct FLinearColor& Color);
	void Multi_Explode(const struct FVector& HitLocation);
	void AuthSweepHitEvent();
	void Multi_Hit();
	void Multi_ProjectileStopped();
	void ReceiveDestroyed();
	void ExecuteUbergraph_projectile_base_bp(int EntryPoint);
	void OnProjectileStopped_Dispatcher__DelegateSignature(class Aprojectile_base_bp_C* Projectile);
	void OnProjectileExploded__DelegateSignature(class Aprojectile_base_bp_C* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
