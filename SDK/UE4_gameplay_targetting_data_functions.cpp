// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_targetting_data_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gameplay_targetting_data.gameplay_targetting_data_C.SetupFromEQSInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugameplay_targetting_data_C::SetupFromEQSInstance(class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_targetting_data.gameplay_targetting_data_C.SetupFromEQSInstance");

	Ugameplay_targetting_data_C_SetupFromEQSInstance_Params params;
	params.EQSQueryInstance = EQSQueryInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gameplay_targetting_data.gameplay_targetting_data_C.SetupPositionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Positions                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ugameplay_targetting_data_C::SetupPositionData(TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_targetting_data.gameplay_targetting_data_C.SetupPositionData");

	Ugameplay_targetting_data_C_SetupPositionData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function gameplay_targetting_data.gameplay_targetting_data_C.SetupActorData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ugameplay_targetting_data_C::SetupActorData(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_targetting_data.gameplay_targetting_data_C.SetupActorData");

	Ugameplay_targetting_data_C_SetupActorData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function gameplay_targetting_data.gameplay_targetting_data_C.GetLocations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor)

void Ugameplay_targetting_data_C::GetLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_targetting_data.gameplay_targetting_data_C.GetLocations");

	Ugameplay_targetting_data_C_GetLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function gameplay_targetting_data.gameplay_targetting_data_C.GetActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>          ActorData                      (Parm, OutParm, ZeroConstructor)

void Ugameplay_targetting_data_C::GetActors(TArray<class AActor*>* ActorData)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_targetting_data.gameplay_targetting_data_C.GetActors");

	Ugameplay_targetting_data_C_GetActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorData != nullptr)
		*ActorData = params.ActorData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
