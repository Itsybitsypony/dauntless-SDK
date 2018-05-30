// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_material_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function material_function_library.material_function_library_C.ApplyMaterialsToMeshesInOrder
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*> Meshes                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInterface*> Materials                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umaterial_function_library_C::STATIC_ApplyMaterialsToMeshesInOrder(class UObject* __WorldContext, TArray<class USkeletalMeshComponent*>* Meshes, TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.ApplyMaterialsToMeshesInOrder");

	Umaterial_function_library_C_ApplyMaterialsToMeshesInOrder_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function material_function_library.material_function_library_C.ReplaceAndReturnAllMeshMaterials
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      NewMaterial                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Armour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Body                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USkeletalMeshComponent*> MeshComponents                 (Parm, OutParm, ZeroConstructor)
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)

void Umaterial_function_library_C::STATIC_ReplaceAndReturnAllMeshMaterials(class AActor* Actor, class UMaterialInterface* NewMaterial, bool Armour, bool Weapon, bool Body, class UObject* __WorldContext, TArray<class USkeletalMeshComponent*>* MeshComponents, TArray<class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.ReplaceAndReturnAllMeshMaterials");

	Umaterial_function_library_C_ReplaceAndReturnAllMeshMaterials_Params params;
	params.Actor = Actor;
	params.NewMaterial = NewMaterial;
	params.Armour = Armour;
	params.Weapon = Weapon;
	params.Body = Body;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MeshComponents != nullptr)
		*MeshComponents = params.MeshComponents;
	if (Materials != nullptr)
		*Materials = params.Materials;
}


// Function material_function_library.material_function_library_C.GetArmourTypeFromSkeletalMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           Skeletal_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     armour_type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umaterial_function_library_C::STATIC_GetArmourTypeFromSkeletalMesh(class USkeletalMesh* Skeletal_Mesh, class UObject* __WorldContext, EArmorType* armour_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.GetArmourTypeFromSkeletalMesh");

	Umaterial_function_library_C_GetArmourTypeFromSkeletalMesh_Params params;
	params.Skeletal_Mesh = Skeletal_Mesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (armour_type != nullptr)
		*armour_type = params.armour_type;
}


// Function material_function_library.material_function_library_C.HideSkinUnderArmourBase
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> SkinDynamicMats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umaterial_function_library_C::STATIC_HideSkinUnderArmourBase(class UTexture2D* CutMask, EArmorType ArmourType, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.HideSkinUnderArmourBase");

	Umaterial_function_library_C_HideSkinUnderArmourBase_Params params;
	params.CutMask = CutMask;
	params.ArmourType = ArmourType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinDynamicMats != nullptr)
		*SkinDynamicMats = params.SkinDynamicMats;
}


// Function material_function_library.material_function_library_C.MorphableBeard
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*   beard_component                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           is_morphable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umaterial_function_library_C::STATIC_MorphableBeard(class USkinnedMeshComponent* beard_component, class UObject* __WorldContext, bool* is_morphable)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.MorphableBeard");

	Umaterial_function_library_C_MorphableBeard_Params params;
	params.beard_component = beard_component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (is_morphable != nullptr)
		*is_morphable = params.is_morphable;
}


// Function material_function_library.material_function_library_C.QueryBeardVisibleWithHelm
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Helm_Display_Name              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           hasChinstrap                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Passthrough_Name               (Parm, OutParm, ZeroConstructor)

void Umaterial_function_library_C::STATIC_QueryBeardVisibleWithHelm(const class FString& Helm_Display_Name, class UObject* __WorldContext, bool* IsVisible, bool* hasChinstrap, class FString* Passthrough_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.QueryBeardVisibleWithHelm");

	Umaterial_function_library_C_QueryBeardVisibleWithHelm_Params params;
	params.Helm_Display_Name = Helm_Display_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
	if (hasChinstrap != nullptr)
		*hasChinstrap = params.hasChinstrap;
	if (Passthrough_Name != nullptr)
		*Passthrough_Name = params.Passthrough_Name;
}


// Function material_function_library.material_function_library_C.ResetBeardHelmMorphs
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  skel_mesh_comp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umaterial_function_library_C::STATIC_ResetBeardHelmMorphs(class USkeletalMeshComponent* skel_mesh_comp, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.ResetBeardHelmMorphs");

	Umaterial_function_library_C_ResetBeardHelmMorphs_Params params;
	params.skel_mesh_comp = skel_mesh_comp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function material_function_library.material_function_library_C.GetArmourCutMaskFromItemID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    cutmaskID                      (Parm, OutParm)

void Umaterial_function_library_C::STATIC_GetArmourCutMaskFromItemID(const class FString& ItemID, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* cutmaskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.GetArmourCutMaskFromItemID");

	Umaterial_function_library_C_GetArmourCutMaskFromItemID_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (cutmaskID != nullptr)
		*cutmaskID = params.cutmaskID;
}


// Function material_function_library.material_function_library_C.SetHelmetVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArmorType                     armour_type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class Uplayer_interface_C> player_interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aarmour_part_base_bp_C*  Armour_Part                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isPaperDoll                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umaterial_function_library_C::STATIC_SetHelmetVisibility(EArmorType armour_type, const TScriptInterface<class Uplayer_interface_C>& player_interface, class UTexture2D* CutMask, class Aarmour_part_base_bp_C* Armour_Part, bool isPaperDoll, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.SetHelmetVisibility");

	Umaterial_function_library_C_SetHelmetVisibility_Params params;
	params.armour_type = armour_type;
	params.player_interface = player_interface;
	params.CutMask = CutMask;
	params.Armour_Part = Armour_Part;
	params.isPaperDoll = isPaperDoll;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function material_function_library.material_function_library_C.GetArmourCutMaskFromSkeletalMesh
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    CutMaskAssetID                 (Parm, OutParm)

void Umaterial_function_library_C::STATIC_GetArmourCutMaskFromSkeletalMesh(class USkeletalMesh* SkeletalMesh, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* CutMaskAssetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function material_function_library.material_function_library_C.GetArmourCutMaskFromSkeletalMesh");

	Umaterial_function_library_C_GetArmourCutMaskFromSkeletalMesh_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CutMaskAssetID != nullptr)
		*CutMaskAssetID = params.CutMaskAssetID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
