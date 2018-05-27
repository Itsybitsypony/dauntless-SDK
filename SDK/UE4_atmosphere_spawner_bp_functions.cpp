// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmosphere_spawner_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRemoveChildActors
// (Public, BlueprintCallable, BlueprintEvent)

void Aatmosphere_spawner_bp_C::ServerRemoveChildActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRemoveChildActors");

	Aatmosphere_spawner_bp_C_ServerRemoveChildActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnRep_RequestedAtmosphereIndex
// (BlueprintCallable, BlueprintEvent)

void Aatmosphere_spawner_bp_C::OnRep_RequestedAtmosphereIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnRep_RequestedAtmosphereIndex");

	Aatmosphere_spawner_bp_C_OnRep_RequestedAtmosphereIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnRep_RequestedAtmosphereClass
// (BlueprintCallable, BlueprintEvent)

void Aatmosphere_spawner_bp_C::OnRep_RequestedAtmosphereClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnRep_RequestedAtmosphereClass");

	Aatmosphere_spawner_bp_C_OnRep_RequestedAtmosphereClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmosphere_spawner_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.UserConstructionScript");

	Aatmosphere_spawner_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnLoaded_821AFFF2440532FF365760A1104153C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::OnLoaded_821AFFF2440532FF365760A1104153C3(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnLoaded_821AFFF2440532FF365760A1104153C3");

	Aatmosphere_spawner_bp_C_OnLoaded_821AFFF2440532FF365760A1104153C3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ClientSpawnAtmosphereByIndex
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DesiredAtmosphereIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::ClientSpawnAtmosphereByIndex(int DesiredAtmosphereIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ClientSpawnAtmosphereByIndex");

	Aatmosphere_spawner_bp_C_ClientSpawnAtmosphereByIndex_Params params;
	params.DesiredAtmosphereIndex = DesiredAtmosphereIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ClientSpawnAtmosphereByClass
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::ClientSpawnAtmosphereByClass(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ClientSpawnAtmosphereByClass");

	Aatmosphere_spawner_bp_C_ClientSpawnAtmosphereByClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRequestAtmosphereByIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DesiredAtmosphereIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::ServerRequestAtmosphereByIndex(int DesiredAtmosphereIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRequestAtmosphereByIndex");

	Aatmosphere_spawner_bp_C_ServerRequestAtmosphereByIndex_Params params;
	params.DesiredAtmosphereIndex = DesiredAtmosphereIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRequestAtmosphereByClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::ServerRequestAtmosphereByClass(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRequestAtmosphereByClass");

	Aatmosphere_spawner_bp_C_ServerRequestAtmosphereByClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.CycleAtmosphere
// (BlueprintCallable, BlueprintEvent)

void Aatmosphere_spawner_bp_C::CycleAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.CycleAtmosphere");

	Aatmosphere_spawner_bp_C_CycleAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aatmosphere_spawner_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ReceiveBeginPlay");

	Aatmosphere_spawner_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ExecuteUbergraph_atmosphere_spawner_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::ExecuteUbergraph_atmosphere_spawner_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ExecuteUbergraph_atmosphere_spawner_bp");

	Aatmosphere_spawner_bp_C_ExecuteUbergraph_atmosphere_spawner_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnAtmosphereSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAtmosphereBase*         SpawnedAtmosphere              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aatmosphere_spawner_bp_C::OnAtmosphereSpawned__DelegateSignature(class AAtmosphereBase* SpawnedAtmosphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnAtmosphereSpawned__DelegateSignature");

	Aatmosphere_spawner_bp_C_OnAtmosphereSpawned__DelegateSignature_Params params;
	params.SpawnedAtmosphere = SpawnedAtmosphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
