// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atmospheres_library.atmospheres_library_C.GetRandomAtmosphereIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAtmosphereSpawner*      AtmosphereSpawner              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewAtmosphereIndex             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_GetRandomAtmosphereIndex(class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext, int* NewAtmosphereIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.GetRandomAtmosphereIndex");

	Uatmospheres_library_C_GetRandomAtmosphereIndex_Params params;
	params.AtmosphereSpawner = AtmosphereSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewAtmosphereIndex != nullptr)
		*NewAtmosphereIndex = params.NewAtmosphereIndex;
}


// Function atmospheres_library.atmospheres_library_C.GetCurrentCloudConfiguration
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAtmosphereSpawner*      AtmosphereSpawner              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACloudConfiguration*     CurrentCloudConfiguration      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_GetCurrentCloudConfiguration(class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext, class ACloudConfiguration** CurrentCloudConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.GetCurrentCloudConfiguration");

	Uatmospheres_library_C_GetCurrentCloudConfiguration_Params params;
	params.AtmosphereSpawner = AtmosphereSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCloudConfiguration != nullptr)
		*CurrentCloudConfiguration = params.CurrentCloudConfiguration;
}


// Function atmospheres_library.atmospheres_library_C.GetCurrentAtmosphere
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameMode*               GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereBase*         CurrentAtmosphere              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_GetCurrentAtmosphere(class AGameMode* GameMode, class UObject* __WorldContext, class AAtmosphereBase** CurrentAtmosphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.GetCurrentAtmosphere");

	Uatmospheres_library_C_GetCurrentAtmosphere_Params params;
	params.GameMode = GameMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAtmosphere != nullptr)
		*CurrentAtmosphere = params.CurrentAtmosphere;
}


// Function atmospheres_library.atmospheres_library_C.GetAtmosphereSpawner
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameMode*               GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereSpawner*      AtmosphereSpawner              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_GetAtmosphereSpawner(class AGameMode* GameMode, class UObject* __WorldContext, class AAtmosphereSpawner** AtmosphereSpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.GetAtmosphereSpawner");

	Uatmospheres_library_C_GetAtmosphereSpawner_Params params;
	params.GameMode = GameMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AtmosphereSpawner != nullptr)
		*AtmosphereSpawner = params.AtmosphereSpawner;
}


// Function atmospheres_library.atmospheres_library_C.SpawnCloudConfigurationHelper
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACloudConfiguration*     NewCloudConfiguration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereSpawner*      AtmosphereSpawner              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_SpawnCloudConfigurationHelper(class ACloudConfiguration* NewCloudConfiguration, class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.SpawnCloudConfigurationHelper");

	Uatmospheres_library_C_SpawnCloudConfigurationHelper_Params params;
	params.NewCloudConfiguration = NewCloudConfiguration;
	params.AtmosphereSpawner = AtmosphereSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmospheres_library.atmospheres_library_C.SpawnAtmosphereHelper
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACloudConfiguration*     OldCloudConfiguration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereBase*         OldAtmosphere                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereBase*         NewAtmosphere                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereSpawner*      Atmosphere_Spawner             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnClouds                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CloudConfigurationClass        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              CloudConfigurationTransform    (Parm, OutParm, IsPlainOldData)

void Uatmospheres_library_C::STATIC_SpawnAtmosphereHelper(class ACloudConfiguration* OldCloudConfiguration, class AAtmosphereBase* OldAtmosphere, class AAtmosphereBase* NewAtmosphere, class AAtmosphereSpawner* Atmosphere_Spawner, class UObject* __WorldContext, bool* SpawnClouds, class UClass** CloudConfigurationClass, struct FTransform* CloudConfigurationTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.SpawnAtmosphereHelper");

	Uatmospheres_library_C_SpawnAtmosphereHelper_Params params;
	params.OldCloudConfiguration = OldCloudConfiguration;
	params.OldAtmosphere = OldAtmosphere;
	params.NewAtmosphere = NewAtmosphere;
	params.Atmosphere_Spawner = Atmosphere_Spawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnClouds != nullptr)
		*SpawnClouds = params.SpawnClouds;
	if (CloudConfigurationClass != nullptr)
		*CloudConfigurationClass = params.CloudConfigurationClass;
	if (CloudConfigurationTransform != nullptr)
		*CloudConfigurationTransform = params.CloudConfigurationTransform;
}


// Function atmospheres_library.atmospheres_library_C.LoadAtmosphereHelper
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAtmosphereSpawner*      AtmosphereSpawner              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentAtmosphereIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredAtmosphereIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveAtmosphereIndex          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UClass>        SelectedTODClass               (Parm, OutParm)
// bool                           AtmosphereValid                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_LoadAtmosphereHelper(class AAtmosphereSpawner* AtmosphereSpawner, int CurrentAtmosphereIndex, int DesiredAtmosphereIndex, class UObject* __WorldContext, int* ActiveAtmosphereIndex, TAssetPtr<class UClass>* SelectedTODClass, bool* AtmosphereValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.LoadAtmosphereHelper");

	Uatmospheres_library_C_LoadAtmosphereHelper_Params params;
	params.AtmosphereSpawner = AtmosphereSpawner;
	params.CurrentAtmosphereIndex = CurrentAtmosphereIndex;
	params.DesiredAtmosphereIndex = DesiredAtmosphereIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveAtmosphereIndex != nullptr)
		*ActiveAtmosphereIndex = params.ActiveAtmosphereIndex;
	if (SelectedTODClass != nullptr)
		*SelectedTODClass = params.SelectedTODClass;
	if (AtmosphereValid != nullptr)
		*AtmosphereValid = params.AtmosphereValid;
}


// Function atmospheres_library.atmospheres_library_C.GetNextAtmosphereIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAtmosphereSpawner*      AtmosphereSpawner              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uatmospheres_library_C::STATIC_GetNextAtmosphereIndex(int CurrentIndex, class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext, int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_library.atmospheres_library_C.GetNextAtmosphereIndex");

	Uatmospheres_library_C_GetNextAtmosphereIndex_Params params;
	params.CurrentIndex = CurrentIndex;
	params.AtmosphereSpawner = AtmosphereSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewIndex != nullptr)
		*NewIndex = params.NewIndex;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
