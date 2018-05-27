#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass atmospheres_library.atmospheres_library_C
// 0x0000 (0x0028 - 0x0028)
class Uatmospheres_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass atmospheres_library.atmospheres_library_C");
		return ptr;
	}


	void STATIC_GetRandomAtmosphereIndex(class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext, int* NewAtmosphereIndex);
	void STATIC_GetCurrentCloudConfiguration(class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext, class ACloudConfiguration** CurrentCloudConfiguration);
	void STATIC_GetCurrentAtmosphere(class AGameMode* GameMode, class UObject* __WorldContext, class AAtmosphereBase** CurrentAtmosphere);
	void STATIC_GetAtmosphereSpawner(class AGameMode* GameMode, class UObject* __WorldContext, class AAtmosphereSpawner** AtmosphereSpawner);
	void STATIC_SpawnCloudConfigurationHelper(class ACloudConfiguration* NewCloudConfiguration, class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext);
	void STATIC_SpawnAtmosphereHelper(class ACloudConfiguration* OldCloudConfiguration, class AAtmosphereBase* OldAtmosphere, class AAtmosphereBase* NewAtmosphere, class AAtmosphereSpawner* Atmosphere_Spawner, class UObject* __WorldContext, bool* SpawnClouds, class UClass** CloudConfigurationClass, struct FTransform* CloudConfigurationTransform);
	void STATIC_LoadAtmosphereHelper(class AAtmosphereSpawner* AtmosphereSpawner, int CurrentAtmosphereIndex, int DesiredAtmosphereIndex, class UObject* __WorldContext, int* ActiveAtmosphereIndex, TAssetPtr<class UClass>* SelectedTODClass, bool* AtmosphereValid);
	void STATIC_GetNextAtmosphereIndex(int CurrentIndex, class AAtmosphereSpawner* AtmosphereSpawner, class UObject* __WorldContext, int* NewIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
