#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_gameobject_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_gameobject_bp.base_gameobject_bp_C
// 0x0078 (0x0480 - 0x0408)
class Abase_gameobject_bp_C : public AAbilityActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class Uscore_giver_bpc_C*                          score_giver_bpc;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ufloating_combat_text_bpc_C*                 floating_combat_text_bpc;                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Alive;                                                    // 0x0428(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScaleHealthByPlayerCount;                                 // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x042A(0x0002) MISSED OFFSET
	float                                              PerPlayerHealthScalingRatio;                              // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyObjectOnDeath;                                     // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              DestroyObjectOnDeathDelay;                                // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideOnDeath;                                              // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UParticleSystem*                             DeathVFX;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeathVFXOffset;                                           // 0x0448(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class UAkAudioEventBase*                           DeathSound;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCollisionOnDeath;                                  // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ServerOnKilled;                                           // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               InheritInstigatorResistsAndPower;                         // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              L_HealthScaleFromInstigator;                              // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_gameobject_bp.base_gameobject_bp_C");
		return ptr;
	}


	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void GetLookAtVector(struct FVector* LookAtVector);
	void GetLookAtAlpha(float* LookAtAlpha);
	void GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType);
	void CanHitCBPushPullTarget(bool* Hits_);
	void SpawnWidgetComponentForFCT(class UWidgetComponent** WidgetComponent);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void AuthDie();
	void AuthOnKilled();
	void ReceiveBeginPlay();
	void MulticastOnDeath();
	void MulticastDamageText(float DamageAmount, class AActor* DamageInstigator, bool HasImpactLocation, const struct FVector& ImpactLocation);
	void ReceivedArchonAbilityDamage(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo);
	void TryAndDestroyWidgetComponentForFCT(class UWidgetComponent* WidgetComponentReference);
	void ExecuteUbergraph_base_gameobject_bp(int EntryPoint);
	void ServerOnKilled__DelegateSignature(class Abase_gameobject_bp_C* KilledObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
