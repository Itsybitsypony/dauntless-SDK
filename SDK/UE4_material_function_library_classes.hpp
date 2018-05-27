#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_material_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass material_function_library.material_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Umaterial_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass material_function_library.material_function_library_C");
		return ptr;
	}


	void STATIC_ApplyMaterialsToMeshesInOrder(class UObject* __WorldContext, TArray<class USkeletalMeshComponent*>* Meshes, TArray<class UMaterialInterface*>* Materials);
	void STATIC_ReplaceAndReturnAllMeshMaterials(class AActor* Actor, class UMaterialInterface* NewMaterial, bool Armour, bool Weapon, bool Body, class UObject* __WorldContext, TArray<class USkeletalMeshComponent*>* MeshComponents, TArray<class UMaterialInterface*>* Materials);
	void STATIC_GetArmourTypeFromSkeletalMesh(class USkeletalMesh* Skeletal_Mesh, class UObject* __WorldContext, EArmorType* Armour_Type);
	void STATIC_HideSkinUnderArmourBase(class UTexture2D* CutMask, EArmorType ArmourType, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats);
	void STATIC_MorphableBeard(class USkinnedMeshComponent* beard_component, class UObject* __WorldContext, bool* is_morphable);
	void STATIC_QueryBeardVisibleWithHelm(const class FString& Helm_Display_Name, class UObject* __WorldContext, bool* IsVisible, bool* hasChinstrap, class FString* Passthrough_Name);
	void STATIC_ResetBeardHelmMorphs(class USkeletalMeshComponent* skel_mesh_comp, class UObject* __WorldContext);
	void STATIC_GetArmourCutMaskFromItemID(const class FString& ItemID, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* cutmaskID);
	void STATIC_SetHelmetVisibility(EArmorType Armour_Type, const TScriptInterface<class Uplayer_interface_C>& player_interface, class UTexture2D* CutMask, class Aarmour_part_base_bp_C* Armour_Part, bool isPaperDoll, class UObject* __WorldContext);
	void STATIC_GetArmourCutMaskFromSkeletalMesh(class USkeletalMesh* SkeletalMesh, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* CutMaskAssetID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
