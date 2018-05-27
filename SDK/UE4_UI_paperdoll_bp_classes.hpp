#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UI_paperdoll_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UI_paperdoll_bp.UI_paperdoll_bp_C
// 0x0911 (0x0D21 - 0x0410)
class AUI_paperdoll_bp_C : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            UI_Camera2_TransitionCamera;                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_flare_burst;                                            // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ucine_blendshape_anim_component_C*           cine_blendshape_anim_component;                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      BeardSlot;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_fog_paper_doll;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_pollen_paper_doll;                                      // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Helm;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Hair_Slot;                                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Weapon;                                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 MaterialBillboard_LOADOUT_Highlight;                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 BG_MaterialBillboard_CameraRender;                        // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_DOWN;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_RIGHT;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_LEFT;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight2;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Lantern;                                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            UI_Camera1;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Legs;                                                     // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Arms;                                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Chest;                                                    // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Head;                                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkinMesh;                                                 // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    BillboardCaptureCam;                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_2_Paperdoll_CharacterPosition_6731F2A345B3DC0A2ACC21957407D348;// 0x04E8(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_2_CameraPosition_6731F2A345B3DC0A2ACC21957407D348;// 0x04F4(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_2_UI_Trisection_Left_6731F2A345B3DC0A2ACC21957407D348;// 0x0500(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_6731F2A345B3DC0A2ACC21957407D348;   // 0x050C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_1_CameraPosition_5C2DD31F4B414FA8BC6C11989C05C1A2;// 0x0518(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_1_TriSection_Down_5C2DD31F4B414FA8BC6C11989C05C1A2;// 0x0524(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_5C2DD31F4B414FA8BC6C11989C05C1A2;   // 0x0530(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Timeline_0_PaperdollCharacter_Position_2F26B05345230E2B78CD4A9F0E49ABCF;// 0x0540(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_CameraPosition_2F26B05345230E2B78CD4A9F0E49ABCF;// 0x054C(0x000C) (IsPlainOldData)
	struct FVector                                     Timeline_0_TriSection_Right_2F26B05345230E2B78CD4A9F0E49ABCF;// 0x0558(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_2F26B05345230E2B78CD4A9F0E49ABCF;   // 0x0564(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UIScene_CamLocation;                                      // 0x0570(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    UIScene_CamRotation;                                      // 0x057C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicChestMats;                                         // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicArmsMats;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicLegsMats;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicHelmMats;                                          // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EArchonBodyType                                    BodyType;                                                 // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	TAssetPtr<class USkeletalMesh>                     HairAppearanceAsset;                                      // 0x05D0(0x0020) (Edit, BlueprintVisible)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Player_Materials;                                 // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Selected_Hair_Row;                                        // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TriSection_MI_Dynamic;                                    // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UMaterialInstance>                 LOAD_UI_HighlightMaterial;                                // 0x0610(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    DynamicHair_PrimaryMat;                                   // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID_Legs;                                              // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ItemID_Arms;                                              // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ItemID_Chest;                                             // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ItemID_Helm;                                              // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDyeVariant                                 DyeConfig_Legs;                                           // 0x0678(0x0010) (Edit, BlueprintVisible)
	struct FDyeVariant                                 DyeConfig_Arms;                                           // 0x0688(0x0010) (Edit, BlueprintVisible)
	struct FDyeVariant                                 DyeConfig_Chest;                                          // 0x0698(0x0010) (Edit, BlueprintVisible)
	struct FDyeVariant                                 DyeConfig_Helm;                                           // 0x06A8(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     CameraCentered_Zoomed;                                    // 0x06B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	class FString                                      ItemID_Weapon;                                            // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BannerPlantingMode;                                       // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class Abanner_base_bp_C*                           PaperdollBanner;                                          // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                BannerUIDeployTimer;                                      // 0x06E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CameraFace;                                               // 0x06F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraEyes;                                               // 0x06FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraCCBody;                                             // 0x0708(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraFaceRotation;                                       // 0x0714(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraEyesRotation;                                       // 0x0720(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraCCBodyRotation;                                     // 0x072C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedMakeupRow;                                        // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedSkinToneRow;                                      // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SkinMaterialInstance;                                     // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PermanentlyHideHelm;                                      // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	struct FVector                                     CameraDefault;                                            // 0x0754(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CamOffsetLeft;                                            // 0x0760(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Cam_Far_Left;                                             // 0x076C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Selected_Beard_Row;                                       // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Selected_EyebrowRow;                                      // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     BeardAppearanceAsset;                                     // 0x0788(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class USkeletalMesh>                     EyebrowAppearanceAsset;                                   // 0x07A8(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x8];                                       // 0x07C8(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        OriginalPostProcessSettings;                              // 0x07D0(0x0500) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    OriginalCamRotation;                                      // 0x0CD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OriginalCamTransform;                                     // 0x0CDC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedFacePaintRow;                                     // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonGender                                      GenderId;                                                 // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0CF1(0x0007) MISSED OFFSET
	class AArchonInventory*                            Inventory;                                                // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AArchonLoadout*                              LOADOUT;                                                  // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraRight;                                              // 0x0D08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ArrivalCamera;                                            // 0x0D14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               RootCamActive;                                            // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UI_paperdoll_bp.UI_paperdoll_bp_C");
		return ptr;
	}


	void GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner);
	void HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success);
	void SetBillboard_TargetBasedOnLevel();
	void Get_Equipped_Lantern(class FString* ItemID, class FString* ItemInstanceId);
	void Get_Equipped_Weapon(class FString* ItemID, class FString* ItemInstanceId);
	void Get_Equipped_Legs(class FString* ItemID, class FString* ItemInstanceId);
	void Get_Equipped_Arms(class FString* ItemID, class FString* ItemInstanceId);
	void Get_Equipped_Chest(class FString* ItemID, class FString* ItemInstanceId);
	void Get_Equipped_Helmet(class FString* ItemID, class FString* ItemInstanceId);
	void SetCameraLocationFunction(TEnumAsByte<Epaperdoll_camera_location> Location);
	void SetSkinHiding(const class FString& ItemID, class UTexture2D* CutMask);
	struct FVector CameraAspectOffset(const struct FVector& A);
	void ForceHelmHidden();
	void SetDyes(class UObject* InputPin, struct FDyeVariant* ArmourDyeVariant, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Array);
	void SetDye___CUSTOMIZED(const struct FName& DyeRowName, TEnumAsByte<EUI_RowType> DyeRow, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Array);
	void Set_Dye___DEFAULT(class UObject* DefaultObjectBP, TEnumAsByte<EUI_RowType> DyeRow, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialArray);
	void SetHairAndEyesAndSkin();
	void SetFace(bool UpdateSkinAndArmor);
	void SetBodyType(bool UpdateSkinAndArmor);
	void SpawnBanner();
	void ResetBannerPlantingMode();
	void SetupBannerPlantingPreviewMode();
	void WeaponUpdate(EWeaponType Selection);
	void GetDyeConfig_FromInventory_viaInstanceId(const class FString& InstanceId, const class FString& DefaultsItemID);
	void ResetIdleStateMachine();
	void SetTriSectionHighlights(float Left, float Right, float Down);
	void SetupSkin_Appearance(TArray<struct FAppearanceStringData>* InputPin);
	void SetMorphs(class USkeletalMeshComponent* SelectedMeshComponent, struct FArchonMeshAppearanceData* ArchonMeshAppearanceData);
	void SetupDynamicUI_MaterialReferences();
	void ResetAnimationIdle();
	void PlayEmoteAnimation(class UAnimationAsset* NewAnimToPlay, bool Loop_);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF(class UObject* Loaded);
	void OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA(class UObject* Loaded);
	void OnLoaded_292D503843FC19A7C7D6F690D65B15D5(class UObject* Loaded);
	void OnLoaded_80A00ED34BED1658D7B9C0813DF7210F(class UObject* Loaded);
	void OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F(class UObject* Loaded);
	void OnLoaded_58D83B764B2C1B0F753F828B3CA9F019(class UObject* Loaded);
	void OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E(class UObject* Loaded);
	void OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE(class UObject* Loaded);
	void OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5(class UObject* Loaded);
	void OnLoaded_001B4BB4401E4BB458A57CA169AAF77D(class UObject* Loaded);
	void OnLoaded_15667D18465264D6A50313A8DB9D9FB5(class UObject* Loaded);
	void OnLoaded_2C58ACF449742CBA2804B0A05881BE6B(class UObject* Loaded);
	void OnLoaded_FB9230194302D43D036009B56A395E47(class UObject* Loaded);
	void OnLoaded_8F7955394E4545204238249F3C78C999(class UObject* Loaded);
	void OnLoaded_96016E024DF049511E7259B324C7CC2A(class UObject* Loaded);
	void OnLoaded_B176CECD49B41E171512B783BF325D69(class UObject* Loaded);
	void Animate_TriSection_LEFT();
	void Animate_TriSection_DOWN();
	void Animate_TriSection_RIGHT();
	void Animate_TriSection_Right_to_Centered();
	void Animate_TriSection_Down_to_Centered();
	void Animate_TriSection_Left_to_Main();
	void SetCameraFace();
	void SetCameraEyes();
	void SetCameraCCBody();
	void SetCamera_AdvancedMenu(const struct FVector& CameraOffset, const struct FRotator& NewRotation);
	void ResetCameratoOriginal();
	void UpdatePaperdollMesh_Weapon(const class FString& ItemID, bool UpdateEquipped_);
	void UpdatePaperdollMesh_Legs(const class FString& ItemID, const class FString& InstanceId);
	void UpdatePaperdollMesh_Helm(const class FString& ItemID, const class FString& InstanceId);
	void UpdatePaperdollMesh_Lantern(const class FString& ItemID);
	void UpdatePaperdollMesh_Chest(const class FString& ItemID, const class FString& InstanceId);
	void UpdatePaperdollMesh_Arms(const class FString& ItemID, const class FString& InstanceId);
	void UpdatePaperdoll_FromMenu(const class FString& ItemID, EItemGroupType Type, const class FString& InstanceId);
	void RefreshAllDyes();
	void Refresh_Dye_Part(const struct FDyeVariant& NewDyeConfig, EArmorType ArmourType, const class FString& ItemID_ForDefaultStuff_);
	void UpdatePaperdoll_Transmog(const class FString& ItemInstanceId, const class FString& TransmogId);
	void ReceiveBeginPlay();
	void PlayEmote(const class FString& NewAnimToPlay);
	void ResetEmote();
	void SetupHair();
	void Hover_LEFT_LoadoutWeapons();
	void Hover_RIGHT_LoadoutArmour();
	void Hover_DOWN_LoadoutConsumables();
	void Turn_Off_HOVER_LIGHTS();
	void SetupTriHighlight_Material();
	void SetUI_WeaponPose(EWeaponType Selection);
	void SetUI_ArmourPose(TEnumAsByte<Earmor_slot_enum> NewParam);
	void RefreshAllArmour();
	void Set_FadeIn_of_All_Players();
	void Play_Arrival(const class FString& ItemID);
	void ShowEquippedWeapon();
	void HideWeapon();
	void BannerEmote(const class FString& BannerEmoteID);
	void InstantFadeOutPlayers();
	void InstantFadeInPlayers();
	void SetFacialHair();
	void ShowFlare();
	void UpdateFlare();
	void ExecuteUbergraph_UI_paperdoll_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
