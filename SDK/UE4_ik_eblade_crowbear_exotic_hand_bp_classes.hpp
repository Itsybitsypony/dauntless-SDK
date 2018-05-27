#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ik_eblade_crowbear_exotic_hand_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C
// 0x003C (0x07EC - 0x07B0)
class Aik_eblade_crowbear_exotic_hand_bp_C : public AArchonCharacterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B0(0x0008) (Transient, DuplicateTransient)
	class UNetworkedMontageComponent*                  NetworkedMontage;                                         // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_player_feast_mode;                                      // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           DamageVolume;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceLastPosition;                                        // 0x07D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    p_heal_effect;                                            // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealDelay;                                                // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnHit(const struct FHitResult& Hit);
	void HealFX(const struct FVector& Location);
	void TickHealFX();
	void ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
