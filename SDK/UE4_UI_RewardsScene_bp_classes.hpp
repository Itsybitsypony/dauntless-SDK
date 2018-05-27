#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UI_RewardsScene_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UI_RewardsScene_bp.UI_RewardsScene_bp_C
// 0x0205 (0x0615 - 0x0410)
class AUI_RewardsScene_bp_C : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box_Quad4;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box_Quad3;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box_Quad2;                                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box_Quad1;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StyleCore_5;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StyleCore_4;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StyleCore_3;                                              // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        StyleCore_2;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BEH_Core4;                                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BEH_Core3;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BEH_Core2;                                                // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BEH_Core1;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Core_Platform4;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Core_Platform3;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Core_Platform2;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Core_Platform1;                                           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            UIViewportCamera;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PanCamera_LargeBeh_CameraPosition_0DDD4ABF4FCC8494BFE16EBB142BDF3A;// 0x04A8(0x000C) (IsPlainOldData)
	float                                              PanCamera_LargeBeh_CameraRotation_Y_0DDD4ABF4FCC8494BFE16EBB142BDF3A;// 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PanCamera_LargeBeh_CameraRotation_Z_0DDD4ABF4FCC8494BFE16EBB142BDF3A;// 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PanCamera_LargeBeh_FOV_0DDD4ABF4FCC8494BFE16EBB142BDF3A;  // 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PanCamera_LargeBeh__Direction_0DDD4ABF4FCC8494BFE16EBB142BDF3A;// 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          PanCamera_LargeBeh;                                       // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_3PanCamera_MedBeh_CameraPosition_A149585C4F28E2DBCE2D81A9BF0010C1;// 0x04D0(0x000C) (IsPlainOldData)
	float                                              Timeline_3PanCamera_MedBeh_CameraRotation_Y_A149585C4F28E2DBCE2D81A9BF0010C1;// 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3PanCamera_MedBeh_CameraRotation_Z_A149585C4F28E2DBCE2D81A9BF0010C1;// 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3PanCamera_MedBeh_FOV_A149585C4F28E2DBCE2D81A9BF0010C1;// 0x04E4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3PanCamera_MedBeh__Direction_A149585C4F28E2DBCE2D81A9BF0010C1;// 0x04E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3PanCamera_MedBeh;                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PanCamera_SmallBeh_CameraPosition_158ADB744A80D4C4DD42BF8A99D72EC2;// 0x04F8(0x000C) (IsPlainOldData)
	float                                              PanCamera_SmallBeh_CameraRotation_Y_158ADB744A80D4C4DD42BF8A99D72EC2;// 0x0504(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PanCamera_SmallBeh_CameraRotation_Z_158ADB744A80D4C4DD42BF8A99D72EC2;// 0x0508(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PanCamera_SmallBeh_FOV_158ADB744A80D4C4DD42BF8A99D72EC2;  // 0x050C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PanCamera_SmallBeh__Direction_158ADB744A80D4C4DD42BF8A99D72EC2;// 0x0510(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class UTimelineComponent*                          PanCamera_SmallBeh;                                       // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_2_CorePosition_75B064B54D9D0B7434766CA94B4C80D2; // 0x0520(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_75B064B54D9D0B7434766CA94B4C80D2;   // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_1_CorePosition_50D2A80045FD7703C2AF6F9924CE003D; // 0x0538(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_50D2A80045FD7703C2AF6F9924CE003D;   // 0x0544(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0545(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BehemothDissolveTimeline_BehemothDissolveCurve_2A5DFE7C44DEB67395F70095EA85A63C;// 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BehemothDissolveTimeline__Direction_2A5DFE7C44DEB67395F70095EA85A63C;// 0x0554(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BehemothDissolveTimeline;                                 // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_0_CorePosition_6A5F1F06458C26F14F617F91C53E07A1; // 0x0560(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6A5F1F06458C26F14F617F91C53E07A1;   // 0x056C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CoreIntro_CorePosition_C94FB1D742387116A8FD5EA01227ECF8;  // 0x0578(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CoreIntro__Direction_C94FB1D742387116A8FD5EA01227ECF8;    // 0x0584(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CoreIntro;                                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UIScene_CamLocation;                                      // 0x0590(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    UIScene_CamRotation;                                      // 0x059C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Player_Materials;                                 // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Selected_Hair_Row;                                        // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TriSection_MI_Dynamic;                                    // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UMaterialInstance>                 LOAD_UI_HighlightMaterial;                                // 0x05C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CameraCentered_Zoomed;                                    // 0x05E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class AArchonBehemoth*                             Behemoth_Scene;                                           // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              PlayersInBehemothRange;                                   // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                FoliageInRange;                                           // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Quad1_GeoCollision;                                       // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UI_RewardsScene_bp.UI_RewardsScene_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void CoreIntro__FinishedFunc();
	void CoreIntro__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BehemothDissolveTimeline__FinishedFunc();
	void BehemothDissolveTimeline__UpdateFunc();
	void BehemothDissolveTimeline__Trigger_Roar__EventFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void PanCamera_SmallBeh__FinishedFunc();
	void PanCamera_SmallBeh__UpdateFunc();
	void Timeline_3PanCamera_MedBeh__FinishedFunc();
	void Timeline_3PanCamera_MedBeh__UpdateFunc();
	void PanCamera_LargeBeh__FinishedFunc();
	void PanCamera_LargeBeh__UpdateFunc();
	void Add_Behemoth_Core(const class FString& BehCoreItemID, const class FString& PlayerId, int Index);
	void DissolveBehemoth(class AArchonBehemoth* Behemoth);
	void CameraPan_Small_Beh();
	void SetCamera_BehemothShot();
	void CameraPan_MediumBeh();
	void CameraPan_LargeBeh();
	void BndEvt__Box_Quad4_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_Quad3_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_Quad1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_Quad2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_UI_RewardsScene_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
