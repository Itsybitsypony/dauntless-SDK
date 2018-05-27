#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_Behemoth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_Behemoth.Bp_Behemoth_C
// 0x08C8 (0x11F8 - 0x0930)
class ABp_Behemoth_C : public AArchonBehemoth
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0930(0x0008) (Transient, DuplicateTransient)
	class Ubuff_applier_bpc_C*                         buff_applier_bpc;                                         // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uelemental_health_bpc_C*                     elemental_health_bpc;                                     // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubehemoth_eventdispatcher_bpc_C*             behemoth_eventdispatcher_bpc;                             // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uloot_dropper_bpc_C*                         loot_dropper_bpc;                                         // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uscore_giver_bpc_C*                          score_giver_bpc;                                          // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ustaggerable_bpc_C*                          staggerable_bpc;                                          // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ulook_at_component_C*                        look_at_component;                                        // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uai_coordination_agent_bpc_C*                ai_coordination_agent_bpc;                                // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubehemoth_aggro_bpc_C*                       behemoth_aggro_bpc;                                       // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonBuffableComponent*                    ArchonBuffable;                                           // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uspawnedactor_manager_bpc_C*                 gameobject_manager_bpc;                                   // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Udamage_guid_manager_bpc_C*                  damage_guid_manager_bpc;                                  // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonFootIKComponent*                      ArchonFootIK;                                             // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ufloating_combat_text_bpc_C*                 floating_combat_text_bpc;                                 // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ueqs_gameplay_bpc_C*                         eqs_gameplay_bpc;                                         // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubehemoth_statemanager_bpc_C*                behemoth_statemanager_bpc;                                // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubehemoth_telemetry_component_C*             behemoth_telemetry_component;                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Upersistent_spawner_bpc_C*                   persistent_spawner_bpc;                                   // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonAbilitySystemComponent*               ArchonAbilitySystem;                                      // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNetworkedMontageComponent*                  NetworkedMontage;                                         // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonWarpComponent*                        ArchonWarp;                                               // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNavMeshCollisionComponent*                  NavMeshCollision;                                         // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonImpactComponent*                      ArchonImpact;                                             // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            DamageComp;                                               // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            TurnCurve;                                                // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopAetherVFXTimeline_Interpolated_Value_AB8664F64F30C5A8DA67228250144840;// 0x0A00(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StopAetherVFXTimeline__Direction_AB8664F64F30C5A8DA67228250144840;// 0x0A04(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StopAetherVFXTimeline;                                    // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stop_Rage_VFX_Timeline_Interpolated_Value_CE51539449DBB80091A823BF0D310940;// 0x0A10(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Stop_Rage_VFX_Timeline__Direction_CE51539449DBB80091A823BF0D310940;// 0x0A14(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Stop_Rage_VFX_Timeline;                                   // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveTimeline_NewTrack_1_7C31C43D4734D2D97F7FF8A01A3CABF0;// 0x0A20(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CurveTimeline__Direction_7C31C43D4734D2D97F7FF8A01A3CABF0;// 0x0A24(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A25(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CurveTimeline;                                            // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthDEPRECATED_DO_NOT_USE;                              // 0x0A30(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealthDEPRECATED_DO_NOT_USE;                           // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGuid>                               RecentAttacksToBehemoth;                                  // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Umonsterpart_bpc_C*                          CurrentPartToDamage;                                      // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_AttackWindowInfo>            AttackWindowInfos;                                        // 0x0A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UActorComponent*>                     DamageVolumeToProcess;                                    // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                AttackWindowInfoIndexToRemove;                            // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAttackWindowInfo;                                  // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CurrentAttackWindowHitActors;                             // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialCollection;                                // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentMontagePlayRate;                                   // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PerPlayerHealthIncRatio;                                  // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseHealth;                                               // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AA4(0x0004) MISSED OFFSET
	class AActor*                                      ChosenTarget;                                             // 0x0AA8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBehemothDamageTable                        DamageDataTable_1;                                        // 0x0AB0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InRageState;                                              // 0x0AC0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	float                                              RageStateChangeTime;                                      // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageStateMontageRateModifier;                             // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatioOfMaxRageCDOnPartBreak;                              // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageDuration;                                             // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FTimerHandle                                RageDuration_Timer;                                       // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RageCooldown;                                             // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseActionRate;                                           // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxX;                                                     // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinX;                                                     // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinY;                                                     // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxY;                                                     // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FleeCounter;                                              // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class ABp_BehemothActionSet_C*                     ActionSet;                                                // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentPatrolCenter;                                      // 0x0B08(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     LookAtTarget;                                             // 0x0B10(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x0B1C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    TailSeverPersistant;                                      // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurveAlpha;                                               // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Curving;                                                  // 0x0B2C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableIkinema;                                           // 0x0B2D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0B2E(0x0002) MISSED OFFSET
	class UAnimMontage*                                CurrentTurnMontage;                                       // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDMaxHealthRatio;                                     // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDMax;                                                // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDMaxDecay_Interval;                                  // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDMaxFloor;                                           // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDMaxDecay_Ratio;                                     // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDMaxDecay_FloorRatio;                                // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RageCDMaxDecay_Timer;                                     // 0x0B50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RageCDRefilll_Interval;                                   // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageCDRefilll_Amount;                                     // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RageCDRefilll_Timer;                                      // 0x0B60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InTiredState;                                             // 0x0B68(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0B69(0x0007) MISSED OFFSET
	TArray<struct Fvfx_with_socket_struct>             Rage_Vfx;                                                 // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CurrentStamina;                                           // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxStamina;                                               // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TiredStateMontageRateModifier;                            // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TiredDuration;                                            // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TiredDuration_Timer;                                      // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StaminaRegen_Amount;                                      // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRegen_Interval;                                    // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                StaminaRegen_Timer;                                       // 0x0BA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            Spawned_Tired_Vfx;                                        // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               StaggerProne;                                             // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0BB9(0x0003) MISSED OFFSET
	float                                              StaggerProneDamageThreshold;                              // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInjured;                                                // 0x0BC0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0BC1(0x0003) MISSED OFFSET
	float                                              InjuredThrehold_MaxHealthRatio;                           // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyToFlee;                                              // 0x0BC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0BC9(0x0003) MISSED OFFSET
	float                                              ActionRateModifier;                                       // 0x0BCC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InPrepForFleeState;                                       // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0BD1(0x0003) MISSED OFFSET
	float                                              CurrentFleeHealthThreshold;                               // 0x0BD4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrepToFleeDuration;                                       // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	struct FTimerHandle                                PrepToFleeDuration_Timer;                                 // 0x0BE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      ActionSetClass;                                           // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Behemoth_Switch_Group;                                    // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Behemoth_Name___Sounds;                                   // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Behemoth_Name___Voice;                                    // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioBank*                                SoundBank___VO;                                           // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioBank*>                        Soundbanks___Sounds;                                      // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                RageEyeTrailColor;                                        // 0x0C28(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Rage_State_Emissive_Color;                                // 0x0C38(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Base_State_Emissive_Color;                                // 0x0C48(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Spawned_Rage_Vfx;                                         // 0x0C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fvfx_with_socket_struct>             Tired_Vfx;                                                // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Turn_Radius;                                              // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0C7C(0x0004) MISSED OFFSET
	class UClass*                                      ClassToDrop;                                              // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageDuration_IncreasePerRageEnter;                        // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageDuration_Max;                                         // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RageEmissiveValue;                                        // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0C94(0x0004) MISSED OFFSET
	TArray<struct Fspawned_monter_trail_struct>        Spawned_Monster_Trails;                                   // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fvfx_with_socket_struct>             AetherVFX;                                                // 0x0CA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               InterruptLoopingAttack;                                   // 0x0CB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowCurrentActionHelper;                                  // 0x0CB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0CBA(0x0006) MISSED OFFSET
	TArray<struct Fselect_montage_from_angle_str>      PivotAnimations;                                          // 0x0CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     PivotTarget;                                              // 0x0CD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	class FString                                      EoM_LootID;                                               // 0x0CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  TurnStart;                                                // 0x0CF0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class Umonsterpart_bpc_C*>                  BehemothParts;                                            // 0x0D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InCombat;                                                 // 0x0D30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AetherCharged;                                            // 0x0D31(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Repositionning;                                           // 0x0D32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MontageMode;                                              // 0x0D33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0D34(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        MontageMode_Montages;                                     // 0x0D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MontageMode_Index;                                        // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MontageMode_Location;                                     // 0x0D4C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MontageMode_Rotation;                                     // 0x0D58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               MontageMode_ResetAfterEachMontage;                        // 0x0D64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MontageMode_Paused;                                       // 0x0D65(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x0D66(0x0002) MISSED OFFSET
	float                                              PhaseHealthGainFactor;                                    // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Flee_HealthThreshold_Ratio;                               // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrepToFleeDuration_IncreaseRatio;                         // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InFirstSocketName;                                        // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Trail_References;                                         // 0x0D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    Secondary_Particle_System;                                // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_TagToTrailEffects>           TrailEffects;                                             // 0x0DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fvfx_state_id_struct>                Debris_State_VFX;                                         // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ETranslateWarpOverrideType>            TranslateWarpOverrideType;                                // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0DC1(0x0007) MISSED OFFSET
	struct FName                                       TranslateWarpOverrideName;                                // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TurnWarpOverrideName;                                     // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETurnWarpOverrideType>                 TurnWarpOverrideType;                                     // 0x0DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0DD9(0x0007) MISSED OFFSET
	TArray<struct FName>                               StaggerProneAcceptedPartNames;                            // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     L_TurnWarpLocation;                                       // 0x0DF0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_TranslateWarpLocation;                                  // 0x0DFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_DefaultWarpLocation;                                    // 0x0E08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDamageTaken;                                            // 0x0E18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AActor*                                      L_NewTarget;                                              // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              KnownTargets;                                             // 0x0E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               pivoting;                                                 // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0E41(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStaggered;                                              // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UParticleSystemComponent*>            SpawnedAetherVFX;                                         // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AetherEmissiveValue;                                      // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0E6C(0x0004) MISSED OFFSET
	class AActor*                                      L_PreviousTarget;                                         // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x0E78(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyToEnterAetherCharge;                               // 0x0E79(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyToEnterRage;                                       // 0x0E7A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnteringRageState;                                        // 0x0E7B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnteringAetherCharged;                                    // 0x0E7C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ebehemoth_states_enum>                 BehemothMusicState;                                       // 0x0E7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x0E7E(0x0002) MISSED OFFSET
	TArray<struct FName>                               DamageProgressionParameters;                              // 0x0E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    AuthOnStateChanged;                                       // 0x0E90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct Fpivot_anim_set>                     AlternatePivotAnimationSets;                              // 0x0EA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsOverridingPivotSet;                                     // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0EB1(0x0007) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            CurrentDotEffects;                                        // 0x0EB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_TagToHitEffects>             DotHitEffects;                                            // 0x0EC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      LockedTarget;                                             // 0x0ED8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PivotGoal;                                                // 0x0EE0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotGoalRadius;                                          // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PivotGoalSet;                                             // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0EF1(0x0007) MISSED OFFSET
	TArray<class UWidgetComponent*>                    FloatingCombatTextComps;                                  // 0x0EF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FloatingTextMaxZ;                                         // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatingTextFadeZ;                                        // 0x0F0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWidgetComponent*                            DPSText;                                                  // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayDPS;                                               // 0x0F18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0F19(0x0003) MISSED OFFSET
	float                                              DPSWindowOpenTime;                                        // 0x0F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDamageInDPSWindow;                                   // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDPSHitTime;                                           // 0x0F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Angle_Threshold;                                     // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceptance_Angle_Tolerance;                               // 0x0F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Turn_Speed;                                           // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Arching_Angle;                                        // 0x0F34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Angle_Threshold_While_Moving;                        // 0x0F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Moving_To_Pivot_Rotation_Interp_Speed;                    // 0x0F3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePreferedSpawnLocation;                                 // 0x0F40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyToExitRage;                                        // 0x0F41(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyToExitAether;                                      // 0x0F42(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x5];                                       // 0x0F43(0x0005) MISSED OFFSET
	class UAkAudioEventBase*                           Aether_Charge___Start_Event;                              // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Aether_Charge___Stop_Event;                               // 0x0F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockedStamina;                                            // 0x0F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0F5C(0x0004) MISSED OFFSET
	struct FTimerHandle                                DebugEvalActionsTimer;                                    // 0x0F60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Behemoth_Music;                                           // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TurnWarpDebugName;                                        // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugTurnWarp;                                            // 0x0F78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0F79(0x0007) MISSED OFFSET
	class AActor*                                      PivotTargetActor;                                         // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotActorPredictionTime;                                 // 0x0F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Epivot_target_type>                    PivotTargetType;                                          // 0x0F8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x0F8D(0x0003) MISSED OFFSET
	struct FName                                       ArchetypeName;                                            // 0x0F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerEndOfMission;                                      // 0x0F98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayAggroInfo;                                         // 0x0F99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x0F9A(0x0006) MISSED OFFSET
	TArray<class UClass*>                              BuffsToAddOnHit;                                          // 0x0FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugLoot;                                                // 0x0FB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPossibleLoot;                                        // 0x0FB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x6];                                       // 0x0FB2(0x0006) MISSED OFFSET
	struct FName                                       ClassificationName;                                       // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IkinemaGlobalAlpha;                                       // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	class Umonsterpart_bpc_C*                          L_StaggerPart;                                            // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fbehemoth_intro_cinematic_data              IntroCinematicData;                                       // 0x0FD0(0x0078) (Edit, BlueprintVisible)
	float                                              TurnRadiusThresholdMultiplier;                            // 0x1048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Accuracy;                                                 // 0x104C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlerted;                                                // 0x1050(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeaggroing;                                             // 0x1051(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingNewAggroSystem;                                      // 0x1052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x5];                                       // 0x1053(0x0005) MISSED OFFSET
	TArray<class UClass*>                              GenericActionLists;                                       // 0x1058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class Ugeneric_action_lookup_table_C*              GenericActionLookupTable;                                 // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fstagger_instance                           CurrentStaggerInstance;                                   // 0x1070(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                              StaggerLists;                                             // 0x1098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class Ustagger_lookup_table_C*                     StaggerLookupTable;                                       // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerTypeOverride;                                      // 0x10B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x10B1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              BehemothLocoTypes;                                        // 0x10B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class Ubehemoth_loco_lookup_table_C*               BehemothLocoLookupTable;                                  // 0x10C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ebehemoth_loco_type>                   CurrentLocoState;                                         // 0x10D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultTurnWarpOverridden;                                // 0x10D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x10D2(0x0002) MISSED OFFSET
	struct FVector                                     DefaultTurnWarpOverrideLocation;                          // 0x10D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PathFollowingPivotSet;                                    // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BehemothNumber;                                           // 0x10E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x10EC(0x0004) MISSED OFFSET
	class AActor*                                      OverrideLookatTarget;                                     // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OverrideLookatTargetPos;                                  // 0x10F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x1104(0x0004) MISSED OFFSET
	TArray<struct Fsubtree_injection_info>             BehaviorOverrides;                                        // 0x1108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsReadyToEnterCustomState;                                // 0x1118(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadyToExitCustomState;                                 // 0x1119(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFlying;                                                 // 0x111A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDazed;                                                  // 0x111B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Foot_plant_debug;                                         // 0x111C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x111D(0x0003) MISSED OFFSET
	float                                              Foot_Minimum_Threshold;                                   // 0x1120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Foot_Medium_Threshold;                                    // 0x1124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Foot_Heavy_Threshold;                                     // 0x1128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x112C(0x0004) MISSED OFFSET
	class UAkAudioEventBase*                           Foot_Light;                                               // 0x1130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Foot_Medium;                                              // 0x1138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Foot_Heavy;                                               // 0x1140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStaggered;                                              // 0x1148(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggersMusicState;                                       // 0x1149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x6];                                       // 0x114A(0x0006) MISSED OFFSET
	TArray<class UParticleSystem*>                     MonsterDamageVFX;                                         // 0x1150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ReadyToEnterFinalForm;                                    // 0x1160(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InFinalForm;                                              // 0x1161(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCustomState;                                            // 0x1162(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseNewStaggerSystem;                                      // 0x1163(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x1164(0x0004) MISSED OFFSET
	TArray<struct Fshiny_drop_queue_data>              ShinyDropQueue;                                           // 0x1168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LookAtEnabled;                                            // 0x1178(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ebehemoth_resistset_type>              BehemothElementalResistAndPowerSet;                       // 0x1179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActivelyFleeing;                                        // 0x117A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPartMaterials;                                       // 0x117B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x117C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              TuningPresets;                                            // 0x1180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Edamage_types>                         StaggerProneRequiredDamageType;                           // 0x1190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInFlyingMode;                                           // 0x1191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0x1192(0x0002) MISSED OFFSET
	float                                              CurrentFlyingTime;                                        // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USplineComponent*                            FlySpline;                                                // 0x1198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FGuid, struct Fpart_resist_multiplier> PartResistMultipliers;                                    // 0x11A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMusicRage;                                              // 0x11F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMusicAetherCharged;                                     // 0x11F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMusicFleeing;                                           // 0x11F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMusicTired;                                             // 0x11F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstDamageTakenTimestamp;                                // 0x11F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bp_Behemoth.Bp_Behemoth_C");
		return ptr;
	}


	void GetShouldExecuteAKNotify(class UAnimNotify_AkEvent_C* NotifyInstance, bool* Return);
	void EnableHighlightForDuration(float Duration, bool* Output);
	void SetGrantItemID(const class FString& GatherID, bool* Output);
	void GetDamageRow(const struct FName& DamageKey, struct FDamageTableData* DamageRow, float* DamageScale, bool* RowFound);
	void ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData);
	void ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition);
	void ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition);
	void OverridePersistentSpawnPosition(const struct FVector& SpawnPos, const struct Fpersistent_spawn_params& PersistentSpawnRequest, bool* PositionWasOverridden, struct FVector* NewSpawnPos);
	void SpawnWidgetComponentForFCT(class UWidgetComponent** WidgetComponent);
	void CanHitCBPushPullTarget(bool* Hits_);
	void GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType);
	void GetLookAtVector(struct FVector* LookAtVector);
	void GetLookAtAlpha(float* LookAtAlpha);
	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void CanPartsBeBroken(bool* PartsCanBeBroken);
	void GetFirstDamageTakenTimestamp(float* FirstDamageTakenTimestamp);
	void SetBehemothMusicState(TEnumAsByte<Ebehemoth_states_enum> MusicState, bool ClearState, bool DisableUpdateMusicStateEvaluation, bool* Success);
	void GetPartResistMultipliersForType(TEnumAsByte<Ebehemoth_part_type> PartType, TArray<struct Fpart_resist_multiplier>* ResistMultipliers);
	void AddPartResistMultiplier(const struct Fpart_resist_multiplier& NewPartResistMultiplier, struct FGuid* UniqueID);
	void GetActionRate(float* ActionRate);
	void GetIsDead(bool* Return);
	void GetHealthScaleFactor(float* HealthScaleFactor);
	void UsingNewStaggerSystem(bool* UsingNewStaggerSystem);
	void GetCurrentLocoType(TEnumAsByte<Ebehemoth_loco_type>* CurrentLocoState);
	void GetBehemothLocoLookupTable(class Ubehemoth_loco_lookup_table_C** LocoTable);
	void GetGenericActionLookupTable(class Ugeneric_action_lookup_table_C** GenericActionLookupTable);
	void GetStaggerLookupTable(class Ustagger_lookup_table_C** StaggerLookupTable);
	void GetCurrentStaggerInstance(struct Fstagger_instance* StaggerInstance);
	void GetFleeValues(float* CurrentFleeHealthThreshold, float* TimeUntilFlee, float* TotalFleePrepTime, bool* CurrentlyFleeing);
	void FindMontageInGenericActionSet(TEnumAsByte<Ebehemoth_generic_action_type> ActionType, class UAnimMontage** Montage);
	void GetCurrentPatrolPoint(class AActor** CurrentPatrolPoint);
	void GetRageValues(float* CurrentRage, float* MaxRage, bool* IsInRage);
	void GetAccuracy(float* Accuracy);
	void GetMonsterPartByName(const struct FName& PartName, class UActorComponent** MonsterPart);
	void ShouldShowCurrentActionHelper(bool* ShouldShowCurrentActionHelper);
	void GetActionArray(TArray<class AActor*>* ActionArray);
	void GetCurrentTarget_interface(class AActor** CurrentTarget);
	void GetBehemothIntroCinematicData(struct Fbehemoth_intro_cinematic_data* CinematicData);
	void FindAction(class UClass* ActionClass, class AActor** FoundAction);
	void GetBehemothNameData(struct FName* ArchetypeName, struct FName* ClassificationName);
	void GetStaggerProneInfo(const struct FName& DamagedPartName, bool* IsStaggerProneForThisPart, float* CurrentStaggerProneDamageThreshold, TEnumAsByte<Edamage_types>* RequiredDamageType, TEnumAsByte<Estagger_type>* StaggerType);
	void BehemothInState(TEnumAsByte<Ebehemoth_states_enum> State, bool* IsInState);
	void GetDynamicMaterialCollection(TArray<class UMaterialInstanceDynamic*>* DynamicMaterialCollection);
	void GetIsInRageState(bool* IsInRageState);
	void TriggersEndOfMission(bool* TriggersEndOfMission);
	void GetLootIDs(TArray<class FString>* LootIDs);
	void DoBehemothGenericCheck(const struct FName& CheckFunctionName, bool* Result);
	void GetBehemothScale_interface(struct FVector* Scale);
	void BehemothStateMeetsRequirements(const struct Fbehemoth_requirement_struct& BehemothRequirements, bool* PassesRequirements);
	void PlayBehemothMontage_interface(class UAnimMontage* BehemothMontage, float MontagePlayRate, const struct FName& StartSection, float* Duration);
	void TrySetState_interface(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateChangeType, bool* Success);
	void BehemothDamageLookup(const struct FName& DamageKey, struct FDamageTableData* DamageData, bool* RowFound);
	void MeetsBehemothPartRequirement(const struct Fpart_requirement& PartRequirement, bool* MeetsRequirement);
	void SetupBlackboardVariables(bool* Success);
	void ClearAndRefreshTuningPresets();
	void AddTuningPresets(bool AlsoRefresh, TArray<class UClass*>* Presets);
	void RefreshTuningPresets();
	void AuthSetupResists();
	void GetPivotMontageForAngleDelta(float* Angle, class UAnimMontage** Montage);
	TArray<class UAnimMontage*> GetPivotMontages();
	void SetupDynamicSubtrees();
	void SetupLookupTables();
	void GetHitPauseDuration(struct FGameplayTagContainer* Tags, float* HitDuration, int* HitFrames);
	void ValidateBehemoth(bool* Succeeded);
	void BeginEnteringRage(bool* Success);
	void BeginEnteringAetherCharge(bool* Success);
	void SetupPathFollowing(class UArchonPathFollowingComponent* ArchonPathFollowing);
	void ApproximatePivotDelta(float* Angle, struct FTransform* Delta);
	void GetPivotMontageForAngle(float Angle, const struct FName& Pivot_Set, class UAnimMontage** Montage);
	void OnPivotAnimEnded(class UAnimInstance* AnimInstance, class UObject* Montage, struct FScriptDelegate* BlendOutDelegate);
	void CalculateIncomingDPS(float incDamage, float* DPSOut);
	void CalculatePivotTranslateTarget(struct FVector* Pos);
	void SetPivotGoal(const struct FVector& PivotGoal, float PivotGoalRadius);
	void CalculatePivotTarget(struct FVector* Target);
	void RefreshAttackTarget();
	void ChooseNewTarget(class AActor* NewTarget, bool FromNewAggroSystem_Hack);
	void ClearLockedTarget();
	void LockTarget(class AActor* TargetToLockTo);
	void GetCurrentTarget(class AActor** CurrentTarget);
	void BroadcastStopStateVFX(TEnumAsByte<Ebehemoth_states_enum> State, float DeactivationDelay);
	void FindIndexOfAction(class UClass* ActionClass, int* Index);
	void GetActionByIndex(int Index, class ABP_BehemothAction_C** Action);
	void GetIndexOfPivotSet(const struct FName& PivotSetName, int* PivotSetIndex);
	void SetEnteringRageInternalState();
	void UpdateBehemothMusicState();
	void AuthInternalSetState(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> BeginOrEnd, bool* Success);
	void ExitReadyToFleeState(bool* Success);
	void TrySetState(TEnumAsByte<Ebehemoth_states_enum> WhichState, TEnumAsByte<Ebehemoth_state_event> BeginningState_, bool* Success);
	void BehemothStateChanged(TEnumAsByte<Ebehemoth_states_enum> StateThatChanged, TEnumAsByte<Ebehemoth_state_event> WhatHappened);
	void CanAcquireTarget(bool* CanAcquireTarget);
	void IsInState(TEnumAsByte<Ebehemoth_states_enum> State, bool* InState);
	void ClientStopAetherVFX(bool FromAnimation_, float DeactivationDelay);
	void ClientStartAetherVFX(bool FromAnimation_);
	void StaggerBehemoth(TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory, TEnumAsByte<Estagger_type> StaggerType_New, bool WasPartBroken, bool WasPartSevered, class Umonsterpart_bpc_C* PartThatCausedStagger, class AActor* StaggerCauser);
	void NotifyDamageTaken(float DamageTaken, class AActor* DamageInstigator);
	void PlayTrailEffect(TEnumAsByte<EGameplayCueEvent> Selection, const struct FGameplayTagContainer& SourceTags);
	void ActivateBehemothTrail(class UParticleSystem* Particle_System, float LifeTime, const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, class UParticleSystem* SecondaryParticle, const struct FName& Secondary_Attach_Point, const struct FLinearColor& AspectColor, class UParticleSystemComponent** Return_Particle_System);
	void GetEffectsFromTag(const struct FGameplayTagContainer& SourceTags, TArray<struct FStruct_TagToTrailEffects>* Effects, TArray<struct FStruct_TagToTrailEffects>* Particle_Systems);
	void OnRep_MontageMode_Pause();
	void ExitReadyToEnterAetherCharged(bool* Success);
	void ExitAetherCharged(bool* Success);
	void EnterAetherCharged(bool* Success);
	void SetReadyToEnterAetherCharge(bool* Success);
	void SetReadyToExitAetherCharged(bool* Success);
	void OnRep_InCombat();
	void AbortPivot();
	void OnPivotEnded();
	void DoPivot(class UAnimMontage* OverridePivotMontage, TEnumAsByte<Epivot_target_type> PivotTargetType, const struct FName& PivotSet, float Angle, const struct FVector& PivotToLocation, class AActor* PivotToActor, float PivotToActorPredictionTime, float* Duration);
	void IsPivoting_(bool* StillPivoting);
	void SetReadyToExitRageState(bool* Success);
	void HandleStatesOnDeath(bool* Success);
	void SetReadyForFleeState(bool* Success);
	void OnRep_CurrentPatrolCenter();
	void OnRep_Rage_Vfx();
	void Client_Stop_Rage_VFX(bool From_Animation_, float Deactivation_Delay);
	void Client_Start_Rage_VFX(bool From_Animation);
	void CallBehemothSpecificFunction(const struct FName& FunctionName);
	void DamageTableLookup(const struct FName& DamageKey, struct FDamageTableData* DamageInfo, bool* RowFound);
	void DropLoot(bool* NewParam);
	void ExitFleeState(bool* Success);
	void EnterFleeState(bool* Success);
	void GetNextSectionNameForActiveState(const struct Fstatetosectionpair_array_struct& StateToSectionName, struct FName* SectionName);
	void InitRage();
	void EnterTiredState(bool* Success);
	void EndAndResetTiredState(bool* Success);
	void OnRep_Health();
	void SetReadyForTiredState();
	void DecreaseStamina(float Amount);
	void RegenStamina();
	void SetReadyForRageState(bool NewReadyForRageState, bool* Success);
	void EnterRageState(bool* Success);
	void EndAndResetRageState(bool* Success);
	void DecreaseRageCD(float Amount);
	void RefillRageCD();
	void DecayRageCooldownMax();
	void StopStaggerProof();
	void StartStaggerProof();
	void OnRep_Curving();
	void StopSeverVFX();
	void StartSeverVFX();
	void ProcessAttackExtants1();
	void FindPartFromVolume(class UPrimitiveComponent** Volume, class Umonsterpart_bpc_C** Part);
	void PlayBehemothMontage(class UAnimMontage* BehemothMontage, float MontagePlayRate, const struct FName& StartSection, float* Duration);
	void AddAttackToRecentAttacks(const struct FGuid& AttackIDToAdd, TArray<struct FGuid>* AttackTableToAddTo);
	void DoesAttackExist(const struct FGuid& CurrentAttackID, TArray<struct FGuid>* AttackArray, bool* Exists);
	void CalculateMitigatedDamage(class Umonsterpart_bpc_C* Part, float RawDamage, class UClass* DamageType, float* MitigatedPartDamage, float* CoreDamage);
	void UserConstructionScript();
	void CurveTimeline__FinishedFunc();
	void CurveTimeline__UpdateFunc();
	void Stop_Rage_VFX_Timeline__FinishedFunc();
	void Stop_Rage_VFX_Timeline__UpdateFunc();
	void StopAetherVFXTimeline__FinishedFunc();
	void StopAetherVFXTimeline__UpdateFunc();
	void OnLoaded_D67063584A3A08184C37EAB35F32C6FA(class UClass* Loaded);
	void OnLoaded_50389F1245B62B9D9FF171A3C994A039(class UObject* Loaded);
	void SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime);
	void EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid);
	void EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid);
	void ClearCurrentStagger();
	void UpdateBehemothMusicState_Interface();
	void UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data);
	void AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId);
	void OutputToAll(const class FString& Damage, class AActor* Damager);
	void updateScrollingText();
	void ReceivedArchonAbilityDamageOnMonsterPart(class AMonsterPartActor** MonsterPartActor, float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo);
	void OutputDPS(float DPS);
	void GameplayCue_Combat_Trail_LeftFoot(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Trail_RightFoot(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Trail_LeftHand(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Trail_RightHand(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_OnDamageReceived(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void StopCurrentMontage();
	void EndBehemothDamageWindow(const struct FStruct_DamageTagsPerKey& PartTagsAndDamageKey, bool StartAttack);
	void UpdateHealth();
	void ReceivePossessed(class AController** NewController);
	void InitAttackExtant();
	void ReceiveDestroyed();
	void ReturnFromLookAt();
	void EaseinLookAt();
	void StartCurving();
	void StopCurving();
	void OnNavLinkTraversalStateChangedDelegate_Event_1(bool bIsTraversingNavLink);
	void StartFleeTrailVFX();
	void EndFleeTrailVFX();
	void SpawnTeleportParticles(const struct FVector& Dest);
	void SpawnArrivalParticles();
	void OnDoPivotDelegate(float TurnAngle, class UAnimMontage* OverridePivotMontage);
	void OnPivotAborted();
	void PlayTiredVFX();
	void InternalStopRageVFX(bool From_Animation_, float Deactivation_Delay);
	void StopTiredVFX();
	void ReplicatedMontageSetNextSection(const struct FName& SectionNameToChange, class UAnimMontage* Montage, const struct Fstatetosectionpair_array_struct& StateToSectiontable);
	void Delay_And__Destroy_Trail(class UParticleSystemComponent* PSC_Ref, float Delay);
	void LoopMontage_Debug();
	void ApplyImpact(const struct FVector& Position, const struct FVector& Direction, float DurationScale, float MagnitudeScale);
	void DestroyDebrisState(class UObject* Data, float LifeTime);
	void InternalStopAetherVFX(bool FromAnimation_, float DeactivationDelay);
	void AuthOnStateChanged_Event_1(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> What_Happened);
	void OnPivotStarted();
	void OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted);
	void AuthPostAKEvents(TArray<class UAkAudioEvent*> AKEvents, float Delay);
	void MulticastPostAKEvents(TArray<class UAkAudioEvent*> AKEvents, float Delay);
	void AuthSetBehemothCollision(bool CollisionOn);
	void MulticastSetBehemothCollision(bool CollisionOn);
	void ShowBehemoth();
	void HideBehemoth();
	void EndRageTimer();
	void EndTiredState();
	void StartFlee();
	void BroadcastStartAetherVFX(bool FromAnimation);
	void BroadcastStopAetherVFX(bool FromAnimation, float DeactivationDelay);
	void BroadcastStartRageVFX(bool FromAnimation);
	void BroadcastStopRageVFX(bool From_Animation_, float Deactivation_Delay);
	void AuthSetBehemothScale(const struct FVector& Scale);
	void DebugDoEvaluateActions(bool OnOrOff);
	void ReevaluateActions();
	void SetPatrolPoint(class AActor* PatrolPoint);
	void PostSpawnInitialize(bool TriggersEndOfMission, int BehemothNumber);
	void BP_DamageGiven(float* DamageReceived, class AActor** DamageReceiver, struct FArchonAbilityDamageInfo* DamageInfo);
	void AddBuffToAttacks(class UClass* BuffToAdd);
	void RemoveBuffFromAttacks(class UClass* BuffToRemove);
	void TryAndDestroyWidgetComponentForFCT(class UWidgetComponent* WidgetComponentReference);
	void OnPartSevered(class Umonsterpart_bpc_C* Part);
	void SetStaggerProneDamageThreshold(float NewDamageThreshold);
	void OnStageChangedByBreak_Event_1(class Umonsterpart_bpc_C* Part);
	void StaggerBehemoth_interface(TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory, TEnumAsByte<Estagger_type> StaggerTypeNew, bool WasPartBroken, bool WasPartSevered, class UMonsterPartComponent* PartThatCausedStagger, class AActor* StaggerCauser);
	void TargetChanged_Event_1(int OldTarget, int NewTarget);
	void InitializeBehaviorTree();
	void SetBehemothLocoState(TEnumAsByte<Ebehemoth_loco_type> LocoState);
	void OverrideDefaultTurnWarpTarget(const struct FVector& TurnWarpTarget);
	void ClearDefaultTurnWarpTargetOverride();
	void MulticastRegisterStartOfCombat();
	void OnInstantMessageReceived(const struct Fcoordination_message& InstantMessage);
	void FootPlanted(float DelayedFootSpeed, const struct FName& JointName);
	void FootUnplanted(float FootSpeed, const struct FName& JointName);
	void CallBehemothSpecificFunctionInterface(const struct FName& FunctionName);
	void ActivateMonsterTrail(class UParticleSystem* ParticleSystem, float LifeTime, const struct FName& In_First_Socket_Name, const struct FName& In_Second_Socket_Name, class UNotify_MonsterTrails_C* Calling_Notify, const struct FLinearColor& Trail_Color);
	void DeactivateMonsterTrail(class UNotify_MonsterTrails_C* CallingNotify);
	void EnterFlyMode(float FlySpeed, class AActor* PatrolPointActor, TArray<struct FVector>* SplinePoints);
	void EndFlyMode();
	void MulticastEnterFlyMode(TArray<struct FVector> SplinePoints, float FlySpeed, class AActor* PatrolPointActor);
	void MulticastEndFlyMode();
	void ModActionRate(float PercentOfCurrentActionRate);
	void RemovePartResistMultiplierByID(const struct FGuid& UniqueID);
	void PostInitializeHealth();
	void ReplicatePartTypeMultipliers(TArray<struct Fpart_resist_multiplier> PartResistMultipliers);
	void ExecuteUbergraph_Bp_Behemoth(int EntryPoint);
	void AuthOnStateChanged__DelegateSignature(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> What_Happened);
	void OnStaggered__DelegateSignature(TEnumAsByte<Ebehemoth_stagger_type> StaggerSourceType, bool WasPartBroken, bool WasPartSevered, class Umonsterpart_bpc_C* PartThatCausedStagger, TEnumAsByte<Estagger_type> BehemothStaggerType);
	void OnDamageTaken__DelegateSignature(float DamageAmount, class AActor* DamageInstigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
