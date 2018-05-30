#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_material_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function material_function_library.material_function_library_C.ApplyMaterialsToMeshesInOrder
struct Umaterial_function_library_C_ApplyMaterialsToMeshesInOrder_Params
{
	TArray<class USkeletalMeshComponent*>              Meshes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInterface*>                  Materials;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function material_function_library.material_function_library_C.ReplaceAndReturnAllMeshMaterials
struct Umaterial_function_library_C_ReplaceAndReturnAllMeshMaterials_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewMaterial;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Armour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              MeshComponents;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function material_function_library.material_function_library_C.GetArmourTypeFromSkeletalMesh
struct Umaterial_function_library_C_GetArmourTypeFromSkeletalMesh_Params
{
	class USkeletalMesh*                               Skeletal_Mesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         armour_type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function material_function_library.material_function_library_C.HideSkinUnderArmourBase
struct Umaterial_function_library_C_HideSkinUnderArmourBase_Params
{
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function material_function_library.material_function_library_C.MorphableBeard
struct Umaterial_function_library_C_MorphableBeard_Params
{
	class USkinnedMeshComponent*                       beard_component;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               is_morphable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function material_function_library.material_function_library_C.QueryBeardVisibleWithHelm
struct Umaterial_function_library_C_QueryBeardVisibleWithHelm_Params
{
	class FString                                      Helm_Display_Name;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               hasChinstrap;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      Passthrough_Name;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function material_function_library.material_function_library_C.ResetBeardHelmMorphs
struct Umaterial_function_library_C_ResetBeardHelmMorphs_Params
{
	class USkeletalMeshComponent*                      skel_mesh_comp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function material_function_library.material_function_library_C.GetArmourCutMaskFromItemID
struct Umaterial_function_library_C_GetArmourCutMaskFromItemID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        cutmaskID;                                                // (Parm, OutParm)
};

// Function material_function_library.material_function_library_C.SetHelmetVisibility
struct Umaterial_function_library_C_SetHelmetVisibility_Params
{
	EArmorType                                         armour_type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class Uplayer_interface_C>        player_interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aarmour_part_base_bp_C*                      Armour_Part;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isPaperDoll;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function material_function_library.material_function_library_C.GetArmourCutMaskFromSkeletalMesh
struct Umaterial_function_library_C_GetArmourCutMaskFromSkeletalMesh_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        CutMaskAssetID;                                           // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
