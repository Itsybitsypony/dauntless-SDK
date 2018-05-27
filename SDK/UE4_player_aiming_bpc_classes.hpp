#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_aiming_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_aiming_bpc.player_aiming_bpc_C
// 0x0070 (0x0240 - 0x01D0)
class Uplayer_aiming_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<Eplayer_aiming_state>                  PlayerAimingState;                                        // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    AimingVFX;                                                // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalAimDir;                                              // 0x01E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct Fplayer_aim_request                         CurrentAimRequest;                                        // 0x01F8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    EndpointVFX;                                              // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_TargetPoint;                                            // 0x0228(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_SourcePoint;                                            // 0x0234(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_aiming_bpc.player_aiming_bpc_C");
		return ptr;
	}


	void Client_StartAiming(const struct Fplayer_aim_request& AimRequest);
	void Client_StopAiming();
	void Internal_SetAimState(TEnumAsByte<Eplayer_aiming_state> NewAimState);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_player_aiming_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
