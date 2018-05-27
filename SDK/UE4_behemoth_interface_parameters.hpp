#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_interface.behemoth_interface_C.CanPartsBeBroken
struct Ubehemoth_interface_C_CanPartsBeBroken_Params
{
	bool                                               PartsCanBeBroken;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetFirstDamageTakenTimestamp
struct Ubehemoth_interface_C_GetFirstDamageTakenTimestamp_Params
{
	float                                              FirstDamageTakenTimestamp;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.SetBehemothMusicState
struct Ubehemoth_interface_C_SetBehemothMusicState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 MusicState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableUpdateMusicStateEvaluation;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.RemovePartResistMultiplierByID
struct Ubehemoth_interface_C_RemovePartResistMultiplierByID_Params
{
	struct FGuid                                       UniqueID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.AddPartResistMultiplier
struct Ubehemoth_interface_C_AddPartResistMultiplier_Params
{
	struct Fpart_resist_multiplier                     NewPartResistMultiplier;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                       UniqueID;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetPartResistMultipliersForType
struct Ubehemoth_interface_C_GetPartResistMultipliersForType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fpart_resist_multiplier>             ResistMultipliers;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function behemoth_interface.behemoth_interface_C.GetActionRate
struct Ubehemoth_interface_C_GetActionRate_Params
{
	float                                              ActionRate;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.ModActionRate
struct Ubehemoth_interface_C_ModActionRate_Params
{
	float                                              PercentOfCurrentActionRate;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.EndFlyMode
struct Ubehemoth_interface_C_EndFlyMode_Params
{
};

// Function behemoth_interface.behemoth_interface_C.EnterFlyMode
struct Ubehemoth_interface_C_EnterFlyMode_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              FlySpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PatrolPointActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetIsDead
struct Ubehemoth_interface_C_GetIsDead_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetHealthScaleFactor
struct Ubehemoth_interface_C_GetHealthScaleFactor_Params
{
	float                                              HealthScaleFactor;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.UpdateBehemothMusicState_Interface
struct Ubehemoth_interface_C_UpdateBehemothMusicState_Interface_Params
{
};

// Function behemoth_interface.behemoth_interface_C.DeactivateMonsterTrail
struct Ubehemoth_interface_C_DeactivateMonsterTrail_Params
{
	class UNotify_MonsterTrails_C*                     CallingNotify;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.ActivateMonsterTrail
struct Ubehemoth_interface_C_ActivateMonsterTrail_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       In_First_Socket_Name;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       In_Second_Socket_Name;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UNotify_MonsterTrails_C*                     Calling_Notify;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Trail_Color;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.CallBehemothSpecificFunctionInterface
struct Ubehemoth_interface_C_CallBehemothSpecificFunctionInterface_Params
{
	struct FName                                       FunctionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.UsingNewStaggerSystem
struct Ubehemoth_interface_C_UsingNewStaggerSystem_Params
{
	bool                                               UsingNewStaggerSystem;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.ClearDefaultTurnWarpTargetOverride
struct Ubehemoth_interface_C_ClearDefaultTurnWarpTargetOverride_Params
{
};

// Function behemoth_interface.behemoth_interface_C.OverrideDefaultTurnWarpTarget
struct Ubehemoth_interface_C_OverrideDefaultTurnWarpTarget_Params
{
	struct FVector                                     TurnWarpTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetCurrentLocoType
struct Ubehemoth_interface_C_GetCurrentLocoType_Params
{
	TEnumAsByte<Ebehemoth_loco_type>                   CurrentLocoState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetBehemothLocoLookupTable
struct Ubehemoth_interface_C_GetBehemothLocoLookupTable_Params
{
	class Ubehemoth_loco_lookup_table_C*               LocoTable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.SetBehemothLocoState
struct Ubehemoth_interface_C_SetBehemothLocoState_Params
{
	TEnumAsByte<Ebehemoth_loco_type>                   LocoState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetStaggerLookupTable
struct Ubehemoth_interface_C_GetStaggerLookupTable_Params
{
	class Ustagger_lookup_table_C*                     StaggerLookupTable;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetGenericActionLookupTable
struct Ubehemoth_interface_C_GetGenericActionLookupTable_Params
{
	class Ugeneric_action_lookup_table_C*              GenericActionLookupTable;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.ClearCurrentStagger
struct Ubehemoth_interface_C_ClearCurrentStagger_Params
{
};

// Function behemoth_interface.behemoth_interface_C.GetCurrentStaggerInstance
struct Ubehemoth_interface_C_GetCurrentStaggerInstance_Params
{
	struct Fstagger_instance                           StaggerInstance;                                          // (Parm, OutParm)
};

// Function behemoth_interface.behemoth_interface_C.GetFleeValues
struct Ubehemoth_interface_C_GetFleeValues_Params
{
	float                                              CurrentFleeHealthThreshold;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeUntilFlee;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalFleePrepTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentlyFleeing;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.FindMontageInGenericActionSet
struct Ubehemoth_interface_C_FindMontageInGenericActionSet_Params
{
	TEnumAsByte<Ebehemoth_generic_action_type>         ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetCurrentPatrolPoint
struct Ubehemoth_interface_C_GetCurrentPatrolPoint_Params
{
	class AActor*                                      CurrentPatrolPoint;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetRageValues
struct Ubehemoth_interface_C_GetRageValues_Params
{
	float                                              CurrentRage;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInRage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetAccuracy
struct Ubehemoth_interface_C_GetAccuracy_Params
{
	float                                              Accuracy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetMonsterPartByName
struct Ubehemoth_interface_C_GetMonsterPartByName_Params
{
	struct FName                                       PartName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             MonsterPart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.ShouldShowCurrentActionHelper
struct Ubehemoth_interface_C_ShouldShowCurrentActionHelper_Params
{
	bool                                               ShouldShowCurrentActionHelper;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetActionArray
struct Ubehemoth_interface_C_GetActionArray_Params
{
	TArray<class AActor*>                              ActionArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function behemoth_interface.behemoth_interface_C.GetCurrentTarget_interface
struct Ubehemoth_interface_C_GetCurrentTarget_interface_Params
{
	class AActor*                                      CurrentTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetBehemothIntroCinematicData
struct Ubehemoth_interface_C_GetBehemothIntroCinematicData_Params
{
	struct Fbehemoth_intro_cinematic_data              CinematicData;                                            // (Parm, OutParm)
};

// Function behemoth_interface.behemoth_interface_C.FindAction
struct Ubehemoth_interface_C_FindAction_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FoundAction;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetBehemothNameData
struct Ubehemoth_interface_C_GetBehemothNameData_Params
{
	struct FName                                       ArchetypeName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ClassificationName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.StaggerBehemoth_interface
struct Ubehemoth_interface_C_StaggerBehemoth_interface_Params
{
	TEnumAsByte<Ebehemoth_stagger_type>                StaggerCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerTypeNew;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartBroken;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasPartSevered;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMonsterPartComponent*                       PartThatCausedStagger;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StaggerCauser;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.SetStaggerProneDamageThreshold
struct Ubehemoth_interface_C_SetStaggerProneDamageThreshold_Params
{
	float                                              NewDamageThreshold;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetStaggerProneInfo
struct Ubehemoth_interface_C_GetStaggerProneInfo_Params
{
	struct FName                                       DamagedPartName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStaggerProneForThisPart;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStaggerProneDamageThreshold;                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Edamage_types>                         RequiredDamageType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Estagger_type>                         StaggerType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.BehemothInState
struct Ubehemoth_interface_C_BehemothInState_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.RemoveBuffFromAttacks
struct Ubehemoth_interface_C_RemoveBuffFromAttacks_Params
{
	class UClass*                                      BuffToRemove;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.AddBuffToAttacks
struct Ubehemoth_interface_C_AddBuffToAttacks_Params
{
	class UClass*                                      BuffToAdd;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetDynamicMaterialCollection
struct Ubehemoth_interface_C_GetDynamicMaterialCollection_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialCollection;                                // (Parm, OutParm, ZeroConstructor)
};

// Function behemoth_interface.behemoth_interface_C.GetIsInRageState
struct Ubehemoth_interface_C_GetIsInRageState_Params
{
	bool                                               IsInRageState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.TriggersEndOfMission
struct Ubehemoth_interface_C_TriggersEndOfMission_Params
{
	bool                                               TriggersEndOfMission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.PostSpawnInitialize
struct Ubehemoth_interface_C_PostSpawnInitialize_Params
{
	bool                                               TriggersEndOfMission;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BehemothNumber;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.SetPatrolPoint
struct Ubehemoth_interface_C_SetPatrolPoint_Params
{
	class AActor*                                      PatrolPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetLootIDs
struct Ubehemoth_interface_C_GetLootIDs_Params
{
	TArray<class FString>                              LootIDs;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function behemoth_interface.behemoth_interface_C.DoBehemothGenericCheck
struct Ubehemoth_interface_C_DoBehemothGenericCheck_Params
{
	struct FName                                       CheckFunctionName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.GetBehemothScale_interface
struct Ubehemoth_interface_C_GetBehemothScale_interface_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.BehemothStateMeetsRequirements
struct Ubehemoth_interface_C_BehemothStateMeetsRequirements_Params
{
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PassesRequirements;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.PlayBehemothMontage_interface
struct Ubehemoth_interface_C_PlayBehemothMontage_interface_Params
{
	class UAnimMontage*                                BehemothMontage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MontagePlayRate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.TrySetState_interface
struct Ubehemoth_interface_C_TrySetState_interface_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 StateChangeType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_interface.behemoth_interface_C.ShowBehemoth
struct Ubehemoth_interface_C_ShowBehemoth_Params
{
};

// Function behemoth_interface.behemoth_interface_C.HideBehemoth
struct Ubehemoth_interface_C_HideBehemoth_Params
{
};

// Function behemoth_interface.behemoth_interface_C.BehemothDamageLookup
struct Ubehemoth_interface_C_BehemothDamageLookup_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageData;                                               // (Parm, OutParm)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
