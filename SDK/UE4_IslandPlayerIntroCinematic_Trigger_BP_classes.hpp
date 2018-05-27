#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IslandPlayerIntroCinematic_Trigger_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C
// 0x0218 (0x05A0 - 0x0388)
class AIslandPlayerIntroCinematic_Trigger_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class Udynamic_cinematic_component_bp_C*           dynamic_cinematic_component_bp;                           // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ProxyPrimaryCineActor;                                    // 0x03A0(0x0020) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class UClass>>                    ProxySupportCineActors;                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UClass>                            ProxyCineAirship;                                         // 0x03D0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class UClass>                            ProxyCineCameraActor;                                     // 0x03F0(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class ULevelSequence>                    IslandApproachLevelSequence;                              // 0x0410(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class ULevelSequence>                    PlayerIntroLevelSequence;                                 // 0x0430(0x0020) (Edit, BlueprintVisible)
	struct FVector                                     IslandApproachCineOriginLocation;                         // 0x0450(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    IslandApproachCineOriginRotation;                         // 0x045C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class AActor*                                      PrimaryCineActor;                                         // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              SlayerActors;                                             // 0x0470(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate)
	struct FVector                                     PlayerIntroCineLocation;                                  // 0x0480(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    PlayerIntroCineRotation;                                  // 0x048C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class AActor*>                              SupportCineActors;                                        // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TAssetPtr<class ULevelSequence>                    FadeFromBlackLevelSequenceAsset;                          // 0x04A8(0x0020) (Edit, BlueprintVisible)
	TArray<class UAnimSequenceBase*>                   DefaultIntroAnimations;                                   // 0x04C8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    ActorsToSpawnClassIDs;                                    // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ProxyActorClassIDs;                                       // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              ReplacementActors;                                        // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FActorAnimPair>                      IntroAnimSequences;                                       // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAkAudioEvent*>                       AKEventsOnPlay;                                           // 0x0518(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	bool                                               bClientStarted;                                           // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	TArray<class ULevelSequence*>                      HACK_FORCE_THIS_BS_TO_GET_PACKAGED;                       // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFinishedLoading;                                         // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	float                                              LLoadStartTime;                                           // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FActorAnimRefPair>                   IntroAnimSequenceRefs;                                    // 0x0548(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FActorAnimRefPair>                   LIntroAnimSequenceRefs;                                   // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
	struct FTransform                                  LLocalPlayerStartTransform;                               // 0x0570(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C");
		return ptr;
	}


	void OutputDebugInformation();
	bool HasFinishedLoading();
	void OnRep_IntroAnimSequenceRefs();
	void GetEquippedIntroAnimSequenceAsset(class AActor* Object, TAssetPtr<class UAnimSequenceBase>* AnimSequenceAsset, bool* Valid);
	void GetDefaultActorAnimSequence(class UAnimSequenceBase** ActorAnimSequence);
	void SetActorAnimSequence(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* Actor);
	void SetActorAndMeshHidden(class AActor* Actor, bool Hidden);
	void OnRep_SlayerActors();
	void UserConstructionScript();
	void OnLoaded_8347F64641BB2533ABF4DD96DEEC358E(class UObject* Loaded);
	void BlendCameraOut(float BlendTime);
	void ToggleShowSequenceTime();
	void SwapCineMatsOut(class AArchonCharacter* Player_Char);
	void SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState);
	void SetCinematicMaterials();
	void ReceiveBeginPlay();
	void Reload();
	void PlayAKEvents();
	void Play();
	void ReceiveGameplayStart();
	void RetrieveIntroAnimSequencesFromLoadout();
	void LoadIntroAnimSequences();
	void SkipCinematic();
	void OnClientPlaybackStopped();
	void ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
