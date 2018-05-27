#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eqs_gameplay_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eqs_gameplay_bpc.eqs_gameplay_bpc_C
// 0x0360 (0x0530 - 0x01D0)
class Ueqs_gameplay_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	struct FGuid                                       L_ProjectileDamageGUID;                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_ProjectileTargetPos;                                    // 0x01E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	class APawn*                                       PossiblyNullOwningPawn;                                   // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              L_BuffClasses;                                            // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_MaxTargets;                                             // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                L_CurrentTargets;                                         // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     L_ProjectileStartPos;                                     // 0x0220(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<struct Fpersistent_eqs_spawn_data>          OngoingProjectileRequests;                                // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        L_AvailIndexes;                                           // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_Index;                                                  // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	TArray<struct Feqs_spawn_query>                    ProjectileQueries;                                        // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_FoundQueryIndex;                                        // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // 0x0270(0x0290) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      LocalSpawnedActor;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BlackboardResultName_Temp;                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    L_SpawnRotation;                                          // 0x0510(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpawnedProjectile;                                      // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eqs_gameplay_bpc.eqs_gameplay_bpc_C");
		return ptr;
	}


	void AuthSpawnGameplay(const struct Ftimed_gameplay_event& TimedGameplayEvent, bool* Succeeded, struct FGuid* GameplayRequestGUID);
	void AuthSpawnActors_Manual(const struct Feqs_actor_data& ActorData, TArray<struct FVector>* Targets, bool* Succeeded, struct FGuid* GameplayRequestGUID);
	void AuthSpawnAimedProjectiles_Manual(struct Feqs_aimed_projectile_data* ProjectileData, TArray<struct FVector>* Targets, bool* Succeeded, struct FGuid* GameplayRequestGUID);
	void CreateTargettingDataFromEQS(class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance, class Ugameplay_targetting_data_C** GameplayTargettingData);
	void AuthSpawnAimedProjectiles(const struct Feqs_aimed_projectile_data& AimedProjectileData, class UEnvQuery* Query, TArray<struct FEnvNamedValue>* QueryParams, struct FGuid* RequestGUID);
	void AuthSpawnActors(const struct Feqs_actor_data& ActorData, class UEnvQuery* Query, TArray<struct FEnvNamedValue>* QueryParams, struct FGuid* RequestGUID);
	void AuthSpawnLobbedProjectiles(const struct Feqs_lobbed_projectile_data& LobbedProjectileData, class UEnvQuery* Query, TArray<struct FEnvNamedValue>* QueryParams, struct FGuid* RequestGUID);
	void AuthTryStopRequest(const struct FGuid& Guid, bool* RemovedRequest);
	void TryRegisterSpawnedActor(class AActor* SpawnedActor);
	void GetEQSGameplayDataFromPersistent(const struct Fpersistent_eqs_spawn_data& PersistentEQSData, struct Feqs_gameplay_data* EqsGameplayData);
	void GetEQSGameplayData(const struct Feqs_spawn_query& SpawnQuery, struct Feqs_gameplay_data* EqsGameplayData);
	void DumpStateIfDebugEnabled(const struct Fpersistent_eqs_spawn_data& PersistentData, const class FString& Prefix, float Duration);
	void GetRequestDebugString(const struct Fpersistent_eqs_spawn_data& Data, class FString* RequestDebugString);
	void PrintStringIfDebugEnabled(const class FString& String);
	void GetFirstIndex(int NumItems, TEnumAsByte<Eeqs_result_iteration_method> Method, int* FirstIndex);
	void MoveToNextTarget(int TargetIndex, const struct Fpersistent_eqs_spawn_data& PersistentData, struct Fpersistent_eqs_spawn_data* UpdatedData, bool* Succeeded);
	void ChooseNextTargetIndex(int CurrentIndex, TEnumAsByte<Eeqs_result_iteration_method> Method, int TotalNumTargets, TArray<int>* AvailableRandomIndexes, int* NextIndex, TArray<int>* RemainingRandomIndexes, bool* Finished);
	void TickPersistentProjectileSpawn(int Index, TEnumAsByte<Epersistent_eqs_gameplay_update_result>* Result);
	void ValidateComponent(bool* IsValid);
	void GetInstigator(class APawn** Instigator);
	void OnEQSGameplayEventFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ReceiveBeginPlay();
	void AuthApplyBuffs(class UEnvQuery* Query, TArray<struct FEnvNamedValue> QueryParams, TArray<class UClass*> BuffClasses, int MaxTargets);
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ReceiveTick(float* DeltaSeconds);
	void AuthAddOngoingGameplaySpawn(const struct Feqs_spawn_query& NewEQSSpawnQuery);
	void AuthStoreEQSActorResultInBlackboard(class UEnvQuery* EQSQuery, TArray<struct FEnvNamedValue> QueryParams, const struct FName& BlackboardResultName);
	void OnQueryFinishedEvent_Event_2(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void ExecuteUbergraph_eqs_gameplay_bpc(int EntryPoint);
	void OnSpawnedProjectile__DelegateSignature(class Aprojectile_base_bp_C* Projectile, const struct FVector& Target, const struct FGuid& Guid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
