#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmosphere_spawner_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass atmosphere_spawner_bp.atmosphere_spawner_bp_C
// 0x003C (0x0404 - 0x03C8)
class Aatmosphere_spawner_bp_C : public AAtmosphereSpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class ACloudConfiguration*                         SpawnedCloudConfiguration;                                // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAtmosphereBase*                             SpawnedAtmosphere;                                        // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAtmosphereIndex;                                   // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAtmosphereSpawned;                                      // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      RequestedAtmosphereClass;                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequestedAtmosphereIndex;                                 // 0x0400(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass atmosphere_spawner_bp.atmosphere_spawner_bp_C");
		return ptr;
	}


	void ServerRemoveChildActors();
	void OnRep_RequestedAtmosphereIndex();
	void OnRep_RequestedAtmosphereClass();
	void UserConstructionScript();
	void OnLoaded_821AFFF2440532FF365760A1104153C3(class UClass* Loaded);
	void ClientSpawnAtmosphereByIndex(int DesiredAtmosphereIndex);
	void ClientSpawnAtmosphereByClass(class UClass* Class);
	void ServerRequestAtmosphereByIndex(int DesiredAtmosphereIndex);
	void ServerRequestAtmosphereByClass(class UClass* Class);
	void CycleAtmosphere();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_atmosphere_spawner_bp(int EntryPoint);
	void OnAtmosphereSpawned__DelegateSignature(class AAtmosphereBase* SpawnedAtmosphere);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
