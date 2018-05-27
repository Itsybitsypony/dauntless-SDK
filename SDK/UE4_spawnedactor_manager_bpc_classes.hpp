#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawnedactor_manager_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass spawnedactor_manager_bpc.spawnedactor_manager_bpc_C
// 0x0050 (0x0220 - 0x01D0)
class Uspawnedactor_manager_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fspawnedactor_type_to_list>          Actors;                                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_Index;                                                  // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	TArray<struct Fspawnedactor_manager_info>          ActorData;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              L_Actors;                                                 // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class FString                                      L_String;                                                 // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass spawnedactor_manager_bpc.spawnedactor_manager_bpc_C");
		return ptr;
	}


	void RemoveSpawnedActor(int ClassIndex, int RefIndex);
	void UpdateAllowedAmount(class UClass* ActorClass, int AllowedAmount, TEnumAsByte<Etoo_many_actors_strategy> FutureOverflowStrategy, TEnumAsByte<Eupdate_max_actors_strategy> WhatToDoWithCurrentOverflows);
	void GetSpawnedActorDataForClass(class UClass* ActorClass, bool* DataExists, struct Fspawnedactor_manager_info* ActorData, int* DataIndex);
	void CanSpawnActor(class UClass* ActorClass, bool* CanSpawn);
	void GetSpawnedActorsOfClass(class UClass* ActorClass, TArray<class AActor*>* Actors);
	void Internal_GetActorRef(int ClassIndex, class AActor* Actor, int* RefIndex);
	void GetIndexOfSpawnedActorClass(class UClass* ActorClass, int* Index);
	void GetIndexOfSpawnedActor(class AActor* Actor, int* ClassIndex, int* RefIndex);
	void AuthRegisterSpawnedActor(class AActor* Actor);
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void Internal_RemoveActor(class AActor* Actor);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_spawnedactor_manager_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
