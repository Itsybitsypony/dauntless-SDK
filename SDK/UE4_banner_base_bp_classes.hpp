#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_banner_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass banner_base_bp.banner_base_bp_C
// 0x0138 (0x0640 - 0x0508)
class Abanner_base_bp_C : public AArchonBanner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Visibility_Collision;                                     // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostFall_Banner_ClothBlend_ClothBlendOn_127CF93B45E23729E328A1AC36EC3B3D;// 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FrostFall_Banner_ClothBlend__Direction_127CF93B45E23729E328A1AC36EC3B3D;// 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FrostFall_Banner_ClothBlend;                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_ClothBlendOn_06A21E5B40FC13D5C11B15BB0F3974FC; // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_06A21E5B40FC13D5C11B15BB0F3974FC;   // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_ClothBlendOn_2A305336462BCB90D0436DA617F0EB5B; // 0x0548(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_2A305336462BCB90D0436DA617F0EB5B;   // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Banner_ClothBlend_ClothBlendOn_7E93475D4E4CBF3E7A27729F04EF03E6;// 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Banner_ClothBlend__Direction_7E93475D4E4CBF3E7A27729F04EF03E6;// 0x055C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Banner_ClothBlend;                                        // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Founder_Banner_ClothBlend_ClothBlendOn_A3FFAACA49783FC6B0D8A7991C47335B;// 0x0568(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Founder_Banner_ClothBlend__Direction_A3FFAACA49783FC6B0D8A7991C47335B;// 0x056C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Founder_Banner_ClothBlend;                                // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicBannerMaterial;                                    // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VFXReference;                                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlanted;                                                // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeshLoaded;                                               // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimationLoaded;                                          // 0x058A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayAnimWhenMeshLoaded;                                   // 0x058B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UAkAudioBank*                                Audio_Soundbank;                                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Audio_Switch;                                             // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasPlantedImmediately;                                    // 0x05A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class UAnimSequence*                               AnimationToPlay;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                UI_Animation_Default;                                     // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UMaterialInstance>                 DefaultFabricMaterial;                                    // 0x05B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsUIBanner;                                               // 0x05D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	TAssetPtr<class UAnimSequenceBase>                 UI_Animation_Sequence;                                    // 0x05E0(0x0020) (Edit, BlueprintVisible)
	float                                              UISequenceLength;                                         // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	struct FTimerHandle                                BannerUIDeployTimer;                                      // 0x0608(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        DefaultSigil;                                             // 0x0610(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EvaluateBannerUnfurlCurve;                                // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ActiveBannerUnfurlCurve;                                  // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass banner_base_bp.banner_base_bp_C");
		return ptr;
	}


	void Set_Sigil_SurfaceType(class UMaterialInstanceDynamic* Mat_Instance, EArmourDyeSurfaceType DyeSelection);
	void Set_Fabric_SurfaceType(class UMaterialInstanceDynamic* Mat_Instance, EArmourDyeSurfaceType DyeSelection);
	void Set_Border_SurfaceType(class UMaterialInstanceDynamic* Mat_Instance, EArmourDyeSurfaceType DyeSelection);
	void UserConstructionScript();
	void Banner_ClothBlend__FinishedFunc();
	void Banner_ClothBlend__UpdateFunc();
	void Founder_Banner_ClothBlend__FinishedFunc();
	void Founder_Banner_ClothBlend__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void FrostFall_Banner_ClothBlend__FinishedFunc();
	void FrostFall_Banner_ClothBlend__UpdateFunc();
	void OnLoaded_BE583DFC43FC12306B59FB89FC930A67(class UObject* Loaded);
	void OnLoaded_C6569AAB48660443DD0F7E87B757EF78(class UObject* Loaded);
	void OnLoaded_25E45A82424414A9B9017BB8DBA44F67(class UObject* Loaded);
	void OnLoaded_42C77F274B0A84BF6CED82B94B039E8B(class UObject* Loaded);
	void OnLoaded_CB99B64941F8BD7D006CC58FE77F3AFF(class UObject* Loaded);
	void OnLoaded_91F4ABA5419E72D004F694B6C5977BF6(class UObject* Loaded);
	void OnLoaded_105190D24B50B16E1ADEB6A6C8D94C1D(class UObject* Loaded);
	void OnLoaded_7BC5536543D4D7C774D4E0AEFA5D8B5A(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnInstigatorDestroyed(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnBannerPlanted();
	void UI_Loadbanner();
	void PlayBannerAnimation();
	void UI_Update_CustomizationData();
	void OnBannerAnimInterrupted();
	void LocalPlayBannerAnimation();
	void UnhideBanner();
	void SetBannerDuration(float Duration);
	void FoldUpAndDestroy();
	void BP_ApplyCustomizationData();
	void UI_Vanity___Preview_Banner_Planting(class USkeletalMeshComponent* Pawn, const struct FTransform& NewTransform, TAssetPtr<class UAnimSequenceBase> UI_Animation_Sequence);
	void TimerDone_HideBanner();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_banner_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
