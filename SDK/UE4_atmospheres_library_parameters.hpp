#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function atmospheres_library.atmospheres_library_C.GetRandomAtmosphereIndex
struct Uatmospheres_library_C_GetRandomAtmosphereIndex_Params
{
	class AAtmosphereSpawner*                          AtmosphereSpawner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewAtmosphereIndex;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.GetCurrentCloudConfiguration
struct Uatmospheres_library_C_GetCurrentCloudConfiguration_Params
{
	class AAtmosphereSpawner*                          AtmosphereSpawner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACloudConfiguration*                         CurrentCloudConfiguration;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.GetCurrentAtmosphere
struct Uatmospheres_library_C_GetCurrentAtmosphere_Params
{
	class AGameMode*                                   GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereBase*                             CurrentAtmosphere;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.GetAtmosphereSpawner
struct Uatmospheres_library_C_GetAtmosphereSpawner_Params
{
	class AGameMode*                                   GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereSpawner*                          AtmosphereSpawner;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.SpawnCloudConfigurationHelper
struct Uatmospheres_library_C_SpawnCloudConfigurationHelper_Params
{
	class ACloudConfiguration*                         NewCloudConfiguration;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereSpawner*                          AtmosphereSpawner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.SpawnAtmosphereHelper
struct Uatmospheres_library_C_SpawnAtmosphereHelper_Params
{
	class ACloudConfiguration*                         OldCloudConfiguration;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereBase*                             OldAtmosphere;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereBase*                             NewAtmosphere;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereSpawner*                          Atmosphere_Spawner;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnClouds;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CloudConfigurationClass;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CloudConfigurationTransform;                              // (Parm, OutParm, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.LoadAtmosphereHelper
struct Uatmospheres_library_C_LoadAtmosphereHelper_Params
{
	class AAtmosphereSpawner*                          AtmosphereSpawner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAtmosphereIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DesiredAtmosphereIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveAtmosphereIndex;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            SelectedTODClass;                                         // (Parm, OutParm)
	bool                                               AtmosphereValid;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function atmospheres_library.atmospheres_library_C.GetNextAtmosphereIndex
struct Uatmospheres_library_C_GetNextAtmosphereIndex_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAtmosphereSpawner*                          AtmosphereSpawner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
