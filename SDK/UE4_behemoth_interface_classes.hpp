#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_interface.behemoth_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ubehemoth_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_interface.behemoth_interface_C");
		return ptr;
	}


	void CanPartsBeBroken(bool* PartsCanBeBroken);
	void GetFirstDamageTakenTimestamp(float* FirstDamageTakenTimestamp);
	void SetBehemothMusicState(TEnumAsByte<Ebehemoth_states_enum> MusicState, bool ClearState, bool DisableUpdateMusicStateEvaluation, bool* Success);
	void RemovePartResistMultiplierByID(const struct FGuid& UniqueID);
	void AddPartResistMultiplier(const struct Fpart_resist_multiplier& NewPartResistMultiplier, struct FGuid* UniqueID);
	void GetPartResistMultipliersForType(TEnumAsByte<Ebehemoth_part_type> PartType, TArray<struct Fpart_resist_multiplier>* ResistMultipliers);
	void GetActionRate(float* ActionRate);
	void ModActionRate(float PercentOfCurrentActionRate);
	void EndFlyMode();
	void EnterFlyMode(float FlySpeed, class AActor* PatrolPointActor, TArray<struct FVector>* SplinePoints);
	void GetIsDead(bool* Return);
	void GetHealthScaleFactor(float* HealthScaleFactor);
	void UpdateBehemothMusicState_Interface();
	void DeactivateMonsterTrail(class UNotify_MonsterTrails_C* CallingNotify);
	void ActivateMonsterTrail(class UParticleSystem* ParticleSystem, float LifeTime, const struct FName& In_First_Socket_Name, const struct FName& In_Second_Socket_Name, class UNotify_MonsterTrails_C* Calling_Notify, const struct FLinearColor& Trail_Color);
	void CallBehemothSpecificFunctionInterface(const struct FName& FunctionName);
	void UsingNewStaggerSystem(bool* UsingNewStaggerSystem);
	void ClearDefaultTurnWarpTargetOverride();
	void OverrideDefaultTurnWarpTarget(const struct FVector& TurnWarpTarget);
	void GetCurrentLocoType(TEnumAsByte<Ebehemoth_loco_type>* CurrentLocoState);
	void GetBehemothLocoLookupTable(class Ubehemoth_loco_lookup_table_C** LocoTable);
	void SetBehemothLocoState(TEnumAsByte<Ebehemoth_loco_type> LocoState);
	void GetStaggerLookupTable(class Ustagger_lookup_table_C** StaggerLookupTable);
	void GetGenericActionLookupTable(class Ugeneric_action_lookup_table_C** GenericActionLookupTable);
	void ClearCurrentStagger();
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
	void StaggerBehemoth_interface(TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory, TEnumAsByte<Estagger_type> StaggerTypeNew, bool WasPartBroken, bool WasPartSevered, class UMonsterPartComponent* PartThatCausedStagger, class AActor* StaggerCauser);
	void SetStaggerProneDamageThreshold(float NewDamageThreshold);
	void GetStaggerProneInfo(const struct FName& DamagedPartName, bool* IsStaggerProneForThisPart, float* CurrentStaggerProneDamageThreshold, TEnumAsByte<Edamage_types>* RequiredDamageType, TEnumAsByte<Estagger_type>* StaggerType);
	void BehemothInState(TEnumAsByte<Ebehemoth_states_enum> State, bool* IsInState);
	void RemoveBuffFromAttacks(class UClass* BuffToRemove);
	void AddBuffToAttacks(class UClass* BuffToAdd);
	void GetDynamicMaterialCollection(TArray<class UMaterialInstanceDynamic*>* DynamicMaterialCollection);
	void GetIsInRageState(bool* IsInRageState);
	void TriggersEndOfMission(bool* TriggersEndOfMission);
	void PostSpawnInitialize(bool TriggersEndOfMission, int BehemothNumber);
	void SetPatrolPoint(class AActor* PatrolPoint);
	void GetLootIDs(TArray<class FString>* LootIDs);
	void DoBehemothGenericCheck(const struct FName& CheckFunctionName, bool* Result);
	void GetBehemothScale_interface(struct FVector* Scale);
	void BehemothStateMeetsRequirements(const struct Fbehemoth_requirement_struct& BehemothRequirements, bool* PassesRequirements);
	void PlayBehemothMontage_interface(class UAnimMontage* BehemothMontage, float MontagePlayRate, const struct FName& StartSection, float* Duration);
	void TrySetState_interface(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateChangeType, bool* Success);
	void ShowBehemoth();
	void HideBehemoth();
	void BehemothDamageLookup(const struct FName& DamageKey, struct FDamageTableData* DamageData, bool* RowFound);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
