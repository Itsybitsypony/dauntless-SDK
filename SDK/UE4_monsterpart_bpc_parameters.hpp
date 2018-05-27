#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monsterpart_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function monsterpart_bpc.monsterpart_bpc_C.GetSeverPhatBones
struct Umonsterpart_bpc_C_GetSeverPhatBones_Params
{
	TArray<struct FName>                               SeverPhatBones;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetPhatBones
struct Umonsterpart_bpc_C_GetPhatBones_Params
{
	TArray<struct FName>                               PhATBones;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentPartType
struct Umonsterpart_bpc_C_GetCurrentPartType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetBodyPartType
struct Umonsterpart_bpc_C_GetBodyPartType_Params
{
	TEnumAsByte<Ebehemoth_bodypart_type>               BodyPartType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ProcShockDamage
struct Umonsterpart_bpc_C_ProcShockDamage_Params
{
	class AActor*                                      Damage_Giver;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            Original_Damage_Event;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ProcFrostDamage
struct Umonsterpart_bpc_C_ProcFrostDamage_Params
{
	class AActor*                                      Damage_Giver;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            Original_Damage_Event;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.HealElementToMax
struct Umonsterpart_bpc_C_HealElementToMax_Params
{
	struct FGameplayAttribute                          MaxHealthAttribute;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GameplayEffectData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ProcFireDamage
struct Umonsterpart_bpc_C_ProcFireDamage_Params
{
	class AActor*                                      Damage_Giver;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            Original_Damage_Event;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetLootBreakNameFromPartData
struct Umonsterpart_bpc_C_GetLootBreakNameFromPartData_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fpart_break_stage>                   PartBreakData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       LootName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ResolvePartStageData
struct Umonsterpart_bpc_C_ResolvePartStageData_Params
{
	TArray<struct Fpart_break_stage>                   PartStageData;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function monsterpart_bpc.monsterpart_bpc_C.SetCollisionStateFromPartType
struct Umonsterpart_bpc_C_SetCollisionStateFromPartType_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_PartType
struct Umonsterpart_bpc_C_OnRep_PartType_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.ActivateChildShapes
struct Umonsterpart_bpc_C_ActivateChildShapes_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.DeactivateChildShapes
struct Umonsterpart_bpc_C_DeactivateChildShapes_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.InitMaterialParams
struct Umonsterpart_bpc_C_InitMaterialParams_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetPowerDelta
struct Umonsterpart_bpc_C_GetPowerDelta_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<float>                                      ResistanceDeltas;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              PowerDelta;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetScarredMaterialName
struct Umonsterpart_bpc_C_GetScarredMaterialName_Params
{
	struct FName                                       HealthMaterialName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.SetupBaseHealthValues
struct Umonsterpart_bpc_C_SetupBaseHealthValues_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_IsActivated
struct Umonsterpart_bpc_C_OnRep_IsActivated_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.CanPartBeBrokenByThisAttack
struct Umonsterpart_bpc_C_CanPartBeBrokenByThisAttack_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PartCanBeBrokenByThisAttack;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetParticleAttachBoneAndLocation
struct Umonsterpart_bpc_C_GetParticleAttachBoneAndLocation_Params
{
	class USceneComponent*                             AttachComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetFromBone;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     FinalWorldLocation;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.CanPartBeExposed
struct Umonsterpart_bpc_C_CanPartBeExposed_Params
{
	bool                                               CanBeExposed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetExposedPartMaterialName
struct Umonsterpart_bpc_C_GetExposedPartMaterialName_Params
{
	struct FName                                       ExposedMaterialName;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_ExposedPartType
struct Umonsterpart_bpc_C_OnRep_ExposedPartType_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.HandlePartExposed
struct Umonsterpart_bpc_C_HandlePartExposed_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetExposeMultiplier
struct Umonsterpart_bpc_C_GetExposeMultiplier_Params
{
	float                                              ExposeMultiplier;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetPartType
struct Umonsterpart_bpc_C_GetPartType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.HandleExposeDamage
struct Umonsterpart_bpc_C_HandleExposeDamage_Params
{
	float                                              BaseDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitExposeDamage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PrimaryElementPowerDelta;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExposeDamageDealt;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PartWasExposedByThisDamage;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.UpdateMaterials
struct Umonsterpart_bpc_C_UpdateMaterials_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetStageTypeInterpTime
struct Umonsterpart_bpc_C_GetStageTypeInterpTime_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TurningOn_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetIndexOfMaterialInterpData
struct Umonsterpart_bpc_C_GetIndexOfMaterialInterpData_Params
{
	struct FName                                       MaterialName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_MaterialParams
struct Umonsterpart_bpc_C_OnRep_MaterialParams_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetPartAndTypeMaterialName
struct Umonsterpart_bpc_C_GetPartAndTypeMaterialName_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StageMaterialName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetHealthMaterialName
struct Umonsterpart_bpc_C_GetHealthMaterialName_Params
{
	struct FName                                       HealthMaterialName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetDamageParticleInfo
struct Umonsterpart_bpc_C_GetDamageParticleInfo_Params
{
	float                                              DamageValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SizeUpThreshold;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSmall;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumToSpawn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.EstimateDamageDone
struct Umonsterpart_bpc_C_EstimateDamageDone_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamageGiver;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageDone;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.DoDamageEventEffects
struct Umonsterpart_bpc_C_DoDamageEventEffects_Params
{
	class AActor*                                      DamageGiver;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PartDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExposeDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasHitResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ApplyPartPreset
struct Umonsterpart_bpc_C_ApplyPartPreset_Params
{
	class UClass*                                      PresetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ApplyDamageToCore
struct Umonsterpart_bpc_C_ApplyDamageToCore_Params
{
	float                                              BaseDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnPreMitigateDamageBP
struct Umonsterpart_bpc_C_OnPreMitigateDamageBP_Params
{
	class AActor**                                     DamageGiver;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bHasHitResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.HandleStaggerDamage
struct Umonsterpart_bpc_C_HandleStaggerDamage_Params
{
	float                                              BaseDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitStaggerDamage;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PrimaryElementPowerDelta;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamageDealt;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentPartResistType
struct Umonsterpart_bpc_C_GetCurrentPartResistType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartResistType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.VisualLogNameArray
struct Umonsterpart_bpc_C_VisualLogNameArray_Params
{
	TArray<struct FName>                               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.BreakTypeToName
struct Umonsterpart_bpc_C_BreakTypeToName_Params
{
	TEnumAsByte<Ebreak_part_descriptions>              BreakType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakDescriptionForStage
struct Umonsterpart_bpc_C_GetBreakDescriptionForStage_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpart_break_description                     BreakDescription;                                         // (Parm, OutParm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthHandleCollisionUpdate
struct Umonsterpart_bpc_C_AuthHandleCollisionUpdate_Params
{
	int                                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthOnBreak
struct Umonsterpart_bpc_C_AuthOnBreak_Params
{
	int                                                NextStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetBaseLootName
struct Umonsterpart_bpc_C_GetBaseLootName_Params
{
	class FString                                      BaseLootName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function monsterpart_bpc.monsterpart_bpc_C.DoStaggerFromPart
struct Umonsterpart_bpc_C_DoStaggerFromPart_Params
{
	TEnumAsByte<Estagger_type>                         StaggerTypeNew;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PartSevered;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StaggerInstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_stagger_type>                StaggerSource;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthHandleBreak
struct Umonsterpart_bpc_C_AuthHandleBreak_Params
{
	class AActor*                                      BreakInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BreakHitLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetOwningBehemothActor
struct Umonsterpart_bpc_C_GetOwningBehemothActor_Params
{
	class AActor*                                      OwningBehemothActor;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_CurrentBreakStage
struct Umonsterpart_bpc_C_OnRep_CurrentBreakStage_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthAddLoot
struct Umonsterpart_bpc_C_AuthAddLoot_Params
{
	int                                                BreakIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BreakHitLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthMoveToNextStage
struct Umonsterpart_bpc_C_AuthMoveToNextStage_Params
{
	TEnumAsByte<Ebreak_stage_transit_reason>           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetByHandStage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalInstigator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocationForBreak;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentBreakStage
struct Umonsterpart_bpc_C_GetCurrentBreakStage_Params
{
	struct Fpart_break_stage                           BreakStage;                                               // (Parm, OutParm)
	struct Fpart_break_description                     StageDescription;                                         // (Parm, OutParm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.HandleDamage
struct Umonsterpart_bpc_C_HandleDamage_Params
{
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     ServerHitLoc;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.HandleStaggerProne
struct Umonsterpart_bpc_C_HandleStaggerProne_Params
{
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PartDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExposeDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasStaggered;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakDescriptionByType
struct Umonsterpart_bpc_C_GetBreakDescriptionByType_Params
{
	TEnumAsByte<Ebreak_part_descriptions>              BreakType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpart_break_description                     BreakDescription;                                         // (Parm, OutParm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakStageForIndex
struct Umonsterpart_bpc_C_GetBreakStageForIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpart_break_stage                           BreakStage;                                               // (Parm, OutParm)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakLootName
struct Umonsterpart_bpc_C_GetBreakLootName_Params
{
	int                                                BreakIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LootName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ValidateBreakData
struct Umonsterpart_bpc_C_ValidateBreakData_Params
{
	bool                                               DataIsValid;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthSetBreakStage
struct Umonsterpart_bpc_C_AuthSetBreakStage_Params
{
	int                                                StageIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebreak_stage_transit_reason>           Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalInstigator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OptionalHitLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.GetResistancesForPartType
struct Umonsterpart_bpc_C_GetResistancesForPartType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldCalculatePerTypeModifiers;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CuttingResistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CuttingCorePassthrough;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BluntResistance;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BluntCorePassthrough;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PiercingResistance;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PiercingCorePassthrough;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthChangePartType
struct Umonsterpart_bpc_C_AuthChangePartType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   NewPartType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_PartSevered
struct Umonsterpart_bpc_C_OnRep_PartSevered_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.IsAttackIDAlreadyRegistered
struct Umonsterpart_bpc_C_IsAttackIDAlreadyRegistered_Params
{
	struct FGuid                                       AttackID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AttackExisted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.DoesAttackExist
struct Umonsterpart_bpc_C_DoesAttackExist_Params
{
	TArray<struct FGuid>                               AttackTable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       NewAttackID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Exists;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AddAttackID
struct Umonsterpart_bpc_C_AddAttackID_Params
{
	TArray<struct FGuid>                               AttackTable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       NewAttackID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastStagger
struct Umonsterpart_bpc_C_MulticastStagger_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.ReceiveBeginPlay
struct Umonsterpart_bpc_C_ReceiveBeginPlay_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastCollisionUpdate
struct Umonsterpart_bpc_C_MulticastCollisionUpdate_Params
{
	bool                                               CollisionEnabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.UpdateCollision
struct Umonsterpart_bpc_C_UpdateCollision_Params
{
	bool                                               CollisionEnabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastLoot
struct Umonsterpart_bpc_C_MulticastLoot_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LootName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastBreakText
struct Umonsterpart_bpc_C_MulticastBreakText_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.ReceiveTick
struct Umonsterpart_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastSpawnBreakImpulses
struct Umonsterpart_bpc_C_MulticastSpawnBreakImpulses_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.DestroyBreakWidgets
struct Umonsterpart_bpc_C_DestroyBreakWidgets_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.ForceSetSeveredSet
struct Umonsterpart_bpc_C_ForceSetSeveredSet_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastDamageNumbers
struct Umonsterpart_bpc_C_MulticastDamageNumbers_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PartDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExposeDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasImpactLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthReplicateExpose
struct Umonsterpart_bpc_C_AuthReplicateExpose_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.ReplicateExpose
struct Umonsterpart_bpc_C_ReplicateExpose_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.MulticastExposeEffects
struct Umonsterpart_bpc_C_MulticastExposeEffects_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.RefreshHealth
struct Umonsterpart_bpc_C_RefreshHealth_Params
{
};

// Function monsterpart_bpc.monsterpart_bpc_C.ExecuteUbergraph_monsterpart_bpc
struct Umonsterpart_bpc_C_ExecuteUbergraph_monsterpart_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnStageChangedByBreak__DelegateSignature
struct Umonsterpart_bpc_C_OnStageChangedByBreak__DelegateSignature_Params
{
	class Umonsterpart_bpc_C*                          Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnSevered__DelegateSignature
struct Umonsterpart_bpc_C_OnSevered__DelegateSignature_Params
{
	class Umonsterpart_bpc_C*                          Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.AuthOnBreakStageChanged__DelegateSignature
struct Umonsterpart_bpc_C_AuthOnBreakStageChanged__DelegateSignature_Params
{
	class Umonsterpart_bpc_C*                          PartChanged;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpc.monsterpart_bpc_C.OnStaggered__DelegateSignature
struct Umonsterpart_bpc_C_OnStaggered__DelegateSignature_Params
{
	bool                                               PartJustBroken;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PartJustSevered;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StaggerInstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
