// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_interface.behemoth_interface_C.CanPartsBeBroken
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PartsCanBeBroken               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::CanPartsBeBroken(bool* PartsCanBeBroken)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.CanPartsBeBroken");

	Ubehemoth_interface_C_CanPartsBeBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartsCanBeBroken != nullptr)
		*PartsCanBeBroken = params.PartsCanBeBroken;
}


// Function behemoth_interface.behemoth_interface_C.GetFirstDamageTakenTimestamp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FirstDamageTakenTimestamp      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetFirstDamageTakenTimestamp(float* FirstDamageTakenTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetFirstDamageTakenTimestamp");

	Ubehemoth_interface_C_GetFirstDamageTakenTimestamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstDamageTakenTimestamp != nullptr)
		*FirstDamageTakenTimestamp = params.FirstDamageTakenTimestamp;
}


// Function behemoth_interface.behemoth_interface_C.SetBehemothMusicState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> MusicState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableUpdateMusicStateEvaluation (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::SetBehemothMusicState(TEnumAsByte<Ebehemoth_states_enum> MusicState, bool ClearState, bool DisableUpdateMusicStateEvaluation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.SetBehemothMusicState");

	Ubehemoth_interface_C_SetBehemothMusicState_Params params;
	params.MusicState = MusicState;
	params.ClearState = ClearState;
	params.DisableUpdateMusicStateEvaluation = DisableUpdateMusicStateEvaluation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function behemoth_interface.behemoth_interface_C.RemovePartResistMultiplierByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   UniqueID                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubehemoth_interface_C::RemovePartResistMultiplierByID(const struct FGuid& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.RemovePartResistMultiplierByID");

	Ubehemoth_interface_C_RemovePartResistMultiplierByID_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.AddPartResistMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpart_resist_multiplier NewPartResistMultiplier        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   UniqueID                       (Parm, OutParm, IsPlainOldData)

void Ubehemoth_interface_C::AddPartResistMultiplier(const struct Fpart_resist_multiplier& NewPartResistMultiplier, struct FGuid* UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.AddPartResistMultiplier");

	Ubehemoth_interface_C_AddPartResistMultiplier_Params params;
	params.NewPartResistMultiplier = NewPartResistMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueID != nullptr)
		*UniqueID = params.UniqueID;
}


// Function behemoth_interface.behemoth_interface_C.GetPartResistMultipliersForType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fpart_resist_multiplier> ResistMultipliers              (Parm, OutParm, ZeroConstructor)

void Ubehemoth_interface_C::GetPartResistMultipliersForType(TEnumAsByte<Ebehemoth_part_type> PartType, TArray<struct Fpart_resist_multiplier>* ResistMultipliers)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetPartResistMultipliersForType");

	Ubehemoth_interface_C_GetPartResistMultipliersForType_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResistMultipliers != nullptr)
		*ResistMultipliers = params.ResistMultipliers;
}


// Function behemoth_interface.behemoth_interface_C.GetActionRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActionRate                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetActionRate(float* ActionRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetActionRate");

	Ubehemoth_interface_C_GetActionRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionRate != nullptr)
		*ActionRate = params.ActionRate;
}


// Function behemoth_interface.behemoth_interface_C.ModActionRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PercentOfCurrentActionRate     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::ModActionRate(float PercentOfCurrentActionRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.ModActionRate");

	Ubehemoth_interface_C_ModActionRate_Params params;
	params.PercentOfCurrentActionRate = PercentOfCurrentActionRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.EndFlyMode
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_interface_C::EndFlyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.EndFlyMode");

	Ubehemoth_interface_C_EndFlyMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.EnterFlyMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          FlySpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PatrolPointActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::EnterFlyMode(float FlySpeed, class AActor* PatrolPointActor, TArray<struct FVector>* SplinePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.EnterFlyMode");

	Ubehemoth_interface_C_EnterFlyMode_Params params;
	params.FlySpeed = FlySpeed;
	params.PatrolPointActor = PatrolPointActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
}


// Function behemoth_interface.behemoth_interface_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetIsDead(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetIsDead");

	Ubehemoth_interface_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function behemoth_interface.behemoth_interface_C.GetHealthScaleFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          HealthScaleFactor              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetHealthScaleFactor(float* HealthScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetHealthScaleFactor");

	Ubehemoth_interface_C_GetHealthScaleFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthScaleFactor != nullptr)
		*HealthScaleFactor = params.HealthScaleFactor;
}


// Function behemoth_interface.behemoth_interface_C.UpdateBehemothMusicState_Interface
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_interface_C::UpdateBehemothMusicState_Interface()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.UpdateBehemothMusicState_Interface");

	Ubehemoth_interface_C_UpdateBehemothMusicState_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.DeactivateMonsterTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNotify_MonsterTrails_C* CallingNotify                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::DeactivateMonsterTrail(class UNotify_MonsterTrails_C* CallingNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.DeactivateMonsterTrail");

	Ubehemoth_interface_C_DeactivateMonsterTrail_Params params;
	params.CallingNotify = CallingNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.ActivateMonsterTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   In_First_Socket_Name           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   In_Second_Socket_Name          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UNotify_MonsterTrails_C* Calling_Notify                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Trail_Color                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubehemoth_interface_C::ActivateMonsterTrail(class UParticleSystem* ParticleSystem, float LifeTime, const struct FName& In_First_Socket_Name, const struct FName& In_Second_Socket_Name, class UNotify_MonsterTrails_C* Calling_Notify, const struct FLinearColor& Trail_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.ActivateMonsterTrail");

	Ubehemoth_interface_C_ActivateMonsterTrail_Params params;
	params.ParticleSystem = ParticleSystem;
	params.LifeTime = LifeTime;
	params.In_First_Socket_Name = In_First_Socket_Name;
	params.In_Second_Socket_Name = In_Second_Socket_Name;
	params.Calling_Notify = Calling_Notify;
	params.Trail_Color = Trail_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.CallBehemothSpecificFunctionInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FunctionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::CallBehemothSpecificFunctionInterface(const struct FName& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.CallBehemothSpecificFunctionInterface");

	Ubehemoth_interface_C_CallBehemothSpecificFunctionInterface_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.UsingNewStaggerSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           UsingNewStaggerSystem          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::UsingNewStaggerSystem(bool* UsingNewStaggerSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.UsingNewStaggerSystem");

	Ubehemoth_interface_C_UsingNewStaggerSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsingNewStaggerSystem != nullptr)
		*UsingNewStaggerSystem = params.UsingNewStaggerSystem;
}


// Function behemoth_interface.behemoth_interface_C.ClearDefaultTurnWarpTargetOverride
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_interface_C::ClearDefaultTurnWarpTargetOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.ClearDefaultTurnWarpTargetOverride");

	Ubehemoth_interface_C_ClearDefaultTurnWarpTargetOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.OverrideDefaultTurnWarpTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TurnWarpTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubehemoth_interface_C::OverrideDefaultTurnWarpTarget(const struct FVector& TurnWarpTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.OverrideDefaultTurnWarpTarget");

	Ubehemoth_interface_C_OverrideDefaultTurnWarpTarget_Params params;
	params.TurnWarpTarget = TurnWarpTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.GetCurrentLocoType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Ebehemoth_loco_type> CurrentLocoState               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetCurrentLocoType(TEnumAsByte<Ebehemoth_loco_type>* CurrentLocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetCurrentLocoType");

	Ubehemoth_interface_C_GetCurrentLocoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLocoState != nullptr)
		*CurrentLocoState = params.CurrentLocoState;
}


// Function behemoth_interface.behemoth_interface_C.GetBehemothLocoLookupTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class Ubehemoth_loco_lookup_table_C* LocoTable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetBehemothLocoLookupTable(class Ubehemoth_loco_lookup_table_C** LocoTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetBehemothLocoLookupTable");

	Ubehemoth_interface_C_GetBehemothLocoLookupTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocoTable != nullptr)
		*LocoTable = params.LocoTable;
}


// Function behemoth_interface.behemoth_interface_C.SetBehemothLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_loco_type> LocoState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::SetBehemothLocoState(TEnumAsByte<Ebehemoth_loco_type> LocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.SetBehemothLocoState");

	Ubehemoth_interface_C_SetBehemothLocoState_Params params;
	params.LocoState = LocoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.GetStaggerLookupTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ustagger_lookup_table_C* StaggerLookupTable             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetStaggerLookupTable(class Ustagger_lookup_table_C** StaggerLookupTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetStaggerLookupTable");

	Ubehemoth_interface_C_GetStaggerLookupTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerLookupTable != nullptr)
		*StaggerLookupTable = params.StaggerLookupTable;
}


// Function behemoth_interface.behemoth_interface_C.GetGenericActionLookupTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ugeneric_action_lookup_table_C* GenericActionLookupTable       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetGenericActionLookupTable(class Ugeneric_action_lookup_table_C** GenericActionLookupTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetGenericActionLookupTable");

	Ubehemoth_interface_C_GetGenericActionLookupTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericActionLookupTable != nullptr)
		*GenericActionLookupTable = params.GenericActionLookupTable;
}


// Function behemoth_interface.behemoth_interface_C.ClearCurrentStagger
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_interface_C::ClearCurrentStagger()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.ClearCurrentStagger");

	Ubehemoth_interface_C_ClearCurrentStagger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.GetCurrentStaggerInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct Fstagger_instance       StaggerInstance                (Parm, OutParm)

void Ubehemoth_interface_C::GetCurrentStaggerInstance(struct Fstagger_instance* StaggerInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetCurrentStaggerInstance");

	Ubehemoth_interface_C_GetCurrentStaggerInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerInstance != nullptr)
		*StaggerInstance = params.StaggerInstance;
}


// Function behemoth_interface.behemoth_interface_C.GetFleeValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentFleeHealthThreshold     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TimeUntilFlee                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TotalFleePrepTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentlyFleeing               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetFleeValues(float* CurrentFleeHealthThreshold, float* TimeUntilFlee, float* TotalFleePrepTime, bool* CurrentlyFleeing)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetFleeValues");

	Ubehemoth_interface_C_GetFleeValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentFleeHealthThreshold != nullptr)
		*CurrentFleeHealthThreshold = params.CurrentFleeHealthThreshold;
	if (TimeUntilFlee != nullptr)
		*TimeUntilFlee = params.TimeUntilFlee;
	if (TotalFleePrepTime != nullptr)
		*TotalFleePrepTime = params.TotalFleePrepTime;
	if (CurrentlyFleeing != nullptr)
		*CurrentlyFleeing = params.CurrentlyFleeing;
}


// Function behemoth_interface.behemoth_interface_C.FindMontageInGenericActionSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_generic_action_type> ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::FindMontageInGenericActionSet(TEnumAsByte<Ebehemoth_generic_action_type> ActionType, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.FindMontageInGenericActionSet");

	Ubehemoth_interface_C_FindMontageInGenericActionSet_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function behemoth_interface.behemoth_interface_C.GetCurrentPatrolPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CurrentPatrolPoint             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetCurrentPatrolPoint(class AActor** CurrentPatrolPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetCurrentPatrolPoint");

	Ubehemoth_interface_C_GetCurrentPatrolPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPatrolPoint != nullptr)
		*CurrentPatrolPoint = params.CurrentPatrolPoint;
}


// Function behemoth_interface.behemoth_interface_C.GetRageValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          CurrentRage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxRage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsInRage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetRageValues(float* CurrentRage, float* MaxRage, bool* IsInRage)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetRageValues");

	Ubehemoth_interface_C_GetRageValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentRage != nullptr)
		*CurrentRage = params.CurrentRage;
	if (MaxRage != nullptr)
		*MaxRage = params.MaxRage;
	if (IsInRage != nullptr)
		*IsInRage = params.IsInRage;
}


// Function behemoth_interface.behemoth_interface_C.GetAccuracy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetAccuracy(float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetAccuracy");

	Ubehemoth_interface_C_GetAccuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function behemoth_interface.behemoth_interface_C.GetMonsterPartByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PartName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         MonsterPart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetMonsterPartByName(const struct FName& PartName, class UActorComponent** MonsterPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetMonsterPartByName");

	Ubehemoth_interface_C_GetMonsterPartByName_Params params;
	params.PartName = PartName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MonsterPart != nullptr)
		*MonsterPart = params.MonsterPart;
}


// Function behemoth_interface.behemoth_interface_C.ShouldShowCurrentActionHelper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ShouldShowCurrentActionHelper  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::ShouldShowCurrentActionHelper(bool* ShouldShowCurrentActionHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.ShouldShowCurrentActionHelper");

	Ubehemoth_interface_C_ShouldShowCurrentActionHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShowCurrentActionHelper != nullptr)
		*ShouldShowCurrentActionHelper = params.ShouldShowCurrentActionHelper;
}


// Function behemoth_interface.behemoth_interface_C.GetActionArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActionArray                    (Parm, OutParm, ZeroConstructor)

void Ubehemoth_interface_C::GetActionArray(TArray<class AActor*>* ActionArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetActionArray");

	Ubehemoth_interface_C_GetActionArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionArray != nullptr)
		*ActionArray = params.ActionArray;
}


// Function behemoth_interface.behemoth_interface_C.GetCurrentTarget_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  CurrentTarget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetCurrentTarget_interface(class AActor** CurrentTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetCurrentTarget_interface");

	Ubehemoth_interface_C_GetCurrentTarget_interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentTarget != nullptr)
		*CurrentTarget = params.CurrentTarget;
}


// Function behemoth_interface.behemoth_interface_C.GetBehemothIntroCinematicData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbehemoth_intro_cinematic_data CinematicData                  (Parm, OutParm)

void Ubehemoth_interface_C::GetBehemothIntroCinematicData(struct Fbehemoth_intro_cinematic_data* CinematicData)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetBehemothIntroCinematicData");

	Ubehemoth_interface_C_GetBehemothIntroCinematicData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CinematicData != nullptr)
		*CinematicData = params.CinematicData;
}


// Function behemoth_interface.behemoth_interface_C.FindAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FoundAction                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::FindAction(class UClass* ActionClass, class AActor** FoundAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.FindAction");

	Ubehemoth_interface_C_FindAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundAction != nullptr)
		*FoundAction = params.FoundAction;
}


// Function behemoth_interface.behemoth_interface_C.GetBehemothNameData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArchetypeName                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClassificationName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetBehemothNameData(struct FName* ArchetypeName, struct FName* ClassificationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetBehemothNameData");

	Ubehemoth_interface_C_GetBehemothNameData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchetypeName != nullptr)
		*ArchetypeName = params.ArchetypeName;
	if (ClassificationName != nullptr)
		*ClassificationName = params.ClassificationName;
}


// Function behemoth_interface.behemoth_interface_C.StaggerBehemoth_interface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerTypeNew                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartBroken                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartSevered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMonsterPartComponent*   PartThatCausedStagger          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StaggerCauser                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::StaggerBehemoth_interface(TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory, TEnumAsByte<Estagger_type> StaggerTypeNew, bool WasPartBroken, bool WasPartSevered, class UMonsterPartComponent* PartThatCausedStagger, class AActor* StaggerCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.StaggerBehemoth_interface");

	Ubehemoth_interface_C_StaggerBehemoth_interface_Params params;
	params.StaggerCategory = StaggerCategory;
	params.StaggerTypeNew = StaggerTypeNew;
	params.WasPartBroken = WasPartBroken;
	params.WasPartSevered = WasPartSevered;
	params.PartThatCausedStagger = PartThatCausedStagger;
	params.StaggerCauser = StaggerCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.SetStaggerProneDamageThreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDamageThreshold             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::SetStaggerProneDamageThreshold(float NewDamageThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.SetStaggerProneDamageThreshold");

	Ubehemoth_interface_C_SetStaggerProneDamageThreshold_Params params;
	params.NewDamageThreshold = NewDamageThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.GetStaggerProneInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamagedPartName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStaggerProneForThisPart      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentStaggerProneDamageThreshold (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Edamage_types>     RequiredDamageType             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetStaggerProneInfo(const struct FName& DamagedPartName, bool* IsStaggerProneForThisPart, float* CurrentStaggerProneDamageThreshold, TEnumAsByte<Edamage_types>* RequiredDamageType, TEnumAsByte<Estagger_type>* StaggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetStaggerProneInfo");

	Ubehemoth_interface_C_GetStaggerProneInfo_Params params;
	params.DamagedPartName = DamagedPartName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsStaggerProneForThisPart != nullptr)
		*IsStaggerProneForThisPart = params.IsStaggerProneForThisPart;
	if (CurrentStaggerProneDamageThreshold != nullptr)
		*CurrentStaggerProneDamageThreshold = params.CurrentStaggerProneDamageThreshold;
	if (RequiredDamageType != nullptr)
		*RequiredDamageType = params.RequiredDamageType;
	if (StaggerType != nullptr)
		*StaggerType = params.StaggerType;
}


// Function behemoth_interface.behemoth_interface_C.BehemothInState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::BehemothInState(TEnumAsByte<Ebehemoth_states_enum> State, bool* IsInState)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.BehemothInState");

	Ubehemoth_interface_C_BehemothInState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInState != nullptr)
		*IsInState = params.IsInState;
}


// Function behemoth_interface.behemoth_interface_C.RemoveBuffFromAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BuffToRemove                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::RemoveBuffFromAttacks(class UClass* BuffToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.RemoveBuffFromAttacks");

	Ubehemoth_interface_C_RemoveBuffFromAttacks_Params params;
	params.BuffToRemove = BuffToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.AddBuffToAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BuffToAdd                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::AddBuffToAttacks(class UClass* BuffToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.AddBuffToAttacks");

	Ubehemoth_interface_C_AddBuffToAttacks_Params params;
	params.BuffToAdd = BuffToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.GetDynamicMaterialCollection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DynamicMaterialCollection      (Parm, OutParm, ZeroConstructor)

void Ubehemoth_interface_C::GetDynamicMaterialCollection(TArray<class UMaterialInstanceDynamic*>* DynamicMaterialCollection)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetDynamicMaterialCollection");

	Ubehemoth_interface_C_GetDynamicMaterialCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterialCollection != nullptr)
		*DynamicMaterialCollection = params.DynamicMaterialCollection;
}


// Function behemoth_interface.behemoth_interface_C.GetIsInRageState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsInRageState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::GetIsInRageState(bool* IsInRageState)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetIsInRageState");

	Ubehemoth_interface_C_GetIsInRageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInRageState != nullptr)
		*IsInRageState = params.IsInRageState;
}


// Function behemoth_interface.behemoth_interface_C.TriggersEndOfMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           TriggersEndOfMission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::TriggersEndOfMission(bool* TriggersEndOfMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.TriggersEndOfMission");

	Ubehemoth_interface_C_TriggersEndOfMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TriggersEndOfMission != nullptr)
		*TriggersEndOfMission = params.TriggersEndOfMission;
}


// Function behemoth_interface.behemoth_interface_C.PostSpawnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TriggersEndOfMission           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BehemothNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::PostSpawnInitialize(bool TriggersEndOfMission, int BehemothNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.PostSpawnInitialize");

	Ubehemoth_interface_C_PostSpawnInitialize_Params params;
	params.TriggersEndOfMission = TriggersEndOfMission;
	params.BehemothNumber = BehemothNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.SetPatrolPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PatrolPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::SetPatrolPoint(class AActor* PatrolPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.SetPatrolPoint");

	Ubehemoth_interface_C_SetPatrolPoint_Params params;
	params.PatrolPoint = PatrolPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.GetLootIDs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          LootIDs                        (Parm, OutParm, ZeroConstructor)

void Ubehemoth_interface_C::GetLootIDs(TArray<class FString>* LootIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetLootIDs");

	Ubehemoth_interface_C_GetLootIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootIDs != nullptr)
		*LootIDs = params.LootIDs;
}


// Function behemoth_interface.behemoth_interface_C.DoBehemothGenericCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CheckFunctionName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::DoBehemothGenericCheck(const struct FName& CheckFunctionName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.DoBehemothGenericCheck");

	Ubehemoth_interface_C_DoBehemothGenericCheck_Params params;
	params.CheckFunctionName = CheckFunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function behemoth_interface.behemoth_interface_C.GetBehemothScale_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, IsPlainOldData)

void Ubehemoth_interface_C::GetBehemothScale_interface(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.GetBehemothScale_interface");

	Ubehemoth_interface_C_GetBehemothScale_interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function behemoth_interface.behemoth_interface_C.BehemothStateMeetsRequirements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbehemoth_requirement_struct BehemothRequirements           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PassesRequirements             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::BehemothStateMeetsRequirements(const struct Fbehemoth_requirement_struct& BehemothRequirements, bool* PassesRequirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.BehemothStateMeetsRequirements");

	Ubehemoth_interface_C_BehemothStateMeetsRequirements_Params params;
	params.BehemothRequirements = BehemothRequirements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassesRequirements != nullptr)
		*PassesRequirements = params.PassesRequirements;
}


// Function behemoth_interface.behemoth_interface_C.PlayBehemothMontage_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            BehemothMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MontagePlayRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::PlayBehemothMontage_interface(class UAnimMontage* BehemothMontage, float MontagePlayRate, const struct FName& StartSection, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.PlayBehemothMontage_interface");

	Ubehemoth_interface_C_PlayBehemothMontage_interface_Params params;
	params.BehemothMontage = BehemothMontage;
	params.MontagePlayRate = MontagePlayRate;
	params.StartSection = StartSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function behemoth_interface.behemoth_interface_C.TrySetState_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> StateChangeType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::TrySetState_interface(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateChangeType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.TrySetState_interface");

	Ubehemoth_interface_C_TrySetState_interface_Params params;
	params.State = State;
	params.StateChangeType = StateChangeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function behemoth_interface.behemoth_interface_C.ShowBehemoth
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_interface_C::ShowBehemoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.ShowBehemoth");

	Ubehemoth_interface_C_ShowBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.HideBehemoth
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_interface_C::HideBehemoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.HideBehemoth");

	Ubehemoth_interface_C_HideBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_interface.behemoth_interface_C.BehemothDamageLookup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageData                     (Parm, OutParm)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_interface_C::BehemothDamageLookup(const struct FName& DamageKey, struct FDamageTableData* DamageData, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_interface.behemoth_interface_C.BehemothDamageLookup");

	Ubehemoth_interface_C_BehemothDamageLookup_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
