#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_part_display_InWorldSpawner_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C
// 0x00E0 (0x0468 - 0x0388)
class Apart_display_InWorldSpawner_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Upgrade_EmitAnim;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Create_EmitAnim;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetObject;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoRotationSpeed;                                        // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetOffset_Postition;                                   // 0x03DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetOffset_Rotation;                                    // 0x03E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TAssetPtr<class ULevelSequence>                    LevelSequence;                                            // 0x03F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            ProxyITEMCineActor;                                       // 0x0420(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UClass>                            ProxyCineCameraActor;                                     // 0x0440(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      CameraActor;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass part_display_InWorldSpawner_bp.part_display_InWorldSpawner_bp_C");
		return ptr;
	}


	void GetTags(EItemGroupType Type);
	void UserConstructionScript();
	void OnLoaded_FB8EFEF447890DD2AEC2DA9ACEF9E03B(class UObject* Loaded);
	void ReceiveTick(float* DeltaSeconds);
	void ChangeDisplayedItem(const class FString& ItemID, EArchonBodyType BodyType);
	void ClearDisplayedItem();
	void CustomEvent_1();
	void HideSpawner();
	void ShowSpawner();
	void ExecuteUbergraph_part_display_InWorldSpawner_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
