// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawnedactor_manager_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.RemoveSpawnedActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClassIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RefIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::RemoveSpawnedActor(int ClassIndex, int RefIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.RemoveSpawnedActor");

	Uspawnedactor_manager_bpc_C_RemoveSpawnedActor_Params params;
	params.ClassIndex = ClassIndex;
	params.RefIndex = RefIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.UpdateAllowedAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AllowedAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Etoo_many_actors_strategy> FutureOverflowStrategy         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eupdate_max_actors_strategy> WhatToDoWithCurrentOverflows   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::UpdateAllowedAmount(class UClass* ActorClass, int AllowedAmount, TEnumAsByte<Etoo_many_actors_strategy> FutureOverflowStrategy, TEnumAsByte<Eupdate_max_actors_strategy> WhatToDoWithCurrentOverflows)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.UpdateAllowedAmount");

	Uspawnedactor_manager_bpc_C_UpdateAllowedAmount_Params params;
	params.ActorClass = ActorClass;
	params.AllowedAmount = AllowedAmount;
	params.FutureOverflowStrategy = FutureOverflowStrategy;
	params.WhatToDoWithCurrentOverflows = WhatToDoWithCurrentOverflows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetSpawnedActorDataForClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DataExists                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct Fspawnedactor_manager_info ActorData                      (Parm, OutParm)
// int                            DataIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::GetSpawnedActorDataForClass(class UClass* ActorClass, bool* DataExists, struct Fspawnedactor_manager_info* ActorData, int* DataIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetSpawnedActorDataForClass");

	Uspawnedactor_manager_bpc_C_GetSpawnedActorDataForClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataExists != nullptr)
		*DataExists = params.DataExists;
	if (ActorData != nullptr)
		*ActorData = params.ActorData;
	if (DataIndex != nullptr)
		*DataIndex = params.DataIndex;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.CanSpawnActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::CanSpawnActor(class UClass* ActorClass, bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.CanSpawnActor");

	Uspawnedactor_manager_bpc_C_CanSpawnActor_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetSpawnedActorsOfClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void Uspawnedactor_manager_bpc_C::GetSpawnedActorsOfClass(class UClass* ActorClass, TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetSpawnedActorsOfClass");

	Uspawnedactor_manager_bpc_C_GetSpawnedActorsOfClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.Internal_GetActorRef
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClassIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RefIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::Internal_GetActorRef(int ClassIndex, class AActor* Actor, int* RefIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.Internal_GetActorRef");

	Uspawnedactor_manager_bpc_C_Internal_GetActorRef_Params params;
	params.ClassIndex = ClassIndex;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RefIndex != nullptr)
		*RefIndex = params.RefIndex;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetIndexOfSpawnedActorClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::GetIndexOfSpawnedActorClass(class UClass* ActorClass, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetIndexOfSpawnedActorClass");

	Uspawnedactor_manager_bpc_C_GetIndexOfSpawnedActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetIndexOfSpawnedActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClassIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RefIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::GetIndexOfSpawnedActor(class AActor* Actor, int* ClassIndex, int* RefIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.GetIndexOfSpawnedActor");

	Uspawnedactor_manager_bpc_C_GetIndexOfSpawnedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClassIndex != nullptr)
		*ClassIndex = params.ClassIndex;
	if (RefIndex != nullptr)
		*RefIndex = params.RefIndex;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.AuthRegisterSpawnedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::AuthRegisterSpawnedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.AuthRegisterSpawnedActor");

	Uspawnedactor_manager_bpc_C_AuthRegisterSpawnedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.OnDestroyed_Event_1");

	Uspawnedactor_manager_bpc_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.Internal_RemoveActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::Internal_RemoveActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.Internal_RemoveActor");

	Uspawnedactor_manager_bpc_C_Internal_RemoveActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.ReceiveTick");

	Uspawnedactor_manager_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.ExecuteUbergraph_spawnedactor_manager_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uspawnedactor_manager_bpc_C::ExecuteUbergraph_spawnedactor_manager_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_manager_bpc.spawnedactor_manager_bpc_C.ExecuteUbergraph_spawnedactor_manager_bpc");

	Uspawnedactor_manager_bpc_C_ExecuteUbergraph_spawnedactor_manager_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
