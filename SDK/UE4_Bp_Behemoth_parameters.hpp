#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_Behemoth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bp_Behemoth.Bp_Behemoth_C.GetShouldExecuteAKNotify
struct ABp_Behemoth_C_GetShouldExecuteAKNotify_Params
{
	class UAnimNotify_AkEvent_C*                       NotifyInstance;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EnableHighlightForDuration
struct ABp_Behemoth_C_EnableHighlightForDuration_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetGrantItemID
struct ABp_Behemoth_C_SetGrantItemID_Params
{
	class FString                                      GatherID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetDamageRow
struct ABp_Behemoth_C_GetDamageRow_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageRow;                                                // (Parm, OutParm)
	float                                              DamageScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplayData
struct ABp_Behemoth_C_ModifyEQSGameplayData_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Feqs_spawn_query                            NewEQSSpawnQuery;                                         // (Parm, OutParm)
	bool                                               ModifiedData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplaySpawnPosPreCalc
struct ABp_Behemoth_C_ModifyEQSGameplaySpawnPosPreCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     InitialStartPosition;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InitialTargetPosition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewStartPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplaySpawnPosPostCalc
struct ABp_Behemoth_C_ModifyEQSGameplaySpawnPosPostCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     FinalTargetPosition;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPosition;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OverridePersistentSpawnPosition
struct ABp_Behemoth_C_OverridePersistentSpawnPosition_Params
{
	struct FVector                                     SpawnPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct Fpersistent_spawn_params                    PersistentSpawnRequest;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PositionWasOverridden;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewSpawnPos;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SpawnWidgetComponentForFCT
struct ABp_Behemoth_C_SpawnWidgetComponentForFCT_Params
{
	class UWidgetComponent*                            WidgetComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CanHitCBPushPullTarget
struct ABp_Behemoth_C_CanHitCBPushPullTarget_Params
{
	bool                                               Hits_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetDefaultElementalAttackType
struct ABp_Behemoth_C_GetDefaultElementalAttackType_Params
{
	EElementType                                       DefaultElementalAttackType;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetLookAtVector
struct ABp_Behemoth_C_GetLookAtVector_Params
{
	struct FVector                                     LookAtVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetLookAtAlpha
struct ABp_Behemoth_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetMesh
struct ABp_Behemoth_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetFallbackProjectileSpawnOffset
struct ABp_Behemoth_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CanPartsBeBroken
struct ABp_Behemoth_C_CanPartsBeBroken_Params
{
	bool                                               PartsCanBeBroken;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetFirstDamageTakenTimestamp
struct ABp_Behemoth_C_GetFirstDamageTakenTimestamp_Params
{
	float                                              FirstDamageTakenTimestamp;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetBehemothMusicState
struct ABp_Behemoth_C_SetBehemothMusicState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 MusicState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableUpdateMusicStateEvaluation;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetPartResistMultipliersForType
struct ABp_Behemoth_C_GetPartResistMultipliersForType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fpart_resist_multiplier>             ResistMultipliers;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AddPartResistMultiplier
struct ABp_Behemoth_C_AddPartResistMultiplier_Params
{
	struct Fpart_resist_multiplier                     NewPartResistMultiplier;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       UniqueID;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetActionRate
struct ABp_Behemoth_C_GetActionRate_Params
{
	float                                              ActionRate;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetIsDead
struct ABp_Behemoth_C_GetIsDead_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetHealthScaleFactor
struct ABp_Behemoth_C_GetHealthScaleFactor_Params
{
	float                                              HealthScaleFactor;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.UsingNewStaggerSystem
struct ABp_Behemoth_C_UsingNewStaggerSystem_Params
{
	bool                                               UsingNewStaggerSystem;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentLocoType
struct ABp_Behemoth_C_GetCurrentLocoType_Params
{
	TEnumAsByte<Ebehemoth_loco_type>                   CurrentLocoState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothLocoLookupTable
struct ABp_Behemoth_C_GetBehemothLocoLookupTable_Params
{
	class Ubehemoth_loco_lookup_table_C*               LocoTable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetGenericActionLookupTable
struct ABp_Behemoth_C_GetGenericActionLookupTable_Params
{
	class Ugeneric_action_lookup_table_C*              GenericActionLookupTable;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetStaggerLookupTable
struct ABp_Behemoth_C_GetStaggerLookupTable_Params
{
	class Ustagger_lookup_table_C*                     StaggerLookupTable;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentStaggerInstance
struct ABp_Behemoth_C_GetCurrentStaggerInstance_Params
{
	struct Fstagger_instance                           StaggerInstance;                                          // (Parm, OutParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetFleeValues
struct ABp_Behemoth_C_GetFleeValues_Params
{
	float                                              CurrentFleeHealthThreshold;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilFlee;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalFleePrepTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentlyFleeing;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.FindMontageInGenericActionSet
struct ABp_Behemoth_C_FindMontageInGenericActionSet_Params
{
	TEnumAsByte<Ebehemoth_generic_action_type>         ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentPatrolPoint
struct ABp_Behemoth_C_GetCurrentPatrolPoint_Params
{
	class AActor*                                      CurrentPatrolPoint;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetRageValues
struct ABp_Behemoth_C_GetRageValues_Params
{
	float                                              CurrentRage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInRage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetAccuracy
struct ABp_Behemoth_C_GetAccuracy_Params
{
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetMonsterPartByName
struct ABp_Behemoth_C_GetMonsterPartByName_Params
{
	struct FName                                       PartName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             MonsterPart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ShouldShowCurrentActionHelper
struct ABp_Behemoth_C_ShouldShowCurrentActionHelper_Params
{
	bool                                               ShouldShowCurrentActionHelper;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetActionArray
struct ABp_Behemoth_C_GetActionArray_Params
{
	TArray<class AActor*>                              ActionArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentTarget_interface
struct ABp_Behemoth_C_GetCurrentTarget_interface_Params
{
	class AActor*                                      CurrentTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothIntroCinematicData
struct ABp_Behemoth_C_GetBehemothIntroCinematicData_Params
{
	struct Fbehemoth_intro_cinematic_data              CinematicData;                                            // (Parm, OutParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.FindAction
struct ABp_Behemoth_C_FindAction_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FoundAction;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothNameData
struct ABp_Behemoth_C_GetBehemothNameData_Params
{
	struct FName                                       ArchetypeName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClassificationName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetStaggerProneInfo
struct ABp_Behemoth_C_GetStaggerProneInfo_Params
{
	struct FName                                       DamagedPartName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStaggerProneForThisPart;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStaggerProneDamageThreshold;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Edamage_types>                         RequiredDamageType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BehemothInState
struct ABp_Behemoth_C_BehemothInState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetDynamicMaterialCollection
struct ABp_Behemoth_C_GetDynamicMaterialCollection_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialCollection;                                // (Parm, OutParm, ZeroConstructor)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetIsInRageState
struct ABp_Behemoth_C_GetIsInRageState_Params
{
	bool                                               IsInRageState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.TriggersEndOfMission
struct ABp_Behemoth_C_TriggersEndOfMission_Params
{
	bool                                               TriggersEndOfMission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetLootIDs
struct ABp_Behemoth_C_GetLootIDs_Params
{
	TArray<class FString>                              LootIDs;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DoBehemothGenericCheck
struct ABp_Behemoth_C_DoBehemothGenericCheck_Params
{
	struct FName                                       CheckFunctionName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothScale_interface
struct ABp_Behemoth_C_GetBehemothScale_interface_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BehemothStateMeetsRequirements
struct ABp_Behemoth_C_BehemothStateMeetsRequirements_Params
{
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PassesRequirements;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.PlayBehemothMontage_interface
struct ABp_Behemoth_C_PlayBehemothMontage_interface_Params
{
	class UAnimMontage*                                BehemothMontage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.TrySetState_interface
struct ABp_Behemoth_C_TrySetState_interface_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 StateChangeType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BehemothDamageLookup
struct ABp_Behemoth_C_BehemothDamageLookup_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageData;                                               // (Parm, OutParm)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.MeetsBehemothPartRequirement
struct ABp_Behemoth_C_MeetsBehemothPartRequirement_Params
{
	struct Fpart_requirement                           PartRequirement;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               MeetsRequirement;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetupBlackboardVariables
struct ABp_Behemoth_C_SetupBlackboardVariables_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ClearAndRefreshTuningPresets
struct ABp_Behemoth_C_ClearAndRefreshTuningPresets_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.AddTuningPresets
struct ABp_Behemoth_C_AddTuningPresets_Params
{
	TArray<class UClass*>                              Presets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               AlsoRefresh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.RefreshTuningPresets
struct ABp_Behemoth_C_RefreshTuningPresets_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthSetupResists
struct ABp_Behemoth_C_AuthSetupResists_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontageForAngleDelta
struct ABp_Behemoth_C_GetPivotMontageForAngleDelta_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontages
struct ABp_Behemoth_C_GetPivotMontages_Params
{
	TArray<class UAnimMontage*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetupDynamicSubtrees
struct ABp_Behemoth_C_SetupDynamicSubtrees_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetupLookupTables
struct ABp_Behemoth_C_SetupLookupTables_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetHitPauseDuration
struct ABp_Behemoth_C_GetHitPauseDuration_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              HitDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                HitFrames;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ValidateBehemoth
struct ABp_Behemoth_C_ValidateBehemoth_Params
{
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BeginEnteringRage
struct ABp_Behemoth_C_BeginEnteringRage_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BeginEnteringAetherCharge
struct ABp_Behemoth_C_BeginEnteringAetherCharge_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetupPathFollowing
struct ABp_Behemoth_C_SetupPathFollowing_Params
{
	class UArchonPathFollowingComponent*               ArchonPathFollowing;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ApproximatePivotDelta
struct ABp_Behemoth_C_ApproximatePivotDelta_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Delta;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontageForAngle
struct ABp_Behemoth_C_GetPivotMontageForAngle_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Pivot_Set;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotAnimEnded
struct ABp_Behemoth_C_OnPivotAnimEnded_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BlendOutDelegate;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CalculateIncomingDPS
struct ABp_Behemoth_C_CalculateIncomingDPS_Params
{
	float                                              incDamage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DPSOut;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CalculatePivotTranslateTarget
struct ABp_Behemoth_C_CalculatePivotTranslateTarget_Params
{
	struct FVector                                     Pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetPivotGoal
struct ABp_Behemoth_C_SetPivotGoal_Params
{
	struct FVector                                     PivotGoal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PivotGoalRadius;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CalculatePivotTarget
struct ABp_Behemoth_C_CalculatePivotTarget_Params
{
	struct FVector                                     Target;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.RefreshAttackTarget
struct ABp_Behemoth_C_RefreshAttackTarget_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ChooseNewTarget
struct ABp_Behemoth_C_ChooseNewTarget_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromNewAggroSystem_Hack;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ClearLockedTarget
struct ABp_Behemoth_C_ClearLockedTarget_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.LockTarget
struct ABp_Behemoth_C_LockTarget_Params
{
	class AActor*                                      TargetToLockTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentTarget
struct ABp_Behemoth_C_GetCurrentTarget_Params
{
	class AActor*                                      CurrentTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopStateVFX
struct ABp_Behemoth_C_BroadcastStopStateVFX_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.FindIndexOfAction
struct ABp_Behemoth_C_FindIndexOfAction_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetActionByIndex
struct ABp_Behemoth_C_GetActionByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BehemothAction_C*                        Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetIndexOfPivotSet
struct ABp_Behemoth_C_GetIndexOfPivotSet_Params
{
	struct FName                                       PivotSetName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PivotSetIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetEnteringRageInternalState
struct ABp_Behemoth_C_SetEnteringRageInternalState_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.UpdateBehemothMusicState
struct ABp_Behemoth_C_UpdateBehemothMusicState_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthInternalSetState
struct ABp_Behemoth_C_AuthInternalSetState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 BeginOrEnd;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ExitReadyToFleeState
struct ABp_Behemoth_C_ExitReadyToFleeState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.TrySetState
struct ABp_Behemoth_C_TrySetState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 WhichState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 BeginningState_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BehemothStateChanged
struct ABp_Behemoth_C_BehemothStateChanged_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 StateThatChanged;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 WhatHappened;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CanAcquireTarget
struct ABp_Behemoth_C_CanAcquireTarget_Params
{
	bool                                               CanAcquireTarget;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.IsInState
struct ABp_Behemoth_C_IsInState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InState;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ClientStopAetherVFX
struct ABp_Behemoth_C_ClientStopAetherVFX_Params
{
	bool                                               FromAnimation_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ClientStartAetherVFX
struct ABp_Behemoth_C_ClientStartAetherVFX_Params
{
	bool                                               FromAnimation_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.StaggerBehemoth
struct ABp_Behemoth_C_StaggerBehemoth_Params
{
	TEnumAsByte<Ebehemoth_stagger_type>                StaggerCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerType_New;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartBroken;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartSevered;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          PartThatCausedStagger;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StaggerCauser;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.NotifyDamageTaken
struct ABp_Behemoth_C_NotifyDamageTaken_Params
{
	float                                              DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.PlayTrailEffect
struct ABp_Behemoth_C_PlayTrailEffect_Params
{
	TEnumAsByte<EGameplayCueEvent>                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       SourceTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ActivateBehemothTrail
struct ABp_Behemoth_C_ActivateBehemothTrail_Params
{
	class UParticleSystem*                             Particle_System;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFirstSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SecondaryParticle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Secondary_Attach_Point;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AspectColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UParticleSystemComponent*                    Return_Particle_System;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetEffectsFromTag
struct ABp_Behemoth_C_GetEffectsFromTag_Params
{
	struct FGameplayTagContainer                       SourceTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FStruct_TagToTrailEffects>           Effects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FStruct_TagToTrailEffects>           Particle_Systems;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_MontageMode_Pause
struct ABp_Behemoth_C_OnRep_MontageMode_Pause_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ExitReadyToEnterAetherCharged
struct ABp_Behemoth_C_ExitReadyToEnterAetherCharged_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ExitAetherCharged
struct ABp_Behemoth_C_ExitAetherCharged_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EnterAetherCharged
struct ABp_Behemoth_C_EnterAetherCharged_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToEnterAetherCharge
struct ABp_Behemoth_C_SetReadyToEnterAetherCharge_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToExitAetherCharged
struct ABp_Behemoth_C_SetReadyToExitAetherCharged_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_InCombat
struct ABp_Behemoth_C_OnRep_InCombat_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.AbortPivot
struct ABp_Behemoth_C_AbortPivot_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotEnded
struct ABp_Behemoth_C_OnPivotEnded_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.DoPivot
struct ABp_Behemoth_C_DoPivot_Params
{
	class UAnimMontage*                                OverridePivotMontage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Epivot_target_type>                    PivotTargetType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PivotToLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PivotToActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotToActorPredictionTime;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.IsPivoting?
struct ABp_Behemoth_C_IsPivoting__Params
{
	bool                                               StillPivoting;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToExitRageState
struct ABp_Behemoth_C_SetReadyToExitRageState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.HandleStatesOnDeath
struct ABp_Behemoth_C_HandleStatesOnDeath_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForFleeState
struct ABp_Behemoth_C_SetReadyForFleeState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_CurrentPatrolCenter
struct ABp_Behemoth_C_OnRep_CurrentPatrolCenter_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Rage Vfx
struct ABp_Behemoth_C_OnRep_Rage_Vfx_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.Client Stop Rage VFX
struct ABp_Behemoth_C_Client_Stop_Rage_VFX_Params
{
	bool                                               From_Animation_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Deactivation_Delay;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.Client Start Rage VFX
struct ABp_Behemoth_C_Client_Start_Rage_VFX_Params
{
	bool                                               From_Animation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CallBehemothSpecificFunction
struct ABp_Behemoth_C_CallBehemothSpecificFunction_Params
{
	struct FName                                       FunctionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DamageTableLookup
struct ABp_Behemoth_C_DamageTableLookup_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageInfo;                                               // (Parm, OutParm)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DropLoot
struct ABp_Behemoth_C_DropLoot_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ExitFleeState
struct ABp_Behemoth_C_ExitFleeState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EnterFleeState
struct ABp_Behemoth_C_EnterFleeState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GetNextSectionNameForActiveState
struct ABp_Behemoth_C_GetNextSectionNameForActiveState_Params
{
	struct Fstatetosectionpair_array_struct            StateToSectionName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       SectionName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.InitRage
struct ABp_Behemoth_C_InitRage_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.EnterTiredState
struct ABp_Behemoth_C_EnterTiredState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndAndResetTiredState
struct ABp_Behemoth_C_EndAndResetTiredState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Health
struct ABp_Behemoth_C_OnRep_Health_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForTiredState
struct ABp_Behemoth_C_SetReadyForTiredState_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.DecreaseStamina
struct ABp_Behemoth_C_DecreaseStamina_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.RegenStamina
struct ABp_Behemoth_C_RegenStamina_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForRageState
struct ABp_Behemoth_C_SetReadyForRageState_Params
{
	bool                                               NewReadyForRageState;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EnterRageState
struct ABp_Behemoth_C_EnterRageState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndAndResetRageState
struct ABp_Behemoth_C_EndAndResetRageState_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DecreaseRageCD
struct ABp_Behemoth_C_DecreaseRageCD_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.RefillRageCD
struct ABp_Behemoth_C_RefillRageCD_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.DecayRageCooldownMax
struct ABp_Behemoth_C_DecayRageCooldownMax_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopStaggerProof
struct ABp_Behemoth_C_StopStaggerProof_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StartStaggerProof
struct ABp_Behemoth_C_StartStaggerProof_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Curving
struct ABp_Behemoth_C_OnRep_Curving_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopSeverVFX
struct ABp_Behemoth_C_StopSeverVFX_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StartSeverVFX
struct ABp_Behemoth_C_StartSeverVFX_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ProcessAttackExtants1
struct ABp_Behemoth_C_ProcessAttackExtants1_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.FindPartFromVolume
struct ABp_Behemoth_C_FindPartFromVolume_Params
{
	class UPrimitiveComponent*                         Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class Umonsterpart_bpc_C*                          Part;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.PlayBehemothMontage
struct ABp_Behemoth_C_PlayBehemothMontage_Params
{
	class UAnimMontage*                                BehemothMontage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AddAttackToRecentAttacks
struct ABp_Behemoth_C_AddAttackToRecentAttacks_Params
{
	TArray<struct FGuid>                               AttackTableToAddTo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       AttackIDToAdd;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DoesAttackExist
struct ABp_Behemoth_C_DoesAttackExist_Params
{
	TArray<struct FGuid>                               AttackArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGuid                                       CurrentAttackID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Exists;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CalculateMitigatedDamage
struct ABp_Behemoth_C_CalculateMitigatedDamage_Params
{
	class Umonsterpart_bpc_C*                          Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawDamage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MitigatedPartDamage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.UserConstructionScript
struct ABp_Behemoth_C_UserConstructionScript_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.CurveTimeline__FinishedFunc
struct ABp_Behemoth_C_CurveTimeline__FinishedFunc_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.CurveTimeline__UpdateFunc
struct ABp_Behemoth_C_CurveTimeline__UpdateFunc_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.Stop Rage VFX Timeline__FinishedFunc
struct ABp_Behemoth_C_Stop_Rage_VFX_Timeline__FinishedFunc_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.Stop Rage VFX Timeline__UpdateFunc
struct ABp_Behemoth_C_Stop_Rage_VFX_Timeline__UpdateFunc_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopAetherVFXTimeline__FinishedFunc
struct ABp_Behemoth_C_StopAetherVFXTimeline__FinishedFunc_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopAetherVFXTimeline__UpdateFunc
struct ABp_Behemoth_C_StopAetherVFXTimeline__UpdateFunc_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnLoaded_D67063584A3A08184C37EAB35F32C6FA
struct ABp_Behemoth_C_OnLoaded_D67063584A3A08184C37EAB35F32C6FA_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnLoaded_50389F1245B62B9D9FF171A3C994A039
struct ABp_Behemoth_C_OnLoaded_50389F1245B62B9D9FF171A3C994A039_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SpawnShinyLoot
struct ABp_Behemoth_C_SpawnShinyLoot_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   ShinyEQS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EQSProjectileSpawned
struct ABp_Behemoth_C_EQSProjectileSpawned_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EQSActorSpawned
struct ABp_Behemoth_C_EQSActorSpawned_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ClearCurrentStagger
struct ABp_Behemoth_C_ClearCurrentStagger_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.UpdateBehemothMusicState_Interface
struct ABp_Behemoth_C_UpdateBehemothMusicState_Interface_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.UpdateDebrisState
struct ABp_Behemoth_C_UpdateDebrisState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AddDebrisState
struct ABp_Behemoth_C_AddDebrisState_Params
{
	class UAnimNotifyState*                            CallerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fvfx_state_id_struct                        StateId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OutputToAll
struct ABp_Behemoth_C_OutputToAll_Params
{
	class FString                                      Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      Damager;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.updateScrollingText
struct ABp_Behemoth_C_updateScrollingText_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReceivedArchonAbilityDamageOnMonsterPart
struct ABp_Behemoth_C_ReceivedArchonAbilityDamageOnMonsterPart_Params
{
	class AMonsterPartActor**                          MonsterPartActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OutputDPS
struct ABp_Behemoth_C_OutputDPS_Params
{
	float                                              DPS;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.LeftFoot
struct ABp_Behemoth_C_GameplayCue_Combat_Trail_LeftFoot_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.RightFoot
struct ABp_Behemoth_C_GameplayCue_Combat_Trail_RightFoot_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.LeftHand
struct ABp_Behemoth_C_GameplayCue_Combat_Trail_LeftHand_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.RightHand
struct ABp_Behemoth_C_GameplayCue_Combat_Trail_RightHand_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.OnDamageReceived
struct ABp_Behemoth_C_GameplayCue_Combat_OnDamageReceived_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReceiveBeginPlay
struct ABp_Behemoth_C_ReceiveBeginPlay_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReceiveTick
struct ABp_Behemoth_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopCurrentMontage
struct ABp_Behemoth_C_StopCurrentMontage_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndBehemothDamageWindow
struct ABp_Behemoth_C_EndBehemothDamageWindow_Params
{
	struct FStruct_DamageTagsPerKey                    PartTagsAndDamageKey;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               StartAttack;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.UpdateHealth
struct ABp_Behemoth_C_UpdateHealth_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReceivePossessed
struct ABp_Behemoth_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.InitAttackExtant
struct ABp_Behemoth_C_InitAttackExtant_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReceiveDestroyed
struct ABp_Behemoth_C_ReceiveDestroyed_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReturnFromLookAt
struct ABp_Behemoth_C_ReturnFromLookAt_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.EaseinLookAt
struct ABp_Behemoth_C_EaseinLookAt_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StartCurving
struct ABp_Behemoth_C_StartCurving_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopCurving
struct ABp_Behemoth_C_StopCurving_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnNavLinkTraversalStateChangedDelegate_Event_1
struct ABp_Behemoth_C_OnNavLinkTraversalStateChangedDelegate_Event_1_Params
{
	bool                                               bIsTraversingNavLink;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.StartFleeTrailVFX
struct ABp_Behemoth_C_StartFleeTrailVFX_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndFleeTrailVFX
struct ABp_Behemoth_C_EndFleeTrailVFX_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.SpawnTeleportParticles
struct ABp_Behemoth_C_SpawnTeleportParticles_Params
{
	struct FVector                                     Dest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SpawnArrivalParticles
struct ABp_Behemoth_C_SpawnArrivalParticles_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnDoPivotDelegate
struct ABp_Behemoth_C_OnDoPivotDelegate_Params
{
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OverridePivotMontage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotAborted
struct ABp_Behemoth_C_OnPivotAborted_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.PlayTiredVFX
struct ABp_Behemoth_C_PlayTiredVFX_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.InternalStopRageVFX
struct ABp_Behemoth_C_InternalStopRageVFX_Params
{
	bool                                               From_Animation_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Deactivation_Delay;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.StopTiredVFX
struct ABp_Behemoth_C_StopTiredVFX_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReplicatedMontageSetNextSection
struct ABp_Behemoth_C_ReplicatedMontageSetNextSection_Params
{
	struct FName                                       SectionNameToChange;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fstatetosectionpair_array_struct            StateToSectiontable;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.Delay And  Destroy Trail
struct ABp_Behemoth_C_Delay_And__Destroy_Trail_Params
{
	class UParticleSystemComponent*                    PSC_Ref;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.LoopMontage_Debug
struct ABp_Behemoth_C_LoopMontage_Debug_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ApplyImpact
struct ABp_Behemoth_C_ApplyImpact_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DurationScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MagnitudeScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DestroyDebrisState
struct ABp_Behemoth_C_DestroyDebrisState_Params
{
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.InternalStopAetherVFX
struct ABp_Behemoth_C_InternalStopAetherVFX_Params
{
	bool                                               FromAnimation_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthOnStateChanged_Event_1
struct ABp_Behemoth_C_AuthOnStateChanged_Event_1_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 What_Happened;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotStarted
struct ABp_Behemoth_C_OnPivotStarted_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnMontageBlendingOut_Event_1
struct ABp_Behemoth_C_OnMontageBlendingOut_Event_1_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthPostAKEvents
struct ABp_Behemoth_C_AuthPostAKEvents_Params
{
	TArray<class UAkAudioEvent*>                       AKEvents;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.MulticastPostAKEvents
struct ABp_Behemoth_C_MulticastPostAKEvents_Params
{
	TArray<class UAkAudioEvent*>                       AKEvents;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthSetBehemothCollision
struct ABp_Behemoth_C_AuthSetBehemothCollision_Params
{
	bool                                               CollisionOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.MulticastSetBehemothCollision
struct ABp_Behemoth_C_MulticastSetBehemothCollision_Params
{
	bool                                               CollisionOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ShowBehemoth
struct ABp_Behemoth_C_ShowBehemoth_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.HideBehemoth
struct ABp_Behemoth_C_HideBehemoth_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndRageTimer
struct ABp_Behemoth_C_EndRageTimer_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndTiredState
struct ABp_Behemoth_C_EndTiredState_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.StartFlee
struct ABp_Behemoth_C_StartFlee_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStartAetherVFX
struct ABp_Behemoth_C_BroadcastStartAetherVFX_Params
{
	bool                                               FromAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopAetherVFX
struct ABp_Behemoth_C_BroadcastStopAetherVFX_Params
{
	bool                                               FromAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStartRageVFX
struct ABp_Behemoth_C_BroadcastStartRageVFX_Params
{
	bool                                               FromAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopRageVFX
struct ABp_Behemoth_C_BroadcastStopRageVFX_Params
{
	bool                                               From_Animation_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Deactivation_Delay;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthSetBehemothScale
struct ABp_Behemoth_C_AuthSetBehemothScale_Params
{
	struct FVector                                     Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DebugDoEvaluateActions
struct ABp_Behemoth_C_DebugDoEvaluateActions_Params
{
	bool                                               OnOrOff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReevaluateActions
struct ABp_Behemoth_C_ReevaluateActions_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetPatrolPoint
struct ABp_Behemoth_C_SetPatrolPoint_Params
{
	class AActor*                                      PatrolPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.PostSpawnInitialize
struct ABp_Behemoth_C_PostSpawnInitialize_Params
{
	bool                                               TriggersEndOfMission;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BehemothNumber;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.BP_DamageGiven
struct ABp_Behemoth_C_BP_DamageGiven_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AddBuffToAttacks
struct ABp_Behemoth_C_AddBuffToAttacks_Params
{
	class UClass*                                      BuffToAdd;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.RemoveBuffFromAttacks
struct ABp_Behemoth_C_RemoveBuffFromAttacks_Params
{
	class UClass*                                      BuffToRemove;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.TryAndDestroyWidgetComponentForFCT
struct ABp_Behemoth_C_TryAndDestroyWidgetComponentForFCT_Params
{
	class UWidgetComponent*                            WidgetComponentReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnPartSevered
struct ABp_Behemoth_C_OnPartSevered_Params
{
	class Umonsterpart_bpc_C*                          Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetStaggerProneDamageThreshold
struct ABp_Behemoth_C_SetStaggerProneDamageThreshold_Params
{
	float                                              NewDamageThreshold;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnStageChangedByBreak_Event_1
struct ABp_Behemoth_C_OnStageChangedByBreak_Event_1_Params
{
	class Umonsterpart_bpc_C*                          Part;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.StaggerBehemoth_interface
struct ABp_Behemoth_C_StaggerBehemoth_interface_Params
{
	TEnumAsByte<Ebehemoth_stagger_type>                StaggerCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerTypeNew;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartBroken;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartSevered;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMonsterPartComponent*                       PartThatCausedStagger;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StaggerCauser;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.TargetChanged_Event_1
struct ABp_Behemoth_C_TargetChanged_Event_1_Params
{
	int                                                OldTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.InitializeBehaviorTree
struct ABp_Behemoth_C_InitializeBehaviorTree_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.SetBehemothLocoState
struct ABp_Behemoth_C_SetBehemothLocoState_Params
{
	TEnumAsByte<Ebehemoth_loco_type>                   LocoState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OverrideDefaultTurnWarpTarget
struct ABp_Behemoth_C_OverrideDefaultTurnWarpTarget_Params
{
	struct FVector                                     TurnWarpTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ClearDefaultTurnWarpTargetOverride
struct ABp_Behemoth_C_ClearDefaultTurnWarpTargetOverride_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.MulticastRegisterStartOfCombat
struct ABp_Behemoth_C_MulticastRegisterStartOfCombat_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnInstantMessageReceived
struct ABp_Behemoth_C_OnInstantMessageReceived_Params
{
	struct Fcoordination_message                       InstantMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.FootPlanted
struct ABp_Behemoth_C_FootPlanted_Params
{
	float                                              DelayedFootSpeed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.FootUnplanted
struct ABp_Behemoth_C_FootUnplanted_Params
{
	float                                              FootSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.CallBehemothSpecificFunctionInterface
struct ABp_Behemoth_C_CallBehemothSpecificFunctionInterface_Params
{
	struct FName                                       FunctionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ActivateMonsterTrail
struct ABp_Behemoth_C_ActivateMonsterTrail_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       In_First_Socket_Name;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       In_Second_Socket_Name;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UNotify_MonsterTrails_C*                     Calling_Notify;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Trail_Color;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.DeactivateMonsterTrail
struct ABp_Behemoth_C_DeactivateMonsterTrail_Params
{
	class UNotify_MonsterTrails_C*                     CallingNotify;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EnterFlyMode
struct ABp_Behemoth_C_EnterFlyMode_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              FlySpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PatrolPointActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.EndFlyMode
struct ABp_Behemoth_C_EndFlyMode_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.MulticastEnterFlyMode
struct ABp_Behemoth_C_MulticastEnterFlyMode_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              FlySpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PatrolPointActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.MulticastEndFlyMode
struct ABp_Behemoth_C_MulticastEndFlyMode_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ModActionRate
struct ABp_Behemoth_C_ModActionRate_Params
{
	float                                              PercentOfCurrentActionRate;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.RemovePartResistMultiplierByID
struct ABp_Behemoth_C_RemovePartResistMultiplierByID_Params
{
	struct FGuid                                       UniqueID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.PostInitializeHealth
struct ABp_Behemoth_C_PostInitializeHealth_Params
{
};

// Function Bp_Behemoth.Bp_Behemoth_C.ReplicatePartTypeMultipliers
struct ABp_Behemoth_C_ReplicatePartTypeMultipliers_Params
{
	TArray<struct Fpart_resist_multiplier>             PartResistMultipliers;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Bp_Behemoth.Bp_Behemoth_C.ExecuteUbergraph_Bp_Behemoth
struct ABp_Behemoth_C_ExecuteUbergraph_Bp_Behemoth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.AuthOnStateChanged__DelegateSignature
struct ABp_Behemoth_C_AuthOnStateChanged__DelegateSignature_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 What_Happened;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnStaggered__DelegateSignature
struct ABp_Behemoth_C_OnStaggered__DelegateSignature_Params
{
	TEnumAsByte<Ebehemoth_stagger_type>                StaggerSourceType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartBroken;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartSevered;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          PartThatCausedStagger;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         BehemothStaggerType;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_Behemoth.Bp_Behemoth_C.OnDamageTaken__DelegateSignature
struct ABp_Behemoth_C_OnDamageTaken__DelegateSignature_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
