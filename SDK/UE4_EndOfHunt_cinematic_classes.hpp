#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_cinematic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndOfHunt_cinematic.EndOfHunt_cinematic_C
// 0x0220 (0x05A8 - 0x0388)
class AEndOfHunt_cinematic_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class Udynamic_cinematic_component_bp_C*           dynamic_cinematic_component_bp;                           // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ProxyPrimaryCineActor;                                    // 0x03A0(0x0020) (Edit, BlueprintVisible, Net)
	TAssetPtr<class UClass>                            ProxyCineCameraActor;                                     // 0x03C0(0x0020) (Edit, BlueprintVisible, Net)
	TAssetPtr<class ULevelSequence>                    MOTHLevelSequence;                                        // 0x03E0(0x0020) (Edit, BlueprintVisible, Net)
	class ULevelSequencePlayer*                        MotHLevelSequencePlayer;                                  // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequencePlayer*                        ExitLevelSequencePlayer;                                  // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MOTH_OriginLocation;                                      // 0x0410(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class AActor*                                      CameraActor;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FRotator                                    Moth_OriginRotation;                                      // 0x0428(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class AActor*                                      PrimaryCineActor;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              SlayerActors;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate)
	int                                                ClientReadyCount;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SlayerCount;                                              // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeamRewardsCineLocation;                                  // 0x0458(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	struct FRotator                                    TeamRewardsCineRotation;                                  // 0x0464(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	TArray<class UClass*>                              ProxySupportCineActorClasses;                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class ULevelSequence>                    FadeFromBlackLevelSequenceAsset;                          // 0x0480(0x0020) (Edit, BlueprintVisible)
	class ULevelSequence*                              FadeFromBlackLevelSequenceInstance;                       // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECinematicPlayerState>                 ServerPlaybackState;                                      // 0x04A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadingComplete;                                          // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECinematicPlayerState>                 ClientCinematicState;                                     // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x04AB(0x0005) MISSED OFFSET
	class AActor*                                      ReplaceCamera;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MOTHPlayer;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TAssetPtr<class UClass>                            ProxyCineAirship;                                         // 0x04C0(0x0020) (Edit, BlueprintVisible)
	TArray<TAssetPtr<class UClass>>                    ActorsToSpawnClassIDs;                                    // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ProxyActorClassIDs;                                       // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class ULevelSequence>                    TeamRewardsLevelSequence;                                 // 0x0500(0x0020) (Edit, BlueprintVisible, Net)
	TAssetPtr<class ULevelSequence>                    AirshipExitLevelSequence;                                 // 0x0520(0x0020) (Edit, BlueprintVisible, Net)
	TArray<TAssetPtr<class UClass>>                    ProxySupportCineActors;                                   // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ReplacementActors;                                        // 0x0550(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              SupportCineActors;                                        // 0x0560(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FActorAnimPair>                      Anim_Sequence_Overrides;                                  // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      MOTHBehemoth;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    ServerPlaybackComplete;                                   // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlaybackComplete;                                   // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndOfHunt_cinematic.EndOfHunt_cinematic_C");
		return ptr;
	}


	void OnRep_SlayerActors();
	void UserConstructionScript();
	void BlendCameraOut(float BlendTime);
	void ToggleShowSequenceTime();
	void SwapCineMatsOut(class AArchonCharacter* Player_Char);
	void SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState);
	void SetCinematicMaterials();
	void ReceiveBeginPlay();
	void Play();
	void Reload();
	void SkipCinematic();
	void OnServerStop();
	void OnClientStop();
	void ExecuteUbergraph_EndOfHunt_cinematic(int EntryPoint);
	void ClientPlaybackComplete__DelegateSignature();
	void ServerPlaybackComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
