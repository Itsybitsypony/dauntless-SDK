#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_beam_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_beam_bp.base_beam_bp_C
// 0x0269 (0x05F1 - 0x0388)
class Abase_beam_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                AkComponent_OriginPoint;                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComponent_ImpactPoint;                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           DamageCapsule;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             BeamRotationPoint;                                        // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneToAttachTo;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxLength;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct Fbeam_request                               OriginalBeamRequest;                                      // 0x03C8(0x0120) (Edit, BlueprintVisible, Net)
	struct FVector                                     CurrentEndPoint;                                          // 0x04E8(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    BeamEndFXRef;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamEndFXTemplate;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeamEndFXRefScale;                                        // 0x0508(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BeamEndPointOffset;                                       // 0x0514(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageRowName;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       DamageGUID;                                               // 0x0528(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0538(0x0008) MISSED OFFSET
	struct FTransform                                  AttachBoneInitialTransform;                               // 0x0540(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TerrainCollisionRadius;                                   // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamExtendSpeed;                                          // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            RegisteredBeamFX;                                         // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAkAudioEventBase*>                   AKEvents_Impact_OnStart;                                  // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAkAudioEventBase*>                   AKEvents_Impact_OnStop;                                   // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BeamColliding;                                            // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	float                                              NextDamageIntervalTime;                                   // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugBeam;                                                // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05B1(0x0003) MISSED OFFSET
	float                                              NormalizedBeamLength;                                     // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               L_HitTarget;                                              // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    AuthHitTarget;                                            // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UAkAudioEventBase*>                   AKEvents_Origin_OnStart;                                  // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAkAudioEventBase*>                   AKEvents_Origin_OnStop;                                   // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsLocalPlayer;                                            // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_beam_bp.base_beam_bp_C");
		return ptr;
	}


	void GetHitActorsAndComponents(TArray<class AActor*>* UniqueActors, TMap<class AActor*, class UPrimitiveComponent*>* UniqueActorComponent);
	void GetBeamDamageScale(class AActor* HitActor, float* Scale);
	void ClientRegisterBeamFX(class UParticleSystemComponent* BeamComponent);
	void AuthUpdateBeamParameters(const struct Fbeam_request& NewBeamData, bool RestartMotion);
	void AuthOnHitTarget(class AActor* HitActor, const struct FHitResult& HitResult, class UPrimitiveComponent* HitComponent);
	void ApplyDamage();
	void UpdateBeamEndEffects(bool IsBeamColliding, const struct FHitResult& HitResult, const struct FVector& EndPos);
	void IsBeamFinished(bool* BeamIsFinished);
	void UpdateBeam(float DeltaTime);
	void GetBeamSourcePoint(struct FVector* BeamSourcePoint);
	void AuthStopBeam();
	void UpdateBeamEndPoint(bool* BeamFinished);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DrawCapsule(const struct FLinearColor& Color);
	void DrawSphere(const struct FVector& Location);
	void ExecuteUbergraph_base_beam_bp(int EntryPoint);
	void AuthHitTarget__DelegateSignature(bool Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
