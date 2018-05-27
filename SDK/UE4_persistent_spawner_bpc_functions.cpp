// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_persistent_spawner_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function persistent_spawner_bpc.persistent_spawner_bpc_C.DoSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RequestIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::DoSpawn(int RequestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.DoSpawn");

	Upersistent_spawner_bpc_C_DoSpawn_Params params;
	params.RequestIndex = RequestIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.GetIndexOfUniqueKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Search_Key                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::GetIndexOfUniqueKey(const struct FName& Search_Key, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.GetIndexOfUniqueKey");

	Upersistent_spawner_bpc_C_GetIndexOfUniqueKey_Params params;
	params.Search_Key = Search_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.AuthAddPersistentSpawnRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpersistent_spawn_params Request                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Upersistent_spawner_bpc_C::AuthAddPersistentSpawnRequest(const struct Fpersistent_spawn_params& Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.AuthAddPersistentSpawnRequest");

	Upersistent_spawner_bpc_C_AuthAddPersistentSpawnRequest_Params params;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.AuthRemovePersistentSpawnRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UniqueKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::AuthRemovePersistentSpawnRequest(const struct FName& UniqueKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.AuthRemovePersistentSpawnRequest");

	Upersistent_spawner_bpc_C_AuthRemovePersistentSpawnRequest_Params params;
	params.UniqueKey = UniqueKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.ReceiveTick");

	Upersistent_spawner_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.ExecuteUbergraph_persistent_spawner_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::ExecuteUbergraph_persistent_spawner_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.ExecuteUbergraph_persistent_spawner_bpc");

	Upersistent_spawner_bpc_C_ExecuteUbergraph_persistent_spawner_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.OnSpawnedProjectile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   SpawnedProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::OnSpawnedProjectile__DelegateSignature(class Aprojectile_base_bp_C* SpawnedProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.OnSpawnedProjectile__DelegateSignature");

	Upersistent_spawner_bpc_C_OnSpawnedProjectile__DelegateSignature_Params params;
	params.SpawnedProjectile = SpawnedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function persistent_spawner_bpc.persistent_spawner_bpc_C.OnSpawnedActor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upersistent_spawner_bpc_C::OnSpawnedActor__DelegateSignature(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawner_bpc.persistent_spawner_bpc_C.OnSpawnedActor__DelegateSignature");

	Upersistent_spawner_bpc_C_OnSpawnedActor__DelegateSignature_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
