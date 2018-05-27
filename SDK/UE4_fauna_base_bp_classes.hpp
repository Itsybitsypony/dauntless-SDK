#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass fauna_base_bp.fauna_base_bp_C
// 0x00E0 (0x0AF0 - 0x0A10)
class Afauna_base_bp_C : public AArchonCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	class Ulook_at_component_C*                        LookAtComponent;                                          // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonWarpComponent*                        ArchonWarp;                                               // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNetworkedMontageComponent*                  NetworkedMontage;                                         // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moving_To_Pivot_Rotation_Interp_Speed;                    // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Angle_Threshold;                                     // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Radius;                                              // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceptance_Angle_Tolerance;                               // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Turn_Speed;                                           // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Arching_Angle;                                        // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Angle_Threshold_While_Moving;                        // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CurrentPivotMontage;                                      // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PivotTarget;                                              // 0x0A58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PivotGoalSet;                                             // 0x0A64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Epivot_target_type>                    PivotTargetType;                                          // 0x0A65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0A66(0x0002) MISSED OFFSET
	class AActor*                                      PivotTargetActor;                                         // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotActorPredictionTime;                                 // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalEstimatedAngle;                                      // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fselect_montage_from_angle_str>      PivotAnimations;                                          // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBehaviorTree*                               BehaviourTree;                                            // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DrawDebugPivot;                                           // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableLookAt;                                             // 0x0A99(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0A9A(0x0006) MISSED OFFSET
	class AActor*                                      LookAtActor;                                              // 0x0AA0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Fauna_Switch_Group;                                       // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Fauna_Name___Sounds;                                      // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Fauna_Name___Voice;                                       // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioBank*                                SoundBank___VO;                                           // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioBank*>                        Soundbanks___Sounds;                                      // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseRandomMaterial;                                        // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0AD9(0x0007) MISSED OFFSET
	TArray<TAssetPtr<class UMaterialInterface>>        RandomMaterialInstances;                                  // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fauna_base_bp.fauna_base_bp_C");
		return ptr;
	}


	void CanHitCBPushPullTarget(bool* Hits_);
	void GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType);
	void GetLookAtAlpha(float* LookAtAlpha);
	void GetLookAtVector(struct FVector* LookAtVector);
	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void UpdateLookAtTarget();
	void UpdateMeshOrientation();
	void GetPivotMontageForAngle(float Angle, class UAnimMontage** Montage);
	void DoPivot(TEnumAsByte<Epivot_target_type> PivotTargetType, float Angle, const struct FVector& PivotToLocation, class AActor* PivotTargetActor, float PivotToActorPredictionTime);
	void IsPivoting_(bool* StillPivoting);
	void AbortPivot();
	void OnPivotEnded();
	void OnPivotAnimEnded(class UAnimInstance* AnimInstance, class UObject* Montage, struct FScriptDelegate* BlendOutDelegate);
	void SetupPathFollowing(class UArchonPathFollowingComponent* ArchonPathFollowing);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnDoPivotDelegate(float TurnAngle, class UAnimMontage* OverridePivotMontage);
	void OnPivotAborted();
	void OnPivotStarted();
	void OnMontageBlendingOut_Event(class UAnimMontage* Montage, bool bInterrupted);
	void ReceivePossessed(class AController** NewController);
	void SetLocoState(TEnumAsByte<Efauna_loco_state_enum> NewState);
	void ExecuteUbergraph_fauna_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
