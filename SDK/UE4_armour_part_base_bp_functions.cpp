// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_armour_part_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function armour_part_base_bp.armour_part_base_bp_C.OutputDebugInformation
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent, Const)

void Aarmour_part_base_bp_C::OutputDebugInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OutputDebugInformation");

	Aarmour_part_base_bp_C_OutputDebugInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.HasFinishedLoading
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aarmour_part_base_bp_C::HasFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.HasFinishedLoading");

	Aarmour_part_base_bp_C_HasFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetDefaultPrimaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetDefaultPrimaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetDefaultPrimaryDye");

	Aarmour_part_base_bp_C_GetDefaultPrimaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetDefaultSecondaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetDefaultSecondaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetDefaultSecondaryDye");

	Aarmour_part_base_bp_C_GetDefaultSecondaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetPresentationInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USkeletalMesh> SkeletalMesh                   (Parm, OutParm)
// struct FVector                 DisplayOffset                  (Parm, OutParm, IsPlainOldData)

void Aarmour_part_base_bp_C::GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetPresentationInfo");

	Aarmour_part_base_bp_C_GetPresentationInfo_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (DisplayOffset != nullptr)
		*DisplayOffset = params.DisplayOffset;
}


// Function armour_part_base_bp.armour_part_base_bp_C.LookupSetItemTableRow
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FArmourSetItemResistanceTableData OutResistanceTableRow          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aarmour_part_base_bp_C::LookupSetItemTableRow(struct FName* RowName, struct FArmourSetItemResistanceTableData* OutResistanceTableRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.LookupSetItemTableRow");

	Aarmour_part_base_bp_C_LookupSetItemTableRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
	if (OutResistanceTableRow != nullptr)
		*OutResistanceTableRow = params.OutResistanceTableRow;

	return params.ReturnValue;
}


// Function armour_part_base_bp.armour_part_base_bp_C.LookupResistanceTableRow
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FArmourResistanceTableData OutResistanceTableRow          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aarmour_part_base_bp_C::LookupResistanceTableRow(struct FName* RowName, struct FArmourResistanceTableData* OutResistanceTableRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.LookupResistanceTableRow");

	Aarmour_part_base_bp_C_LookupResistanceTableRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
	if (OutResistanceTableRow != nullptr)
		*OutResistanceTableRow = params.OutResistanceTableRow;

	return params.ReturnValue;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnOwnerHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutHidden                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnOwnerHidden(bool Hidden, bool* OutHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnOwnerHidden");

	Aarmour_part_base_bp_C_OnOwnerHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHidden != nullptr)
		*OutHidden = params.OutHidden;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetSkeletalMeshAssetID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class USkeletalMesh> Out                            (Parm, OutParm)

void Aarmour_part_base_bp_C::GetSkeletalMeshAssetID(TAssetPtr<class USkeletalMesh>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetSkeletalMeshAssetID");

	Aarmour_part_base_bp_C_GetSkeletalMeshAssetID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function armour_part_base_bp.armour_part_base_bp_C.SetSecondaryMotionProperties
// (Public, BlueprintCallable, BlueprintEvent)

void Aarmour_part_base_bp_C::SetSecondaryMotionProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.SetSecondaryMotionProperties");

	Aarmour_part_base_bp_C_SetSecondaryMotionProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.SetTierAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material_interface             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::SetTierAttributes(class UMaterialInterface* Material_interface, int Array_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.SetTierAttributes");

	Aarmour_part_base_bp_C_SetTierAttributes_Params params;
	params.Material_interface = Material_interface;
	params.Array_Index = Array_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.ResetArmourHiding
// (Public, BlueprintCallable, BlueprintEvent)

void Aarmour_part_base_bp_C::ResetArmourHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.ResetArmourHiding");

	Aarmour_part_base_bp_C_ResetArmourHiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Jumping_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsJumping(bool* Is_Jumping_)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsJumping");

	Aarmour_part_base_bp_C_GetIsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Jumping_ != nullptr)
		*Is_Jumping_ = params.Is_Jumping_;
}


// Function armour_part_base_bp.armour_part_base_bp_C.ConsumeStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StaminaCost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RestrictedByStaminaAmount_     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::ConsumeStamina(float StaminaCost, bool RestrictedByStaminaAmount_, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.ConsumeStamina");

	Aarmour_part_base_bp_C_ConsumeStamina_Params params;
	params.StaminaCost = StaminaCost;
	params.RestrictedByStaminaAmount_ = RestrictedByStaminaAmount_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnGameModeStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnGameModeStartEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnGameModeStartEvent");

	Aarmour_part_base_bp_C_OnGameModeStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsFalling
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Falling_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsFalling(bool* Is_Falling_)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsFalling");

	Aarmour_part_base_bp_C_GetIsFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Falling_ != nullptr)
		*Is_Falling_ = params.Is_Falling_;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsInSlowChargeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_slow_charging_              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsInSlowChargeState(bool* Is_slow_charging_)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsInSlowChargeState");

	Aarmour_part_base_bp_C_GetIsInSlowChargeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_slow_charging_ != nullptr)
		*Is_slow_charging_ = params.Is_slow_charging_;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsInStaminaThresholdRecoveryPeriod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_in_stamina_threshold_recovery_period_ (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsInStaminaThresholdRecoveryPeriod(bool* Is_in_stamina_threshold_recovery_period_)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsInStaminaThresholdRecoveryPeriod");

	Aarmour_part_base_bp_C_GetIsInStaminaThresholdRecoveryPeriod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_in_stamina_threshold_recovery_period_ != nullptr)
		*Is_in_stamina_threshold_recovery_period_ = params.Is_in_stamina_threshold_recovery_period_;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsSheathed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Weapon_Sheathed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsSheathed(bool* Weapon_Sheathed)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsSheathed");

	Aarmour_part_base_bp_C_GetIsSheathed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon_Sheathed != nullptr)
		*Weapon_Sheathed = params.Weapon_Sheathed;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsInCity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_In_City                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsInCity(bool* Is_In_City)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsInCity");

	Aarmour_part_base_bp_C_GetIsInCity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_In_City != nullptr)
		*Is_In_City = params.Is_In_City;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetPlayerStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Health                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Current_Stamina                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetPlayerStats(float* Current_Health, float* Current_Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetPlayerStats");

	Aarmour_part_base_bp_C_GetPlayerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Health != nullptr)
		*Current_Health = params.Current_Health;
	if (Current_Stamina != nullptr)
		*Current_Stamina = params.Current_Stamina;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetClientUsedGamePad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientUsedGamePad              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetClientUsedGamePad(bool* ClientUsedGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetClientUsedGamePad");

	Aarmour_part_base_bp_C_GetClientUsedGamePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientUsedGamePad != nullptr)
		*ClientUsedGamePad = params.ClientUsedGamePad;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetClientUsedMouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientUsedMouse                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetClientUsedMouse(bool* ClientUsedMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetClientUsedMouse");

	Aarmour_part_base_bp_C_GetClientUsedMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientUsedMouse != nullptr)
		*ClientUsedMouse = params.ClientUsedMouse;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GatherStringDataInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> AssetData                      (Parm, OutParm, ZeroConstructor)

void Aarmour_part_base_bp_C::GatherStringDataInterface(TArray<struct FAppearanceStringData>* AssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GatherStringDataInterface");

	Aarmour_part_base_bp_C_GatherStringDataInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetData != nullptr)
		*AssetData = params.AssetData;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetBleedOutTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            BleedOutTImer                  (Parm, OutParm)

void Aarmour_part_base_bp_C::GetBleedOutTimer(struct FTimerHandle* BleedOutTImer)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetBleedOutTimer");

	Aarmour_part_base_bp_C_GetBleedOutTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedOutTImer != nullptr)
		*BleedOutTImer = params.BleedOutTImer;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetNamePlate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        Nameplate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetNamePlate(class UWidgetComponent** Nameplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetNamePlate");

	Aarmour_part_base_bp_C_GetNamePlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nameplate != nullptr)
		*Nameplate = params.Nameplate;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetCurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetCurrentHealth(float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetCurrentHealth");

	Aarmour_part_base_bp_C_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHealth != nullptr)
		*CurrentHealth = params.CurrentHealth;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetReviveHealthThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReviveHealthThreshold          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetReviveHealthThreshold(float* ReviveHealthThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetReviveHealthThreshold");

	Aarmour_part_base_bp_C_GetReviveHealthThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReviveHealthThreshold != nullptr)
		*ReviveHealthThreshold = params.ReviveHealthThreshold;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetBleedOutState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BleedOutState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetBleedOutState(bool* BleedOutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetBleedOutState");

	Aarmour_part_base_bp_C_GetBleedOutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedOutState != nullptr)
		*BleedOutState = params.BleedOutState;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetIsDying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDying                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetIsDying(bool* IsDying)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetIsDying");

	Aarmour_part_base_bp_C_GetIsDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDying != nullptr)
		*IsDying = params.IsDying;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetFollowCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        FollowCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetFollowCamera(class UCameraComponent** FollowCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetFollowCamera");

	Aarmour_part_base_bp_C_GetFollowCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FollowCamera != nullptr)
		*FollowCamera = params.FollowCamera;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComp               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetSkeletalMeshComponent");

	Aarmour_part_base_bp_C_GetSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMeshComp != nullptr)
		*SkeletalMeshComp = params.SkeletalMeshComp;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetWeaponMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetWeaponMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetWeaponMesh");

	Aarmour_part_base_bp_C_GetWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetBodyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetBodyType(EArchonBodyType* BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetBodyType");

	Aarmour_part_base_bp_C_GetBodyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyType != nullptr)
		*BodyType = params.BodyType;
}


// Function armour_part_base_bp.armour_part_base_bp_C.GetHairSlotComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  HairSlotComponent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::GetHairSlotComponent(class USkeletalMeshComponent** HairSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.GetHairSlotComponent");

	Aarmour_part_base_bp_C_GetHairSlotComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HairSlotComponent != nullptr)
		*HairSlotComponent = params.HairSlotComponent;
}


// Function armour_part_base_bp.armour_part_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aarmour_part_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.UserConstructionScript");

	Aarmour_part_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_378134254CA67BC28732379C25907FC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnLoaded_378134254CA67BC28732379C25907FC6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_378134254CA67BC28732379C25907FC6");

	Aarmour_part_base_bp_C_OnLoaded_378134254CA67BC28732379C25907FC6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_574EFF0C41E058D1635965A61AB667E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnLoaded_574EFF0C41E058D1635965A61AB667E6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_574EFF0C41E058D1635965A61AB667E6");

	Aarmour_part_base_bp_C_OnLoaded_574EFF0C41E058D1635965A61AB667E6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_182A3F9B4742D91996AFD2892981F7E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnLoaded_182A3F9B4742D91996AFD2892981F7E3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_182A3F9B4742D91996AFD2892981F7E3");

	Aarmour_part_base_bp_C_OnLoaded_182A3F9B4742D91996AFD2892981F7E3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5");

	Aarmour_part_base_bp_C_OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aarmour_part_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.ReceiveBeginPlay");

	Aarmour_part_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnDyeChanged
// (Event, Public, BlueprintEvent)

void Aarmour_part_base_bp_C::OnDyeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnDyeChanged");

	Aarmour_part_base_bp_C_OnDyeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.BP_OnArmourEquipped
// (Event, Public, BlueprintEvent)

void Aarmour_part_base_bp_C::BP_OnArmourEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.BP_OnArmourEquipped");

	Aarmour_part_base_bp_C_BP_OnArmourEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.BP_OnArmourUnEquipped
// (Event, Public, BlueprintEvent)

void Aarmour_part_base_bp_C::BP_OnArmourUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.BP_OnArmourUnEquipped");

	Aarmour_part_base_bp_C_BP_OnArmourUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.ReEquip
// (BlueprintCallable, BlueprintEvent)

void Aarmour_part_base_bp_C::ReEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.ReEquip");

	Aarmour_part_base_bp_C_ReEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Aarmour_part_base_bp_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.ReceiveGameplayStart");

	Aarmour_part_base_bp_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.Check For Transmog
// (BlueprintCallable, BlueprintEvent)

void Aarmour_part_base_bp_C::Check_For_Transmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.Check For Transmog");

	Aarmour_part_base_bp_C_Check_For_Transmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.BPCallableOnDyeChanged
// (BlueprintCallable, BlueprintEvent)

void Aarmour_part_base_bp_C::BPCallableOnDyeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.BPCallableOnDyeChanged");

	Aarmour_part_base_bp_C_BPCallableOnDyeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.OnActorSetHiddenInGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewHidden                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::OnActorSetHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.OnActorSetHiddenInGame");

	Aarmour_part_base_bp_C_OnActorSetHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function armour_part_base_bp.armour_part_base_bp_C.ExecuteUbergraph_armour_part_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aarmour_part_base_bp_C::ExecuteUbergraph_armour_part_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function armour_part_base_bp.armour_part_base_bp_C.ExecuteUbergraph_armour_part_base_bp");

	Aarmour_part_base_bp_C_ExecuteUbergraph_armour_part_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
