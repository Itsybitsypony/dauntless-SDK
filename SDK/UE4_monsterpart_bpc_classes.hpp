#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monsterpart_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass monsterpart_bpc.monsterpart_bpc_C
// 0x02E8 (0x0C38 - 0x0950)
class Umonsterpart_bpc_C : public UMonsterPartComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      PartPreset;                                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PartBreakPreset;                                          // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PartToCoreDamageRatio;                                    // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	struct FName                                       PartName;                                                 // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_DamageMultiplier>            DamageTypeMultipliers;                                    // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_DamageImmunity>              DamageTypeImmunities;                                     // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SeverPartOnPartBreak;                                     // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PartSevered;                                              // 0x0999(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x099A(0x0006) MISSED OFFSET
	TArray<struct FGuid>                               RecentAttackToPart;                                       // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowDamageArea;                                           // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09B1(0x0007) MISSED OFFSET
	struct FName                                       SeveredPartBBKey;                                         // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugHealth;                                          // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 HealthMaterialCurve;                                      // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Severable_Spawn_Socket;                                   // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Severable_Actor_To_Spawn;                                 // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Sever_PhAT_Bones;                                         // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStaggered;                                              // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct Farchon_impulse>                     VFXOnPartStagger;                                         // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Farchon_impulse>                     VFXOnPartBreak;                                           // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxPartHealthRegenOnFleeOrStagger;                        // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ForceChildToBeDifferentThanParent;                        // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // 0x0A28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A29(0x0003) MISSED OFFSET
	int                                                CurrentBreakStage;                                        // 0x0A2C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fpart_break_stage>                   PartBreakData;                                            // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               LootIDs;                                                  // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        LootDropsPerStage;                                        // 0x0A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ShareBonesWithOtherPart;                                  // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    AuthOnBreakStageChanged;                                  // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IncreaseRageOnPartBreak;                                  // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	TArray<class UWidgetComponent*>                    BreakPartWidgets;                                         // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct Farchon_impulse                             DefaultVFXOnPartBreak;                                    // 0x0A90(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSevered;                                                // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStageChangedByBreak;                                    // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct Farchon_impulse                             L_Impulse;                                                // 0x0AF8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fvfx_with_socket_struct                     L_ImpulseVFX;                                             // 0x0B40(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PartStaggerMultiplier;                                    // 0x0B78(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBeenSeveredOnce;                                       // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0B7D(0x0003) MISSED OFFSET
	float                                              L_DamagePercentage;                                       // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L_ScabbedPercentage;                                      // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L_LowestDamagePercentage;                                 // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0B8C(0x0004) MISSED OFFSET
	struct FName                                       L_Name;                                                   // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fpart_stage_material_info>           MaterialParams;                                           // 0x0B98(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fpart_stage_material_info>           MaterialInterpData;                                       // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Ebehemoth_part_type>                   L_ReplacementPartType;                                    // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0BB9(0x0007) MISSED OFFSET
	TArray<struct Freward_override_list>               RewardOverridesPerStage;                                  // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentExposeHealth;                                      // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ebehemoth_part_type>                   ExposedPartType;                                          // 0x0BD4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0BD5(0x0003) MISSED OFFSET
	float                                              MaxExposeHealth;                                          // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ExposedVFX;                                               // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RatioOfBehemothExposeHealth;                              // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0BEC(0x0004) MISSED OFFSET
	struct FName                                       VFXBoneName;                                              // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VFXOffset;                                                // 0x0BF8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0C04(0x0004) MISSED OFFSET
	class UParticleSystem*                             ExposeActivateParticle;                                   // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ExposePersistentParticle;                                 // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugVFXPoint;                                            // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0C19(0x0003) MISSED OFFSET
	float                                              BaseRatioOfBehemothHealth;                                // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseRatioOfBehemothExposeHealth;                          // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ebehemoth_bodypart_type>               BodyPartType;                                             // 0x0C24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	class UCurveFloat*                                 StaggerPowerCurve;                                        // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ExposePowerCurve;                                         // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass monsterpart_bpc.monsterpart_bpc_C");
		return ptr;
	}


	void GetSeverPhatBones(TArray<struct FName>* SeverPhatBones);
	void GetPhatBones(TArray<struct FName>* PhATBones);
	void GetCurrentPartType(TEnumAsByte<Ebehemoth_part_type>* PartType);
	void GetBodyPartType(TEnumAsByte<Ebehemoth_bodypart_type>* BodyPartType);
	void ProcShockDamage(class AActor* Damage_Giver, const struct FDamageEventData& Original_Damage_Event);
	void ProcFrostDamage(class AActor* Damage_Giver, const struct FDamageEventData& Original_Damage_Event);
	void HealElementToMax(const struct FGameplayAttribute& MaxHealthAttribute, const struct FName& GameplayEffectData);
	void ProcFireDamage(class AActor* Damage_Giver, const struct FDamageEventData& Original_Damage_Event);
	void GetLootBreakNameFromPartData(int Index, TArray<struct Fpart_break_stage>* PartBreakData, struct FName* LootName);
	void ResolvePartStageData(TArray<struct Fpart_break_stage>* PartStageData);
	void SetCollisionStateFromPartType();
	void OnRep_PartType();
	void ActivateChildShapes();
	void DeactivateChildShapes();
	void InitMaterialParams();
	void GetPowerDelta(const struct FGameplayTagContainer& Tags, TArray<float>* ResistanceDeltas, float* PowerDelta);
	void GetScarredMaterialName(struct FName* HealthMaterialName);
	void SetupBaseHealthValues();
	void OnRep_IsActivated();
	void CanPartBeBrokenByThisAttack(class AActor* Instigator, const struct FGameplayTagContainer& DamageTags, bool* PartCanBeBrokenByThisAttack);
	void GetParticleAttachBoneAndLocation(class USceneComponent** AttachComponent, struct FName* BoneName, struct FVector* OffsetFromBone, struct FVector* FinalWorldLocation);
	void CanPartBeExposed(bool* CanBeExposed);
	void GetExposedPartMaterialName(struct FName* ExposedMaterialName);
	void OnRep_ExposedPartType();
	void HandlePartExposed();
	void GetExposeMultiplier(float* ExposeMultiplier);
	void GetPartType(TEnumAsByte<Ebehemoth_part_type>* PartType);
	void HandleExposeDamage(float BaseDamage, float ExplicitExposeDamage, class AActor* DamageInstigator, const struct FGameplayTagContainer& DamageTags, float PrimaryElementPowerDelta, float* ExposeDamageDealt, bool* PartWasExposedByThisDamage);
	void UpdateMaterials(float DeltaSeconds);
	void GetStageTypeInterpTime(TEnumAsByte<Ebehemoth_part_type> PartType, bool TurningOn_, float* InterpSpeed);
	void GetIndexOfMaterialInterpData(const struct FName& MaterialName, int* Index);
	void OnRep_MaterialParams();
	void GetPartAndTypeMaterialName(TEnumAsByte<Ebehemoth_part_type> PartType, struct FName* StageMaterialName);
	void GetHealthMaterialName(struct FName* HealthMaterialName);
	void GetDamageParticleInfo(float DamageValue, float SizeUpThreshold, float DamagePerSmall, int* NumToSpawn, float* Size);
	void EstimateDamageDone(const struct FDamageEventData& DamageEventData, class AActor* DamageGiver, float* DamageDone);
	void DoDamageEventEffects(class AActor* DamageGiver, float CoreDamage, float PartDamage, float StaggerDamage, float ExposeDamage, bool HasHitResult, const struct FHitResult& HitResult);
	void ApplyPartPreset(class UClass* PresetClass);
	void ApplyDamageToCore(float BaseDamage, class AActor* Instigator);
	struct FDamageEventData OnPreMitigateDamageBP(class AActor** DamageGiver, bool* bHasHitResult, struct FDamageEventData* DamageEventData, struct FGameplayTagContainer* DamageEventTags, struct FHitResult* HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	void HandleStaggerDamage(float BaseDamage, float ExplicitStaggerDamage, class AActor* DamageInstigator, const struct FGameplayTagContainer& DamageEventTags, float PrimaryElementPowerDelta, float* StaggerDamageDealt);
	void GetCurrentPartResistType(TEnumAsByte<Ebehemoth_part_type>* PartResistType);
	void VisualLogNameArray(TArray<struct FName>* Array);
	void BreakTypeToName(TEnumAsByte<Ebreak_part_descriptions> BreakType, struct FName* Name);
	void GetBreakDescriptionForStage(int NewParam, struct Fpart_break_description* BreakDescription);
	void AuthHandleCollisionUpdate(int NewState);
	void AuthOnBreak(int NextStage);
	void GetBaseLootName(class FString* BaseLootName);
	void DoStaggerFromPart(TEnumAsByte<Estagger_type> StaggerTypeNew, bool PartSevered, class AActor* StaggerInstigator, TEnumAsByte<Ebehemoth_stagger_type> StaggerSource);
	void AuthHandleBreak(class AActor* BreakInstigator, int NextStage, const struct FVector& BreakHitLocation);
	void GetOwningBehemothActor(class AActor** OwningBehemothActor);
	void OnRep_CurrentBreakStage();
	void AuthAddLoot(int BreakIndex, class AActor* Instigator, const struct FVector& BreakHitLocation);
	void AuthMoveToNextStage(TEnumAsByte<Ebreak_stage_transit_reason> Reason, int SetByHandStage, class AActor* OptionalInstigator, const struct FVector& HitLocationForBreak);
	void GetCurrentBreakStage(struct Fpart_break_stage* BreakStage, struct Fpart_break_description* StageDescription);
	void HandleDamage(class AActor* DamageCauser, float DamageAmount, const struct FGameplayTagContainer& DamageTags, const struct FVector& ServerHitLoc);
	void HandleStaggerProne(const struct FGameplayTagContainer& DamageTags, float PartDamage, float StaggerDamage, float ExposeDamage, float CoreDamage, bool* WasStaggered, TEnumAsByte<Estagger_type>* StaggerType);
	void GetBreakDescriptionByType(TEnumAsByte<Ebreak_part_descriptions> BreakType, struct Fpart_break_description* BreakDescription);
	void GetBreakStageForIndex(int Index, struct Fpart_break_stage* BreakStage);
	void GetBreakLootName(int BreakIndex, struct FName* LootName);
	void ValidateBreakData(bool* DataIsValid);
	void AuthSetBreakStage(int StageIndex, TEnumAsByte<Ebreak_stage_transit_reason> Reason, class AActor* OptionalInstigator, const struct FVector& OptionalHitLocation);
	void GetResistancesForPartType(TEnumAsByte<Ebehemoth_part_type> PartType, bool ShouldCalculatePerTypeModifiers, float* CuttingResistance, float* CuttingCorePassthrough, float* BluntResistance, float* BluntCorePassthrough, float* PiercingResistance, float* PiercingCorePassthrough);
	void AuthChangePartType(TEnumAsByte<Ebehemoth_part_type> NewPartType);
	void OnRep_PartSevered();
	void IsAttackIDAlreadyRegistered(const struct FGuid& AttackID, bool* AttackExisted);
	void DoesAttackExist(const struct FGuid& NewAttackID, TArray<struct FGuid>* AttackTable, bool* Exists);
	void AddAttackID(const struct FGuid& NewAttackID, TArray<struct FGuid>* AttackTable);
	void MulticastStagger(class AActor* DamageInstigator);
	void ReceiveBeginPlay();
	void MulticastCollisionUpdate(bool CollisionEnabled);
	void UpdateCollision(bool CollisionEnabled);
	void MulticastLoot(class AActor* Instigator, const struct FName& LootName);
	void MulticastBreakText();
	void ReceiveTick(float* DeltaSeconds);
	void MulticastSpawnBreakImpulses();
	void DestroyBreakWidgets();
	void ForceSetSeveredSet();
	void MulticastDamageNumbers(class AActor* Instigator, float CoreDamage, float PartDamage, float StaggerDamage, float ExposeDamage, bool HasImpactLocation, const struct FVector& ImpactLocation);
	void AuthReplicateExpose();
	void ReplicateExpose(float Current, float Max);
	void MulticastExposeEffects();
	void RefreshHealth();
	void ExecuteUbergraph_monsterpart_bpc(int EntryPoint);
	void OnStageChangedByBreak__DelegateSignature(class Umonsterpart_bpc_C* Part);
	void OnSevered__DelegateSignature(class Umonsterpart_bpc_C* Part);
	void AuthOnBreakStageChanged__DelegateSignature(class Umonsterpart_bpc_C* PartChanged);
	void OnStaggered__DelegateSignature(bool PartJustBroken, bool PartJustSevered, class AActor* StaggerInstigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
