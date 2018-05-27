#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_persistent_spawner_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass persistent_spawner_bpc.persistent_spawner_bpc_C
// 0x0038 (0x0208 - 0x01D0)
class Upersistent_spawner_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fpersistent_spawn_params>            PersistentSpawnRequests;                                  // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSpawnedActor;                                           // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpawnedProjectile;                                      // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass persistent_spawner_bpc.persistent_spawner_bpc_C");
		return ptr;
	}


	void DoSpawn(int RequestIndex);
	void GetIndexOfUniqueKey(const struct FName& Search_Key, int* FoundIndex);
	void AuthAddPersistentSpawnRequest(const struct Fpersistent_spawn_params& Request);
	void AuthRemovePersistentSpawnRequest(const struct FName& UniqueKey);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_persistent_spawner_bpc(int EntryPoint);
	void OnSpawnedProjectile__DelegateSignature(class Aprojectile_base_bp_C* SpawnedProjectile);
	void OnSpawnedActor__DelegateSignature(class AActor* SpawnedActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
