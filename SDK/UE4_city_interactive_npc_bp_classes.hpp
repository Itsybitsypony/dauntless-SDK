#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_interactive_npc_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass city_interactive_npc_bp.city_interactive_npc_bp_C
// 0x015F (0x0589 - 0x042A)
class Acity_interactive_npc_bp_C : public Aumg_spawn_interaction_bp_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class Ubase_vo_mouth_component_C*                  base_vo_mouth_component;                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Beard;                                                    // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Collider;                                                 // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      hair;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Head;                                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Arms;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Legs;                                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Chest;                                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonSpeakerComponent*                     SpeakerSettings;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Arms_PrimaryColor;                                  // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Arms_SecondaryColor;                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Chest_PrimaryColor;                                 // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Chest_SecondaryColor;                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Legs_PrimaryColor;                                  // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Armor_Legs_SecondaryColor;                                // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               ChestArmor;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ArmsArmor;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LegsArmsArmor;                                            // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Armour_Arms_PrimarySurface;                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Armour_Arms_SecondarySurface;                             // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Armour_Chest_PrimarySurface;                              // 0x04CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Armour_Chest_SecondarySurface;                            // 0x04CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Armour_Legs_PrimarySurface;                               // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Armour_Legs_SecondarySurface;                             // 0x04CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04CE(0x0002) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicSkinMaterials;                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Enpc_facemorph_enum>                   FaceMorphPresets;                                         // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	struct FLinearColor                                SkinColour;                                               // 0x04E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EyeColourInner;                                           // 0x04F4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EyeColourOuter;                                           // 0x0504(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HairColour;                                               // 0x0514(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BrowColour;                                               // 0x0524(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	TArray<struct Fmorphtargetname_value_struct>       HeadMorphArray;                                           // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                BeardColour;                                              // 0x0548(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UTexture2D*                                  chest_cutmask_override;                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  legs_cutmask_override;                                    // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  arms_cutmask_override;                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  L_chest_cutmask;                                          // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  L_legs_cutmask;                                           // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  L_arms_cutmask;                                           // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideSkinMaterial;                                     // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass city_interactive_npc_bp.city_interactive_npc_bp_C");
		return ptr;
	}


	void HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success);
	void AssignVOTransforms();
	void SetupArmorComp(class USkeletalMeshComponent* Comp, int PrimaryColor, int SecondayColor, class USkeletalMesh* Mesh, EArmourDyeSurfaceType PrimarySurface, EArmourDyeSurfaceType SecondarySurface);
	void RaiseInteractWith(class APawn* Interactor);
	void UserConstructionScript();
	void OnLoaded_338B341548E4EFB371B643836CD5FF90(class UObject* Loaded);
	void OnLoaded_13D0691D4BF6C34E870C3789A1CECC55(class UObject* Loaded);
	void OnLoaded_B107CEF64B271B0AE82DABB505693B74(class UObject* Loaded);
	void OnUserCompletedInteraction(class UArchonInteractionUserComponent** User);
	void ReceiveBeginPlay();
	void Set_Face_Customization();
	void ExecuteUbergraph_city_interactive_npc_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
