// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eqs_gameplay_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnGameplay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Ftimed_gameplay_event   TimedGameplayEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   GameplayRequestGUID            (Parm, OutParm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthSpawnGameplay(const struct Ftimed_gameplay_event& TimedGameplayEvent, bool* Succeeded, struct FGuid* GameplayRequestGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnGameplay");

	Ueqs_gameplay_bpc_C_AuthSpawnGameplay_Params params;
	params.TimedGameplayEvent = TimedGameplayEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (GameplayRequestGUID != nullptr)
		*GameplayRequestGUID = params.GameplayRequestGUID;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnActors_Manual
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_actor_data         ActorData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FVector>         Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   GameplayRequestGUID            (Parm, OutParm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthSpawnActors_Manual(const struct Feqs_actor_data& ActorData, TArray<struct FVector>* Targets, bool* Succeeded, struct FGuid* GameplayRequestGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnActors_Manual");

	Ueqs_gameplay_bpc_C_AuthSpawnActors_Manual_Params params;
	params.ActorData = ActorData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (GameplayRequestGUID != nullptr)
		*GameplayRequestGUID = params.GameplayRequestGUID;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnAimedProjectiles_Manual
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_aimed_projectile_data ProjectileData                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         Targets                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   GameplayRequestGUID            (Parm, OutParm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthSpawnAimedProjectiles_Manual(struct Feqs_aimed_projectile_data* ProjectileData, TArray<struct FVector>* Targets, bool* Succeeded, struct FGuid* GameplayRequestGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnAimedProjectiles_Manual");

	Ueqs_gameplay_bpc_C_AuthSpawnAimedProjectiles_Manual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectileData != nullptr)
		*ProjectileData = params.ProjectileData;
	if (Targets != nullptr)
		*Targets = params.Targets;
	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (GameplayRequestGUID != nullptr)
		*GameplayRequestGUID = params.GameplayRequestGUID;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.CreateTargettingDataFromEQS
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Ugameplay_targetting_data_C* GameplayTargettingData         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::CreateTargettingDataFromEQS(class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance, class Ugameplay_targetting_data_C** GameplayTargettingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.CreateTargettingDataFromEQS");

	Ueqs_gameplay_bpc_C_CreateTargettingDataFromEQS_Params params;
	params.EQSQueryInstance = EQSQueryInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTargettingData != nullptr)
		*GameplayTargettingData = params.GameplayTargettingData;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnAimedProjectiles
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_aimed_projectile_data AimedProjectileData            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEnvNamedValue>  QueryParams                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   RequestGUID                    (Parm, OutParm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthSpawnAimedProjectiles(const struct Feqs_aimed_projectile_data& AimedProjectileData, class UEnvQuery* Query, TArray<struct FEnvNamedValue>* QueryParams, struct FGuid* RequestGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnAimedProjectiles");

	Ueqs_gameplay_bpc_C_AuthSpawnAimedProjectiles_Params params;
	params.AimedProjectileData = AimedProjectileData;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueryParams != nullptr)
		*QueryParams = params.QueryParams;
	if (RequestGUID != nullptr)
		*RequestGUID = params.RequestGUID;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_actor_data         ActorData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEnvNamedValue>  QueryParams                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   RequestGUID                    (Parm, OutParm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthSpawnActors(const struct Feqs_actor_data& ActorData, class UEnvQuery* Query, TArray<struct FEnvNamedValue>* QueryParams, struct FGuid* RequestGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnActors");

	Ueqs_gameplay_bpc_C_AuthSpawnActors_Params params;
	params.ActorData = ActorData;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueryParams != nullptr)
		*QueryParams = params.QueryParams;
	if (RequestGUID != nullptr)
		*RequestGUID = params.RequestGUID;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnLobbedProjectiles
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_lobbed_projectile_data LobbedProjectileData           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEnvNamedValue>  QueryParams                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   RequestGUID                    (Parm, OutParm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthSpawnLobbedProjectiles(const struct Feqs_lobbed_projectile_data& LobbedProjectileData, class UEnvQuery* Query, TArray<struct FEnvNamedValue>* QueryParams, struct FGuid* RequestGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthSpawnLobbedProjectiles");

	Ueqs_gameplay_bpc_C_AuthSpawnLobbedProjectiles_Params params;
	params.LobbedProjectileData = LobbedProjectileData;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueryParams != nullptr)
		*QueryParams = params.QueryParams;
	if (RequestGUID != nullptr)
		*RequestGUID = params.RequestGUID;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthTryStopRequest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           RemovedRequest                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthTryStopRequest(const struct FGuid& Guid, bool* RemovedRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthTryStopRequest");

	Ueqs_gameplay_bpc_C_AuthTryStopRequest_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemovedRequest != nullptr)
		*RemovedRequest = params.RemovedRequest;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.TryRegisterSpawnedActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::TryRegisterSpawnedActor(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.TryRegisterSpawnedActor");

	Ueqs_gameplay_bpc_C_TryRegisterSpawnedActor_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetEQSGameplayDataFromPersistent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Fpersistent_eqs_spawn_data PersistentEQSData              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Feqs_gameplay_data      EqsGameplayData                (Parm, OutParm)

void Ueqs_gameplay_bpc_C::GetEQSGameplayDataFromPersistent(const struct Fpersistent_eqs_spawn_data& PersistentEQSData, struct Feqs_gameplay_data* EqsGameplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetEQSGameplayDataFromPersistent");

	Ueqs_gameplay_bpc_C_GetEQSGameplayDataFromPersistent_Params params;
	params.PersistentEQSData = PersistentEQSData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EqsGameplayData != nullptr)
		*EqsGameplayData = params.EqsGameplayData;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetEQSGameplayData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Feqs_spawn_query        SpawnQuery                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Feqs_gameplay_data      EqsGameplayData                (Parm, OutParm)

void Ueqs_gameplay_bpc_C::GetEQSGameplayData(const struct Feqs_spawn_query& SpawnQuery, struct Feqs_gameplay_data* EqsGameplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetEQSGameplayData");

	Ueqs_gameplay_bpc_C_GetEQSGameplayData_Params params;
	params.SpawnQuery = SpawnQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EqsGameplayData != nullptr)
		*EqsGameplayData = params.EqsGameplayData;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.DumpStateIfDebugEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpersistent_eqs_spawn_data PersistentData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  Prefix                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::DumpStateIfDebugEnabled(const struct Fpersistent_eqs_spawn_data& PersistentData, const class FString& Prefix, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.DumpStateIfDebugEnabled");

	Ueqs_gameplay_bpc_C_DumpStateIfDebugEnabled_Params params;
	params.PersistentData = PersistentData;
	params.Prefix = Prefix;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetRequestDebugString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpersistent_eqs_spawn_data Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  RequestDebugString             (Parm, OutParm, ZeroConstructor)

void Ueqs_gameplay_bpc_C::GetRequestDebugString(const struct Fpersistent_eqs_spawn_data& Data, class FString* RequestDebugString)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetRequestDebugString");

	Ueqs_gameplay_bpc_C_GetRequestDebugString_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestDebugString != nullptr)
		*RequestDebugString = params.RequestDebugString;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.PrintStringIfDebugEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ueqs_gameplay_bpc_C::PrintStringIfDebugEnabled(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.PrintStringIfDebugEnabled");

	Ueqs_gameplay_bpc_C_PrintStringIfDebugEnabled_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetFirstIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            NumItems                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eeqs_result_iteration_method> Method                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::GetFirstIndex(int NumItems, TEnumAsByte<Eeqs_result_iteration_method> Method, int* FirstIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetFirstIndex");

	Ueqs_gameplay_bpc_C_GetFirstIndex_Params params;
	params.NumItems = NumItems;
	params.Method = Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstIndex != nullptr)
		*FirstIndex = params.FirstIndex;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.MoveToNextTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpersistent_eqs_spawn_data PersistentData                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Fpersistent_eqs_spawn_data UpdatedData                    (Parm, OutParm)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::MoveToNextTarget(int TargetIndex, const struct Fpersistent_eqs_spawn_data& PersistentData, struct Fpersistent_eqs_spawn_data* UpdatedData, bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.MoveToNextTarget");

	Ueqs_gameplay_bpc_C_MoveToNextTarget_Params params;
	params.TargetIndex = TargetIndex;
	params.PersistentData = PersistentData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedData != nullptr)
		*UpdatedData = params.UpdatedData;
	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ChooseNextTargetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eeqs_result_iteration_method> Method                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AvailableRandomIndexes         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TotalNumTargets                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    RemainingRandomIndexes         (Parm, OutParm, ZeroConstructor)
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::ChooseNextTargetIndex(int CurrentIndex, TEnumAsByte<Eeqs_result_iteration_method> Method, int TotalNumTargets, TArray<int>* AvailableRandomIndexes, int* NextIndex, TArray<int>* RemainingRandomIndexes, bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ChooseNextTargetIndex");

	Ueqs_gameplay_bpc_C_ChooseNextTargetIndex_Params params;
	params.CurrentIndex = CurrentIndex;
	params.Method = Method;
	params.TotalNumTargets = TotalNumTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableRandomIndexes != nullptr)
		*AvailableRandomIndexes = params.AvailableRandomIndexes;
	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
	if (RemainingRandomIndexes != nullptr)
		*RemainingRandomIndexes = params.RemainingRandomIndexes;
	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.TickPersistentProjectileSpawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Epersistent_eqs_gameplay_update_result> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::TickPersistentProjectileSpawn(int Index, TEnumAsByte<Epersistent_eqs_gameplay_update_result>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.TickPersistentProjectileSpawn");

	Ueqs_gameplay_bpc_C_TickPersistentProjectileSpawn_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ValidateComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::ValidateComponent(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ValidateComponent");

	Ueqs_gameplay_bpc_C_ValidateComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetInstigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   Instigator                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::GetInstigator(class APawn** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.GetInstigator");

	Ueqs_gameplay_bpc_C_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Instigator != nullptr)
		*Instigator = params.Instigator;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnEQSGameplayEventFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::OnEQSGameplayEventFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnEQSGameplayEventFinished");

	Ueqs_gameplay_bpc_C_OnEQSGameplayEventFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ueqs_gameplay_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ReceiveBeginPlay");

	Ueqs_gameplay_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthApplyBuffs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQuery*               Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEnvNamedValue>  QueryParams                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UClass*>          BuffClasses                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            MaxTargets                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthApplyBuffs(class UEnvQuery* Query, TArray<struct FEnvNamedValue> QueryParams, TArray<class UClass*> BuffClasses, int MaxTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthApplyBuffs");

	Ueqs_gameplay_bpc_C_AuthApplyBuffs_Params params;
	params.Query = Query;
	params.QueryParams = QueryParams;
	params.BuffClasses = BuffClasses;
	params.MaxTargets = MaxTargets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnQueryFinishedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnQueryFinishedEvent_Event_1");

	Ueqs_gameplay_bpc_C_OnQueryFinishedEvent_Event_1_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ReceiveTick");

	Ueqs_gameplay_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthAddOngoingGameplaySpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        NewEQSSpawnQuery               (BlueprintVisible, BlueprintReadOnly, Parm)

void Ueqs_gameplay_bpc_C::AuthAddOngoingGameplaySpawn(const struct Feqs_spawn_query& NewEQSSpawnQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthAddOngoingGameplaySpawn");

	Ueqs_gameplay_bpc_C_AuthAddOngoingGameplaySpawn_Params params;
	params.NewEQSSpawnQuery = NewEQSSpawnQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthStoreEQSActorResultInBlackboard
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQuery*               EQSQuery                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FEnvNamedValue>  QueryParams                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   BlackboardResultName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::AuthStoreEQSActorResultInBlackboard(class UEnvQuery* EQSQuery, TArray<struct FEnvNamedValue> QueryParams, const struct FName& BlackboardResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.AuthStoreEQSActorResultInBlackboard");

	Ueqs_gameplay_bpc_C_AuthStoreEQSActorResultInBlackboard_Params params;
	params.EQSQuery = EQSQuery;
	params.QueryParams = QueryParams;
	params.BlackboardResultName = BlackboardResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnQueryFinishedEvent_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::OnQueryFinishedEvent_Event_2(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnQueryFinishedEvent_Event_2");

	Ueqs_gameplay_bpc_C_OnQueryFinishedEvent_Event_2_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ExecuteUbergraph_eqs_gameplay_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueqs_gameplay_bpc_C::ExecuteUbergraph_eqs_gameplay_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.ExecuteUbergraph_eqs_gameplay_bpc");

	Ueqs_gameplay_bpc_C_ExecuteUbergraph_eqs_gameplay_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnSpawnedProjectile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ueqs_gameplay_bpc_C::OnSpawnedProjectile__DelegateSignature(class Aprojectile_base_bp_C* Projectile, const struct FVector& Target, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function eqs_gameplay_bpc.eqs_gameplay_bpc_C.OnSpawnedProjectile__DelegateSignature");

	Ueqs_gameplay_bpc_C_OnSpawnedProjectile__DelegateSignature_Params params;
	params.Projectile = Projectile;
	params.Target = Target;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
