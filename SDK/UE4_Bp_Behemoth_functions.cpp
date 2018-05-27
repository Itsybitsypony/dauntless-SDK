// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_Behemoth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_Behemoth.Bp_Behemoth_C.GetShouldExecuteAKNotify
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimNotify_AkEvent_C*   NotifyInstance                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetShouldExecuteAKNotify(class UAnimNotify_AkEvent_C* NotifyInstance, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetShouldExecuteAKNotify");

	ABp_Behemoth_C_GetShouldExecuteAKNotify_Params params;
	params.NotifyInstance = NotifyInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EnableHighlightForDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EnableHighlightForDuration(float Duration, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EnableHighlightForDuration");

	ABp_Behemoth_C_EnableHighlightForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetGrantItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetGrantItemID(const class FString& GatherID, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetGrantItemID");

	ABp_Behemoth_C_SetGrantItemID_Params params;
	params.GatherID = GatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetDamageRow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageRow                      (Parm, OutParm)
// float                          DamageScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetDamageRow(const struct FName& DamageKey, struct FDamageTableData* DamageRow, float* DamageScale, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetDamageRow");

	ABp_Behemoth_C_GetDamageRow_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRow != nullptr)
		*DamageRow = params.DamageRow;
	if (DamageScale != nullptr)
		*DamageScale = params.DamageScale;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplayData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Feqs_spawn_query        NewEQSSpawnQuery               (Parm, OutParm)
// bool                           ModifiedData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplayData");

	ABp_Behemoth_C_ModifyEQSGameplayData_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEQSSpawnQuery != nullptr)
		*NewEQSSpawnQuery = params.NewEQSSpawnQuery;
	if (ModifiedData != nullptr)
		*ModifiedData = params.ModifiedData;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplaySpawnPosPreCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 InitialStartPosition           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InitialTargetPosition          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewStartPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplaySpawnPosPreCalc");

	ABp_Behemoth_C_ModifyEQSGameplaySpawnPosPreCalc_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;
	params.InitialStartPosition = InitialStartPosition;
	params.InitialTargetPosition = InitialTargetPosition;
	params.PossiblyNullTargetActor = PossiblyNullTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewStartPosition != nullptr)
		*NewStartPosition = params.NewStartPosition;
	if (ModifiedPosition != nullptr)
		*ModifiedPosition = params.ModifiedPosition;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplaySpawnPosPostCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 FinalTargetPosition            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewPosition                    (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ModifyEQSGameplaySpawnPosPostCalc");

	ABp_Behemoth_C_ModifyEQSGameplaySpawnPosPostCalc_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;
	params.StartPosition = StartPosition;
	params.FinalTargetPosition = FinalTargetPosition;
	params.PossiblyNullTargetActor = PossiblyNullTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPosition != nullptr)
		*NewPosition = params.NewPosition;
	if (ModifiedPosition != nullptr)
		*ModifiedPosition = params.ModifiedPosition;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OverridePersistentSpawnPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct Fpersistent_spawn_params PersistentSpawnRequest         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PositionWasOverridden          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewSpawnPos                    (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::OverridePersistentSpawnPosition(const struct FVector& SpawnPos, const struct Fpersistent_spawn_params& PersistentSpawnRequest, bool* PositionWasOverridden, struct FVector* NewSpawnPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OverridePersistentSpawnPosition");

	ABp_Behemoth_C_OverridePersistentSpawnPosition_Params params;
	params.SpawnPos = SpawnPos;
	params.PersistentSpawnRequest = PersistentSpawnRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PositionWasOverridden != nullptr)
		*PositionWasOverridden = params.PositionWasOverridden;
	if (NewSpawnPos != nullptr)
		*NewSpawnPos = params.NewSpawnPos;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SpawnWidgetComponentForFCT
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SpawnWidgetComponentForFCT(class UWidgetComponent** WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SpawnWidgetComponentForFCT");

	ABp_Behemoth_C_SpawnWidgetComponentForFCT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetComponent != nullptr)
		*WidgetComponent = params.WidgetComponent;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CanHitCBPushPullTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hits_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CanHitCBPushPullTarget(bool* Hits_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CanHitCBPushPullTarget");

	ABp_Behemoth_C_CanHitCBPushPullTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits_ != nullptr)
		*Hits_ = params.Hits_;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetDefaultElementalAttackType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   DefaultElementalAttackType     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetDefaultElementalAttackType");

	ABp_Behemoth_C_GetDefaultElementalAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultElementalAttackType != nullptr)
		*DefaultElementalAttackType = params.DefaultElementalAttackType;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetLookAtVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtVector                   (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::GetLookAtVector(struct FVector* LookAtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetLookAtVector");

	ABp_Behemoth_C_GetLookAtVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtVector != nullptr)
		*LookAtVector = params.LookAtVector;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetLookAtAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetLookAtAlpha");

	ABp_Behemoth_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetMesh");

	ABp_Behemoth_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetFallbackProjectileSpawnOffset");

	ABp_Behemoth_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CanPartsBeBroken
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PartsCanBeBroken               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CanPartsBeBroken(bool* PartsCanBeBroken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CanPartsBeBroken");

	ABp_Behemoth_C_CanPartsBeBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartsCanBeBroken != nullptr)
		*PartsCanBeBroken = params.PartsCanBeBroken;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetFirstDamageTakenTimestamp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FirstDamageTakenTimestamp      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetFirstDamageTakenTimestamp(float* FirstDamageTakenTimestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetFirstDamageTakenTimestamp");

	ABp_Behemoth_C_GetFirstDamageTakenTimestamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstDamageTakenTimestamp != nullptr)
		*FirstDamageTakenTimestamp = params.FirstDamageTakenTimestamp;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetBehemothMusicState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> MusicState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ClearState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisableUpdateMusicStateEvaluation (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetBehemothMusicState(TEnumAsByte<Ebehemoth_states_enum> MusicState, bool ClearState, bool DisableUpdateMusicStateEvaluation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetBehemothMusicState");

	ABp_Behemoth_C_SetBehemothMusicState_Params params;
	params.MusicState = MusicState;
	params.ClearState = ClearState;
	params.DisableUpdateMusicStateEvaluation = DisableUpdateMusicStateEvaluation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetPartResistMultipliersForType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fpart_resist_multiplier> ResistMultipliers              (Parm, OutParm, ZeroConstructor)

void ABp_Behemoth_C::GetPartResistMultipliersForType(TEnumAsByte<Ebehemoth_part_type> PartType, TArray<struct Fpart_resist_multiplier>* ResistMultipliers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetPartResistMultipliersForType");

	ABp_Behemoth_C_GetPartResistMultipliersForType_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResistMultipliers != nullptr)
		*ResistMultipliers = params.ResistMultipliers;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AddPartResistMultiplier
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpart_resist_multiplier NewPartResistMultiplier        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuid                   UniqueID                       (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::AddPartResistMultiplier(const struct Fpart_resist_multiplier& NewPartResistMultiplier, struct FGuid* UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AddPartResistMultiplier");

	ABp_Behemoth_C_AddPartResistMultiplier_Params params;
	params.NewPartResistMultiplier = NewPartResistMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueID != nullptr)
		*UniqueID = params.UniqueID;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetActionRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActionRate                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetActionRate(float* ActionRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetActionRate");

	ABp_Behemoth_C_GetActionRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionRate != nullptr)
		*ActionRate = params.ActionRate;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetIsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetIsDead(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetIsDead");

	ABp_Behemoth_C_GetIsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetHealthScaleFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          HealthScaleFactor              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetHealthScaleFactor(float* HealthScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetHealthScaleFactor");

	ABp_Behemoth_C_GetHealthScaleFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthScaleFactor != nullptr)
		*HealthScaleFactor = params.HealthScaleFactor;
}


// Function Bp_Behemoth.Bp_Behemoth_C.UsingNewStaggerSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           UsingNewStaggerSystem          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::UsingNewStaggerSystem(bool* UsingNewStaggerSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.UsingNewStaggerSystem");

	ABp_Behemoth_C_UsingNewStaggerSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsingNewStaggerSystem != nullptr)
		*UsingNewStaggerSystem = params.UsingNewStaggerSystem;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentLocoType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Ebehemoth_loco_type> CurrentLocoState               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetCurrentLocoType(TEnumAsByte<Ebehemoth_loco_type>* CurrentLocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentLocoType");

	ABp_Behemoth_C_GetCurrentLocoType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLocoState != nullptr)
		*CurrentLocoState = params.CurrentLocoState;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothLocoLookupTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class Ubehemoth_loco_lookup_table_C* LocoTable                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetBehemothLocoLookupTable(class Ubehemoth_loco_lookup_table_C** LocoTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothLocoLookupTable");

	ABp_Behemoth_C_GetBehemothLocoLookupTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocoTable != nullptr)
		*LocoTable = params.LocoTable;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetGenericActionLookupTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ugeneric_action_lookup_table_C* GenericActionLookupTable       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetGenericActionLookupTable(class Ugeneric_action_lookup_table_C** GenericActionLookupTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetGenericActionLookupTable");

	ABp_Behemoth_C_GetGenericActionLookupTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericActionLookupTable != nullptr)
		*GenericActionLookupTable = params.GenericActionLookupTable;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetStaggerLookupTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ustagger_lookup_table_C* StaggerLookupTable             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetStaggerLookupTable(class Ustagger_lookup_table_C** StaggerLookupTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetStaggerLookupTable");

	ABp_Behemoth_C_GetStaggerLookupTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerLookupTable != nullptr)
		*StaggerLookupTable = params.StaggerLookupTable;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentStaggerInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct Fstagger_instance       StaggerInstance                (Parm, OutParm)

void ABp_Behemoth_C::GetCurrentStaggerInstance(struct Fstagger_instance* StaggerInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentStaggerInstance");

	ABp_Behemoth_C_GetCurrentStaggerInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerInstance != nullptr)
		*StaggerInstance = params.StaggerInstance;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetFleeValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentFleeHealthThreshold     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TimeUntilFlee                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TotalFleePrepTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentlyFleeing               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetFleeValues(float* CurrentFleeHealthThreshold, float* TimeUntilFlee, float* TotalFleePrepTime, bool* CurrentlyFleeing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetFleeValues");

	ABp_Behemoth_C_GetFleeValues_Params params;

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


// Function Bp_Behemoth.Bp_Behemoth_C.FindMontageInGenericActionSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_generic_action_type> ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::FindMontageInGenericActionSet(TEnumAsByte<Ebehemoth_generic_action_type> ActionType, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.FindMontageInGenericActionSet");

	ABp_Behemoth_C_FindMontageInGenericActionSet_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentPatrolPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CurrentPatrolPoint             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetCurrentPatrolPoint(class AActor** CurrentPatrolPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentPatrolPoint");

	ABp_Behemoth_C_GetCurrentPatrolPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentPatrolPoint != nullptr)
		*CurrentPatrolPoint = params.CurrentPatrolPoint;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetRageValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          CurrentRage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxRage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsInRage                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetRageValues(float* CurrentRage, float* MaxRage, bool* IsInRage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetRageValues");

	ABp_Behemoth_C_GetRageValues_Params params;

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


// Function Bp_Behemoth.Bp_Behemoth_C.GetAccuracy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetAccuracy(float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetAccuracy");

	ABp_Behemoth_C_GetAccuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetMonsterPartByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PartName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         MonsterPart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetMonsterPartByName(const struct FName& PartName, class UActorComponent** MonsterPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetMonsterPartByName");

	ABp_Behemoth_C_GetMonsterPartByName_Params params;
	params.PartName = PartName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MonsterPart != nullptr)
		*MonsterPart = params.MonsterPart;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ShouldShowCurrentActionHelper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ShouldShowCurrentActionHelper  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ShouldShowCurrentActionHelper(bool* ShouldShowCurrentActionHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ShouldShowCurrentActionHelper");

	ABp_Behemoth_C_ShouldShowCurrentActionHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShowCurrentActionHelper != nullptr)
		*ShouldShowCurrentActionHelper = params.ShouldShowCurrentActionHelper;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetActionArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActionArray                    (Parm, OutParm, ZeroConstructor)

void ABp_Behemoth_C::GetActionArray(TArray<class AActor*>* ActionArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetActionArray");

	ABp_Behemoth_C_GetActionArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionArray != nullptr)
		*ActionArray = params.ActionArray;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentTarget_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  CurrentTarget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetCurrentTarget_interface(class AActor** CurrentTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentTarget_interface");

	ABp_Behemoth_C_GetCurrentTarget_interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentTarget != nullptr)
		*CurrentTarget = params.CurrentTarget;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothIntroCinematicData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbehemoth_intro_cinematic_data CinematicData                  (Parm, OutParm)

void ABp_Behemoth_C::GetBehemothIntroCinematicData(struct Fbehemoth_intro_cinematic_data* CinematicData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothIntroCinematicData");

	ABp_Behemoth_C_GetBehemothIntroCinematicData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CinematicData != nullptr)
		*CinematicData = params.CinematicData;
}


// Function Bp_Behemoth.Bp_Behemoth_C.FindAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FoundAction                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::FindAction(class UClass* ActionClass, class AActor** FoundAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.FindAction");

	ABp_Behemoth_C_FindAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundAction != nullptr)
		*FoundAction = params.FoundAction;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothNameData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ArchetypeName                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ClassificationName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetBehemothNameData(struct FName* ArchetypeName, struct FName* ClassificationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothNameData");

	ABp_Behemoth_C_GetBehemothNameData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchetypeName != nullptr)
		*ArchetypeName = params.ArchetypeName;
	if (ClassificationName != nullptr)
		*ClassificationName = params.ClassificationName;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetStaggerProneInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamagedPartName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsStaggerProneForThisPart      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentStaggerProneDamageThreshold (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Edamage_types>     RequiredDamageType             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetStaggerProneInfo(const struct FName& DamagedPartName, bool* IsStaggerProneForThisPart, float* CurrentStaggerProneDamageThreshold, TEnumAsByte<Edamage_types>* RequiredDamageType, TEnumAsByte<Estagger_type>* StaggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetStaggerProneInfo");

	ABp_Behemoth_C_GetStaggerProneInfo_Params params;
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


// Function Bp_Behemoth.Bp_Behemoth_C.BehemothInState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BehemothInState(TEnumAsByte<Ebehemoth_states_enum> State, bool* IsInState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BehemothInState");

	ABp_Behemoth_C_BehemothInState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInState != nullptr)
		*IsInState = params.IsInState;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetDynamicMaterialCollection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DynamicMaterialCollection      (Parm, OutParm, ZeroConstructor)

void ABp_Behemoth_C::GetDynamicMaterialCollection(TArray<class UMaterialInstanceDynamic*>* DynamicMaterialCollection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetDynamicMaterialCollection");

	ABp_Behemoth_C_GetDynamicMaterialCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterialCollection != nullptr)
		*DynamicMaterialCollection = params.DynamicMaterialCollection;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetIsInRageState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsInRageState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetIsInRageState(bool* IsInRageState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetIsInRageState");

	ABp_Behemoth_C_GetIsInRageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInRageState != nullptr)
		*IsInRageState = params.IsInRageState;
}


// Function Bp_Behemoth.Bp_Behemoth_C.TriggersEndOfMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           TriggersEndOfMission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::TriggersEndOfMission(bool* TriggersEndOfMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.TriggersEndOfMission");

	ABp_Behemoth_C_TriggersEndOfMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TriggersEndOfMission != nullptr)
		*TriggersEndOfMission = params.TriggersEndOfMission;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetLootIDs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          LootIDs                        (Parm, OutParm, ZeroConstructor)

void ABp_Behemoth_C::GetLootIDs(TArray<class FString>* LootIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetLootIDs");

	ABp_Behemoth_C_GetLootIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootIDs != nullptr)
		*LootIDs = params.LootIDs;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DoBehemothGenericCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CheckFunctionName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DoBehemothGenericCheck(const struct FName& CheckFunctionName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DoBehemothGenericCheck");

	ABp_Behemoth_C_DoBehemothGenericCheck_Params params;
	params.CheckFunctionName = CheckFunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothScale_interface
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::GetBehemothScale_interface(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetBehemothScale_interface");

	ABp_Behemoth_C_GetBehemothScale_interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BehemothStateMeetsRequirements
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbehemoth_requirement_struct BehemothRequirements           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PassesRequirements             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BehemothStateMeetsRequirements(const struct Fbehemoth_requirement_struct& BehemothRequirements, bool* PassesRequirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BehemothStateMeetsRequirements");

	ABp_Behemoth_C_BehemothStateMeetsRequirements_Params params;
	params.BehemothRequirements = BehemothRequirements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassesRequirements != nullptr)
		*PassesRequirements = params.PassesRequirements;
}


// Function Bp_Behemoth.Bp_Behemoth_C.PlayBehemothMontage_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            BehemothMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MontagePlayRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::PlayBehemothMontage_interface(class UAnimMontage* BehemothMontage, float MontagePlayRate, const struct FName& StartSection, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.PlayBehemothMontage_interface");

	ABp_Behemoth_C_PlayBehemothMontage_interface_Params params;
	params.BehemothMontage = BehemothMontage;
	params.MontagePlayRate = MontagePlayRate;
	params.StartSection = StartSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Bp_Behemoth.Bp_Behemoth_C.TrySetState_interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> StateChangeType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::TrySetState_interface(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> StateChangeType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.TrySetState_interface");

	ABp_Behemoth_C_TrySetState_interface_Params params;
	params.State = State;
	params.StateChangeType = StateChangeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BehemothDamageLookup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageData                     (Parm, OutParm)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BehemothDamageLookup(const struct FName& DamageKey, struct FDamageTableData* DamageData, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BehemothDamageLookup");

	ABp_Behemoth_C_BehemothDamageLookup_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageData != nullptr)
		*DamageData = params.DamageData;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function Bp_Behemoth.Bp_Behemoth_C.MeetsBehemothPartRequirement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpart_requirement       PartRequirement                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           MeetsRequirement               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::MeetsBehemothPartRequirement(const struct Fpart_requirement& PartRequirement, bool* MeetsRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.MeetsBehemothPartRequirement");

	ABp_Behemoth_C_MeetsBehemothPartRequirement_Params params;
	params.PartRequirement = PartRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeetsRequirement != nullptr)
		*MeetsRequirement = params.MeetsRequirement;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetupBlackboardVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetupBlackboardVariables(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetupBlackboardVariables");

	ABp_Behemoth_C_SetupBlackboardVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ClearAndRefreshTuningPresets
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ClearAndRefreshTuningPresets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ClearAndRefreshTuningPresets");

	ABp_Behemoth_C_ClearAndRefreshTuningPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AddTuningPresets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Presets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AlsoRefresh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AddTuningPresets(bool AlsoRefresh, TArray<class UClass*>* Presets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AddTuningPresets");

	ABp_Behemoth_C_AddTuningPresets_Params params;
	params.AlsoRefresh = AlsoRefresh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Presets != nullptr)
		*Presets = params.Presets;
}


// Function Bp_Behemoth.Bp_Behemoth_C.RefreshTuningPresets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::RefreshTuningPresets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.RefreshTuningPresets");

	ABp_Behemoth_C_RefreshTuningPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthSetupResists
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::AuthSetupResists()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthSetupResists");

	ABp_Behemoth_C_AuthSetupResists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontageForAngleDelta
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetPivotMontageForAngleDelta(float* Angle, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontageForAngleDelta");

	ABp_Behemoth_C_GetPivotMontageForAngleDelta_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontages
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAnimMontage*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UAnimMontage*> ABp_Behemoth_C::GetPivotMontages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontages");

	ABp_Behemoth_C_GetPivotMontages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetupDynamicSubtrees
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::SetupDynamicSubtrees()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetupDynamicSubtrees");

	ABp_Behemoth_C_SetupDynamicSubtrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetupLookupTables
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::SetupLookupTables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetupLookupTables");

	ABp_Behemoth_C_SetupLookupTables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetHitPauseDuration
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          HitDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            HitFrames                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetHitPauseDuration(struct FGameplayTagContainer* Tags, float* HitDuration, int* HitFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetHitPauseDuration");

	ABp_Behemoth_C_GetHitPauseDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (HitDuration != nullptr)
		*HitDuration = params.HitDuration;
	if (HitFrames != nullptr)
		*HitFrames = params.HitFrames;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ValidateBehemoth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ValidateBehemoth(bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ValidateBehemoth");

	ABp_Behemoth_C_ValidateBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BeginEnteringRage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BeginEnteringRage(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BeginEnteringRage");

	ABp_Behemoth_C_BeginEnteringRage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BeginEnteringAetherCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BeginEnteringAetherCharge(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BeginEnteringAetherCharge");

	ABp_Behemoth_C_BeginEnteringAetherCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetupPathFollowing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonPathFollowingComponent* ArchonPathFollowing            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetupPathFollowing(class UArchonPathFollowingComponent* ArchonPathFollowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetupPathFollowing");

	ABp_Behemoth_C_SetupPathFollowing_Params params;
	params.ArchonPathFollowing = ArchonPathFollowing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ApproximatePivotDelta
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Delta                          (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::ApproximatePivotDelta(float* Angle, struct FTransform* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ApproximatePivotDelta");

	ABp_Behemoth_C_ApproximatePivotDelta_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontageForAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Pivot_Set                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetPivotMontageForAngle(float Angle, const struct FName& Pivot_Set, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetPivotMontageForAngle");

	ABp_Behemoth_C_GetPivotMontageForAngle_Params params;
	params.Angle = Angle;
	params.Pivot_Set = Pivot_Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotAnimEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         BlendOutDelegate               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABp_Behemoth_C::OnPivotAnimEnded(class UAnimInstance* AnimInstance, class UObject* Montage, struct FScriptDelegate* BlendOutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnPivotAnimEnded");

	ABp_Behemoth_C_OnPivotAnimEnded_Params params;
	params.AnimInstance = AnimInstance;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlendOutDelegate != nullptr)
		*BlendOutDelegate = params.BlendOutDelegate;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CalculateIncomingDPS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          incDamage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DPSOut                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CalculateIncomingDPS(float incDamage, float* DPSOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CalculateIncomingDPS");

	ABp_Behemoth_C_CalculateIncomingDPS_Params params;
	params.incDamage = incDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DPSOut != nullptr)
		*DPSOut = params.DPSOut;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CalculatePivotTranslateTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Pos                            (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::CalculatePivotTranslateTarget(struct FVector* Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CalculatePivotTranslateTarget");

	ABp_Behemoth_C_CalculatePivotTranslateTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pos != nullptr)
		*Pos = params.Pos;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetPivotGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PivotGoal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PivotGoalRadius                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetPivotGoal(const struct FVector& PivotGoal, float PivotGoalRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetPivotGoal");

	ABp_Behemoth_C_SetPivotGoal_Params params;
	params.PivotGoal = PivotGoal;
	params.PivotGoalRadius = PivotGoalRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CalculatePivotTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (Parm, OutParm, IsPlainOldData)

void ABp_Behemoth_C::CalculatePivotTarget(struct FVector* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CalculatePivotTarget");

	ABp_Behemoth_C_CalculatePivotTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function Bp_Behemoth.Bp_Behemoth_C.RefreshAttackTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::RefreshAttackTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.RefreshAttackTarget");

	ABp_Behemoth_C_RefreshAttackTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ChooseNewTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromNewAggroSystem_Hack        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ChooseNewTarget(class AActor* NewTarget, bool FromNewAggroSystem_Hack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ChooseNewTarget");

	ABp_Behemoth_C_ChooseNewTarget_Params params;
	params.NewTarget = NewTarget;
	params.FromNewAggroSystem_Hack = FromNewAggroSystem_Hack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ClearLockedTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ClearLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ClearLockedTarget");

	ABp_Behemoth_C_ClearLockedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.LockTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetToLockTo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::LockTarget(class AActor* TargetToLockTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.LockTarget");

	ABp_Behemoth_C_LockTarget_Params params;
	params.TargetToLockTo = TargetToLockTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  CurrentTarget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetCurrentTarget(class AActor** CurrentTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetCurrentTarget");

	ABp_Behemoth_C_GetCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentTarget != nullptr)
		*CurrentTarget = params.CurrentTarget;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopStateVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeactivationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BroadcastStopStateVFX(TEnumAsByte<Ebehemoth_states_enum> State, float DeactivationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopStateVFX");

	ABp_Behemoth_C_BroadcastStopStateVFX_Params params;
	params.State = State;
	params.DeactivationDelay = DeactivationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.FindIndexOfAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::FindIndexOfAction(class UClass* ActionClass, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.FindIndexOfAction");

	ABp_Behemoth_C_FindIndexOfAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetActionByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BehemothAction_C*    Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetActionByIndex(int Index, class ABP_BehemothAction_C** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetActionByIndex");

	ABp_Behemoth_C_GetActionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetIndexOfPivotSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PivotSetName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PivotSetIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetIndexOfPivotSet(const struct FName& PivotSetName, int* PivotSetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetIndexOfPivotSet");

	ABp_Behemoth_C_GetIndexOfPivotSet_Params params;
	params.PivotSetName = PivotSetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PivotSetIndex != nullptr)
		*PivotSetIndex = params.PivotSetIndex;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetEnteringRageInternalState
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::SetEnteringRageInternalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetEnteringRageInternalState");

	ABp_Behemoth_C_SetEnteringRageInternalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.UpdateBehemothMusicState
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::UpdateBehemothMusicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.UpdateBehemothMusicState");

	ABp_Behemoth_C_UpdateBehemothMusicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthInternalSetState
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> BeginOrEnd                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AuthInternalSetState(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> BeginOrEnd, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthInternalSetState");

	ABp_Behemoth_C_AuthInternalSetState_Params params;
	params.State = State;
	params.BeginOrEnd = BeginOrEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ExitReadyToFleeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ExitReadyToFleeState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ExitReadyToFleeState");

	ABp_Behemoth_C_ExitReadyToFleeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.TrySetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> WhichState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> BeginningState_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::TrySetState(TEnumAsByte<Ebehemoth_states_enum> WhichState, TEnumAsByte<Ebehemoth_state_event> BeginningState_, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.TrySetState");

	ABp_Behemoth_C_TrySetState_Params params;
	params.WhichState = WhichState;
	params.BeginningState_ = BeginningState_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BehemothStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> StateThatChanged               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> WhatHappened                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BehemothStateChanged(TEnumAsByte<Ebehemoth_states_enum> StateThatChanged, TEnumAsByte<Ebehemoth_state_event> WhatHappened)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BehemothStateChanged");

	ABp_Behemoth_C_BehemothStateChanged_Params params;
	params.StateThatChanged = StateThatChanged;
	params.WhatHappened = WhatHappened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CanAcquireTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanAcquireTarget               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CanAcquireTarget(bool* CanAcquireTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CanAcquireTarget");

	ABp_Behemoth_C_CanAcquireTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAcquireTarget != nullptr)
		*CanAcquireTarget = params.CanAcquireTarget;
}


// Function Bp_Behemoth.Bp_Behemoth_C.IsInState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InState                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::IsInState(TEnumAsByte<Ebehemoth_states_enum> State, bool* InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.IsInState");

	ABp_Behemoth_C_IsInState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InState != nullptr)
		*InState = params.InState;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ClientStopAetherVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromAnimation_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeactivationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ClientStopAetherVFX(bool FromAnimation_, float DeactivationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ClientStopAetherVFX");

	ABp_Behemoth_C_ClientStopAetherVFX_Params params;
	params.FromAnimation_ = FromAnimation_;
	params.DeactivationDelay = DeactivationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ClientStartAetherVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromAnimation_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ClientStartAetherVFX(bool FromAnimation_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ClientStartAetherVFX");

	ABp_Behemoth_C_ClientStartAetherVFX_Params params;
	params.FromAnimation_ = FromAnimation_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StaggerBehemoth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerType_New                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartBroken                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartSevered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Umonsterpart_bpc_C*      PartThatCausedStagger          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StaggerCauser                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::StaggerBehemoth(TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory, TEnumAsByte<Estagger_type> StaggerType_New, bool WasPartBroken, bool WasPartSevered, class Umonsterpart_bpc_C* PartThatCausedStagger, class AActor* StaggerCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StaggerBehemoth");

	ABp_Behemoth_C_StaggerBehemoth_Params params;
	params.StaggerCategory = StaggerCategory;
	params.StaggerType_New = StaggerType_New;
	params.WasPartBroken = WasPartBroken;
	params.WasPartSevered = WasPartSevered;
	params.PartThatCausedStagger = PartThatCausedStagger;
	params.StaggerCauser = StaggerCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.NotifyDamageTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::NotifyDamageTaken(float DamageTaken, class AActor* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.NotifyDamageTaken");

	ABp_Behemoth_C_NotifyDamageTaken_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.PlayTrailEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   SourceTags                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::PlayTrailEffect(TEnumAsByte<EGameplayCueEvent> Selection, const struct FGameplayTagContainer& SourceTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.PlayTrailEffect");

	ABp_Behemoth_C_PlayTrailEffect_Params params;
	params.Selection = Selection;
	params.SourceTags = SourceTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ActivateBehemothTrail
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle_System                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFirstSocketName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSecondSocketName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         SecondaryParticle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Secondary_Attach_Point         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            AspectColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UParticleSystemComponent* Return_Particle_System         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ActivateBehemothTrail(class UParticleSystem* Particle_System, float LifeTime, const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, class UParticleSystem* SecondaryParticle, const struct FName& Secondary_Attach_Point, const struct FLinearColor& AspectColor, class UParticleSystemComponent** Return_Particle_System)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ActivateBehemothTrail");

	ABp_Behemoth_C_ActivateBehemothTrail_Params params;
	params.Particle_System = Particle_System;
	params.LifeTime = LifeTime;
	params.InFirstSocketName = InFirstSocketName;
	params.InSecondSocketName = InSecondSocketName;
	params.SecondaryParticle = SecondaryParticle;
	params.Secondary_Attach_Point = Secondary_Attach_Point;
	params.AspectColor = AspectColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Particle_System != nullptr)
		*Return_Particle_System = params.Return_Particle_System;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetEffectsFromTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   SourceTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FStruct_TagToTrailEffects> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FStruct_TagToTrailEffects> Particle_Systems               (Parm, OutParm, ZeroConstructor)

void ABp_Behemoth_C::GetEffectsFromTag(const struct FGameplayTagContainer& SourceTags, TArray<struct FStruct_TagToTrailEffects>* Effects, TArray<struct FStruct_TagToTrailEffects>* Particle_Systems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetEffectsFromTag");

	ABp_Behemoth_C_GetEffectsFromTag_Params params;
	params.SourceTags = SourceTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
	if (Particle_Systems != nullptr)
		*Particle_Systems = params.Particle_Systems;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_MontageMode_Pause
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnRep_MontageMode_Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnRep_MontageMode_Pause");

	ABp_Behemoth_C_OnRep_MontageMode_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ExitReadyToEnterAetherCharged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ExitReadyToEnterAetherCharged(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ExitReadyToEnterAetherCharged");

	ABp_Behemoth_C_ExitReadyToEnterAetherCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ExitAetherCharged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ExitAetherCharged(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ExitAetherCharged");

	ABp_Behemoth_C_ExitAetherCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EnterAetherCharged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EnterAetherCharged(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EnterAetherCharged");

	ABp_Behemoth_C_EnterAetherCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToEnterAetherCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetReadyToEnterAetherCharge(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToEnterAetherCharge");

	ABp_Behemoth_C_SetReadyToEnterAetherCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToExitAetherCharged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetReadyToExitAetherCharged(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToExitAetherCharged");

	ABp_Behemoth_C_SetReadyToExitAetherCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_InCombat
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnRep_InCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnRep_InCombat");

	ABp_Behemoth_C_OnRep_InCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AbortPivot
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::AbortPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AbortPivot");

	ABp_Behemoth_C_AbortPivot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotEnded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnPivotEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnPivotEnded");

	ABp_Behemoth_C_OnPivotEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DoPivot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            OverridePivotMontage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Epivot_target_type> PivotTargetType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PivotSet                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PivotToLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PivotToActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotToActorPredictionTime     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DoPivot(class UAnimMontage* OverridePivotMontage, TEnumAsByte<Epivot_target_type> PivotTargetType, const struct FName& PivotSet, float Angle, const struct FVector& PivotToLocation, class AActor* PivotToActor, float PivotToActorPredictionTime, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DoPivot");

	ABp_Behemoth_C_DoPivot_Params params;
	params.OverridePivotMontage = OverridePivotMontage;
	params.PivotTargetType = PivotTargetType;
	params.PivotSet = PivotSet;
	params.Angle = Angle;
	params.PivotToLocation = PivotToLocation;
	params.PivotToActor = PivotToActor;
	params.PivotToActorPredictionTime = PivotToActorPredictionTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Bp_Behemoth.Bp_Behemoth_C.IsPivoting?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StillPivoting                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::IsPivoting_(bool* StillPivoting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.IsPivoting?");

	ABp_Behemoth_C_IsPivoting__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StillPivoting != nullptr)
		*StillPivoting = params.StillPivoting;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToExitRageState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetReadyToExitRageState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetReadyToExitRageState");

	ABp_Behemoth_C_SetReadyToExitRageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.HandleStatesOnDeath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::HandleStatesOnDeath(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.HandleStatesOnDeath");

	ABp_Behemoth_C_HandleStatesOnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForFleeState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetReadyForFleeState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForFleeState");

	ABp_Behemoth_C_SetReadyForFleeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_CurrentPatrolCenter
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnRep_CurrentPatrolCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnRep_CurrentPatrolCenter");

	ABp_Behemoth_C_OnRep_CurrentPatrolCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Rage Vfx
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnRep_Rage_Vfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Rage Vfx");

	ABp_Behemoth_C_OnRep_Rage_Vfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.Client Stop Rage VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           From_Animation_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Deactivation_Delay             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::Client_Stop_Rage_VFX(bool From_Animation_, float Deactivation_Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.Client Stop Rage VFX");

	ABp_Behemoth_C_Client_Stop_Rage_VFX_Params params;
	params.From_Animation_ = From_Animation_;
	params.Deactivation_Delay = Deactivation_Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.Client Start Rage VFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           From_Animation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::Client_Start_Rage_VFX(bool From_Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.Client Start Rage VFX");

	ABp_Behemoth_C_Client_Start_Rage_VFX_Params params;
	params.From_Animation = From_Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CallBehemothSpecificFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FunctionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CallBehemothSpecificFunction(const struct FName& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CallBehemothSpecificFunction");

	ABp_Behemoth_C_CallBehemothSpecificFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DamageTableLookup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageInfo                     (Parm, OutParm)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DamageTableLookup(const struct FName& DamageKey, struct FDamageTableData* DamageInfo, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DamageTableLookup");

	ABp_Behemoth_C_DamageTableLookup_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DropLoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DropLoot(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DropLoot");

	ABp_Behemoth_C_DropLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ExitFleeState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ExitFleeState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ExitFleeState");

	ABp_Behemoth_C_ExitFleeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EnterFleeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EnterFleeState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EnterFleeState");

	ABp_Behemoth_C_EnterFleeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GetNextSectionNameForActiveState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fstatetosectionpair_array_struct StateToSectionName             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   SectionName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::GetNextSectionNameForActiveState(const struct Fstatetosectionpair_array_struct& StateToSectionName, struct FName* SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GetNextSectionNameForActiveState");

	ABp_Behemoth_C_GetNextSectionNameForActiveState_Params params;
	params.StateToSectionName = StateToSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionName != nullptr)
		*SectionName = params.SectionName;
}


// Function Bp_Behemoth.Bp_Behemoth_C.InitRage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::InitRage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.InitRage");

	ABp_Behemoth_C_InitRage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EnterTiredState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EnterTiredState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EnterTiredState");

	ABp_Behemoth_C_EnterTiredState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndAndResetTiredState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EndAndResetTiredState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndAndResetTiredState");

	ABp_Behemoth_C_EndAndResetTiredState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Health
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Health");

	ABp_Behemoth_C_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForTiredState
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::SetReadyForTiredState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForTiredState");

	ABp_Behemoth_C_SetReadyForTiredState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DecreaseStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DecreaseStamina(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DecreaseStamina");

	ABp_Behemoth_C_DecreaseStamina_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.RegenStamina
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::RegenStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.RegenStamina");

	ABp_Behemoth_C_RegenStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForRageState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewReadyForRageState           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetReadyForRageState(bool NewReadyForRageState, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetReadyForRageState");

	ABp_Behemoth_C_SetReadyForRageState_Params params;
	params.NewReadyForRageState = NewReadyForRageState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EnterRageState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EnterRageState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EnterRageState");

	ABp_Behemoth_C_EnterRageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndAndResetRageState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EndAndResetRageState(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndAndResetRageState");

	ABp_Behemoth_C_EndAndResetRageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DecreaseRageCD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DecreaseRageCD(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DecreaseRageCD");

	ABp_Behemoth_C_DecreaseRageCD_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.RefillRageCD
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::RefillRageCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.RefillRageCD");

	ABp_Behemoth_C_RefillRageCD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DecayRageCooldownMax
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::DecayRageCooldownMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DecayRageCooldownMax");

	ABp_Behemoth_C_DecayRageCooldownMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopStaggerProof
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StopStaggerProof()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopStaggerProof");

	ABp_Behemoth_C_StopStaggerProof_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StartStaggerProof
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StartStaggerProof()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StartStaggerProof");

	ABp_Behemoth_C_StartStaggerProof_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Curving
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnRep_Curving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnRep_Curving");

	ABp_Behemoth_C_OnRep_Curving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopSeverVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StopSeverVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopSeverVFX");

	ABp_Behemoth_C_StopSeverVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StartSeverVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StartSeverVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StartSeverVFX");

	ABp_Behemoth_C_StartSeverVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ProcessAttackExtants1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ProcessAttackExtants1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ProcessAttackExtants1");

	ABp_Behemoth_C_ProcessAttackExtants1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.FindPartFromVolume
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class Umonsterpart_bpc_C*      Part                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::FindPartFromVolume(class UPrimitiveComponent** Volume, class Umonsterpart_bpc_C** Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.FindPartFromVolume");

	ABp_Behemoth_C_FindPartFromVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
	if (Part != nullptr)
		*Part = params.Part;
}


// Function Bp_Behemoth.Bp_Behemoth_C.PlayBehemothMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            BehemothMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MontagePlayRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::PlayBehemothMontage(class UAnimMontage* BehemothMontage, float MontagePlayRate, const struct FName& StartSection, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.PlayBehemothMontage");

	ABp_Behemoth_C_PlayBehemothMontage_Params params;
	params.BehemothMontage = BehemothMontage;
	params.MontagePlayRate = MontagePlayRate;
	params.StartSection = StartSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AddAttackToRecentAttacks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuid>           AttackTableToAddTo             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   AttackIDToAdd                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::AddAttackToRecentAttacks(const struct FGuid& AttackIDToAdd, TArray<struct FGuid>* AttackTableToAddTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AddAttackToRecentAttacks");

	ABp_Behemoth_C_AddAttackToRecentAttacks_Params params;
	params.AttackIDToAdd = AttackIDToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackTableToAddTo != nullptr)
		*AttackTableToAddTo = params.AttackTableToAddTo;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DoesAttackExist
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuid>           AttackArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   CurrentAttackID                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Exists                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DoesAttackExist(const struct FGuid& CurrentAttackID, TArray<struct FGuid>* AttackArray, bool* Exists)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DoesAttackExist");

	ABp_Behemoth_C_DoesAttackExist_Params params;
	params.CurrentAttackID = CurrentAttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackArray != nullptr)
		*AttackArray = params.AttackArray;
	if (Exists != nullptr)
		*Exists = params.Exists;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CalculateMitigatedDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Umonsterpart_bpc_C*      Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RawDamage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MitigatedPartDamage            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CoreDamage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CalculateMitigatedDamage(class Umonsterpart_bpc_C* Part, float RawDamage, class UClass* DamageType, float* MitigatedPartDamage, float* CoreDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CalculateMitigatedDamage");

	ABp_Behemoth_C_CalculateMitigatedDamage_Params params;
	params.Part = Part;
	params.RawDamage = RawDamage;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MitigatedPartDamage != nullptr)
		*MitigatedPartDamage = params.MitigatedPartDamage;
	if (CoreDamage != nullptr)
		*CoreDamage = params.CoreDamage;
}


// Function Bp_Behemoth.Bp_Behemoth_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.UserConstructionScript");

	ABp_Behemoth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CurveTimeline__FinishedFunc
// (BlueprintEvent)

void ABp_Behemoth_C::CurveTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CurveTimeline__FinishedFunc");

	ABp_Behemoth_C_CurveTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CurveTimeline__UpdateFunc
// (BlueprintEvent)

void ABp_Behemoth_C::CurveTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CurveTimeline__UpdateFunc");

	ABp_Behemoth_C_CurveTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.Stop Rage VFX Timeline__FinishedFunc
// (BlueprintEvent)

void ABp_Behemoth_C::Stop_Rage_VFX_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.Stop Rage VFX Timeline__FinishedFunc");

	ABp_Behemoth_C_Stop_Rage_VFX_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.Stop Rage VFX Timeline__UpdateFunc
// (BlueprintEvent)

void ABp_Behemoth_C::Stop_Rage_VFX_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.Stop Rage VFX Timeline__UpdateFunc");

	ABp_Behemoth_C_Stop_Rage_VFX_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopAetherVFXTimeline__FinishedFunc
// (BlueprintEvent)

void ABp_Behemoth_C::StopAetherVFXTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopAetherVFXTimeline__FinishedFunc");

	ABp_Behemoth_C_StopAetherVFXTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopAetherVFXTimeline__UpdateFunc
// (BlueprintEvent)

void ABp_Behemoth_C::StopAetherVFXTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopAetherVFXTimeline__UpdateFunc");

	ABp_Behemoth_C_StopAetherVFXTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnLoaded_D67063584A3A08184C37EAB35F32C6FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnLoaded_D67063584A3A08184C37EAB35F32C6FA(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnLoaded_D67063584A3A08184C37EAB35F32C6FA");

	ABp_Behemoth_C_OnLoaded_D67063584A3A08184C37EAB35F32C6FA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnLoaded_50389F1245B62B9D9FF171A3C994A039
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnLoaded_50389F1245B62B9D9FF171A3C994A039(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnLoaded_50389F1245B62B9D9FF171A3C994A039");

	ABp_Behemoth_C_OnLoaded_50389F1245B62B9D9FF171A3C994A039_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SpawnShinyLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SpawnShinyLoot");

	ABp_Behemoth_C_SpawnShinyLoot_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EQSProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileTarget               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EQSProjectileSpawned");

	ABp_Behemoth_C_EQSProjectileSpawned_Params params;
	params.Projectile = Projectile;
	params.ProjectileTarget = ProjectileTarget;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EQSActorSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EQSActorSpawned");

	ABp_Behemoth_C_EQSActorSpawned_Params params;
	params.Actor = Actor;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ClearCurrentStagger
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ClearCurrentStagger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ClearCurrentStagger");

	ABp_Behemoth_C_ClearCurrentStagger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.UpdateBehemothMusicState_Interface
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::UpdateBehemothMusicState_Interface()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.UpdateBehemothMusicState_Interface");

	ABp_Behemoth_C_UpdateBehemothMusicState_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.UpdateDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.UpdateDebrisState");

	ABp_Behemoth_C_UpdateDebrisState_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AddDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimNotifyState*        CallerEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fvfx_state_id_struct    StateId                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AddDebrisState");

	ABp_Behemoth_C_AddDebrisState_Params params;
	params.CallerEvent = CallerEvent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OutputToAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  Damager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OutputToAll(const class FString& Damage, class AActor* Damager)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OutputToAll");

	ABp_Behemoth_C_OutputToAll_Params params;
	params.Damage = Damage;
	params.Damager = Damager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.updateScrollingText
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::updateScrollingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.updateScrollingText");

	ABp_Behemoth_C_updateScrollingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReceivedArchonAbilityDamageOnMonsterPart
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AMonsterPartActor**      MonsterPartActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABp_Behemoth_C::ReceivedArchonAbilityDamageOnMonsterPart(class AMonsterPartActor** MonsterPartActor, float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReceivedArchonAbilityDamageOnMonsterPart");

	ABp_Behemoth_C_ReceivedArchonAbilityDamageOnMonsterPart_Params params;
	params.MonsterPartActor = MonsterPartActor;
	params.DamageReceived = DamageReceived;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OutputDPS
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DPS                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OutputDPS(float DPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OutputDPS");

	ABp_Behemoth_C_OutputDPS_Params params;
	params.DPS = DPS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.LeftFoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::GameplayCue_Combat_Trail_LeftFoot(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.LeftFoot");

	ABp_Behemoth_C_GameplayCue_Combat_Trail_LeftFoot_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.RightFoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::GameplayCue_Combat_Trail_RightFoot(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.RightFoot");

	ABp_Behemoth_C_GameplayCue_Combat_Trail_RightFoot_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.LeftHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::GameplayCue_Combat_Trail_LeftHand(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.LeftHand");

	ABp_Behemoth_C_GameplayCue_Combat_Trail_LeftHand_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.RightHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::GameplayCue_Combat_Trail_RightHand(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.Trail.RightHand");

	ABp_Behemoth_C_GameplayCue_Combat_Trail_RightHand_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.OnDamageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::GameplayCue_Combat_OnDamageReceived(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.GameplayCue.Combat.OnDamageReceived");

	ABp_Behemoth_C_GameplayCue_Combat_OnDamageReceived_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABp_Behemoth_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReceiveBeginPlay");

	ABp_Behemoth_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReceiveTick");

	ABp_Behemoth_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopCurrentMontage
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StopCurrentMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopCurrentMontage");

	ABp_Behemoth_C_StopCurrentMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndBehemothDamageWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_DamageTagsPerKey PartTagsAndDamageKey           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           StartAttack                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EndBehemothDamageWindow(const struct FStruct_DamageTagsPerKey& PartTagsAndDamageKey, bool StartAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndBehemothDamageWindow");

	ABp_Behemoth_C_EndBehemothDamageWindow_Params params;
	params.PartTagsAndDamageKey = PartTagsAndDamageKey;
	params.StartAttack = StartAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.UpdateHealth
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::UpdateHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.UpdateHealth");

	ABp_Behemoth_C_UpdateHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReceivePossessed");

	ABp_Behemoth_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.InitAttackExtant
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::InitAttackExtant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.InitAttackExtant");

	ABp_Behemoth_C_InitAttackExtant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABp_Behemoth_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReceiveDestroyed");

	ABp_Behemoth_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReturnFromLookAt
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ReturnFromLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReturnFromLookAt");

	ABp_Behemoth_C_ReturnFromLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EaseinLookAt
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::EaseinLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EaseinLookAt");

	ABp_Behemoth_C_EaseinLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StartCurving
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StartCurving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StartCurving");

	ABp_Behemoth_C_StartCurving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopCurving
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StopCurving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopCurving");

	ABp_Behemoth_C_StopCurving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnNavLinkTraversalStateChangedDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTraversingNavLink           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnNavLinkTraversalStateChangedDelegate_Event_1(bool bIsTraversingNavLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnNavLinkTraversalStateChangedDelegate_Event_1");

	ABp_Behemoth_C_OnNavLinkTraversalStateChangedDelegate_Event_1_Params params;
	params.bIsTraversingNavLink = bIsTraversingNavLink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StartFleeTrailVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StartFleeTrailVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StartFleeTrailVFX");

	ABp_Behemoth_C_StartFleeTrailVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndFleeTrailVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::EndFleeTrailVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndFleeTrailVFX");

	ABp_Behemoth_C_EndFleeTrailVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SpawnTeleportParticles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Dest                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::SpawnTeleportParticles(const struct FVector& Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SpawnTeleportParticles");

	ABp_Behemoth_C_SpawnTeleportParticles_Params params;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SpawnArrivalParticles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::SpawnArrivalParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SpawnArrivalParticles");

	ABp_Behemoth_C_SpawnArrivalParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnDoPivotDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OverridePivotMontage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnDoPivotDelegate(float TurnAngle, class UAnimMontage* OverridePivotMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnDoPivotDelegate");

	ABp_Behemoth_C_OnDoPivotDelegate_Params params;
	params.TurnAngle = TurnAngle;
	params.OverridePivotMontage = OverridePivotMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotAborted
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnPivotAborted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnPivotAborted");

	ABp_Behemoth_C_OnPivotAborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.PlayTiredVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::PlayTiredVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.PlayTiredVFX");

	ABp_Behemoth_C_PlayTiredVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.InternalStopRageVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           From_Animation_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Deactivation_Delay             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::InternalStopRageVFX(bool From_Animation_, float Deactivation_Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.InternalStopRageVFX");

	ABp_Behemoth_C_InternalStopRageVFX_Params params;
	params.From_Animation_ = From_Animation_;
	params.Deactivation_Delay = Deactivation_Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StopTiredVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StopTiredVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StopTiredVFX");

	ABp_Behemoth_C_StopTiredVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReplicatedMontageSetNextSection
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SectionNameToChange            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fstatetosectionpair_array_struct StateToSectiontable            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::ReplicatedMontageSetNextSection(const struct FName& SectionNameToChange, class UAnimMontage* Montage, const struct Fstatetosectionpair_array_struct& StateToSectiontable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReplicatedMontageSetNextSection");

	ABp_Behemoth_C_ReplicatedMontageSetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.Montage = Montage;
	params.StateToSectiontable = StateToSectiontable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.Delay And  Destroy Trail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSC_Ref                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::Delay_And__Destroy_Trail(class UParticleSystemComponent* PSC_Ref, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.Delay And  Destroy Trail");

	ABp_Behemoth_C_Delay_And__Destroy_Trail_Params params;
	params.PSC_Ref = PSC_Ref;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.LoopMontage_Debug
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::LoopMontage_Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.LoopMontage_Debug");

	ABp_Behemoth_C_LoopMontage_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ApplyImpact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DurationScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MagnitudeScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ApplyImpact(const struct FVector& Position, const struct FVector& Direction, float DurationScale, float MagnitudeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ApplyImpact");

	ABp_Behemoth_C_ApplyImpact_Params params;
	params.Position = Position;
	params.Direction = Direction;
	params.DurationScale = DurationScale;
	params.MagnitudeScale = MagnitudeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DestroyDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DestroyDebrisState(class UObject* Data, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DestroyDebrisState");

	ABp_Behemoth_C_DestroyDebrisState_Params params;
	params.Data = Data;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.InternalStopAetherVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromAnimation_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeactivationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::InternalStopAetherVFX(bool FromAnimation_, float DeactivationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.InternalStopAetherVFX");

	ABp_Behemoth_C_InternalStopAetherVFX_Params params;
	params.FromAnimation_ = FromAnimation_;
	params.DeactivationDelay = DeactivationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthOnStateChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> What_Happened                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AuthOnStateChanged_Event_1(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> What_Happened)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthOnStateChanged_Event_1");

	ABp_Behemoth_C_AuthOnStateChanged_Event_1_Params params;
	params.State = State;
	params.What_Happened = What_Happened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnPivotStarted
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::OnPivotStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnPivotStarted");

	ABp_Behemoth_C_OnPivotStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnMontageBlendingOut_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnMontageBlendingOut_Event_1");

	ABp_Behemoth_C_OnMontageBlendingOut_Event_1_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthPostAKEvents
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAkAudioEvent*>   AKEvents                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AuthPostAKEvents(TArray<class UAkAudioEvent*> AKEvents, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthPostAKEvents");

	ABp_Behemoth_C_AuthPostAKEvents_Params params;
	params.AKEvents = AKEvents;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.MulticastPostAKEvents
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAkAudioEvent*>   AKEvents                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::MulticastPostAKEvents(TArray<class UAkAudioEvent*> AKEvents, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.MulticastPostAKEvents");

	ABp_Behemoth_C_MulticastPostAKEvents_Params params;
	params.AKEvents = AKEvents;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthSetBehemothCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CollisionOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AuthSetBehemothCollision(bool CollisionOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthSetBehemothCollision");

	ABp_Behemoth_C_AuthSetBehemothCollision_Params params;
	params.CollisionOn = CollisionOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.MulticastSetBehemothCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CollisionOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::MulticastSetBehemothCollision(bool CollisionOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.MulticastSetBehemothCollision");

	ABp_Behemoth_C_MulticastSetBehemothCollision_Params params;
	params.CollisionOn = CollisionOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ShowBehemoth
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ShowBehemoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ShowBehemoth");

	ABp_Behemoth_C_ShowBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.HideBehemoth
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::HideBehemoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.HideBehemoth");

	ABp_Behemoth_C_HideBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndRageTimer
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::EndRageTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndRageTimer");

	ABp_Behemoth_C_EndRageTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndTiredState
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::EndTiredState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndTiredState");

	ABp_Behemoth_C_EndTiredState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StartFlee
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::StartFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StartFlee");

	ABp_Behemoth_C_StartFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStartAetherVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BroadcastStartAetherVFX(bool FromAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStartAetherVFX");

	ABp_Behemoth_C_BroadcastStartAetherVFX_Params params;
	params.FromAnimation = FromAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopAetherVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeactivationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BroadcastStopAetherVFX(bool FromAnimation, float DeactivationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopAetherVFX");

	ABp_Behemoth_C_BroadcastStopAetherVFX_Params params;
	params.FromAnimation = FromAnimation;
	params.DeactivationDelay = DeactivationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStartRageVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BroadcastStartRageVFX(bool FromAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStartRageVFX");

	ABp_Behemoth_C_BroadcastStartRageVFX_Params params;
	params.FromAnimation = FromAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopRageVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           From_Animation_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Deactivation_Delay             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::BroadcastStopRageVFX(bool From_Animation_, float Deactivation_Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BroadcastStopRageVFX");

	ABp_Behemoth_C_BroadcastStopRageVFX_Params params;
	params.From_Animation_ = From_Animation_;
	params.Deactivation_Delay = Deactivation_Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthSetBehemothScale
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::AuthSetBehemothScale(const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthSetBehemothScale");

	ABp_Behemoth_C_AuthSetBehemothScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.DebugDoEvaluateActions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnOrOff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DebugDoEvaluateActions(bool OnOrOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DebugDoEvaluateActions");

	ABp_Behemoth_C_DebugDoEvaluateActions_Params params;
	params.OnOrOff = OnOrOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReevaluateActions
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ReevaluateActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReevaluateActions");

	ABp_Behemoth_C_ReevaluateActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetPatrolPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PatrolPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetPatrolPoint(class AActor* PatrolPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetPatrolPoint");

	ABp_Behemoth_C_SetPatrolPoint_Params params;
	params.PatrolPoint = PatrolPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.PostSpawnInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TriggersEndOfMission           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BehemothNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::PostSpawnInitialize(bool TriggersEndOfMission, int BehemothNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.PostSpawnInitialize");

	ABp_Behemoth_C_PostSpawnInitialize_Params params;
	params.TriggersEndOfMission = TriggersEndOfMission;
	params.BehemothNumber = BehemothNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.BP_DamageGiven
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABp_Behemoth_C::BP_DamageGiven(float* DamageReceived, class AActor** DamageReceiver, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.BP_DamageGiven");

	ABp_Behemoth_C_BP_DamageGiven_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageReceiver = DamageReceiver;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AddBuffToAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BuffToAdd                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AddBuffToAttacks(class UClass* BuffToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AddBuffToAttacks");

	ABp_Behemoth_C_AddBuffToAttacks_Params params;
	params.BuffToAdd = BuffToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.RemoveBuffFromAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BuffToRemove                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::RemoveBuffFromAttacks(class UClass* BuffToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.RemoveBuffFromAttacks");

	ABp_Behemoth_C_RemoveBuffFromAttacks_Params params;
	params.BuffToRemove = BuffToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.TryAndDestroyWidgetComponentForFCT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponentReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::TryAndDestroyWidgetComponentForFCT(class UWidgetComponent* WidgetComponentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.TryAndDestroyWidgetComponentForFCT");

	ABp_Behemoth_C_TryAndDestroyWidgetComponentForFCT_Params params;
	params.WidgetComponentReference = WidgetComponentReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnPartSevered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Umonsterpart_bpc_C*      Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnPartSevered(class Umonsterpart_bpc_C* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnPartSevered");

	ABp_Behemoth_C_OnPartSevered_Params params;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetStaggerProneDamageThreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDamageThreshold             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetStaggerProneDamageThreshold(float NewDamageThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetStaggerProneDamageThreshold");

	ABp_Behemoth_C_SetStaggerProneDamageThreshold_Params params;
	params.NewDamageThreshold = NewDamageThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnStageChangedByBreak_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Umonsterpart_bpc_C*      Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnStageChangedByBreak_Event_1(class Umonsterpart_bpc_C* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnStageChangedByBreak_Event_1");

	ABp_Behemoth_C_OnStageChangedByBreak_Event_1_Params params;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.StaggerBehemoth_interface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerTypeNew                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartBroken                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartSevered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMonsterPartComponent*   PartThatCausedStagger          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StaggerCauser                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::StaggerBehemoth_interface(TEnumAsByte<Ebehemoth_stagger_type> StaggerCategory, TEnumAsByte<Estagger_type> StaggerTypeNew, bool WasPartBroken, bool WasPartSevered, class UMonsterPartComponent* PartThatCausedStagger, class AActor* StaggerCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.StaggerBehemoth_interface");

	ABp_Behemoth_C_StaggerBehemoth_interface_Params params;
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


// Function Bp_Behemoth.Bp_Behemoth_C.TargetChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::TargetChanged_Event_1(int OldTarget, int NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.TargetChanged_Event_1");

	ABp_Behemoth_C_TargetChanged_Event_1_Params params;
	params.OldTarget = OldTarget;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.InitializeBehaviorTree
// (BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::InitializeBehaviorTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.InitializeBehaviorTree");

	ABp_Behemoth_C_InitializeBehaviorTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.SetBehemothLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_loco_type> LocoState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::SetBehemothLocoState(TEnumAsByte<Ebehemoth_loco_type> LocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.SetBehemothLocoState");

	ABp_Behemoth_C_SetBehemothLocoState_Params params;
	params.LocoState = LocoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OverrideDefaultTurnWarpTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TurnWarpTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::OverrideDefaultTurnWarpTarget(const struct FVector& TurnWarpTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OverrideDefaultTurnWarpTarget");

	ABp_Behemoth_C_OverrideDefaultTurnWarpTarget_Params params;
	params.TurnWarpTarget = TurnWarpTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ClearDefaultTurnWarpTargetOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::ClearDefaultTurnWarpTargetOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ClearDefaultTurnWarpTargetOverride");

	ABp_Behemoth_C_ClearDefaultTurnWarpTargetOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.MulticastRegisterStartOfCombat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::MulticastRegisterStartOfCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.MulticastRegisterStartOfCombat");

	ABp_Behemoth_C_MulticastRegisterStartOfCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnInstantMessageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcoordination_message   InstantMessage                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABp_Behemoth_C::OnInstantMessageReceived(const struct Fcoordination_message& InstantMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnInstantMessageReceived");

	ABp_Behemoth_C_OnInstantMessageReceived_Params params;
	params.InstantMessage = InstantMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.FootPlanted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayedFootSpeed               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JointName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::FootPlanted(float DelayedFootSpeed, const struct FName& JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.FootPlanted");

	ABp_Behemoth_C_FootPlanted_Params params;
	params.DelayedFootSpeed = DelayedFootSpeed;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.FootUnplanted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FootSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JointName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::FootUnplanted(float FootSpeed, const struct FName& JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.FootUnplanted");

	ABp_Behemoth_C_FootUnplanted_Params params;
	params.FootSpeed = FootSpeed;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.CallBehemothSpecificFunctionInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   FunctionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::CallBehemothSpecificFunctionInterface(const struct FName& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.CallBehemothSpecificFunctionInterface");

	ABp_Behemoth_C_CallBehemothSpecificFunctionInterface_Params params;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ActivateMonsterTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   In_First_Socket_Name           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   In_Second_Socket_Name          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UNotify_MonsterTrails_C* Calling_Notify                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Trail_Color                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::ActivateMonsterTrail(class UParticleSystem* ParticleSystem, float LifeTime, const struct FName& In_First_Socket_Name, const struct FName& In_Second_Socket_Name, class UNotify_MonsterTrails_C* Calling_Notify, const struct FLinearColor& Trail_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ActivateMonsterTrail");

	ABp_Behemoth_C_ActivateMonsterTrail_Params params;
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


// Function Bp_Behemoth.Bp_Behemoth_C.DeactivateMonsterTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNotify_MonsterTrails_C* CallingNotify                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::DeactivateMonsterTrail(class UNotify_MonsterTrails_C* CallingNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.DeactivateMonsterTrail");

	ABp_Behemoth_C_DeactivateMonsterTrail_Params params;
	params.CallingNotify = CallingNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EnterFlyMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          FlySpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PatrolPointActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::EnterFlyMode(float FlySpeed, class AActor* PatrolPointActor, TArray<struct FVector>* SplinePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EnterFlyMode");

	ABp_Behemoth_C_EnterFlyMode_Params params;
	params.FlySpeed = FlySpeed;
	params.PatrolPointActor = PatrolPointActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
}


// Function Bp_Behemoth.Bp_Behemoth_C.EndFlyMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::EndFlyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.EndFlyMode");

	ABp_Behemoth_C_EndFlyMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.MulticastEnterFlyMode
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          FlySpeed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PatrolPointActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::MulticastEnterFlyMode(TArray<struct FVector> SplinePoints, float FlySpeed, class AActor* PatrolPointActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.MulticastEnterFlyMode");

	ABp_Behemoth_C_MulticastEnterFlyMode_Params params;
	params.SplinePoints = SplinePoints;
	params.FlySpeed = FlySpeed;
	params.PatrolPointActor = PatrolPointActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.MulticastEndFlyMode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABp_Behemoth_C::MulticastEndFlyMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.MulticastEndFlyMode");

	ABp_Behemoth_C_MulticastEndFlyMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ModActionRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PercentOfCurrentActionRate     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ModActionRate(float PercentOfCurrentActionRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ModActionRate");

	ABp_Behemoth_C_ModActionRate_Params params;
	params.PercentOfCurrentActionRate = PercentOfCurrentActionRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.RemovePartResistMultiplierByID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   UniqueID                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABp_Behemoth_C::RemovePartResistMultiplierByID(const struct FGuid& UniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.RemovePartResistMultiplierByID");

	ABp_Behemoth_C_RemovePartResistMultiplierByID_Params params;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.PostInitializeHealth
// (Event, Public, BlueprintEvent)

void ABp_Behemoth_C::PostInitializeHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.PostInitializeHealth");

	ABp_Behemoth_C_PostInitializeHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ReplicatePartTypeMultipliers
// (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fpart_resist_multiplier> PartResistMultipliers          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABp_Behemoth_C::ReplicatePartTypeMultipliers(TArray<struct Fpart_resist_multiplier> PartResistMultipliers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ReplicatePartTypeMultipliers");

	ABp_Behemoth_C_ReplicatePartTypeMultipliers_Params params;
	params.PartResistMultipliers = PartResistMultipliers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.ExecuteUbergraph_Bp_Behemoth
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::ExecuteUbergraph_Bp_Behemoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.ExecuteUbergraph_Bp_Behemoth");

	ABp_Behemoth_C_ExecuteUbergraph_Bp_Behemoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.AuthOnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> What_Happened                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::AuthOnStateChanged__DelegateSignature(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> What_Happened)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.AuthOnStateChanged__DelegateSignature");

	ABp_Behemoth_C_AuthOnStateChanged__DelegateSignature_Params params;
	params.State = State;
	params.What_Happened = What_Happened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnStaggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_stagger_type> StaggerSourceType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartBroken                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasPartSevered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Umonsterpart_bpc_C*      PartThatCausedStagger          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     BehemothStaggerType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnStaggered__DelegateSignature(TEnumAsByte<Ebehemoth_stagger_type> StaggerSourceType, bool WasPartBroken, bool WasPartSevered, class Umonsterpart_bpc_C* PartThatCausedStagger, TEnumAsByte<Estagger_type> BehemothStaggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnStaggered__DelegateSignature");

	ABp_Behemoth_C_OnStaggered__DelegateSignature_Params params;
	params.StaggerSourceType = StaggerSourceType;
	params.WasPartBroken = WasPartBroken;
	params.WasPartSevered = WasPartSevered;
	params.PartThatCausedStagger = PartThatCausedStagger;
	params.BehemothStaggerType = BehemothStaggerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_Behemoth.Bp_Behemoth_C.OnDamageTaken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_Behemoth_C::OnDamageTaken__DelegateSignature(float DamageAmount, class AActor* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_Behemoth.Bp_Behemoth_C.OnDamageTaken__DelegateSignature");

	ABp_Behemoth_C_OnDamageTaken__DelegateSignature_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
