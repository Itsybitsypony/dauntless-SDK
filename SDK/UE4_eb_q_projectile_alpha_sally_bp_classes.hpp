#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_projectile_alpha_sally_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C
// 0x0010 (0x0670 - 0x0660)
class Aeb_q_projectile_alpha_sally_bp_C : public Aweapon_eqs_aimed_projectile_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnProjectileStopped();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ProjectileExploded(struct FVector* ExplosionLocation);
	void ExecuteUbergraph_eb_q_projectile_alpha_sally_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
