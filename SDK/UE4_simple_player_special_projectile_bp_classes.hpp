#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_simple_player_special_projectile_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass simple_player_special_projectile_bp.simple_player_special_projectile_bp_C
// 0x002B (0x0678 - 0x064D)
class Asimple_player_special_projectile_bp_C : public Aprojectile_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x064D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (Transient, DuplicateTransient)
	class UParticleSystem*                             ParticleTemplate;                                         // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParticleLifetime;                                         // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0668(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ProjectileLifetime;                                       // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileSpeed;                                          // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass simple_player_special_projectile_bp.simple_player_special_projectile_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DeactivateParticle();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_simple_player_special_projectile_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
