#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_NPC_FlyingWalking_Bird_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_FlyingWalking_Bird_Base.BP_NPC_FlyingWalking_Bird_Base_C
// 0x011C (0x08BC - 0x07A0)
class ABP_NPC_FlyingWalking_Bird_Base_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             FlyAwayPoint;                                             // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Run_Here;                                                 // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySpeed_Timeline_NewTrack_3_F420901349A7C9EFCF832F940872104D;// 0x07B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FlySpeed_Timeline__Direction_F420901349A7C9EFCF832F940872104D;// 0x07BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FlySpeed_Timeline;                                        // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitGravityTimeline_NewTrack_2_51CC99384546893F016C7D817683AF7D;// 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HitGravityTimeline__Direction_51CC99384546893F016C7D817683AF7D;// 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HitGravityTimeline;                                       // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjustment_NewTrack_0_7E4F7E084969B02D816AD3A7A99408DB;// 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PitchAdjustment__Direction_7E4F7E084969B02D816AD3A7A99408DB;// 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PitchAdjustment;                                          // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandingGravity_NewTrack_0_018B11A34F78A8AEB3328EA728A9E51D;// 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LandingGravity__Direction_018B11A34F78A8AEB3328EA728A9E51D;// 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LandingGravity;                                           // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AGround_TargetPoint_C*>               Ground_Targets;                                           // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ASky_TargetPoint_C*>                  Sky_Targets;                                              // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Turn_speed;                                               // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BirdRunAwayDistance;                                      // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunAwayDistance_Min;                                      // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunAwayDistance_Max;                                      // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BirdFlyAwayDistance;                                      // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyAwayDistance_Min;                                      // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyAwayDistance_Max;                                      // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BirdJumpAwayDistance;                                     // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpAwayDistance_Min;                                     // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpAwayDistance_Max;                                     // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed_Min;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed_Max;                                            // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseWalkToFlyTimer_;                                       // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              WalkToFlyTimer_Min;                                       // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkToFlyTimer_Max;                                       // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitTime_Min;                                             // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitTime_Max;                                             // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySpeed_Min;                                             // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlySpeed_Max;                                             // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyTime_Min;                                              // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyTime_Max;                                              // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Do_A_DownTrace_;                                          // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	float                                              DownTraceDistance;                                        // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticleThrustAmount;                                     // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pitch_Adjustment;                                         // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_forward_speed;                                    // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_yaw_speed;                                        // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_pitch_speed;                                      // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_roll_speed;                                       // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToGround;                                         // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAwaySpeed;                                            // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Flying_;                                               // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Walking_;                                              // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimeToLand;                                               // 0x089A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunAway_;                                                 // 0x089B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlapFast_;                                                // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBirdFly_;                                              // 0x089D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StayInTheAir_;                                            // 0x089E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunAwayFromPlayer_;                                       // 0x089F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSpecificSkyTargets_;                                   // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	TArray<class ASky_TargetPoint_C*>                  UserSpecifiedSkyTargets;                                  // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              FlyHeight_Min;                                            // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_FlyingWalking_Bird_Base.BP_NPC_FlyingWalking_Bird_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void LandingGravity__FinishedFunc();
	void LandingGravity__UpdateFunc();
	void PitchAdjustment__FinishedFunc();
	void PitchAdjustment__UpdateFunc();
	void HitGravityTimeline__FinishedFunc();
	void HitGravityTimeline__UpdateFunc();
	void FlySpeed_Timeline__FinishedFunc();
	void FlySpeed_Timeline__UpdateFunc();
	void OnFail_30639E0D44A6C48273D97CACBF393508(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_30639E0D44A6C48273D97CACBF393508(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnFail_CBB7A81149C3A243CAB474AE90B3C91E(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_CBB7A81149C3A243CAB474AE90B3C91E(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnFail_9306CFBE4D4335619897848C8734F6D7(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_9306CFBE4D4335619897848C8734F6D7(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnFail_70FD182D432FA621C18C4F8B8E44DF48(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_70FD182D432FA621C18C4F8B8E44DF48(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_NPC_FlyingWalking_Bird_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
