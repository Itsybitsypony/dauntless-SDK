#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BehemothAction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BehemothAction.BP_BehemothAction_C
// 0x0260 (0x05E8 - 0x0388)
class ABP_BehemothAction_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               OptimArea;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ActionMontage;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentScore;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoveryTime;                                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue;                                                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnCooldown;                                               // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CurrentHitActors;                                         // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FStruct_ActionHitArea>               HitAreaBoxes;                                             // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABP_ActionHelper_C*                          HelperActor;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              YawDelta;                                                 // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CreateHelper;                                             // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowHitAreaTest;                                          // 0x03ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ShowActionScoring;                                        // 0x03EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03EF(0x0001) MISSED OFFSET
	TArray<struct FVector>                             AttackVectors1;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             AttackVectors2;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SocketsToTrack;                                           // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DebugDrawNavMeshHit;                                      // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentUsesNavLink;                                       // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowNavLinks;                                            // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0423(0x0005) MISSED OFFSET
	TArray<class UClass*>                              SharedCooldownActions;                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FStruct_ActionHitArea                       OptimalHitArea;                                           // 0x0438(0x001C) (Edit, BlueprintVisible)
	struct FVector                                     OptimalLocationToStandAt;                                 // 0x0454(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              StamDrainAmount;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShowFailureReason;                                   // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               InProgress;                                               // 0x0465(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0466(0x0002) MISSED OFFSET
	struct FTimerHandle                                CooldownTimer;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ActionScore;                                              // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 HitAreaComponents;                                        // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             AttackVectors1_Simple;                                    // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             AttackVectors2_Simple;                                    // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UsesLeft;                                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UsageCount_Base;                                          // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonCharacter*>                    CharactersInHitAreas;                                     // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<Ebehemoth_action_eval_type>            TargettingType;                                           // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	TArray<struct Fbehemoth_targetting_data>           TargettingData;                                           // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ShowNumHits;                                              // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleHitAreaToBehemothSize;                               // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              DebugScale;                                               // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Falternate_attack_struct>            AlternateAttacks;                                         // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AArchonBehemoth*                             OwningArchonBehemoth;                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               RequiresNavTrace;                                         // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              DistanceTargetCanBeOffNavMesh;                            // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<Ebehemoth_states_enum>>         RequireStates;                                            // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<Ebehemoth_states_enum>>         ExcludedStates;                                           // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0520(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BehemothAction.BP_BehemothAction_C");
		return ptr;
	}


	void ChooseMontageToPlay(class UAnimMontage** Montage);
	void AuthSetNewCooldown(float NewCooldown);
	void IsActionAvailable(bool* IsActionAvailable);
	void GetScalingFactor(struct FVector* ScalingFactor);
	void GetScaledSimplifiedAttackVectors(TArray<struct FVector>* Vectors1, TArray<struct FVector>* Vectors2);
	void Evaluate(float* Score);
	void ClosestPointToLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, float* Distance);
	void SimplifyVectors(float Epsilon, TArray<struct FVector>* Vectors, TArray<struct FVector>* SimplifiedVectors);
	void TestAttackVectorCollision(bool* ActionAllowed);
	void SetBehemothNavlinkMovement();
	void GetHitAreaPositionWS(const struct FStruct_ActionHitArea& HitArea, struct FVector* NewParam);
	void PreAttackLogic();
	void PostAttackLogic();
	void ActionSpecifcTests(bool* TestsPassed);
	void StartCooldown();
	void ActionSpecificEvaluate(class AArchonBehemoth* Behemoth, float* Score);
	void EndCooldown();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void SimplifyAttackVectors();
	void DisplayVectors();
	void ReceiveDestroyed();
	void ClearDebugDraw();
	void ExecuteUbergraph_BP_BehemothAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
