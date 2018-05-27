#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_player_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cine_player_bp.cine_player_bp_C
// 0x0178 (0x0B88 - 0x0A10)
class Acine_player_bp_C : public AArchonCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                mouth_ak_speaker;                                         // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      lantern_mesh;                                             // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            cblades_r_spline_chain;                                   // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            cblades_l_spline_chain;                                   // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      hammer_clip;                                              // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      hair;                                                     // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Skin;                                                     // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      weapon_mesh;                                              // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Helm;                                                     // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Chest;                                                    // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Legs;                                                     // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Arms;                                                     // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              phys_blend_timeline_phys_blend_alpha_712C18184B79E946CC2BEF9DFBE1ED71;// 0x0A78(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    phys_blend_timeline__Direction_712C18184B79E946CC2BEF9DFBE1ED71;// 0x0A7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          phys_blend_timeline;                                      // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChestPrimaryDye;                                          // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChestSecondaryDye;                                        // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmPrimaryDye;                                           // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmSecondaryDye;                                         // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmsSecondaryDye;                                         // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmsPrimaryDye;                                           // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LegsPrimaryDye;                                           // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LegsSecondaryDye;                                         // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Head_Morph_Name;                                          // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Skin_Value;                                               // 0x0AC0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class USkeletalMesh*                               HeadMesh;                                                 // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkinMesh;                                                 // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HairMesh;                                                 // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Chest_Mesh;                                               // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HelmMesh;                                                 // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LegsMesh;                                                 // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ArmsMesh;                                                 // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               WeaponMesh;                                               // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HammerClipMesh;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LanternMesh;                                              // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LightChannel1;                                            // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LightChannel2;                                            // 0x0B21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LightChannel3;                                            // 0x0B22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_Ikinema;                                           // 0x0B23(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	class UStaticMesh*                                 ChainMesh;                                                // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                RSplineMeshComponents;                                    // 0x0B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USplineMeshComponent*>                LSplineMeshComponents;                                    // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USplineComponent*                            LSpline;                                                  // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  chest_cutmask;                                            // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  legs_cutmask;                                             // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  arms_cutmask;                                             // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  helm_cutmask;                                             // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicHeadMaterials;                                     // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cine_player_bp.cine_player_bp_C");
		return ptr;
	}


	void HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success);
	void UpdateChains(class USplineComponent* Spline, TArray<class USplineMeshComponent*>* SplineCOmponenentArray);
	void UserConstructionScript();
	void phys_blend_timeline__FinishedFunc();
	void phys_blend_timeline__UpdateFunc();
	void OnCinematicStart();
	void OnCinematicEnd();
	void ReInitPhysics_blend();
	void DisableDynamics_blend();
	void ReinitPhysics_tempered_blend();
	void Disable_Bangs();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Set_Morph_Target();
	void ReInitPhysics();
	void DisableDynamics();
	void ExecuteUbergraph_cine_player_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
