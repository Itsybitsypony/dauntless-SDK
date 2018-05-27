#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_weapon_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cblades_weapon_bp.cblades_weapon_bp_C
// 0x00D0 (0x0B19 - 0x0A49)
class Acblades_weapon_bp_C : public ABP_BaseArchonWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class Uammo_bpc_C*                                 ammo_bpc;                                                 // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            cblades_r_spline_chain;                                   // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            cblades_l_spline_chain;                                   // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PullToPositionOffset;                                     // 0x0A70(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PullSpeed;                                                // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PullProjectileMaxDistance;                                // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PullProjectileRadius;                                     // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug_DrawPullProjectile;                                 // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              PullProjectileSpeed;                                      // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ProjectileTraceObjectType;                                // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                         HomingTarget;                                             // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PullTraceRadius;                                          // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         PullTarget;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PullTargetLocation;                                       // 0x0AB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LSplineMeshComponents;                                    // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 ChainMesh;                                                // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                RSplineMeshComponents;                                    // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    AimRotation;                                              // 0x0AF0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInPullAirTransition;                                    // 0x0AFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AFD(0x0003) MISSED OFFSET
	float                                              PushTraceRadius;                                          // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fcblades_tunables_str                       MeterTunables;                                            // 0x0B04(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OnHitTime;                                                // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeterGainScale;                                           // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPullAimTarget;                                       // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B11(0x0003) MISSED OFFSET
	float                                              PullProjectileSpawnPosOffset;                             // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPushTarget;                                          // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cblades_weapon_bp.cblades_weapon_bp_C");
		return ptr;
	}


	void GetMeterTunables(struct Fcblades_tunables_str* Tunables);
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void GetPushAimTarget(class UPrimitiveComponent** Target);
	void GetPullAimTarget(float TraceTestAngle, float TraceLength, float TraceRadius, TEnumAsByte<EDrawDebugTrace> DebugDrawMode, class UPrimitiveComponent** Target);
	void UpdateSpline(class USplineComponent* Spline, TArray<class USplineMeshComponent*>* SplineComponentArray);
	void DEPRECIATED_SpecialAbilityAim();
	void RotatePlayerToTarget(class USceneComponent* TargetComponent, float Speed);
	void GetBestCameraTarget(class UCameraComponent* Camera, class AActor* Player, TArray<struct FHitResult>* Array, class UPrimitiveComponent** TargetComponent);
	void UserConstructionScript();
	void CBlade_Push();
	void CBlade_Pull_Aim();
	void Server_PullProjectile();
	void CallWeaponSpecificFunction(struct FName* Function_Name);
	void PullLaunchStarted();
	void DebugMulticastDrawSphere(const struct FVector& Location, float Duration, float Thickness, const struct FLinearColor& Color, float Radius);
	void ReceiveTick(float* DeltaSeconds);
	void GameplayCue_Combat_OnDamageGiven(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void K2_OnEquip();
	void Cheat_Charge_Weapon();
	void ExecuteUbergraph_cblades_weapon_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
