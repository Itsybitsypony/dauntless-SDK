// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PlayerCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMorphTargetDriver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MorphTargetOwner               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  AnimInstanceOwner              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMorphTargetDriver");

	ABP_PlayerCharacter_C_GetMorphTargetDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MorphTargetOwner != nullptr)
		*MorphTargetOwner = params.MorphTargetOwner;
	if (AnimInstanceOwner != nullptr)
		*AnimInstanceOwner = params.AnimInstanceOwner;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideSkinUnderArmor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> SkinDynamicMats                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTexture2D*              CutMask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aarmour_part_base_bp_C*  ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkinMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideSkinUnderArmor");

	ABP_PlayerCharacter_C_HideSkinUnderArmor_Params params;
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


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageRow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageRow                      (Parm, OutParm)
// float                          DamageScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetDamageRow(const struct FName& DamageKey, struct FDamageTableData* DamageRow, float* DamageScale, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageRow");

	ABP_PlayerCharacter_C_GetDamageRow_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRow != nullptr)
		*DamageRow = params.DamageRow;
	if (DamageScale != nullptr)
		*DamageScale = params.DamageScale;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplaySpawnPosPreCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 InitialStartPosition           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InitialTargetPosition          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewStartPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplaySpawnPosPreCalc");

	ABP_PlayerCharacter_C_ModifyEQSGameplaySpawnPosPreCalc_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;
	params.InitialStartPosition = InitialStartPosition;
	params.InitialTargetPosition = InitialTargetPosition;
	params.PossiblyNullTargetActor = PossiblyNullTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewStartPosition != nullptr)
		*NewStartPosition = params.NewStartPosition;
	if (ModifiedPosition != nullptr)
		*ModifiedPosition = params.ModifiedPosition;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplaySpawnPosPostCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 FinalTargetPosition            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PossiblyNullTargetActor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewPosition                    (Parm, OutParm, IsPlainOldData)
// bool                           ModifiedPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplaySpawnPosPostCalc");

	ABP_PlayerCharacter_C_ModifyEQSGameplaySpawnPosPostCalc_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;
	params.StartPosition = StartPosition;
	params.FinalTargetPosition = FinalTargetPosition;
	params.PossiblyNullTargetActor = PossiblyNullTargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPosition != nullptr)
		*NewPosition = params.NewPosition;
	if (ModifiedPosition != nullptr)
		*ModifiedPosition = params.ModifiedPosition;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplayData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Feqs_spawn_query        EQSSpawnQuery                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Feqs_spawn_query        NewEQSSpawnQuery               (Parm, OutParm)
// bool                           ModifiedData                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplayData");

	ABP_PlayerCharacter_C_ModifyEQSGameplayData_Params params;
	params.EQSSpawnQuery = EQSSpawnQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEQSSpawnQuery != nullptr)
		*NewEQSSpawnQuery = params.NewEQSSpawnQuery;
	if (ModifiedData != nullptr)
		*ModifiedData = params.ModifiedData;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanHitCBPushPullTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hits_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CanHitCBPushPullTarget(bool* Hits_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanHitCBPushPullTarget");

	ABP_PlayerCharacter_C_CanHitCBPushPullTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits_ != nullptr)
		*Hits_ = params.Hits_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDefaultElementalAttackType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   DefaultElementalAttackType     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDefaultElementalAttackType");

	ABP_PlayerCharacter_C_GetDefaultElementalAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultElementalAttackType != nullptr)
		*DefaultElementalAttackType = params.DefaultElementalAttackType;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtVector                   (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLookAtVector(struct FVector* LookAtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtVector");

	ABP_PlayerCharacter_C_GetLookAtVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtVector != nullptr)
		*LookAtVector = params.LookAtVector;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtAlpha");

	ABP_PlayerCharacter_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMesh");

	ABP_PlayerCharacter_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFallbackProjectileSpawnOffset");

	ABP_PlayerCharacter_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairColour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            hair_colour                    (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_C::GetHairColour(struct FLinearColor* hair_colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairColour");

	ABP_PlayerCharacter_C_GetHairColour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hair_colour != nullptr)
		*hair_colour = params.hair_colour;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::CanPerformEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformEmote");

	ABP_PlayerCharacter_C_CanPerformEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsLocalPlayerAudioEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsLocalPlayerAudioEnabled(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsLocalPlayerAudioEnabled");

	ABP_PlayerCharacter_C_GetIsLocalPlayerAudioEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetGenderIdentity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EArchonGender                  GenderId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetGenderIdentity(EArchonGender* GenderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetGenderIdentity");

	ABP_PlayerCharacter_C_GetGenderIdentity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenderId != nullptr)
		*GenderId = params.GenderId;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBodyMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::GetBodyMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBodyMaterials");

	ABP_PlayerCharacter_C_GetBodyMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::GetWeaponMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponMaterials");

	ABP_PlayerCharacter_C_GetWeaponMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxFallTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ResetMaxFallTimer(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxFallTimer");

	ABP_PlayerCharacter_C_ResetMaxFallTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsSprinting(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsSprinting");

	ABP_PlayerCharacter_C_GetIsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNumPlayersReviving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumPlayers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetNumPlayersReviving(int* NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNumPlayersReviving");

	ABP_PlayerCharacter_C_GetNumPlayersReviving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumPlayers != nullptr)
		*NumPlayers = params.NumPlayers;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsHelmVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsHelmVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsHelmVisible");

	ABP_PlayerCharacter_C_IsHelmVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFacialHairSlotComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Facial_Hair_Slot               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetFacialHairSlotComponent(class USkeletalMeshComponent** Facial_Hair_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFacialHairSlotComponent");

	ABP_PlayerCharacter_C_GetFacialHairSlotComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Facial_Hair_Slot != nullptr)
		*Facial_Hair_Slot = params.Facial_Hair_Slot;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponAbilityDamageRowOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WeaponAbilityDamageRowOverride (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetWeaponAbilityDamageRowOverride(struct FName* WeaponAbilityDamageRowOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponAbilityDamageRowOverride");

	ABP_PlayerCharacter_C_GetWeaponAbilityDamageRowOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponAbilityDamageRowOverride != nullptr)
		*WeaponAbilityDamageRowOverride = params.WeaponAbilityDamageRowOverride;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.isinlobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isinlobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::isinlobby(bool* isinlobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.isinlobby");

	ABP_PlayerCharacter_C_isinlobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isinlobby != nullptr)
		*isinlobby = params.isinlobby;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInCity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInCity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsInCity(bool* IsInCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInCity");

	ABP_PlayerCharacter_C_IsInCity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInCity != nullptr)
		*IsInCity = params.IsInCity;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastDamagedMonsterPart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMonsterPartComponent*   MonsterPart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLastDamagedMonsterPart(class UMonsterPartComponent** MonsterPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastDamagedMonsterPart");

	ABP_PlayerCharacter_C_GetLastDamagedMonsterPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MonsterPart != nullptr)
		*MonsterPart = params.MonsterPart;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastDamagedActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastDamagedActor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLastDamagedActor(class AActor** LastDamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastDamagedActor");

	ABP_PlayerCharacter_C_GetLastDamagedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastDamagedActor != nullptr)
		*LastDamagedActor = params.LastDamagedActor;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHelmHidingSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Helm_Hiding                    (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::GetHelmHidingSetting(class FString* Helm_Hiding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHelmHidingSetting");

	ABP_PlayerCharacter_C_GetHelmHidingSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Helm_Hiding != nullptr)
		*Helm_Hiding = params.Helm_Hiding;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSprintInputValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetSprintInputValue(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSprintInputValue");

	ABP_PlayerCharacter_C_GetSprintInputValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerStateMeetsRequirements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fplayer_requirements_str PlayerRequirements             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PassesRequirements             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::PlayerStateMeetsRequirements(const struct Fplayer_requirements_str& PlayerRequirements, bool* PassesRequirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerStateMeetsRequirements");

	ABP_PlayerCharacter_C_PlayerStateMeetsRequirements_Params params;
	params.PlayerRequirements = PlayerRequirements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassesRequirements != nullptr)
		*PassesRequirements = params.PassesRequirements;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPonytailComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  ponytail                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetPonytailComponent(class USkeletalMeshComponent** ponytail)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPonytailComponent");

	ABP_PlayerCharacter_C_GetPonytailComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ponytail != nullptr)
		*ponytail = params.ponytail;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsBannerEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsBannerEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsBannerEnabled");

	ABP_PlayerCharacter_C_IsBannerEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentAimDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 CurrentAimDirection            (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_C::GetCurrentAimDirection(struct FVector* CurrentAimDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentAimDirection");

	ABP_PlayerCharacter_C_GetCurrentAimDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAimDirection != nullptr)
		*CurrentAimDirection = params.CurrentAimDirection;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLoadout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLoadout*          LOADOUT                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLoadout(class AArchonLoadout** LOADOUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLoadout");

	ABP_PlayerCharacter_C_GetLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LOADOUT != nullptr)
		*LOADOUT = params.LOADOUT;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCinematicState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECinematicPlayerState> CinematicStte                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState, TEnumAsByte<ECinematicPlayerState>* CinematicStte)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCinematicState");

	ABP_PlayerCharacter_C_SetCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CinematicStte != nullptr)
		*CinematicStte = params.CinematicStte;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCinematicState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetCinematicState(TEnumAsByte<ECinematicPlayerState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCinematicState");

	ABP_PlayerCharacter_C_GetCinematicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCombatComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonCombatComponent*  CombatComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetCombatComponent(class UArchonCombatComponent** CombatComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCombatComponent");

	ABP_PlayerCharacter_C_GetCombatComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatComponent != nullptr)
		*CombatComponent = params.CombatComponent;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interacting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsInteracting(bool* Interacting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInteracting");

	ABP_PlayerCharacter_C_IsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interacting != nullptr)
		*Interacting = params.Interacting;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDynamicMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DynamicMaterials               (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::GetDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDynamicMaterials");

	ABP_PlayerCharacter_C_GetDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterials != nullptr)
		*DynamicMaterials = params.DynamicMaterials;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedoutLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetBleedoutLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedoutLevel");

	ABP_PlayerCharacter_C_GetBleedoutLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAbilitySystemComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetAbilitySystemComponent(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAbilitySystemComponent");

	ABP_PlayerCharacter_C_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbilitySystem != nullptr)
		*AbilitySystem = params.AbilitySystem;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCollisionWithDestructible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetCollisionWithDestructible(bool Enabled, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCollisionWithDestructible");

	ABP_PlayerCharacter_C_SetCollisionWithDestructible_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHeadSlotComponent 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Head_Slot_Component            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetHeadSlotComponent_(class USkeletalMeshComponent** Head_Slot_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHeadSlotComponent ");

	ABP_PlayerCharacter_C_GetHeadSlotComponent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Head_Slot_Component != nullptr)
		*Head_Slot_Component = params.Head_Slot_Component;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLantern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLantern*          Lantern                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLantern(class AArchonLantern** Lantern)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLantern");

	ABP_PlayerCharacter_C_GetLantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lantern != nullptr)
		*Lantern = params.Lantern;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBodyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetBodyType(EArchonBodyType* BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBodyType");

	ABP_PlayerCharacter_C_GetBodyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyType != nullptr)
		*BodyType = params.BodyType;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairSlotComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  HairSlotComponent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetHairSlotComponent(class USkeletalMeshComponent** HairSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairSlotComponent");

	ABP_PlayerCharacter_C_GetHairSlotComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HairSlotComponent != nullptr)
		*HairSlotComponent = params.HairSlotComponent;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetWeaponMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponMesh");

	ABP_PlayerCharacter_C_GetWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComp               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSkeletalMeshComponent");

	ABP_PlayerCharacter_C_GetSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMeshComp != nullptr)
		*SkeletalMeshComp = params.SkeletalMeshComp;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFollowCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        FollowCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetFollowCamera(class UCameraComponent** FollowCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFollowCamera");

	ABP_PlayerCharacter_C_GetFollowCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FollowCamera != nullptr)
		*FollowCamera = params.FollowCamera;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsDying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDying                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsDying(bool* IsDying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsDying");

	ABP_PlayerCharacter_C_GetIsDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDying != nullptr)
		*IsDying = params.IsDying;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedOutState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BleedOutState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetBleedOutState(bool* BleedOutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedOutState");

	ABP_PlayerCharacter_C_GetBleedOutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedOutState != nullptr)
		*BleedOutState = params.BleedOutState;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetCurrentHealth(float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentHealth");

	ABP_PlayerCharacter_C_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHealth != nullptr)
		*CurrentHealth = params.CurrentHealth;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetReviveHealthThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReviveHealthThreshold          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetReviveHealthThreshold(float* ReviveHealthThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetReviveHealthThreshold");

	ABP_PlayerCharacter_C_GetReviveHealthThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReviveHealthThreshold != nullptr)
		*ReviveHealthThreshold = params.ReviveHealthThreshold;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedOutTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            BleedOutTImer                  (Parm, OutParm)

void ABP_PlayerCharacter_C::GetBleedOutTimer(struct FTimerHandle* BleedOutTImer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedOutTimer");

	ABP_PlayerCharacter_C_GetBleedOutTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedOutTImer != nullptr)
		*BleedOutTImer = params.BleedOutTImer;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNamePlate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        Nameplate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetNamePlate(class UWidgetComponent** Nameplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNamePlate");

	ABP_PlayerCharacter_C_GetNamePlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nameplate != nullptr)
		*Nameplate = params.Nameplate;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GatherStringDataInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> AssetData                      (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::GatherStringDataInterface(TArray<struct FAppearanceStringData>* AssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GatherStringDataInterface");

	ABP_PlayerCharacter_C_GatherStringDataInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetData != nullptr)
		*AssetData = params.AssetData;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClientUsedGamePad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientUsedGamePad              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetClientUsedGamePad(bool* ClientUsedGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClientUsedGamePad");

	ABP_PlayerCharacter_C_GetClientUsedGamePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientUsedGamePad != nullptr)
		*ClientUsedGamePad = params.ClientUsedGamePad;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClientUsedMouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientUsedMouse                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetClientUsedMouse(bool* ClientUsedMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClientUsedMouse");

	ABP_PlayerCharacter_C_GetClientUsedMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientUsedMouse != nullptr)
		*ClientUsedMouse = params.ClientUsedMouse;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Health                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Current_Stamina                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetPlayerStats(float* Current_Health, float* Current_Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerStats");

	ABP_PlayerCharacter_C_GetPlayerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Health != nullptr)
		*Current_Health = params.Current_Health;
	if (Current_Stamina != nullptr)
		*Current_Stamina = params.Current_Stamina;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInCity-Deprecated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_In_City                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsInCity_Deprecated(bool* Is_In_City)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInCity-Deprecated");

	ABP_PlayerCharacter_C_GetIsInCity_Deprecated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_In_City != nullptr)
		*Is_In_City = params.Is_In_City;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsSheathed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Weapon_Sheathed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsSheathed(bool* Weapon_Sheathed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsSheathed");

	ABP_PlayerCharacter_C_GetIsSheathed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon_Sheathed != nullptr)
		*Weapon_Sheathed = params.Weapon_Sheathed;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInStaminaThresholdRecoveryPeriod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_in_stamina_threshold_recovery_period_ (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsInStaminaThresholdRecoveryPeriod(bool* Is_in_stamina_threshold_recovery_period_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInStaminaThresholdRecoveryPeriod");

	ABP_PlayerCharacter_C_GetIsInStaminaThresholdRecoveryPeriod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_in_stamina_threshold_recovery_period_ != nullptr)
		*Is_in_stamina_threshold_recovery_period_ = params.Is_in_stamina_threshold_recovery_period_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInSlowChargeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_slow_charging_              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsInSlowChargeState(bool* Is_slow_charging_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInSlowChargeState");

	ABP_PlayerCharacter_C_GetIsInSlowChargeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_slow_charging_ != nullptr)
		*Is_slow_charging_ = params.Is_slow_charging_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFalling
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Falling_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsFalling(bool* Is_Falling_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFalling");

	ABP_PlayerCharacter_C_GetIsFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Falling_ != nullptr)
		*Is_Falling_ = params.Is_Falling_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGameModeStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnGameModeStartEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGameModeStartEvent");

	ABP_PlayerCharacter_C_OnGameModeStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ConsumeStamina
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StaminaCost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RestrictedByStaminaAmount_     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ConsumeStamina(float StaminaCost, bool RestrictedByStaminaAmount_, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ConsumeStamina");

	ABP_PlayerCharacter_C_ConsumeStamina_Params params;
	params.StaminaCost = StaminaCost;
	params.RestrictedByStaminaAmount_ = RestrictedByStaminaAmount_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Jumping_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsJumping(bool* Is_Jumping_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsJumping");

	ABP_PlayerCharacter_C_GetIsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Jumping_ != nullptr)
		*Is_Jumping_ = params.Is_Jumping_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetOwnedWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonWeapon*           Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetOwnedWeapon(class AArchonWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetOwnedWeapon");

	ABP_PlayerCharacter_C_GetOwnedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanUseQuickSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanUseInBleedout               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CanUseQuickSlotItem(bool CanUseInBleedout, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanUseQuickSlotItem");

	ABP_PlayerCharacter_C_CanUseQuickSlotItem_Params params;
	params.CanUseInBleedout = CanUseInBleedout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInputActionKeyHeld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PrimaryAttackHeld              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SecondaryAttackHeld            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SpecialAttackHeld              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetInputActionKeyHeld(bool* PrimaryAttackHeld, bool* SecondaryAttackHeld, bool* SpecialAttackHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInputActionKeyHeld");

	ABP_PlayerCharacter_C_GetInputActionKeyHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryAttackHeld != nullptr)
		*PrimaryAttackHeld = params.PrimaryAttackHeld;
	if (SecondaryAttackHeld != nullptr)
		*SecondaryAttackHeld = params.SecondaryAttackHeld;
	if (SpecialAttackHeld != nullptr)
		*SpecialAttackHeld = params.SpecialAttackHeld;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDefaultWarpSmoothing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Smoothing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetDefaultWarpSmoothing(float* Smoothing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDefaultWarpSmoothing");

	ABP_PlayerCharacter_C_GetDefaultWarpSmoothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Smoothing != nullptr)
		*Smoothing = params.Smoothing;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CinematicState
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_CinematicState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CinematicState");

	ABP_PlayerCharacter_C_OnRep_CinematicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCombatAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateCombatAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCombatAudio");

	ABP_PlayerCharacter_C_UpdateCombatAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPreMitigateDamageBP
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamageGiver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   DamageEventTags                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bHasHitResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bOverrideDamageData            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OutDamageEventTags             (Parm, OutParm)
// struct FDamageEventData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDamageEventData ABP_PlayerCharacter_C::OnPreMitigateDamageBP(class AActor** DamageGiver, bool* bHasHitResult, struct FDamageEventData* DamageEventData, struct FGameplayTagContainer* DamageEventTags, struct FHitResult* HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPreMitigateDamageBP");

	ABP_PlayerCharacter_C_OnPreMitigateDamageBP_Params params;
	params.DamageGiver = DamageGiver;
	params.bHasHitResult = bHasHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEventData != nullptr)
		*DamageEventData = params.DamageEventData;
	if (DamageEventTags != nullptr)
		*DamageEventTags = params.DamageEventTags;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (bOverrideDamageData != nullptr)
		*bOverrideDamageData = params.bOverrideDamageData;
	if (OutDamageEventTags != nullptr)
		*OutDamageEventTags = params.OutDamageEventTags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLanternHold
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force_Activation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::UpdateLanternHold(bool Force_Activation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLanternHold");

	ABP_PlayerCharacter_C_UpdateLanternHold_Params params;
	params.Force_Activation = Force_Activation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsLanternHoldExpired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Expired_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsLanternHoldExpired(bool* Expired_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsLanternHoldExpired");

	ABP_PlayerCharacter_C_IsLanternHoldExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Expired_ != nullptr)
		*Expired_ = params.Expired_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Show Player Marker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::Can_Show_Player_Marker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Show Player Marker");

	ABP_PlayerCharacter_C_Can_Show_Player_Marker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryPerformDodgeAttack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey         PrimaryKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::TryPerformDodgeAttack(EArchonAttackActionKey PrimaryKey, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryPerformDodgeAttack");

	ABP_PlayerCharacter_C_TryPerformDodgeAttack_Params params;
	params.PrimaryKey = PrimaryKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanExecuteCombo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::CanExecuteCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanExecuteCombo");

	ABP_PlayerCharacter_C_CanExecuteCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsCancelToDodgeNotifyActive?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::IsCancelToDodgeNotifyActive_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsCancelToDodgeNotifyActive?");

	ABP_PlayerCharacter_C_IsCancelToDodgeNotifyActive__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnAboutToDieBP
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PreventDeath                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnAboutToDieBP(bool* PreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnAboutToDieBP");

	ABP_PlayerCharacter_C_OnAboutToDieBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreventDeath != nullptr)
		*PreventDeath = params.PreventDeath;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Is_in_lobby?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isinlobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Is_in_lobby_(bool* isinlobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Is_in_lobby?");

	ABP_PlayerCharacter_C_Is_in_lobby__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isinlobby != nullptr)
		*isinlobby = params.isinlobby;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateIsPlayerSupported
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateIsPlayerSupported()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateIsPlayerSupported");

	ABP_PlayerCharacter_C_UpdateIsPlayerSupported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAttackModifier
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EArchonAttackActionKeyModifier ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EArchonAttackActionKeyModifier ABP_PlayerCharacter_C::GetAttackModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAttackModifier");

	ABP_PlayerCharacter_C_GetAttackModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreHitHandleLifestealAndWeaponCharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::PreHitHandleLifestealAndWeaponCharge(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreHitHandleLifestealAndWeaponCharge");

	ABP_PlayerCharacter_C_PreHitHandleLifestealAndWeaponCharge_Params params;
	params.DamageEventData = DamageEventData;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_EmpoweredWeaponEffectRequestCount
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_EmpoweredWeaponEffectRequestCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_EmpoweredWeaponEffectRequestCount");

	ABP_PlayerCharacter_C_OnRep_EmpoweredWeaponEffectRequestCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPreMitigateOutgoingDamageBP
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamageTaker                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   DamageEventTags                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bHasHitResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bOverrideDamageData            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OutDamageEventTags             (Parm, OutParm)
// struct FDamageEventData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDamageEventData ABP_PlayerCharacter_C::OnPreMitigateOutgoingDamageBP(class AActor** DamageTaker, bool* bHasHitResult, struct FDamageEventData* DamageEventData, struct FGameplayTagContainer* DamageEventTags, struct FHitResult* HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPreMitigateOutgoingDamageBP");

	ABP_PlayerCharacter_C_OnPreMitigateOutgoingDamageBP_Params params;
	params.DamageTaker = DamageTaker;
	params.bHasHitResult = bHasHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEventData != nullptr)
		*DamageEventData = params.DamageEventData;
	if (DamageEventTags != nullptr)
		*DamageEventTags = params.DamageEventTags;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (bOverrideDamageData != nullptr)
		*bOverrideDamageData = params.bOverrideDamageData;
	if (OutDamageEventTags != nullptr)
		*OutDamageEventTags = params.OutDamageEventTags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_GetTagsToApplyPostDamageCalculation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageApplied                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer ABP_PlayerCharacter_C::BP_GetTagsToApplyPostDamageCalculation(float* DamageApplied, class AActor** TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_GetTagsToApplyPostDamageCalculation");

	ABP_PlayerCharacter_C_BP_GetTagsToApplyPostDamageCalculation_Params params;
	params.DamageApplied = DamageApplied;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMontagePlayRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ResetMontagePlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMontagePlayRate");

	ABP_PlayerCharacter_C_ResetMontagePlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSprintInput
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetSprintInput(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSprintInput");

	ABP_PlayerCharacter_C_SetSprintInput_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InternalCanPerformEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::InternalCanPerformEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InternalCanPerformEmote");

	ABP_PlayerCharacter_C_InternalCanPerformEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsCity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCity                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsCity(bool* IsCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsCity");

	ABP_PlayerCharacter_C_IsCity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCity != nullptr)
		*IsCity = params.IsCity;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Send Input Scheme Telemetry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Scheme                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerCharacter_C::Send_Input_Scheme_Telemetry(const class FString& Scheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Send Input Scheme Telemetry");

	ABP_PlayerCharacter_C_Send_Input_Scheme_Telemetry_Params params;
	params.Scheme = Scheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInStaminaThresholdRecoveryMaxDesiredLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELocomotionState>  MaxDesiredLocoState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetInStaminaThresholdRecoveryMaxDesiredLocoState(bool Enabled, TEnumAsByte<ELocomotionState> MaxDesiredLocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInStaminaThresholdRecoveryMaxDesiredLocoState");

	ABP_PlayerCharacter_C_SetInStaminaThresholdRecoveryMaxDesiredLocoState_Params params;
	params.Enabled = Enabled;
	params.MaxDesiredLocoState = MaxDesiredLocoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMaxDesiredLocoState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ELocomotionState>  DesiredLocoState               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetMaxDesiredLocoState(TEnumAsByte<ELocomotionState>* DesiredLocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMaxDesiredLocoState");

	ABP_PlayerCharacter_C_GetMaxDesiredLocoState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredLocoState != nullptr)
		*DesiredLocoState = params.DesiredLocoState;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyHitFVX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::ApplyHitFVX(const struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTagContainer* Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyHitFVX");

	ABP_PlayerCharacter_C_ApplyHitFVX_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_LookAtTarget
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_LookAtTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_LookAtTarget");

	ABP_PlayerCharacter_C_OnRep_LookAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::UpdateLookAt(const struct FVector& LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLookAt");

	ABP_PlayerCharacter_C_UpdateLookAt_Params params;
	params.LookAtTarget = LookAtTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtTarget                   (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_C::GetLookAtTarget(struct FVector* LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtTarget");

	ABP_PlayerCharacter_C_GetLookAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtTarget != nullptr)
		*LookAtTarget = params.LookAtTarget;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AdjustRotationRateFromMovementMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     EqualTo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::AdjustRotationRateFromMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, TEnumAsByte<EMovementMode> EqualTo, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AdjustRotationRateFromMovementMode");

	ABP_PlayerCharacter_C_AdjustRotationRateFromMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.EqualTo = EqualTo;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFallingConst
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsFalling_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetIsFallingConst(bool* IsFalling_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFallingConst");

	ABP_PlayerCharacter_C_GetIsFallingConst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFalling_ != nullptr)
		*IsFalling_ = params.IsFalling_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_AudioIsLocalPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_AudioIsLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_AudioIsLocalPlayer");

	ABP_PlayerCharacter_C_OnRep_AudioIsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPonyTailProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           hair_mesh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetPonyTailProperties(class USkeletalMesh* hair_mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPonyTailProperties");

	ABP_PlayerCharacter_C_SetPonyTailProperties_Params params;
	params.hair_mesh = hair_mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsPlantingBanner?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           PlantingBanner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsPlantingBanner_(bool* PlantingBanner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsPlantingBanner?");

	ABP_PlayerCharacter_C_IsPlantingBanner__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlantingBanner != nullptr)
		*PlantingBanner = params.PlantingBanner;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartOrBufferCombo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey         PrimaryKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArchonCombatInputType         InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::StartOrBufferCombo(EArchonAttackActionKey PrimaryKey, EArchonCombatInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartOrBufferCombo");

	ABP_PlayerCharacter_C_StartOrBufferCombo_Params params;
	params.PrimaryKey = PrimaryKey;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClampCameraPitchYaw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Clamp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ClampCameraPitchYaw(bool Clamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClampCameraPitchYaw");

	ABP_PlayerCharacter_C_ClampCameraPitchYaw_Params params;
	params.Clamp = Clamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraAttackValues
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraOffset                   (Parm, OutParm, IsPlainOldData)
// float                          CameraFOVDelta                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CalculateCameraAttackValues(float* CameraDistance, struct FVector* CameraOffset, float* CameraFOVDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraAttackValues");

	ABP_PlayerCharacter_C_CalculateCameraAttackValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (CameraOffset != nullptr)
		*CameraOffset = params.CameraOffset;
	if (CameraFOVDelta != nullptr)
		*CameraFOVDelta = params.CameraFOVDelta;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateStatusEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateStatusEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateStatusEffects");

	ABP_PlayerCharacter_C_UpdateStatusEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAttackTargetScore
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_PlayerCharacter_C::GetAttackTargetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAttackTargetScore");

	ABP_PlayerCharacter_C_GetAttackTargetScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableAnimationOnDedicatedServer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DisableAnimationOnDedicatedServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableAnimationOnDedicatedServer");

	ABP_PlayerCharacter_C_DisableAnimationOnDedicatedServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInputEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsInputEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInputEnabled");

	ABP_PlayerCharacter_C_IsInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraCityValues
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Camera_Offset                  (Parm, OutParm, IsPlainOldData)
// float                          CameraFoV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CalculateCameraCityValues(float* CameraDistance, struct FVector* Camera_Offset, float* CameraFoV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraCityValues");

	ABP_PlayerCharacter_C_CalculateCameraCityValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (Camera_Offset != nullptr)
		*Camera_Offset = params.Camera_Offset;
	if (CameraFoV != nullptr)
		*CameraFoV = params.CameraFoV;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayPlantedTurnAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::PlayPlantedTurnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayPlantedTurnAnimation");

	ABP_PlayerCharacter_C_PlayPlantedTurnAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsValidPlantedTurnAttempt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid_Planted_Turn             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsValidPlantedTurnAttempt(bool* Valid_Planted_Turn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsValidPlantedTurnAttempt");

	ABP_PlayerCharacter_C_IsValidPlantedTurnAttempt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid_Planted_Turn != nullptr)
		*Valid_Planted_Turn = params.Valid_Planted_Turn;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupComponentsForHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::SetupComponentsForHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupComponentsForHighlight");

	ABP_PlayerCharacter_C_SetupComponentsForHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LogAppearanceCastError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UObject>       AssetID                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerCharacter_C::LogAppearanceCastError(const struct FName& Key, TAssetPtr<class UObject> AssetID, const class FString& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LogAppearanceCastError");

	ABP_PlayerCharacter_C_LogAppearanceCastError_Params params;
	params.Key = Key;
	params.AssetID = AssetID;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LogAppearanceLoadingError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UObject>       AssetID                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::LogAppearanceLoadingError(const struct FName& Key, TAssetPtr<class UObject> AssetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LogAppearanceLoadingError");

	ABP_PlayerCharacter_C_LogAppearanceLoadingError_Params params;
	params.Key = Key;
	params.AssetID = AssetID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintGatherStringData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAppearanceStringData> ABP_PlayerCharacter_C::BlueprintGatherStringData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintGatherStringData");

	ABP_PlayerCharacter_C_BlueprintGatherStringData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintGatherAssetReferences
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceAssetReference> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAppearanceAssetReference> ABP_PlayerCharacter_C::BlueprintGatherAssetReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintGatherAssetReferences");

	ABP_PlayerCharacter_C_BlueprintGatherAssetReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecoverFromEdgeFall
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::RecoverFromEdgeFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecoverFromEdgeFall");

	ABP_PlayerCharacter_C_RecoverFromEdgeFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableCityPlayerCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DisableCityPlayerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableCityPlayerCollision");

	ABP_PlayerCharacter_C_DisableCityPlayerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateEnableTraversal
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::CalculateEnableTraversal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateEnableTraversal");

	ABP_PlayerCharacter_C_CalculateEnableTraversal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraShakeScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HeavyThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MediumThreshold                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetCameraShakeScale(float Damage, float HeavyThreshold, float MediumThreshold, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraShakeScale");

	ABP_PlayerCharacter_C_GetCameraShakeScale_Params params;
	params.Damage = Damage;
	params.HeavyThreshold = HeavyThreshold;
	params.MediumThreshold = MediumThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaminaDrainPerSecond          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::DebugStamina(float DeltaTime, float StaminaDrainPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugStamina");

	ABP_PlayerCharacter_C_DebugStamina_Params params;
	params.DeltaTime = DeltaTime;
	params.StaminaDrainPerSecond = StaminaDrainPerSecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformLanding?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::CanPerformLanding_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformLanding?");

	ABP_PlayerCharacter_C_CanPerformLanding__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLastValidLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateLastValidLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLastValidLocation");

	ABP_PlayerCharacter_C_UpdateLastValidLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraSprintValues
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraOffset                   (Parm, OutParm, IsPlainOldData)
// float                          FOVDelta                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CalculateCameraSprintValues(float* CameraDistance, struct FVector* CameraOffset, float* FOVDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraSprintValues");

	ABP_PlayerCharacter_C_CalculateCameraSprintValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (CameraOffset != nullptr)
		*CameraOffset = params.CameraOffset;
	if (FOVDelta != nullptr)
		*FOVDelta = params.FOVDelta;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraCombatValues
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraOffset                   (Parm, OutParm, IsPlainOldData)

void ABP_PlayerCharacter_C::CalculateCameraCombatValues(float* CameraDistance, struct FVector* CameraOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraCombatValues");

	ABP_PlayerCharacter_C_CalculateCameraCombatValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (CameraOffset != nullptr)
		*CameraOffset = params.CameraOffset;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AdjustCameraFromPitch
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DesiredFollowDist              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DesiredFoV                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CameraFoV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::AdjustCameraFromPitch(float DesiredFollowDist, float DesiredFoV, float* CameraDistance, float* CameraFoV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AdjustCameraFromPitch");

	ABP_PlayerCharacter_C_AdjustCameraFromPitch_Params params;
	params.DesiredFollowDist = DesiredFollowDist;
	params.DesiredFoV = DesiredFoV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (CameraFoV != nullptr)
		*CameraFoV = params.CameraFoV;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsWeaponSheathed?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           WeaponSheathed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsWeaponSheathed_(bool* WeaponSheathed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsWeaponSheathed?");

	ABP_PlayerCharacter_C_IsWeaponSheathed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponSheathed != nullptr)
		*WeaponSheathed = params.WeaponSheathed;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Sprinting                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsSprinting(bool* Sprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsSprinting");

	ABP_PlayerCharacter_C_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sprinting != nullptr)
		*Sprinting = params.Sprinting;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DetermineItemOrEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuickItemIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::DetermineItemOrEmote(int EmoteIndex, int QuickItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DetermineItemOrEmote");

	ABP_PlayerCharacter_C_DetermineItemOrEmote_Params params;
	params.EmoteIndex = EmoteIndex;
	params.QuickItemIndex = QuickItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EmoteModifierPressed?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::EmoteModifierPressed_(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EmoteModifierPressed?");

	ABP_PlayerCharacter_C_EmoteModifierPressed__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Cancel Use?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Can_Cancel_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Can_Cancel_Use_(bool* Can_Cancel_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Cancel Use?");

	ABP_PlayerCharacter_C_Can_Cancel_Use__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Cancel_ != nullptr)
		*Can_Cancel_ = params.Can_Cancel_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Use?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Using_Pawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Usable_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Can_Use_(class APawn* Using_Pawn, bool* Usable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Use?");

	ABP_PlayerCharacter_C_Can_Use__Params params;
	params.Using_Pawn = Using_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Usable_ != nullptr)
		*Usable_ = params.Usable_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Use Cost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Get_Use_Cost(TEnumAsByte<EUsableObjectResourceCostTypes>* Resource_Type, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Use Cost");

	ABP_PlayerCharacter_C_Get_Use_Cost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resource_Type != nullptr)
		*Resource_Type = params.Resource_Type;
	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Previous_Weapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Next_Weapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BaseArchonWeapon_C*  AsBP_Base_Archon_Weapon        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::EquipWeapon(class UObject* Previous_Weapon, class UObject* Next_Weapon, class ABP_BaseArchonWeapon_C** AsBP_Base_Archon_Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipWeapon");

	ABP_PlayerCharacter_C_EquipWeapon_Params params;
	params.Previous_Weapon = Previous_Weapon;
	params.Next_Weapon = Next_Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Base_Archon_Weapon != nullptr)
		*AsBP_Base_Archon_Weapon = params.AsBP_Base_Archon_Weapon;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAnimationBlueprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetAnimationBlueprint(class UObject* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAnimationBlueprint");

	ABP_PlayerCharacter_C_SetAnimationBlueprint_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInCity?-Deprecated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InCity                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::IsInCity__Deprecated(bool* InCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInCity?-Deprecated");

	ABP_PlayerCharacter_C_IsInCity__Deprecated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCity != nullptr)
		*InCity = params.InCity;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Evaluate Camera Conversation Transition Offset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Desired_Offset                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Evaluate_Camera_Conversation_Transition_Offset(float* Desired_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Evaluate Camera Conversation Transition Offset");

	ABP_PlayerCharacter_C_Evaluate_Camera_Conversation_Transition_Offset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Desired_Offset != nullptr)
		*Desired_Offset = params.Desired_Offset;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Armour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TAssetPtr<class USkeletalMesh>> Armour                         (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::Get_Armour(TArray<TAssetPtr<class USkeletalMesh>>* Armour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Armour");

	ABP_PlayerCharacter_C_Get_Armour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Armour != nullptr)
		*Armour = params.Armour;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCollisionWithMonster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetCollisionWithMonster(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCollisionWithMonster");

	ABP_PlayerCharacter_C_SetCollisionWithMonster_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get All Dynamic Materials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> All_Dynamic_Materials          (Parm, OutParm, ZeroConstructor)

void ABP_PlayerCharacter_C::Get_All_Dynamic_Materials(TArray<class UMaterialInstanceDynamic*>* All_Dynamic_Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get All Dynamic Materials");

	ABP_PlayerCharacter_C_Get_All_Dynamic_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (All_Dynamic_Materials != nullptr)
		*All_Dynamic_Materials = params.All_Dynamic_Materials;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFlickAccelerationDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::GetFlickAccelerationDirection(struct FVector* Out, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFlickAccelerationDirection");

	ABP_PlayerCharacter_C_GetFlickAccelerationDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Rotation Rate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELocomotionState>  Locomotion_State               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Update_Rotation_Rate(TEnumAsByte<ELocomotionState> Locomotion_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Rotation Rate");

	ABP_PlayerCharacter_C_Update_Rotation_Rate_Params params;
	params.Locomotion_State = Locomotion_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Current Direction Vector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Return_Value                   (Parm, OutParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Get_Current_Direction_Vector(struct FVector* Return_Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Current Direction Vector");

	ABP_PlayerCharacter_C_Get_Current_Direction_Vector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Desired Direction Vector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Tolerance                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Return_Value                   (Parm, OutParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Get_Desired_Direction_Vector(float Tolerance, struct FVector* Return_Value, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Desired Direction Vector");

	ABP_PlayerCharacter_C_Get_Desired_Direction_Vector_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           PerformingAction               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CanPerformAction(bool* PerformingAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformAction");

	ABP_PlayerCharacter_C_CanPerformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerformingAction != nullptr)
		*PerformingAction = params.PerformingAction;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TurnToFaceInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::TurnToFaceInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TurnToFaceInput");

	ABP_PlayerCharacter_C_TurnToFaceInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EvaluateCameraModifiers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::EvaluateCameraModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EvaluateCameraModifiers");

	ABP_PlayerCharacter_C_EvaluateCameraModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlantedTurns
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdatePlantedTurns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlantedTurns");

	ABP_PlayerCharacter_C_UpdatePlantedTurns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalcTurnRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CalcTurnRate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalcTurnRate");

	ABP_PlayerCharacter_C_CalcTurnRate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckAndRegisterAttackID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   AttackID                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IDExisted                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::CheckAndRegisterAttackID(const struct FGuid& AttackID, bool* IDExisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckAndRegisterAttackID");

	ABP_PlayerCharacter_C_CheckAndRegisterAttackID_Params params;
	params.AttackID = AttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDExisted != nullptr)
		*IDExisted = params.IDExisted;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Current Locomotion State
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELocomotionState>  Current_State                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Calculate_Current_Locomotion_State(TEnumAsByte<ELocomotionState>* Current_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Current Locomotion State");

	ABP_PlayerCharacter_C_Calculate_Current_Locomotion_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_State != nullptr)
		*Current_State = params.Current_State;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_DollyZoom
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_DollyZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_DollyZoom");

	ABP_PlayerCharacter_C_OnRep_DollyZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddUniqueSpeedModCurve
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::AddUniqueSpeedModCurve(class UCurveFloat* Curve, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddUniqueSpeedModCurve");

	ABP_PlayerCharacter_C_AddUniqueSpeedModCurve_Params params;
	params.Curve = Curve;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanJumpInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanJumpInternal");

	ABP_PlayerCharacter_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Movement Input
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Forward_Axis                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right_Axis                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Calculate_Movement_Input(float Forward_Axis, float Right_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Movement Input");

	ABP_PlayerCharacter_C_Calculate_Movement_Input_Params params;
	params.Forward_Axis = Forward_Axis;
	params.Right_Axis = Right_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Use A Quickslot Item Old
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_Use_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Can_Use_A_Quickslot_Item_Old(bool* Can_Use_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Use A Quickslot Item Old");

	ABP_PlayerCharacter_C_Can_Use_A_Quickslot_Item_Old_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Use_ != nullptr)
		*Can_Use_ = params.Can_Use_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C. Monster Lock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::_Monster_Lock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C. Monster Lock");

	ABP_PlayerCharacter_C__Monster_Lock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Angle of Player Input Along Right Vector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_PlayerCharacter_C::Get_Angle_of_Player_Input_Along_Right_Vector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Angle of Player Input Along Right Vector");

	ABP_PlayerCharacter_C_Get_Angle_of_Player_Input_Along_Right_Vector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Directional Input Modifier Key
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EArchonAttackActionKeyModifier Modifier_Key                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Get_Directional_Input_Modifier_Key(EArchonAttackActionKeyModifier* Modifier_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Directional Input Modifier Key");

	ABP_PlayerCharacter_C_Get_Directional_Input_Modifier_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifier_Key != nullptr)
		*Modifier_Key = params.Modifier_Key;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Slow Charge State
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_Slow_Charge_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Slow Charge State");

	ABP_PlayerCharacter_C_OnRep_Slow_Charge_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Current Health
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_Current_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Current Health");

	ABP_PlayerCharacter_C_OnRep_Current_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio-UpdateMovementFoley
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Audio_UpdateMovementFoley()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio-UpdateMovementFoley");

	ABP_PlayerCharacter_C_Audio_UpdateMovementFoley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Handle Camera Auto-panning
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Handle_Camera_Auto_panning(float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Handle Camera Auto-panning");

	ABP_PlayerCharacter_C_Handle_Camera_Auto_panning_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Play Heavy Land Animation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Play_Heavy_Land_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Play Heavy Land Animation");

	ABP_PlayerCharacter_C_Play_Heavy_Land_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanExecuteComboTransition");

	ABP_PlayerCharacter_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Angle of Player Input Along Forward Vector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_PlayerCharacter_C::Get_Angle_of_Player_Input_Along_Forward_Vector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Angle of Player Input Along Forward Vector");

	ABP_PlayerCharacter_C_Get_Angle_of_Player_Input_Along_Forward_Vector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Kill");

	ABP_PlayerCharacter_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformDodge
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerCharacter_C::CanPerformDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformDodge");

	ABP_PlayerCharacter_C_CanPerformDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Bleedout State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bleeding_Out_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Set_Bleedout_State(bool Bleeding_Out_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Bleedout State");

	ABP_PlayerCharacter_C_Set_Bleedout_State_Params params;
	params.Bleeding_Out_ = Bleeding_Out_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Reduce Resource Amount
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Reduce_Resource_Amount(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Amount, bool* Successful_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Reduce Resource Amount");

	ABP_PlayerCharacter_C_Reduce_Resource_Amount_Params params;
	params.Resource_Type = Resource_Type;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful_ != nullptr)
		*Successful_ = params.Successful_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Consume Resource Cost
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Amount_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Consume_Resource_Cost(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Amount, bool* Has_Amount_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Consume Resource Cost");

	ABP_PlayerCharacter_C_Consume_Resource_Cost_Params params;
	params.Resource_Type = Resource_Type;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Amount_ != nullptr)
		*Has_Amount_ = params.Has_Amount_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Check For Resource Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Has_Amount_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Check_For_Resource_Amount(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Amount, bool* Has_Amount_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Check For Resource Amount");

	ABP_PlayerCharacter_C_Check_For_Resource_Amount_Params params;
	params.Resource_Type = Resource_Type;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Amount_ != nullptr)
		*Has_Amount_ = params.Has_Amount_;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Input Enable State
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Input_Enabled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Set_Input_Enable_State(bool Input_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Input Enable State");

	ABP_PlayerCharacter_C_Set_Input_Enable_State_Params params;
	params.Input_Enabled = Input_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Player Body Type Mesh Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Set_Player_Body_Type_Mesh_Data(EArchonBodyType BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Player Body Type Mesh Data");

	ABP_PlayerCharacter_C_Set_Player_Body_Type_Mesh_Data_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Evaluate Stamina System
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          In_Delta_Seconds               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_PlayerCharacter_C::Evaluate_Stamina_System(float* In_Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Evaluate Stamina System");

	ABP_PlayerCharacter_C_Evaluate_Stamina_System_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In_Delta_Seconds != nullptr)
		*In_Delta_Seconds = params.In_Delta_Seconds;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Desired Locomotion State
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ELocomotionState>  Desired_State                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Calculate_Desired_Locomotion_State(TEnumAsByte<ELocomotionState>* Desired_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Desired Locomotion State");

	ABP_PlayerCharacter_C_Calculate_Desired_Locomotion_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Desired_State != nullptr)
		*Desired_State = params.Desired_State;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Player Start A Sprint?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Sprint_Capable                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Can_Player_Start_A_Sprint_(bool* Sprint_Capable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Player Start A Sprint?");

	ABP_PlayerCharacter_C_Can_Player_Start_A_Sprint__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sprint_Capable != nullptr)
		*Sprint_Capable = params.Sprint_Capable;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Player Max Movement Speed
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Calculate_Player_Max_Movement_Speed(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Player Max Movement Speed");

	ABP_PlayerCharacter_C_Calculate_Player_Max_Movement_Speed_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript");

	ABP_PlayerCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Timeline_5__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_5__FinishedFunc");

	ABP_PlayerCharacter_C_Timeline_5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Timeline_5__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_5__UpdateFunc");

	ABP_PlayerCharacter_C_Timeline_5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_7__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Timeline_7__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_7__FinishedFunc");

	ABP_PlayerCharacter_C_Timeline_7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_7__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Timeline_7__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_7__UpdateFunc");

	ABP_PlayerCharacter_C_Timeline_7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_0__FinishedFunc");

	ABP_PlayerCharacter_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_0__UpdateFunc");

	ABP_PlayerCharacter_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Camera Interpolation__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Camera_Interpolation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Camera Interpolation__FinishedFunc");

	ABP_PlayerCharacter_C_Camera_Interpolation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Camera Interpolation__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::Camera_Interpolation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Camera Interpolation__UpdateFunc");

	ABP_PlayerCharacter_C_Camera_Interpolation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionOutTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::EdgeRecoveryTransitionOutTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionOutTimeline__FinishedFunc");

	ABP_PlayerCharacter_C_EdgeRecoveryTransitionOutTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionOutTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::EdgeRecoveryTransitionOutTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionOutTimeline__UpdateFunc");

	ABP_PlayerCharacter_C_EdgeRecoveryTransitionOutTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionInTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::EdgeRecoveryTransitionInTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionInTimeline__FinishedFunc");

	ABP_PlayerCharacter_C_EdgeRecoveryTransitionInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionInTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::EdgeRecoveryTransitionInTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionInTimeline__UpdateFunc");

	ABP_PlayerCharacter_C_EdgeRecoveryTransitionInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.phys_alpha_blend__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::phys_alpha_blend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.phys_alpha_blend__FinishedFunc");

	ABP_PlayerCharacter_C_phys_alpha_blend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.phys_alpha_blend__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::phys_alpha_blend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.phys_alpha_blend__UpdateFunc");

	ABP_PlayerCharacter_C_phys_alpha_blend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.tempered_phys_blend__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::tempered_phys_blend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.tempered_phys_blend__FinishedFunc");

	ABP_PlayerCharacter_C_tempered_phys_blend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.tempered_phys_blend__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCharacter_C::tempered_phys_blend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.tempered_phys_blend__UpdateFunc");

	ABP_PlayerCharacter_C_tempered_phys_blend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D");

	ABP_PlayerCharacter_C_OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5");

	ABP_PlayerCharacter_C_OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_49ABAC9F497E108CAB4448A1E0E63608
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_49ABAC9F497E108CAB4448A1E0E63608(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_49ABAC9F497E108CAB4448A1E0E63608");

	ABP_PlayerCharacter_C_OnLoaded_49ABAC9F497E108CAB4448A1E0E63608_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_3004D3C1442BBE040C05ADA282F687DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_3004D3C1442BBE040C05ADA282F687DF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_3004D3C1442BBE040C05ADA282F687DF");

	ABP_PlayerCharacter_C_OnLoaded_3004D3C1442BBE040C05ADA282F687DF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB");

	ABP_PlayerCharacter_C_OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_40
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_40(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_40");

	ABP_PlayerCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_40_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_39
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Sprint_K2Node_InputActionEvent_39(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_39");

	ABP_PlayerCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_39_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Reset Camera_K2Node_InputActionEvent_38
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Reset_Camera_K2Node_InputActionEvent_38(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Reset Camera_K2Node_InputActionEvent_38");

	ABP_PlayerCharacter_C_InpActEvt_Reset_Camera_K2Node_InputActionEvent_38_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 2_K2Node_InputActionEvent_37
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Quickslot_2_K2Node_InputActionEvent_37(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 2_K2Node_InputActionEvent_37");

	ABP_PlayerCharacter_C_InpActEvt_Quickslot_2_K2Node_InputActionEvent_37_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 3_K2Node_InputActionEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Quickslot_3_K2Node_InputActionEvent_36(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 3_K2Node_InputActionEvent_36");

	ABP_PlayerCharacter_C_InpActEvt_Quickslot_3_K2Node_InputActionEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 1_K2Node_InputActionEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Quickslot_1_K2Node_InputActionEvent_35(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 1_K2Node_InputActionEvent_35");

	ABP_PlayerCharacter_C_InpActEvt_Quickslot_1_K2Node_InputActionEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_34(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_34");

	ABP_PlayerCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_33(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_33");

	ABP_PlayerCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_32(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_32");

	ABP_PlayerCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Lantern Ability_K2Node_InputActionEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Lantern_Ability_K2Node_InputActionEvent_31(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Lantern Ability_K2Node_InputActionEvent_31");

	ABP_PlayerCharacter_C_InpActEvt_Lantern_Ability_K2Node_InputActionEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Lantern Ability_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Lantern_Ability_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Lantern Ability_K2Node_InputActionEvent_30");

	ABP_PlayerCharacter_C_InpActEvt_Lantern_Ability_K2Node_InputActionEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_BannerPlant_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_BannerPlant_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_BannerPlant_K2Node_InputActionEvent_29");

	ABP_PlayerCharacter_C_InpActEvt_BannerPlant_K2Node_InputActionEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_4808835940AB2CAA2C965E99DF64B565
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_4808835940AB2CAA2C965E99DF64B565(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_4808835940AB2CAA2C965E99DF64B565");

	ABP_PlayerCharacter_C_OnLoaded_4808835940AB2CAA2C965E99DF64B565_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28");

	ABP_PlayerCharacter_C_InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 4_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Quickslot_4_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 4_K2Node_InputActionEvent_27");

	ABP_PlayerCharacter_C_InpActEvt_Quickslot_4_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Primary_Attack_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_26");

	ABP_PlayerCharacter_C_InpActEvt_Primary_Attack_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Primary_Attack_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_25");

	ABP_PlayerCharacter_C_InpActEvt_Primary_Attack_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Secondary_Attack_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_24");

	ABP_PlayerCharacter_C_InpActEvt_Secondary_Attack_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Secondary_Attack_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_23");

	ABP_PlayerCharacter_C_InpActEvt_Secondary_Attack_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Special Action_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Special_Action_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Special Action_K2Node_InputActionEvent_22");

	ABP_PlayerCharacter_C_InpActEvt_Special_Action_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Special Action_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::InpActEvt_Special_Action_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Special Action_K2Node_InputActionEvent_21");

	ABP_PlayerCharacter_C_InpActEvt_Special_Action_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_E1115A0B428C1B7C348612A98A0B0169
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLoaded_E1115A0B428C1B7C348612A98A0B0169(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_E1115A0B428C1B7C348612A98A0B0169");

	ABP_PlayerCharacter_C_OnLoaded_E1115A0B428C1B7C348612A98A0B0169_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EQSProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileTarget               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EQSProjectileSpawned");

	ABP_PlayerCharacter_C_EQSProjectileSpawned_Params params;
	params.Projectile = Projectile;
	params.ProjectileTarget = ProjectileTarget;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EQSActorSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EQSActorSpawned");

	ABP_PlayerCharacter_C_EQSActorSpawned_Params params;
	params.Actor = Actor;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::RegisterInteraction(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterInteraction");

	ABP_PlayerCharacter_C_RegisterInteraction_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::UnregisterInteraction(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterInteraction");

	ABP_PlayerCharacter_C_UnregisterInteraction_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLanternGlowIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          emissive_value                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetLanternGlowIntensity(float emissive_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLanternGlowIntensity");

	ABP_PlayerCharacter_C_SetLanternGlowIntensity_Params params;
	params.emissive_value = emissive_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDebrisState");

	ABP_PlayerCharacter_C_UpdateDebrisState_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimNotifyState*        CallerEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fvfx_state_id_struct    StateId                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddDebrisState");

	ABP_PlayerCharacter_C_AddDebrisState_Params params;
	params.CallerEvent = CallerEvent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleSprintCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ToggleSprintCamera(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleSprintCamera");

	ABP_PlayerCharacter_C_ToggleSprintCamera_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayCue.Combat.SuperArmour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::GameplayCue_Combat_SuperArmour(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayCue.Combat.SuperArmour");

	ABP_PlayerCharacter_C_GameplayCue_Combat_SuperArmour_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintApplyAssetReferences
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceAssetReference>* References                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerCharacter_C::BlueprintApplyAssetReferences(TArray<struct FAppearanceAssetReference>* References)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintApplyAssetReferences");

	ABP_PlayerCharacter_C_BlueprintApplyAssetReferences_Params params;
	params.References = References;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintApplyStringData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData>* StringData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerCharacter_C::BlueprintApplyStringData(TArray<struct FAppearanceStringData>* StringData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintApplyStringData");

	ABP_PlayerCharacter_C_BlueprintApplyStringData_Params params;
	params.StringData = StringData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyStringDataInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> String_Data                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerCharacter_C::ApplyStringDataInterface(TArray<struct FAppearanceStringData>* String_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyStringDataInterface");

	ABP_PlayerCharacter_C_ApplyStringDataInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String_Data != nullptr)
		*String_Data = params.String_Data;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBodyType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetBodyType(EArchonBodyType BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBodyType");

	ABP_PlayerCharacter_C_SetBodyType_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RPCSetBodyType
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::RPCSetBodyType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RPCSetBodyType");

	ABP_PlayerCharacter_C_RPCSetBodyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadHairAsset
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::LoadHairAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadHairAsset");

	ABP_PlayerCharacter_C_LoadHairAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadFacialHairAsset
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::LoadFacialHairAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadFacialHairAsset");

	ABP_PlayerCharacter_C_LoadFacialHairAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGenderIdentity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonGender                  GenderId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetGenderIdentity(EArchonGender GenderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGenderIdentity");

	ABP_PlayerCharacter_C_SetGenderIdentity_Params params;
	params.GenderId = GenderId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerChargeGlowIntensity
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Event__PlayerChargeGlowIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerChargeGlowIntensity");

	ABP_PlayerCharacter_C_Event__PlayerChargeGlowIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Toggle Player Fadeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fadeout_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Toggle_Player_Fadeout(bool Fadeout_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Toggle Player Fadeout");

	ABP_PlayerCharacter_C_Toggle_Player_Fadeout_Params params;
	params.Fadeout_ = Fadeout_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event ShowHideWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Event_ShowHideWeapon(bool hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event ShowHideWeapon");

	ABP_PlayerCharacter_C_Event_ShowHideWeapon_Params params;
	params.hide = hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerCharge_Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Charge_level                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Event__PlayerCharge_Level(int Charge_level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerCharge_Level");

	ABP_PlayerCharacter_C_Event__PlayerCharge_Level_Params params;
	params.Charge_level = Charge_level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerCharge_Reset
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Event__PlayerCharge_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerCharge_Reset");

	ABP_PlayerCharacter_C_Event__PlayerCharge_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InstantFadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::InstantFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InstantFadeIn");

	ABP_PlayerCharacter_C_InstantFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InstantFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::InstantFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InstantFadeOut");

	ABP_PlayerCharacter_C_InstantFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerCameraBoomOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             TargetCurve                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          CameraArmLengthOffset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraFOVDelta                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::TriggerCameraBoomOffset(class UCurveFloat* TargetCurve, const struct FVector& CameraOffset, float CameraArmLengthOffset, float CameraTime, float CameraFOVDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerCameraBoomOffset");

	ABP_PlayerCharacter_C_TriggerCameraBoomOffset_Params params;
	params.TargetCurve = TargetCurve;
	params.CameraOffset = CameraOffset;
	params.CameraArmLengthOffset = CameraArmLengthOffset;
	params.CameraTime = CameraTime;
	params.CameraFOVDelta = CameraFOVDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndCameraBoomOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             Target_Curve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::EndCameraBoomOffset(class UCurveFloat* Target_Curve, float CameraTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndCameraBoomOffset");

	ABP_PlayerCharacter_C_EndCameraBoomOffset_Params params;
	params.Target_Curve = Target_Curve;
	params.CameraTime = CameraTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Player Camera Conversation Transition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time_to_Transition             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Local_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Transition_To_Local_Offset     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Player_Camera_Conversation_Transition(float Time_to_Transition, float Local_Offset, bool Transition_To_Local_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Player Camera Conversation Transition");

	ABP_PlayerCharacter_C_Player_Camera_Conversation_Transition_Params params;
	params.Time_to_Transition = Time_to_Transition;
	params.Local_Offset = Local_Offset;
	params.Transition_To_Local_Offset = Transition_To_Local_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveDebugComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::RemoveDebugComponent(class UActorComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveDebugComponent");

	ABP_PlayerCharacter_C_RemoveDebugComponent_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerStuck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ServerStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerStuck");

	ABP_PlayerCharacter_C_ServerStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CallLegalStuck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::CallLegalStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CallLegalStuck");

	ABP_PlayerCharacter_C_CallLegalStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio - Event Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Audio___Event_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio - Event Tick");

	ABP_PlayerCharacter_C_Audio___Event_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio - Evaluate Stamina
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Audio___Evaluate_Stamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio - Evaluate Stamina");

	ABP_PlayerCharacter_C_Audio___Evaluate_Stamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayCue.Combat.OnDamageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::GameplayCue_Combat_OnDamageReceived(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayCue.Combat.OnDamageReceived");

	ABP_PlayerCharacter_C_GameplayCue_Combat_OnDamageReceived_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Rotate Camera To Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Target_Rotation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::Rotate_Camera_To_Target(const struct FRotator& Target_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Rotate Camera To Target");

	ABP_PlayerCharacter_C_Rotate_Camera_To_Target_Params params;
	params.Target_Rotation = Target_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cancel Rotate Camera To Target
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Cancel_Rotate_Camera_To_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cancel Rotate Camera To Target");

	ABP_PlayerCharacter_C_Cancel_Rotate_Camera_To_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39");

	ABP_PlayerCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54");

	ABP_PlayerCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	ABP_PlayerCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	ABP_PlayerCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DesiredLocomotion Event
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELocomotionState>  Desired_State                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanMove                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::DesiredLocomotion_Event(TEnumAsByte<ELocomotionState> Desired_State, bool CanMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DesiredLocomotion Event");

	ABP_PlayerCharacter_C_DesiredLocomotion_Event_Params params;
	params.Desired_State = Desired_State;
	params.CanMove = CanMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerEmote
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::TriggerEmote(int EmoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerEmote");

	ABP_PlayerCharacter_C_TriggerEmote_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Enable Input From Emote
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Enable_Input_From_Emote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Enable Input From Emote");

	ABP_PlayerCharacter_C_Enable_Input_From_Emote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DoEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            emoteID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::DoEmote(int emoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DoEmote");

	ABP_PlayerCharacter_C_DoEmote_Params params;
	params.emoteID = emoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMaxDesiredLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELocomotionState>  MaxDesiredLocoState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetMaxDesiredLocoState(bool Enable, TEnumAsByte<ELocomotionState> MaxDesiredLocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMaxDesiredLocoState");

	ABP_PlayerCharacter_C_SetMaxDesiredLocoState_Params params;
	params.Enable = Enable;
	params.MaxDesiredLocoState = MaxDesiredLocoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ScaleInputTurnRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ScaleInputTurnRate(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ScaleInputTurnRate");

	ABP_PlayerCharacter_C_ScaleInputTurnRate_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetInputTurnRate
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ResetInputTurnRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetInputTurnRate");

	ABP_PlayerCharacter_C_ResetInputTurnRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayEmoteAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       Asset                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::PlayEmoteAnim(TAssetPtr<class UObject> Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayEmoteAnim");

	ABP_PlayerCharacter_C_PlayEmoteAnim_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSheatheWeaponEnd_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnSheatheWeaponEnd_Event_1(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSheatheWeaponEnd_Event_1");

	ABP_PlayerCharacter_C_OnSheatheWeaponEnd_Event_1_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSheatheWeaponEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnSheatheWeaponEnd(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSheatheWeaponEnd");

	ABP_PlayerCharacter_C_OnSheatheWeaponEnd_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetSprintInput
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ServerSetSprintInput(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetSprintInput");

	ABP_PlayerCharacter_C_ServerSetSprintInput_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AutoplayerAutorun
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::AutoplayerAutorun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AutoplayerAutorun");

	ABP_PlayerCharacter_C_AutoplayerAutorun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEmoteTurnWarpEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetEmoteTurnWarpEnabled(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEmoteTurnWarpEnabled");

	ABP_PlayerCharacter_C_SetEmoteTurnWarpEnabled_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerBannerPlant
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::TriggerBannerPlant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerBannerPlant");

	ABP_PlayerCharacter_C_TriggerBannerPlant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerBannerPlantInterface
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::TriggerBannerPlantInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerBannerPlantInterface");

	ABP_PlayerCharacter_C_TriggerBannerPlantInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerEmoteInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::TriggerEmoteInterface(int EmoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerEmoteInterface");

	ABP_PlayerCharacter_C_TriggerEmoteInterface_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateCameratoTargetInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::RotateCameratoTargetInterface(const struct FRotator& TargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateCameratoTargetInterface");

	ABP_PlayerCharacter_C_RotateCameratoTargetInterface_Params params;
	params.TargetRotation = TargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAutoPlayerActiveInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoPlayerActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetAutoPlayerActiveInterface(bool AutoPlayerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAutoPlayerActiveInterface");

	ABP_PlayerCharacter_C_SetAutoPlayerActiveInterface_Params params;
	params.AutoPlayerActive = AutoPlayerActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableCameraInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::EnableCameraInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableCameraInput");

	ABP_PlayerCharacter_C_EnableCameraInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableCameraInput
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DisableCameraInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableCameraInput");

	ABP_PlayerCharacter_C_DisableCameraInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	ABP_PlayerCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientStartFill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ClientStartFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientStartFill");

	ABP_PlayerCharacter_C_ClientStartFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientCancelFill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ClientCancelFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientCancelFill");

	ABP_PlayerCharacter_C_ClientCancelFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowPlayerMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ShowPlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowPlayerMarker");

	ABP_PlayerCharacter_C_ShowPlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HidePlayerMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::HidePlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.HidePlayerMarker");

	ABP_PlayerCharacter_C_HidePlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Show Nameplate
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Show_Nameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Show Nameplate");

	ABP_PlayerCharacter_C_Show_Nameplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Nameplate
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Hide_Nameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Nameplate");

	ABP_PlayerCharacter_C_Hide_Nameplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Show Revive Callout
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Show_Revive_Callout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Show Revive Callout");

	ABP_PlayerCharacter_C_Show_Revive_Callout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Revive Callout
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Hide_Revive_Callout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Revive Callout");

	ABP_PlayerCharacter_C_Hide_Revive_Callout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Enter Bleedout State
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DurationOfState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Enter_Bleedout_State(float DurationOfState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Enter Bleedout State");

	ABP_PlayerCharacter_C_Enter_Bleedout_State_Params params;
	params.DurationOfState = DurationOfState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cancel Bleedout
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Cancel_Bleedout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cancel Bleedout");

	ABP_PlayerCharacter_C_Cancel_Bleedout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Slow Charge State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Slow_State_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Set_Slow_Charge_State(bool Slow_State_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Slow Charge State");

	ABP_PlayerCharacter_C_Set_Slow_Charge_State_Params params;
	params.Slow_State_ = Slow_State_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterRezInteraction
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_PlayerCharacter_C::RegisterRezInteraction(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterRezInteraction");

	ABP_PlayerCharacter_C_RegisterRezInteraction_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterRezInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::UnregisterRezInteraction(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterRezInteraction");

	ABP_PlayerCharacter_C_UnregisterRezInteraction_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BleedOutElasped
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::BleedOutElasped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BleedOutElasped");

	ABP_PlayerCharacter_C_BleedOutElasped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReviveFromBleedOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   RevivingPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ReviveFromBleedOut(class APawn* RevivingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReviveFromBleedOut");

	ABP_PlayerCharacter_C_ReviveFromBleedOut_Params params;
	params.RevivingPawn = RevivingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Dodge And Jump Enable State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Set_Dodge_And_Jump_Enable_State(bool Enabled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Dodge And Jump Enable State");

	ABP_PlayerCharacter_C_Set_Dodge_And_Jump_Enable_State_Params params;
	params.Enabled_ = Enabled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnterBleedout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DurationPerBleedoutLevel       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::EnterBleedout(float DurationPerBleedoutLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnterBleedout");

	ABP_PlayerCharacter_C_EnterBleedout_Params params;
	params.DurationPerBleedoutLevel = DurationPerBleedoutLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyHitPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitPauseDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ApplyHitPause(float HitPauseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyHitPause");

	ABP_PlayerCharacter_C_ApplyHitPause_Params params;
	params.HitPauseDuration = HitPauseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWarpSmoothing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Smoothing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetWarpSmoothing(float Smoothing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWarpSmoothing");

	ABP_PlayerCharacter_C_SetWarpSmoothing_Params params;
	params.Smoothing = Smoothing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecordAttackDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::RecordAttackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecordAttackDirection");

	ABP_PlayerCharacter_C_RecordAttackDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetAttackDirection
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::ServerSetAttackDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetAttackDirection");

	ABP_PlayerCharacter_C_ServerSetAttackDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateForceEndCombo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayAnimation_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Next_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Next_Montage_Section           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::UpdateForceEndCombo(float MaxTime, bool PlayAnimation_, class UAnimMontage* Next_Montage, const struct FName& Next_Montage_Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateForceEndCombo");

	ABP_PlayerCharacter_C_UpdateForceEndCombo_Params params;
	params.MaxTime = MaxTime;
	params.PlayAnimation_ = PlayAnimation_;
	params.Next_Montage = Next_Montage;
	params.Next_Montage_Section = Next_Montage_Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_DamageGiven
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerCharacter_C::BP_DamageGiven(float* DamageReceived, class AActor** DamageReceiver, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_DamageGiven");

	ABP_PlayerCharacter_C_BP_DamageGiven_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageReceiver = DamageReceiver;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyShouldCheatDeathFromAboutToDie
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ApplyShouldCheatDeathFromAboutToDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyShouldCheatDeathFromAboutToDie");

	ABP_PlayerCharacter_C_ApplyShouldCheatDeathFromAboutToDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_StartNextMove
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::Client_StartNextMove(const struct FComboInputBuffer& ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_StartNextMove");

	ABP_PlayerCharacter_C_Client_StartNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerTellClient_StartNextMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCharacter_C::ServerTellClient_StartNextMove(const struct FComboInputBuffer& ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerTellClient_StartNextMove");

	ABP_PlayerCharacter_C_ServerTellClient_StartNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InternalReviveFromBleedOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   RevivingPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::InternalReviveFromBleedOut(class APawn* RevivingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InternalReviveFromBleedOut");

	ABP_PlayerCharacter_C_InternalReviveFromBleedOut_Params params;
	params.RevivingPawn = RevivingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCanAttack_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_1");

	ABP_PlayerCharacter_C_OnCanAttack_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_2
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCanAttack_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_2");

	ABP_PlayerCharacter_C_OnCanAttack_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_3
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCanAttack_Event_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_3");

	ABP_PlayerCharacter_C_OnCanAttack_Event_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");

	ABP_PlayerCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick");

	ABP_PlayerCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReduceMaxSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SpeedFactor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ReduceMaxSpeed(float SpeedFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReduceMaxSpeed");

	ABP_PlayerCharacter_C_ReduceMaxSpeed_Params params;
	params.SpeedFactor = SpeedFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxSpeed
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ResetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxSpeed");

	ABP_PlayerCharacter_C_ResetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Delay Stamina Regen
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Delay_Stamina_Regen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Delay Stamina Regen");

	ABP_PlayerCharacter_C_Delay_Stamina_Regen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHealedFromEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnHealedFromEffect(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHealedFromEffect");

	ABP_PlayerCharacter_C_OnHealedFromEffect_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed");

	ABP_PlayerCharacter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PerformDodge
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::PerformDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PerformDodge");

	ABP_PlayerCharacter_C_PerformDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastHealVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::MulticastHealVFX(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastHealVFX");

	ABP_PlayerCharacter_C_MulticastHealVFX_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Play Speed Mod Curve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             Speed_Mod_Curve                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   UniqueName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Play_Speed_Mod_Curve(class UCurveFloat* Speed_Mod_Curve, const struct FName& UniqueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Play Speed Mod Curve");

	ABP_PlayerCharacter_C_Play_Speed_Mod_Curve_Params params;
	params.Speed_Mod_Curve = Speed_Mod_Curve;
	params.UniqueName = UniqueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientInitNameplate
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ClientInitNameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientInitNameplate");

	ABP_PlayerCharacter_C_ClientInitNameplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecoverFromFall
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::RecoverFromFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecoverFromFall");

	ABP_PlayerCharacter_C_RecoverFromFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ReceiveUnpossessed(class AController** OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnpossessed");

	ABP_PlayerCharacter_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnRepPlayerState
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState**           NewPlayerState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::K2_OnRepPlayerState(class APlayerState** NewPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnRepPlayerState");

	ABP_PlayerCharacter_C_K2_OnRepPlayerState_Params params;
	params.NewPlayerState = NewPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_PawnRestarted
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::K2_PawnRestarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_PawnRestarted");

	ABP_PlayerCharacter_C_K2_PawnRestarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnReachedJumpApex_BP
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnReachedJumpApex_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnReachedJumpApex_BP");

	ABP_PlayerCharacter_C_OnReachedJumpApex_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Speed Mod Curve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   UniqueName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::Stop_Speed_Mod_Curve(const struct FName& UniqueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Speed Mod Curve");

	ABP_PlayerCharacter_C_Stop_Speed_Mod_Curve_Params params;
	params.UniqueName = UniqueName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      pc                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::K2_OnBecomeViewTarget(class APlayerController** pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnBecomeViewTarget");

	ABP_PlayerCharacter_C_K2_OnBecomeViewTarget_Params params;
	params.pc = pc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugOnMovementUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                OldLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                OldVelocity                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::DebugOnMovementUpdate(float* DeltaTime, struct FVector* OldLocation, struct FVector* OldVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugOnMovementUpdate");

	ABP_PlayerCharacter_C_DebugOnMovementUpdate_Params params;
	params.DeltaTime = DeltaTime;
	params.OldLocation = OldLocation;
	params.OldVelocity = OldVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboStarted
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::OnComboStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboStarted");

	ABP_PlayerCharacter_C_OnComboStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboEnded
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::OnComboEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboEnded");

	ABP_PlayerCharacter_C_OnComboEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::DestroyDebrisState(class UObject* Data, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyDebrisState");

	ABP_PlayerCharacter_C_DestroyDebrisState_Params params;
	params.Data = Data;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFadeOut
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::StartCameraFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFadeOut");

	ABP_PlayerCharacter_C_StartCameraFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRecoverFromEdgeFall
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRecoverFromEdgeFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRecoverFromEdgeFall");

	ABP_PlayerCharacter_C_OnRecoverFromEdgeFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnMovementModeChanged");

	ABP_PlayerCharacter_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnJumped
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnJumped");

	ABP_PlayerCharacter_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLandBlendingOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLandBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLandBlendingOut");

	ABP_PlayerCharacter_C_OnLandBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SingleClientNameplateInit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::SingleClientNameplateInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SingleClientNameplateInit");

	ABP_PlayerCharacter_C_SingleClientNameplateInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHighlightComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateHighlightComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHighlightComponents");

	ABP_PlayerCharacter_C_UpdateHighlightComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEarlyOutOfMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EarlyOutOfMontage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetEarlyOutOfMontage(bool EarlyOutOfMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEarlyOutOfMontage");

	ABP_PlayerCharacter_C_SetEarlyOutOfMontage_Params params;
	params.EarlyOutOfMontage = EarlyOutOfMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayNetworkedMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleFactor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::PlayNetworkedMontage(class UAnimMontage* Montage, float ScaleFactor, float PlayRate, const struct FName& Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayNetworkedMontage");

	ABP_PlayerCharacter_C_PlayNetworkedMontage_Params params;
	params.Montage = Montage;
	params.ScaleFactor = ScaleFactor;
	params.PlayRate = PlayRate;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTranslateWarpTargetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::UpdateTranslateWarpTargetPosition(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTranslateWarpTargetPosition");

	ABP_PlayerCharacter_C_UpdateTranslateWarpTargetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLocalWeatherType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eweather_type_enum> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetLocalWeatherType(TEnumAsByte<Eweather_type_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLocalWeatherType");

	ABP_PlayerCharacter_C_SetLocalWeatherType_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableIKinema
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableIKinema                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::EnableIKinema(bool EnableIKinema)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableIKinema");

	ABP_PlayerCharacter_C_EnableIKinema_Params params;
	params.EnableIKinema = EnableIKinema;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveGameplayStart");

	ABP_PlayerCharacter_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientGameplayStart
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ClientGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientGameplayStart");

	ABP_PlayerCharacter_C_ClientGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LocalClientUpdateAimToServer
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::LocalClientUpdateAimToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.LocalClientUpdateAimToServer");

	ABP_PlayerCharacter_C_LocalClientUpdateAimToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerReceiveNewAimDirection
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewAimDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::ServerReceiveNewAimDirection(const struct FVector& NewAimDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerReceiveNewAimDirection");

	ABP_PlayerCharacter_C_ServerReceiveNewAimDirection_Params params;
	params.NewAimDirection = NewAimDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartReplicatingAim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::StartReplicatingAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartReplicatingAim");

	ABP_PlayerCharacter_C_StartReplicatingAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopReplicatingAim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::StopReplicatingAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopReplicatingAim");

	ABP_PlayerCharacter_C_StopReplicatingAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientUpdateLookAtTargetOnServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::ClientUpdateLookAtTargetOnServer(const struct FVector& LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientUpdateLookAtTargetOnServer");

	ABP_PlayerCharacter_C_ClientUpdateLookAtTargetOnServer_Params params;
	params.LookAtTarget = LookAtTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootPlanted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayedFootSpeed               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JointName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::FootPlanted(float DelayedFootSpeed, const struct FName& JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootPlanted");

	ABP_PlayerCharacter_C_FootPlanted_Params params;
	params.DelayedFootSpeed = DelayedFootSpeed;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootUnplanted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FootSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JointName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::FootUnplanted(float FootSpeed, const struct FName& JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootUnplanted");

	ABP_PlayerCharacter_C_FootUnplanted_Params params;
	params.FootSpeed = FootSpeed;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHasLoadedInt
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateHasLoadedInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHasLoadedInt");

	ABP_PlayerCharacter_C_UpdateHasLoadedInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleHideWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ToggleHideWeapon(bool Hide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleHideWeapon");

	ABP_PlayerCharacter_C_ToggleHideWeapon_Params params;
	params.Hide_ = Hide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TogglePlayerFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::TogglePlayerFade(bool Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.TogglePlayerFade");

	ABP_PlayerCharacter_C_TogglePlayerFade_Params params;
	params.Fade = Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHelmHidingSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  helm_hide_setting              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerCharacter_C::SetHelmHidingSetting(const class FString& helm_hide_setting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHelmHidingSetting");

	ABP_PlayerCharacter_C_SetHelmHidingSetting_Params params;
	params.helm_hide_setting = helm_hide_setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAnimationGraph
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewAnimClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetAnimationGraph(class UClass* NewAnimClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAnimationGraph");

	ABP_PlayerCharacter_C_SetAnimationGraph_Params params;
	params.NewAnimClass = NewAnimClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMontagePauseWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetMontagePauseWindow(float PlayRate, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMontagePauseWindow");

	ABP_PlayerCharacter_C_SetMontagePauseWindow_Params params;
	params.PlayRate = PlayRate;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetLastMovementInputVector
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 MovementVector                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_PlayerCharacter_C::ServerSetLastMovementInputVector(const struct FVector& MovementVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetLastMovementInputVector");

	ABP_PlayerCharacter_C_ServerSetLastMovementInputVector_Params params;
	params.MovementVector = MovementVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTookDamageWhileInvulnerableBP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 DamageGiver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageEventTags                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         TotalDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnTookDamageWhileInvulnerableBP(class AActor** DamageGiver, struct FGameplayTagContainer* DamageEventTags, float* TotalDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTookDamageWhileInvulnerableBP");

	ABP_PlayerCharacter_C_OnTookDamageWhileInvulnerableBP_Params params;
	params.DamageGiver = DamageGiver;
	params.DamageEventTags = DamageEventTags;
	params.TotalDamage = TotalDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddEmpoweredWeaponEffectsStack
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::AddEmpoweredWeaponEffectsStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddEmpoweredWeaponEffectsStack");

	ABP_PlayerCharacter_C_AddEmpoweredWeaponEffectsStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveEmpoweredWeaponEffectsStack
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::RemoveEmpoweredWeaponEffectsStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveEmpoweredWeaponEffectsStack");

	ABP_PlayerCharacter_C_RemoveEmpoweredWeaponEffectsStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableLocoTransitions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::EnableLocoTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableLocoTransitions");

	ABP_PlayerCharacter_C_EnableLocoTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableLocoTransitions
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DisableLocoTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableLocoTransitions");

	ABP_PlayerCharacter_C_DisableLocoTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWeaponAbilityDamageRowOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WeaponAbilityDamageRowOverride (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetWeaponAbilityDamageRowOverride(const struct FName& WeaponAbilityDamageRowOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWeaponAbilityDamageRowOverride");

	ABP_PlayerCharacter_C_SetWeaponAbilityDamageRowOverride_Params params;
	params.WeaponAbilityDamageRowOverride = WeaponAbilityDamageRowOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClearWeaponAbilityDamageRowOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ClearWeaponAbilityDamageRowOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClearWeaponAbilityDamageRowOverride");

	ABP_PlayerCharacter_C_ClearWeaponAbilityDamageRowOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_BodyType
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRep_BodyType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_BodyType");

	ABP_PlayerCharacter_C_OnRep_BodyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SuperArmourPlayerMaterialEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::SuperArmourPlayerMaterialEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SuperArmourPlayerMaterialEffect");

	ABP_PlayerCharacter_C_SuperArmourPlayerMaterialEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientDrawServerDebugSphere
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Segments                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ClientDrawServerDebugSphere(const struct FVector& Location, float Radius, float Duration, float Thickness, const struct FLinearColor& Color, int Segments)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientDrawServerDebugSphere");

	ABP_PlayerCharacter_C_ClientDrawServerDebugSphere_Params params;
	params.Location = Location;
	params.Radius = Radius;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.Color = Color;
	params.Segments = Segments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxFallTimerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ResetMaxFallTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxFallTimerEvent");

	ABP_PlayerCharacter_C_ResetMaxFallTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyEmpoweredVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DestroyEmpoweredVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyEmpoweredVFX");

	ABP_PlayerCharacter_C_DestroyEmpoweredVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailSafeBleedoutEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::FailSafeBleedoutEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailSafeBleedoutEvent");

	ABP_PlayerCharacter_C_FailSafeBleedoutEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboNextMove
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer*      ComboInputBuffer               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerCharacter_C::OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboNextMove");

	ABP_PlayerCharacter_C_OnComboNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReInitPhysics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ReInitPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReInitPhysics");

	ABP_PlayerCharacter_C_ReInitPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableDynamics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DisableDynamics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableDynamics");

	ABP_PlayerCharacter_C_DisableDynamics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCinematicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStart");

	ABP_PlayerCharacter_C_OnCinematicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCinematicEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicEnd");

	ABP_PlayerCharacter_C_OnCinematicEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStatePlaying
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCinematicStatePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStatePlaying");

	ABP_PlayerCharacter_C_OnCinematicStatePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStateComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCinematicStateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStateComplete");

	ABP_PlayerCharacter_C_OnCinematicStateComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStateNotPlaying
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCinematicStateNotPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStateNotPlaying");

	ABP_PlayerCharacter_C_OnCinematicStateNotPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRefreshSkeletalMeshOptimizations
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnRefreshSkeletalMeshOptimizations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRefreshSkeletalMeshOptimizations");

	ABP_PlayerCharacter_C_OnRefreshSkeletalMeshOptimizations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugToggleSkeletalOptimization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::DebugToggleSkeletalOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugToggleSkeletalOptimization");

	ABP_PlayerCharacter_C_DebugToggleSkeletalOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReInitPhysics_blend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ReInitPhysics_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReInitPhysics_blend");

	ABP_PlayerCharacter_C_ReInitPhysics_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableDynamics_blend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DisableDynamics_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableDynamics_blend");

	ABP_PlayerCharacter_C_DisableDynamics_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReinitPhysics_tempered_blend
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ReinitPhysics_tempered_blend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReinitPhysics_tempered_blend");

	ABP_PlayerCharacter_C_ReinitPhysics_tempered_blend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLookAtEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::SetLookAtEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLookAtEnabled");

	ABP_PlayerCharacter_C_SetLookAtEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Disable_Bangs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Disable_Bangs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Disable_Bangs");

	ABP_PlayerCharacter_C_Disable_Bangs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");

	ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnActorGameplayStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnActorGameplayStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnActorGameplayStart__DelegateSignature");

	ABP_PlayerCharacter_C_OnActorGameplayStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLocalWeaponEquippedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseArchonWeapon_C*  Previous_Weapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BaseArchonWeapon_C*  New_Weapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCharacter_C::OnLocalWeaponEquippedDispatcher__DelegateSignature(class ABP_BaseArchonWeapon_C* Previous_Weapon, class ABP_BaseArchonWeapon_C* New_Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLocalWeaponEquippedDispatcher__DelegateSignature");

	ABP_PlayerCharacter_C_OnLocalWeaponEquippedDispatcher__DelegateSignature_Params params;
	params.Previous_Weapon = Previous_Weapon;
	params.New_Weapon = New_Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
