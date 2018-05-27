// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_harvestable_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fauna_harvestable_bp.fauna_harvestable_bp_C.EnableHighlightForDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::EnableHighlightForDuration(float Duration, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.EnableHighlightForDuration");

	Afauna_harvestable_bp_C_EnableHighlightForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.SetGrantItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::SetGrantItemID(const class FString& GatherID, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.SetGrantItemID");

	Afauna_harvestable_bp_C_SetGrantItemID_Params params;
	params.GatherID = GatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplaySpawnPosPreCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 InitialStartPosition           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InitialTargetPosition          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewStartPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplaySpawnPosPreCalc");

	Afauna_harvestable_bp_C_ModifyEQSGameplaySpawnPosPreCalc_Params params;
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


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplaySpawnPosPostCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 FinalTargetPosition            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewPosition                    (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplaySpawnPosPostCalc");

	Afauna_harvestable_bp_C_ModifyEQSGameplaySpawnPosPostCalc_Params params;
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


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplayData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Feqs_spawn_query        NewEQSSpawnQuery               (Parm, OutParm)
// bool                           ModifiedData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.ModifyEQSGameplayData");

	Afauna_harvestable_bp_C_ModifyEQSGameplayData_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEQSSpawnQuery != nullptr)
		*NewEQSSpawnQuery = params.NewEQSSpawnQuery;
	if (ModifiedData != nullptr)
		*ModifiedData = params.ModifiedData;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.OnRep_Used
// (BlueprintCallable, BlueprintEvent)

void Afauna_harvestable_bp_C::OnRep_Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.OnRep_Used");

	Afauna_harvestable_bp_C_OnRep_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.GetMesh");

	Afauna_harvestable_bp_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void Afauna_harvestable_bp_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.GetFallbackProjectileSpawnOffset");

	Afauna_harvestable_bp_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Afauna_harvestable_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.UserConstructionScript");

	Afauna_harvestable_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ReceivedArchonAbilityDamage
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Afauna_harvestable_bp_C::ReceivedArchonAbilityDamage(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.ReceivedArchonAbilityDamage");

	Afauna_harvestable_bp_C_ReceivedArchonAbilityDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Afauna_harvestable_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.ReceiveBeginPlay");

	Afauna_harvestable_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.EQSActorSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Afauna_harvestable_bp_C::EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.EQSActorSpawned");

	Afauna_harvestable_bp_C_EQSActorSpawned_Params params;
	params.Actor = Actor;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.SetLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Efauna_loco_state_enum>* NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::SetLocoState(TEnumAsByte<Efauna_loco_state_enum>* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.SetLocoState");

	Afauna_harvestable_bp_C_SetLocoState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.EQSProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileTarget               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Afauna_harvestable_bp_C::EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.EQSProjectileSpawned");

	Afauna_harvestable_bp_C_EQSProjectileSpawned_Params params;
	params.Projectile = Projectile;
	params.ProjectileTarget = ProjectileTarget;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.SpawnShinyLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.SpawnShinyLoot");

	Afauna_harvestable_bp_C_SpawnShinyLoot_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_harvestable_bp.fauna_harvestable_bp_C.ExecuteUbergraph_fauna_harvestable_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_harvestable_bp_C::ExecuteUbergraph_fauna_harvestable_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_harvestable_bp.fauna_harvestable_bp_C.ExecuteUbergraph_fauna_harvestable_bp");

	Afauna_harvestable_bp_C_ExecuteUbergraph_fauna_harvestable_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
