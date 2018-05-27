#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_intro_cinematic_trigger_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C
// 0x0149 (0x04D1 - 0x0388)
class Abehemoth_intro_cinematic_trigger_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class Udynamic_cinematic_component_bp_C*           dynamic_cinematic_component_bp;                           // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            TriggerSphere;                                            // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            WitnessSphere;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class ULevelSequence>                    BehemothIntroSequence;                                    // 0x03A8(0x0020) (Edit, BlueprintVisible, Net)
	class AArchonBehemoth*                             Behemoth;                                                 // 0x03C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    ProxyActors;                                              // 0x03D0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              ReplacementActors;                                        // 0x03E0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ULevelSequencePlayer*                        LevelSequencePlayerInstance;                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            ProxyCameraActorClassID;                                  // 0x03F8(0x0020) (Edit, BlueprintVisible, Net)
	TAssetPtr<class UClass>                            ProxyBehemothActorClassID;                                // 0x0418(0x0020) (Edit, BlueprintVisible, Net)
	class AActor*                                      Camera_actor;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            PlayerClassID;                                            // 0x0440(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ProxyActorClassIDs;                                       // 0x0460(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	class UClass*                                      PlayerClass;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Triggering_Actor;                                         // 0x0478(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              WitnessActors;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TriggerRadius;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              WitnessRadius;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct FTransform                                  AnchorPoint;                                              // 0x04A0(0x0030) (Edit, BlueprintVisible, Net, IsPlainOldData)
	bool                                               HideBehemoth;                                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_intro_cinematic_trigger_bp.behemoth_intro_cinematic_trigger_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded_85526137426123A96780D6A2B6A48CFC(class UClass* Loaded);
	void CineComplete();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_behemoth_intro_cinematic_trigger_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
