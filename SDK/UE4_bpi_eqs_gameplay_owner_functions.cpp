// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_eqs_gameplay_owner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.EQSActorSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubpi_eqs_gameplay_owner_C::EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.EQSActorSpawned");

	Ubpi_eqs_gameplay_owner_C_EQSActorSpawned_Params params;
	params.Actor = Actor;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplayData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Feqs_spawn_query        NewEQSSpawnQuery               (Parm, OutParm)
// bool                           ModifiedData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_eqs_gameplay_owner_C::ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplayData");

	Ubpi_eqs_gameplay_owner_C_ModifyEQSGameplayData_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEQSSpawnQuery != nullptr)
		*NewEQSSpawnQuery = params.NewEQSSpawnQuery;
	if (ModifiedData != nullptr)
		*ModifiedData = params.ModifiedData;
}


// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.EQSProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileTarget               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubpi_eqs_gameplay_owner_C::EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.EQSProjectileSpawned");

	Ubpi_eqs_gameplay_owner_C_EQSProjectileSpawned_Params params;
	params.Projectile = Projectile;
	params.ProjectileTarget = ProjectileTarget;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplaySpawnPosPostCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 FinalTargetPosition            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewPosition                    (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_eqs_gameplay_owner_C::ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplaySpawnPosPostCalc");

	Ubpi_eqs_gameplay_owner_C_ModifyEQSGameplaySpawnPosPostCalc_Params params;
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


// Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplaySpawnPosPreCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 InitialStartPosition           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InitialTargetPosition          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewStartPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_eqs_gameplay_owner_C::ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_eqs_gameplay_owner.bpi_eqs_gameplay_owner_C.ModifyEQSGameplaySpawnPosPreCalc");

	Ubpi_eqs_gameplay_owner_C_ModifyEQSGameplaySpawnPosPreCalc_Params params;
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
