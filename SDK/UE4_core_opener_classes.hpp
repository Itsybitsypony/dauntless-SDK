#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_opener_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass core_opener.core_opener_C
// 0x0286 (0x06B0 - 0x042A)
class Acore_opener_C : public Aumg_spawn_interaction_bp_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        core_opener_hatch_00;                                     // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         core_fx_light_l;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         core_fx_light_r;                                          // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Play_env_lp_device_core_opener;                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_RarityFX;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         core_fill_spotlight;                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            CoreCam;                                                  // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        flag_core_opener_00;                                      // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        core_opener_center_00;                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        core_uplight;                                             // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        core_downlight;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonSpeakerComponent*                     SpeakerSettings;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_4_BehemothDissolveCurve_145151324035D3FAD785EDA083286264;// 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_145151324035D3FAD785EDA083286264;   // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CoreOpenSpin_fx_color_variety_8EB21742485284EE3C63319E36F51C61;// 0x04A8(0x0010) (IsPlainOldData)
	float                                              CoreOpenSpin_fx_light_brightness_8EB21742485284EE3C63319E36F51C61;// 0x04B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CoreOpenSpin_CoreCageRot_8EB21742485284EE3C63319E36F51C61;// 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CoreOpenSpin__Direction_8EB21742485284EE3C63319E36F51C61; // 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CoreOpenSpin;                                             // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OpenerDeactivation_CoreRaise_CE62A5224497659AB77C2398648E3172;// 0x04D0(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpenerDeactivation__Direction_CE62A5224497659AB77C2398648E3172;// 0x04DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpenerDeactivation;                                       // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OpenerActivation_CoreRaise_DF7357C84E6AFAE296F1B09238F7E599;// 0x04E8(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpenerActivation__Direction_DF7357C84E6AFAE296F1B09238F7E599;// 0x04F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpenerActivation;                                         // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_BehemothDissolveCurve_282496DF49DA4614D1433EAF420AB094;// 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_282496DF49DA4614D1433EAF420AB094;   // 0x0504(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_BehemothDissolveCurve_1FED1861406632039F13C58BEF8EB791;// 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_1FED1861406632039F13C58BEF8EB791;   // 0x0514(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_BehemothDissolveCurve_E3B3301C40FDEB11AF1DF195DE344C14;// 0x0520(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_E3B3301C40FDEB11AF1DF195DE344C14;   // 0x0524(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_0_CameraResetPosition_2C7073DC49E8F659DD454BAA0F4DF497;// 0x0530(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_2C7073DC49E8F659DD454BAA0F4DF497;   // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraReset_CameraResetPosition_E9EE19BC4C72EC5DD44DA0951287DD0F;// 0x0548(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraReset__Direction_E9EE19BC4C72EC5DD44DA0951287DD0F;  // 0x0554(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraReset;                                              // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       VendorTitle;                                              // 0x0560(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       VendorType;                                               // 0x0578(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 BackgroundTint;                                           // 0x0590(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 PanelTint;                                                // 0x05B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AArchonInventory*                            Local_Player_Inventory;                                   // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Player_Pawn_View_Target;                                  // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           Active_Player_Controller;                                 // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class ULevelSequence>                    OpenerSequence;                                           // 0x05F8(0x0020) (Edit, BlueprintVisible)
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACore_basic_00_bp_C*                         CoreBP_Basic;                                             // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Acore_ball_00_bp_C*                          CoreBP_Ball;                                              // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACore_8plug_00_bp_C*                         CoreBP_8Plug;                                             // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECoreType>                             ActiveCoreType;                                           // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimationIsPlaying;                                       // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x063A(0x0006) MISSED OFFSET
	class Ucore_opener_main_bpw_C*                     CoreOpenerUI;                                             // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreLastCharge;                                           // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreCurrentCharge;                                        // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoreCurrentSpinRate;                                      // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                RarityTINT;                                               // 0x0654(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PRNRarityTint_Next;                                       // 0x0664(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PRNRarityTint_Prev;                                       // 0x0674(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PRNRarityTint_TimePrev;                                   // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PRNRarityTint_TimeNext;                                   // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PRNRarityTint_TimeInterval;                               // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        PRNRarityTintChoices;                                     // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UArchonInventoryItem*                        ActiveCore_InvItem;                                       // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACore_3plug_00_bp1_C*                        CoreBP_3plug;                                             // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass core_opener.core_opener_C");
		return ptr;
	}


	void Spawn_Core_3Plug();
	void ReduceSpinBy(float ReduceBy);
	void GetIconFromItemID(const class FString& ItemID, TAssetPtr<class UTexture2D>* Icon, struct FLinearColor* Linear_Colour, struct FLinearColor* CoreLevelColour);
	void DestroyCoreBPS(bool Destroy_Basic, bool Destroy_Ball, bool Destroy_3_Plug, bool Destroy_8_Plug);
	void OnInteractionBegin_GetOriginalViewTarget(class APawn* self2);
	void UpdateCoreFXLights(float SwitchFrequency, float SwitchDecayRatio);
	void UpdateCoreSpin(class AActor* Core, float DeltaTime);
	void GetActiveCore(class AActor** Active_Core, bool* IsValid);
	void Spawn_Core_Ball();
	void Spawn_Core_8Plug();
	void Spawn_Core_Basic_Default();
	void HasCoresToUnlock(bool* HasCore, TEnumAsByte<ECoreType>* CoreType);
	void RaiseInteractWith(class APawn* Interactor);
	void UserConstructionScript();
	void CameraReset__FinishedFunc();
	void CameraReset__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void OpenerActivation__FinishedFunc();
	void OpenerActivation__UpdateFunc();
	void OpenerDeactivation__FinishedFunc();
	void OpenerDeactivation__UpdateFunc();
	void CoreOpenSpin__FinishedFunc();
	void CoreOpenSpin__UpdateFunc();
	void CoreOpenSpin__fx_color_switch__EventFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void OnLoaded_301D17874C4E11C70ADB999B551115CE(class UObject* Loaded);
	void OnLoaded_BC4CABB443137E5D23E4F0BFFE9F6C81(class UObject* Loaded);
	void OnLoaded_AE1471914E5B126BFF5BF8B960B0AEE4(class UObject* Loaded);
	void OnLoaded_15E42471462612D44BA5ECB176E96724(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnUserCompletedInteraction(class UArchonInteractionUserComponent** User);
	void Refresh_Marker();
	void OnMenuClosed();
	void Set_Fadeout_of_All_Nearby_Players(bool Fadeout_);
	void K2_OnBecomeViewTarget(class APlayerController** pc);
	void ReceiveGameplayStart();
	void PlayCoreOpenAnimation();
	void UpdateCoreModel(class UArchonInventoryItem* CoreItemReference);
	void HasNoCores();
	void ResetCamera();
	void ZoomOutCameraonOpen();
	void DissolveBasicCore();
	void Dissolve_Core_8Plug();
	void Dissolve_Core_Ball();
	void SetRotationMomentum(float MomentumPercent);
	void UpdateDecals_FromUI(bool ShowPlayer1_Decal, bool Player1_IsChampion, bool ShowPlayer2_Decal, bool ShowPlayer3_Decal, bool ShowPlayer4_Decal);
	void Set_FX_Rarity_TINT(const struct FLinearColor& Param);
	void ReceiveTick(float* DeltaSeconds);
	void CreateUI();
	void SetupCoreA(const class FString& ItemID);
	void SetupCore___Ball_Core(const class FString& ItemID);
	void SetupCore___8Plug(const class FString& InputPin);
	void SetupCore___3Plug(const class FString& InputPin);
	void Dissolve_3_Plug_Core();
	void ExecuteUbergraph_core_opener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
