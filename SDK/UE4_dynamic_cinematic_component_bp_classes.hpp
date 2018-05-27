#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dynamic_cinematic_component_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C
// 0x02B0 (0x0690 - 0x03E0)
class Udynamic_cinematic_component_bp_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	bool                                               LoadingComplete;                                          // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ProxyActorClasses;                                        // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ProxyActors;                                              // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              ReplacementActors;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<TAssetPtr<class ULevelSequence>>            Sequences;                                                // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          CinematicStageTransforms;                                 // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    ActorsToSpawn;                                            // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SpawnedActorClasses;                                      // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      ProxyCameraClass;                                         // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Camera;                                                   // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ULevelSequencePlayer*>                LevelSequencePlayers;                                     // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UClass>                            ProxyCineCamera;                                          // 0x0490(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ClientReadyCount;                                         // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECinematicPlayerState>                 ServerPlaybackState;                                      // 0x04B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	int                                                ClientCount;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Clients;                                                  // 0x04C0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              FailsafeTimeout;                                          // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	class ULevelSequence*                              FadeFromBlackLevelSequence;                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequencePlayer*                        LCurrentLevelSequencePlayer;                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LTotalCinematicDuration;                                  // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableTimeout;                                            // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ecinematic_exit_transition_type_enum>  ForceFadeFromBlack;                                       // 0x04ED(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x04EE(0x0002) MISSED OFFSET
	class AActor*                                      Protagonist;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LProtagonistClass;                                        // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            ProxyProtagonist;                                         // 0x0500(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LShouldFadeFromBlack;                                     // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              CameraBlendOutTime;                                       // 0x0524(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LCurrentBlendTime;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LBlendOutTime;                                            // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LTargetAspectRatio;                                       // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LInitialAspectRatio;                                      // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             LGroundFollowOffsets;                                     // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LCameraGroundOffset;                                      // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LFirstGroundOffsetUpdate;                                 // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LPaused;                                                  // 0x054D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x054E(0x0002) MISSED OFFSET
	float                                              LPauseTime;                                               // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LEndOfMatch;                                              // 0x0554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCameraOffsetCorrection;                             // 0x0555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0556(0x0002) MISSED OFFSET
	TArray<class AActor*>                              ObserverActors;                                           // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DebugLoadDelay;                                           // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	struct Fdynamic_cinematic_component_preload_parameters PreloadParameters;                                        // 0x0570(0x0080) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               DebugLoadDelayEnabled;                                    // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClientReady;                                              // 0x05F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitForClientReady;                                       // 0x05F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableActorGroundFollowing;                               // 0x05F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClientViewingCinematic;                                // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05F5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClientStart;                                              // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerStart;                                              // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientStop;                                               // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerStop;                                               // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class Ucinematic_overlay_bpw_C*                    CinematicOverlayWidget;                                   // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPrintEnabled;                                        // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEnabled;                                             // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideChat;                                                 // 0x0642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LIsDemoReplay;                                            // 0x0643(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	struct FTimerHandle                                LFailsafeTimer;                                           // 0x0648(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                LEstimatedCompletionTimer;                                // 0x0650(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShowSequenceTime;                                         // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0659(0x0007) MISSED OFFSET
	struct FTransform                                  CameraPosition;                                           // 0x0660(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C");
		return ptr;
	}


	void DebugPrint(const class FString& String, float Duration);
	void DeactivateCinematicOverlay();
	void ActivateCinematicOverlay();
	void GetClientPlaybackState(TEnumAsByte<ECinematicPlayerState>* State);
	void CalculateClientViewability();
	void OnRep_PreloadParameters();
	bool HasComponentFinishedLoading();
	void AdjustCamera();
	void FindActorOfInterest(class AActor* Camera, TArray<class AActor*>* Actors, class AActor** BestActor, int* BestIndex);
	void OnRep_ReplacementActors();
	void FollowGround(class AActor* Actor, const struct FVector& GroundFollowOffset, float DeltaSeconds, float Smoothing, struct FVector* OutGroundFollowOffset);
	void ShouldFadeFromBlack(class AActor* Camera, class AActor* TargetActor, float AngleThreshold, float DistanceThreshold, bool* ShouldFade);
	void OnRep_Clients();
	void OnRep_ServerPlaybackState();
	void SetActorAndMeshHidden(class AActor* Actor, bool Hidden);
	void ReplaceActorAnimSequence(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* SequenceActor, class UAnimSequenceBase* NewAnimSequence);
	void OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811(class UObject* Loaded);
	void OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735(class UClass* Loaded);
	void OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C(class UClass* Loaded);
	void OnLoaded_DF9F826043B6CD0EBED950801301E3A5(class UClass* Loaded);
	void OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A(class UClass* Loaded);
	void SetCinematicMaterials();
	void PreloadOnServer(const struct Fdynamic_cinematic_component_preload_parameters& Parameters);
	void Play(TArray<class AActor*> ObserverActors, TArray<class AActor*> ReplacementActors);
	void PlayOnClient();
	void Reset();
	void OnSequenceEnd();
	void FailsafeTimer();
	void SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState);
	void EstimatedClientComplete();
	void AllClientsCompleteMulticast();
	void ReceiveTick(float* DeltaSeconds);
	void PostSequenceUpdate();
	void PreloadOnClient();
	void AllClientsCompleteOwnerOnly();
	void AllClientsCompleteServerOnly();
	void SkipCinematic();
	void AllClientsComplete();
	void BlendCameraOut(float BlendTime, class AActor* NewViewTarget);
	void BindNewReplacementActors(TArray<class UClass*> NewProxyActors, TArray<class AActor*> NewReplacementActors);
	void OnCameraCut(class UCameraComponent* CameraComponent);
	void ToggleShowSequenceTime();
	void ExecuteUbergraph_dynamic_cinematic_component_bp(int EntryPoint);
	void ServerStop__DelegateSignature();
	void ClientStop__DelegateSignature();
	void ServerStart__DelegateSignature();
	void ClientStart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
