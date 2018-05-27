#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_driveby_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gatherable_driveby_base_bp.gatherable_driveby_base_bp_C
// 0x0098 (0x0420 - 0x0388)
class Agatherable_driveby_base_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            HighlightUIWidget;                                        // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_aether_collectible;                                     // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Disallowed_Actors;                                        // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    DynamicDebugMaterial;                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Item_ID;                                                  // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DestroyOnPickup;                                          // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UParticleSystem*                             gatherable_vfx_out;                                       // 0x03E8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AbilitiesToGiveOnPickup;                                  // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEventBase*                           Gathered_Sound;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Persistant_Sound_Start;                                   // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Persistant_Sound_Stop;                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEventBase*                           GatheredSoundPlayer;                                      // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gatherable_driveby_base_bp.gatherable_driveby_base_bp_C");
		return ptr;
	}


	void SetGrantItemID(const class FString& GatherID, bool* Output);
	void EnableHighlightForDuration(float Duration, bool* Output);
	void UserConstructionScript();
	void SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EventOnEnableHighlight(float Duration);
	void EventOnDisableHighlight();
	void OnPickupPayload(class AArchonCharacter* PlayerPickingUp);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_gatherable_driveby_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
