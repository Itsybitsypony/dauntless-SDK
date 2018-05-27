// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UI_paperdoll_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.GetMorphTargetDriver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MorphTargetOwner               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  AnimInstanceOwner              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.GetMorphTargetDriver");

	AUI_paperdoll_bp_C_GetMorphTargetDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MorphTargetOwner != nullptr)
		*MorphTargetOwner = params.MorphTargetOwner;
	if (AnimInstanceOwner != nullptr)
		*AnimInstanceOwner = params.AnimInstanceOwner;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.HideSkinUnderArmor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> SkinDynamicMats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aarmour_part_base_bp_C*  ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkinMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.HideSkinUnderArmor");

	AUI_paperdoll_bp_C_HideSkinUnderArmor_Params params;
	params.CutMask = CutMask;
	params.ArmourType = ArmourType;
	params.ArmourPart = ArmourPart;
	params.SkinMesh = SkinMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinDynamicMats != nullptr)
		*SkinDynamicMats = params.SkinDynamicMats;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetBillboard_TargetBasedOnLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetBillboard_TargetBasedOnLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetBillboard_TargetBasedOnLevel");

	AUI_paperdoll_bp_C_SetBillboard_TargetBasedOnLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Lantern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void AUI_paperdoll_bp_C::Get_Equipped_Lantern(class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Lantern");

	AUI_paperdoll_bp_C_Get_Equipped_Lantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Weapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void AUI_paperdoll_bp_C::Get_Equipped_Weapon(class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Weapon");

	AUI_paperdoll_bp_C_Get_Equipped_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Legs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void AUI_paperdoll_bp_C::Get_Equipped_Legs(class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Legs");

	AUI_paperdoll_bp_C_Get_Equipped_Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Arms
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void AUI_paperdoll_bp_C::Get_Equipped_Arms(class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Arms");

	AUI_paperdoll_bp_C_Get_Equipped_Arms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Chest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void AUI_paperdoll_bp_C::Get_Equipped_Chest(class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Chest");

	AUI_paperdoll_bp_C_Get_Equipped_Chest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Helmet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void AUI_paperdoll_bp_C::Get_Equipped_Helmet(class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Helmet");

	AUI_paperdoll_bp_C_Get_Equipped_Helmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraLocationFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Epaperdoll_camera_location> Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetCameraLocationFunction(TEnumAsByte<Epaperdoll_camera_location> Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraLocationFunction");

	AUI_paperdoll_bp_C_SetCameraLocationFunction_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetSkinHiding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetSkinHiding(const class FString& ItemID, class UTexture2D* CutMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetSkinHiding");

	AUI_paperdoll_bp_C_SetSkinHiding_Params params;
	params.ItemID = ItemID;
	params.CutMask = CutMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.CameraAspectOffset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AUI_paperdoll_bp_C::CameraAspectOffset(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.CameraAspectOffset");

	AUI_paperdoll_bp_C_CameraAspectOffset_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ForceHelmHidden
// (Public, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ForceHelmHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ForceHelmHidden");

	AUI_paperdoll_bp_C_ForceHelmHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetDyes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             ArmourDyeVariant               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Dynamic_Material_Array         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUI_paperdoll_bp_C::SetDyes(class UObject* InputPin, struct FDyeVariant* ArmourDyeVariant, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetDyes");

	AUI_paperdoll_bp_C_SetDyes_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArmourDyeVariant != nullptr)
		*ArmourDyeVariant = params.ArmourDyeVariant;
	if (Dynamic_Material_Array != nullptr)
		*Dynamic_Material_Array = params.Dynamic_Material_Array;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetDye - CUSTOMIZED
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Dynamic_Material_Array         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EUI_RowType>       DyeRow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetDye___CUSTOMIZED(const struct FName& DyeRowName, TEnumAsByte<EUI_RowType> DyeRow, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetDye - CUSTOMIZED");

	AUI_paperdoll_bp_C_SetDye___CUSTOMIZED_Params params;
	params.DyeRowName = DyeRowName;
	params.DyeRow = DyeRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Material_Array != nullptr)
		*Dynamic_Material_Array = params.Dynamic_Material_Array;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Set Dye - DEFAULT
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DynamicMaterialArray           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 DefaultObjectBP                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUI_RowType>       DyeRow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::Set_Dye___DEFAULT(class UObject* DefaultObjectBP, TEnumAsByte<EUI_RowType> DyeRow, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Set Dye - DEFAULT");

	AUI_paperdoll_bp_C_Set_Dye___DEFAULT_Params params;
	params.DefaultObjectBP = DefaultObjectBP;
	params.DyeRow = DyeRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterialArray != nullptr)
		*DynamicMaterialArray = params.DynamicMaterialArray;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetHairAndEyesAndSkin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetHairAndEyesAndSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetHairAndEyesAndSkin");

	AUI_paperdoll_bp_C_SetHairAndEyesAndSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetFace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpdateSkinAndArmor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetFace(bool UpdateSkinAndArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetFace");

	AUI_paperdoll_bp_C_SetFace_Params params;
	params.UpdateSkinAndArmor = UpdateSkinAndArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetBodyType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpdateSkinAndArmor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetBodyType(bool UpdateSkinAndArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetBodyType");

	AUI_paperdoll_bp_C_SetBodyType_Params params;
	params.UpdateSkinAndArmor = UpdateSkinAndArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SpawnBanner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SpawnBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SpawnBanner");

	AUI_paperdoll_bp_C_SpawnBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetBannerPlantingMode
// (Public, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ResetBannerPlantingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetBannerPlantingMode");

	AUI_paperdoll_bp_C_ResetBannerPlantingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupBannerPlantingPreviewMode
// (Public, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetupBannerPlantingPreviewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupBannerPlantingPreviewMode");

	AUI_paperdoll_bp_C_SetupBannerPlantingPreviewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.WeaponUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::WeaponUpdate(EWeaponType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.WeaponUpdate");

	AUI_paperdoll_bp_C_WeaponUpdate_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.GetDyeConfig_FromInventory_viaInstanceId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  DefaultsItemID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::GetDyeConfig_FromInventory_viaInstanceId(const class FString& InstanceId, const class FString& DefaultsItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.GetDyeConfig_FromInventory_viaInstanceId");

	AUI_paperdoll_bp_C_GetDyeConfig_FromInventory_viaInstanceId_Params params;
	params.InstanceId = InstanceId;
	params.DefaultsItemID = DefaultsItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetIdleStateMachine
// (Public, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ResetIdleStateMachine()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetIdleStateMachine");

	AUI_paperdoll_bp_C_ResetIdleStateMachine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetTriSectionHighlights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Down                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetTriSectionHighlights(float Left, float Right, float Down)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetTriSectionHighlights");

	AUI_paperdoll_bp_C_SetTriSectionHighlights_Params params;
	params.Left = Left;
	params.Right = Right;
	params.Down = Down;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupSkin&Appearance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AUI_paperdoll_bp_C::SetupSkin_Appearance(TArray<struct FAppearanceStringData>* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupSkin&Appearance");

	AUI_paperdoll_bp_C_SetupSkin_Appearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputPin != nullptr)
		*InputPin = params.InputPin;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetMorphs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonMeshAppearanceData ArchonMeshAppearanceData       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USkeletalMeshComponent*  SelectedMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetMorphs(class USkeletalMeshComponent* SelectedMeshComponent, struct FArchonMeshAppearanceData* ArchonMeshAppearanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetMorphs");

	AUI_paperdoll_bp_C_SetMorphs_Params params;
	params.SelectedMeshComponent = SelectedMeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchonMeshAppearanceData != nullptr)
		*ArchonMeshAppearanceData = params.ArchonMeshAppearanceData;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupDynamicUI_MaterialReferences
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetupDynamicUI_MaterialReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupDynamicUI_MaterialReferences");

	AUI_paperdoll_bp_C_SetupDynamicUI_MaterialReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetAnimationIdle
// (Public, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ResetAnimationIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetAnimationIdle");

	AUI_paperdoll_bp_C_ResetAnimationIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.PlayEmoteAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimationAsset*         NewAnimToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Loop_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::PlayEmoteAnimation(class UAnimationAsset* NewAnimToPlay, bool Loop_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.PlayEmoteAnimation");

	AUI_paperdoll_bp_C_PlayEmoteAnimation_Params params;
	params.NewAnimToPlay = NewAnimToPlay;
	params.Loop_ = Loop_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UserConstructionScript");

	AUI_paperdoll_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AUI_paperdoll_bp_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_0__FinishedFunc");

	AUI_paperdoll_bp_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AUI_paperdoll_bp_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_0__UpdateFunc");

	AUI_paperdoll_bp_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AUI_paperdoll_bp_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_1__FinishedFunc");

	AUI_paperdoll_bp_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AUI_paperdoll_bp_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_1__UpdateFunc");

	AUI_paperdoll_bp_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AUI_paperdoll_bp_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_2__FinishedFunc");

	AUI_paperdoll_bp_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AUI_paperdoll_bp_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_2__UpdateFunc");

	AUI_paperdoll_bp_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF");

	AUI_paperdoll_bp_C_OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA");

	AUI_paperdoll_bp_C_OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_292D503843FC19A7C7D6F690D65B15D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_292D503843FC19A7C7D6F690D65B15D5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_292D503843FC19A7C7D6F690D65B15D5");

	AUI_paperdoll_bp_C_OnLoaded_292D503843FC19A7C7D6F690D65B15D5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_80A00ED34BED1658D7B9C0813DF7210F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_80A00ED34BED1658D7B9C0813DF7210F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_80A00ED34BED1658D7B9C0813DF7210F");

	AUI_paperdoll_bp_C_OnLoaded_80A00ED34BED1658D7B9C0813DF7210F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F");

	AUI_paperdoll_bp_C_OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_58D83B764B2C1B0F753F828B3CA9F019
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_58D83B764B2C1B0F753F828B3CA9F019(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_58D83B764B2C1B0F753F828B3CA9F019");

	AUI_paperdoll_bp_C_OnLoaded_58D83B764B2C1B0F753F828B3CA9F019_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E");

	AUI_paperdoll_bp_C_OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE");

	AUI_paperdoll_bp_C_OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5");

	AUI_paperdoll_bp_C_OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_001B4BB4401E4BB458A57CA169AAF77D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_001B4BB4401E4BB458A57CA169AAF77D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_001B4BB4401E4BB458A57CA169AAF77D");

	AUI_paperdoll_bp_C_OnLoaded_001B4BB4401E4BB458A57CA169AAF77D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_15667D18465264D6A50313A8DB9D9FB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_15667D18465264D6A50313A8DB9D9FB5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_15667D18465264D6A50313A8DB9D9FB5");

	AUI_paperdoll_bp_C_OnLoaded_15667D18465264D6A50313A8DB9D9FB5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_2C58ACF449742CBA2804B0A05881BE6B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_2C58ACF449742CBA2804B0A05881BE6B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_2C58ACF449742CBA2804B0A05881BE6B");

	AUI_paperdoll_bp_C_OnLoaded_2C58ACF449742CBA2804B0A05881BE6B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_FB9230194302D43D036009B56A395E47
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_FB9230194302D43D036009B56A395E47(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_FB9230194302D43D036009B56A395E47");

	AUI_paperdoll_bp_C_OnLoaded_FB9230194302D43D036009B56A395E47_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_8F7955394E4545204238249F3C78C999
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_8F7955394E4545204238249F3C78C999(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_8F7955394E4545204238249F3C78C999");

	AUI_paperdoll_bp_C_OnLoaded_8F7955394E4545204238249F3C78C999_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_96016E024DF049511E7259B324C7CC2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_96016E024DF049511E7259B324C7CC2A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_96016E024DF049511E7259B324C7CC2A");

	AUI_paperdoll_bp_C_OnLoaded_96016E024DF049511E7259B324C7CC2A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_B176CECD49B41E171512B783BF325D69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::OnLoaded_B176CECD49B41E171512B783BF325D69(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_B176CECD49B41E171512B783BF325D69");

	AUI_paperdoll_bp_C_OnLoaded_B176CECD49B41E171512B783BF325D69_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_LEFT
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Animate_TriSection_LEFT()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_LEFT");

	AUI_paperdoll_bp_C_Animate_TriSection_LEFT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_DOWN
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Animate_TriSection_DOWN()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_DOWN");

	AUI_paperdoll_bp_C_Animate_TriSection_DOWN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_RIGHT
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Animate_TriSection_RIGHT()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_RIGHT");

	AUI_paperdoll_bp_C_Animate_TriSection_RIGHT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Right_to_Centered
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Animate_TriSection_Right_to_Centered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Right_to_Centered");

	AUI_paperdoll_bp_C_Animate_TriSection_Right_to_Centered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Down_to_Centered
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Animate_TriSection_Down_to_Centered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Down_to_Centered");

	AUI_paperdoll_bp_C_Animate_TriSection_Down_to_Centered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Left_to_Main
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Animate_TriSection_Left_to_Main()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Left_to_Main");

	AUI_paperdoll_bp_C_Animate_TriSection_Left_to_Main_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraFace
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetCameraFace()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraFace");

	AUI_paperdoll_bp_C_SetCameraFace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraEyes
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetCameraEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraEyes");

	AUI_paperdoll_bp_C_SetCameraEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraCCBody
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetCameraCCBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraCCBody");

	AUI_paperdoll_bp_C_SetCameraCCBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCamera_AdvancedMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AUI_paperdoll_bp_C::SetCamera_AdvancedMenu(const struct FVector& CameraOffset, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCamera_AdvancedMenu");

	AUI_paperdoll_bp_C_SetCamera_AdvancedMenu_Params params;
	params.CameraOffset = CameraOffset;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetCameratoOriginal
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ResetCameratoOriginal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetCameratoOriginal");

	AUI_paperdoll_bp_C_ResetCameratoOriginal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Weapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           UpdateEquipped_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::UpdatePaperdollMesh_Weapon(const class FString& ItemID, bool UpdateEquipped_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Weapon");

	AUI_paperdoll_bp_C_UpdatePaperdollMesh_Weapon_Params params;
	params.ItemID = ItemID;
	params.UpdateEquipped_ = UpdateEquipped_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Legs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdollMesh_Legs(const class FString& ItemID, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Legs");

	AUI_paperdoll_bp_C_UpdatePaperdollMesh_Legs_Params params;
	params.ItemID = ItemID;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Helm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdollMesh_Helm(const class FString& ItemID, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Helm");

	AUI_paperdoll_bp_C_UpdatePaperdollMesh_Helm_Params params;
	params.ItemID = ItemID;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Lantern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdollMesh_Lantern(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Lantern");

	AUI_paperdoll_bp_C_UpdatePaperdollMesh_Lantern_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Chest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdollMesh_Chest(const class FString& ItemID, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Chest");

	AUI_paperdoll_bp_C_UpdatePaperdollMesh_Chest_Params params;
	params.ItemID = ItemID;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Arms
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdollMesh_Arms(const class FString& ItemID, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Arms");

	AUI_paperdoll_bp_C_UpdatePaperdollMesh_Arms_Params params;
	params.ItemID = ItemID;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdoll_FromMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdoll_FromMenu(const class FString& ItemID, EItemGroupType Type, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdoll_FromMenu");

	AUI_paperdoll_bp_C_UpdatePaperdoll_FromMenu_Params params;
	params.ItemID = ItemID;
	params.Type = Type;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.RefreshAllDyes
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::RefreshAllDyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.RefreshAllDyes");

	AUI_paperdoll_bp_C_RefreshAllDyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Refresh Dye Part
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             NewDyeConfig                   (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID_ForDefaultStuff_        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::Refresh_Dye_Part(const struct FDyeVariant& NewDyeConfig, EArmorType ArmourType, const class FString& ItemID_ForDefaultStuff_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Refresh Dye Part");

	AUI_paperdoll_bp_C_Refresh_Dye_Part_Params params;
	params.NewDyeConfig = NewDyeConfig;
	params.ArmourType = ArmourType;
	params.ItemID_ForDefaultStuff_ = ItemID_ForDefaultStuff_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdoll_Transmog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::UpdatePaperdoll_Transmog(const class FString& ItemInstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdoll_Transmog");

	AUI_paperdoll_bp_C_UpdatePaperdoll_Transmog_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUI_paperdoll_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ReceiveBeginPlay");

	AUI_paperdoll_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.PlayEmote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewAnimToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::PlayEmote(const class FString& NewAnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.PlayEmote");

	AUI_paperdoll_bp_C_PlayEmote_Params params;
	params.NewAnimToPlay = NewAnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetEmote
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ResetEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetEmote");

	AUI_paperdoll_bp_C_ResetEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupHair
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetupHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupHair");

	AUI_paperdoll_bp_C_SetupHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_LEFT_LoadoutWeapons
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Hover_LEFT_LoadoutWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_LEFT_LoadoutWeapons");

	AUI_paperdoll_bp_C_Hover_LEFT_LoadoutWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_RIGHT_LoadoutArmour
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Hover_RIGHT_LoadoutArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_RIGHT_LoadoutArmour");

	AUI_paperdoll_bp_C_Hover_RIGHT_LoadoutArmour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_DOWN_LoadoutConsumables
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Hover_DOWN_LoadoutConsumables()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_DOWN_LoadoutConsumables");

	AUI_paperdoll_bp_C_Hover_DOWN_LoadoutConsumables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Turn Off HOVER LIGHTS
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Turn_Off_HOVER_LIGHTS()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Turn Off HOVER LIGHTS");

	AUI_paperdoll_bp_C_Turn_Off_HOVER_LIGHTS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupTriHighlight_Material
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetupTriHighlight_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupTriHighlight_Material");

	AUI_paperdoll_bp_C_SetupTriHighlight_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetUI_WeaponPose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetUI_WeaponPose(EWeaponType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetUI_WeaponPose");

	AUI_paperdoll_bp_C_SetUI_WeaponPose_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetUI_ArmourPose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::SetUI_ArmourPose(TEnumAsByte<Earmor_slot_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetUI_ArmourPose");

	AUI_paperdoll_bp_C_SetUI_ArmourPose_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.RefreshAllArmour
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::RefreshAllArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.RefreshAllArmour");

	AUI_paperdoll_bp_C_RefreshAllArmour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Set FadeIn of All Players
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::Set_FadeIn_of_All_Players()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Set FadeIn of All Players");

	AUI_paperdoll_bp_C_Set_FadeIn_of_All_Players_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Play Arrival
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::Play_Arrival(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.Play Arrival");

	AUI_paperdoll_bp_C_Play_Arrival_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ShowEquippedWeapon
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ShowEquippedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ShowEquippedWeapon");

	AUI_paperdoll_bp_C_ShowEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.HideWeapon
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.HideWeapon");

	AUI_paperdoll_bp_C_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.BannerEmote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  BannerEmoteID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AUI_paperdoll_bp_C::BannerEmote(const class FString& BannerEmoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.BannerEmote");

	AUI_paperdoll_bp_C_BannerEmote_Params params;
	params.BannerEmoteID = BannerEmoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.InstantFadeOutPlayers
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::InstantFadeOutPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.InstantFadeOutPlayers");

	AUI_paperdoll_bp_C_InstantFadeOutPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.InstantFadeInPlayers
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::InstantFadeInPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.InstantFadeInPlayers");

	AUI_paperdoll_bp_C_InstantFadeInPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetFacialHair
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::SetFacialHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetFacialHair");

	AUI_paperdoll_bp_C_SetFacialHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ShowFlare
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::ShowFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ShowFlare");

	AUI_paperdoll_bp_C_ShowFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdateFlare
// (BlueprintCallable, BlueprintEvent)

void AUI_paperdoll_bp_C::UpdateFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdateFlare");

	AUI_paperdoll_bp_C_UpdateFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ExecuteUbergraph_UI_paperdoll_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUI_paperdoll_bp_C::ExecuteUbergraph_UI_paperdoll_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_paperdoll_bp.UI_paperdoll_bp_C.ExecuteUbergraph_UI_paperdoll_bp");

	AUI_paperdoll_bp_C_ExecuteUbergraph_UI_paperdoll_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
