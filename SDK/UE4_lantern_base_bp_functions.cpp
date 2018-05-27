// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_base_bp.lantern_base_bp_C.GetCurrentSecondaryChargeInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSecondaryCharge         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetCurrentSecondaryChargeInterface(float* CurrentSecondaryCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetCurrentSecondaryChargeInterface");

	Alantern_base_bp_C_GetCurrentSecondaryChargeInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSecondaryCharge != nullptr)
		*CurrentSecondaryCharge = params.CurrentSecondaryCharge;
}


// Function lantern_base_bp.lantern_base_bp_C.GetSingleChargeCostInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SingleChargeCost               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetSingleChargeCostInterface(float* SingleChargeCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetSingleChargeCostInterface");

	Alantern_base_bp_C_GetSingleChargeCostInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SingleChargeCost != nullptr)
		*SingleChargeCost = params.SingleChargeCost;
}


// Function lantern_base_bp.lantern_base_bp_C.GetMaximumChargeInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaximumCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetMaximumChargeInterface(float* MaximumCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetMaximumChargeInterface");

	Alantern_base_bp_C_GetMaximumChargeInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaximumCharge != nullptr)
		*MaximumCharge = params.MaximumCharge;
}


// Function lantern_base_bp.lantern_base_bp_C.GetPrimaryChargePercentInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetPrimaryChargePercentInterface(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetPrimaryChargePercentInterface");

	Alantern_base_bp_C_GetPrimaryChargePercentInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function lantern_base_bp.lantern_base_bp_C.GetLanternMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetLanternMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetLanternMesh");

	Alantern_base_bp_C_GetLanternMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeEndedSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeEndedSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeEndedSound");

	Alantern_base_bp_C_GetDischargeEndedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopEndSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeLoopEndSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopEndSound");

	Alantern_base_bp_C_GetDischargeLoopEndSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeEndedEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeEndedEffect(class UParticleSystem** Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeEndedEffect");

	Alantern_base_bp_C_GetDischargeEndedEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect != nullptr)
		*Effect = params.Effect;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopStartSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeLoopStartSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopStartSound");

	Alantern_base_bp_C_GetDischargeLoopStartSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeVO
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeVO(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeVO");

	Alantern_base_bp_C_GetDischargeVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeStartedSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeStartedSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeStartedSound");

	Alantern_base_bp_C_GetDischargeStartedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopStartEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeLoopStartEffect(class UParticleSystem** Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopStartEffect");

	Alantern_base_bp_C_GetDischargeLoopStartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect != nullptr)
		*Effect = params.Effect;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDischargeStartedEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDischargeStartedEffect(class UParticleSystem** Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDischargeStartedEffect");

	Alantern_base_bp_C_GetDischargeStartedEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect != nullptr)
		*Effect = params.Effect;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDefaultPrimaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDefaultPrimaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDefaultPrimaryDye");

	Alantern_base_bp_C_GetDefaultPrimaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function lantern_base_bp.lantern_base_bp_C.GetDefaultSecondaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetDefaultSecondaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetDefaultSecondaryDye");

	Alantern_base_bp_C_GetDefaultSecondaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function lantern_base_bp.lantern_base_bp_C.GetPresentationInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USkeletalMesh> SkeletalMesh                   (Parm, OutParm)
// struct FVector                 DisplayOffset                  (Parm, OutParm, IsPlainOldData)

void Alantern_base_bp_C::GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetPresentationInfo");

	Alantern_base_bp_C_GetPresentationInfo_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (DisplayOffset != nullptr)
		*DisplayOffset = params.DisplayOffset;
}


// Function lantern_base_bp.lantern_base_bp_C.OutputDebugInformation
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent, Const)

void Alantern_base_bp_C::OutputDebugInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.OutputDebugInformation");

	Alantern_base_bp_C_OutputDebugInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.HasFinishedLoading
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Alantern_base_bp_C::HasFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.HasFinishedLoading");

	Alantern_base_bp_C_HasFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lantern_base_bp.lantern_base_bp_C.GetSecondaryChargeCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetSecondaryChargeCount(int* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetSecondaryChargeCount");

	Alantern_base_bp_C_GetSecondaryChargeCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function lantern_base_bp.lantern_base_bp_C.GetSecondaryChargePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetSecondaryChargePercent(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetSecondaryChargePercent");

	Alantern_base_bp_C_GetSecondaryChargePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function lantern_base_bp.lantern_base_bp_C.ResetChargeRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::ResetChargeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.ResetChargeRate");

	Alantern_base_bp_C_ResetChargeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.InstantDischargeSecondary
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::InstantDischargeSecondary(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.InstantDischargeSecondary");

	Alantern_base_bp_C_InstantDischargeSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function lantern_base_bp.lantern_base_bp_C.InstantDischargePrimary
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::InstantDischargePrimary(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.InstantDischargePrimary");

	Alantern_base_bp_C_InstantDischargePrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function lantern_base_bp.lantern_base_bp_C.LookupSetItemTableRow
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FArmourSetItemResistanceTableData OutResistanceTableRow          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Alantern_base_bp_C::LookupSetItemTableRow(struct FName* RowName, struct FArmourSetItemResistanceTableData* OutResistanceTableRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.LookupSetItemTableRow");

	Alantern_base_bp_C_LookupSetItemTableRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
	if (OutResistanceTableRow != nullptr)
		*OutResistanceTableRow = params.OutResistanceTableRow;

	return params.ReturnValue;
}


// Function lantern_base_bp.lantern_base_bp_C.LookupLanternResistanceTableRow
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLanternResistanceTableData OutResistanceTableRow          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Alantern_base_bp_C::LookupLanternResistanceTableRow(struct FName* RowName, struct FLanternResistanceTableData* OutResistanceTableRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.LookupLanternResistanceTableRow");

	Alantern_base_bp_C_LookupLanternResistanceTableRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
	if (OutResistanceTableRow != nullptr)
		*OutResistanceTableRow = params.OutResistanceTableRow;

	return params.ReturnValue;
}


// Function lantern_base_bp.lantern_base_bp_C.GetLanternSkelMeshPtr
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class USkeletalMesh> ReturnValue                    (Parm, OutParm, ReturnParm)

TAssetPtr<class USkeletalMesh> Alantern_base_bp_C::GetLanternSkelMeshPtr()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetLanternSkelMeshPtr");

	Alantern_base_bp_C_GetLanternSkelMeshPtr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lantern_base_bp.lantern_base_bp_C.SetTierAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::SetTierAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.SetTierAttributes");

	Alantern_base_bp_C_SetTierAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.GetIsDischarging
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDischarging                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetIsDischarging(bool* IsDischarging)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetIsDischarging");

	Alantern_base_bp_C_GetIsDischarging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDischarging != nullptr)
		*IsDischarging = params.IsDischarging;
}


// Function lantern_base_bp.lantern_base_bp_C.OnDamageGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::OnDamageGiven(class AActor* DamageTarget, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.OnDamageGiven");

	Alantern_base_bp_C_OnDamageGiven_Params params;
	params.DamageTarget = DamageTarget;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.StartDischarge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DischargeDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::StartDischarge(float DischargeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.StartDischarge");

	Alantern_base_bp_C_StartDischarge_Params params;
	params.DischargeDuration = DischargeDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.GetPrimaryChargePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::GetPrimaryChargePercent(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.GetPrimaryChargePercent");

	Alantern_base_bp_C_GetPrimaryChargePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function lantern_base_bp.lantern_base_bp_C.AddCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::AddCharge(float Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.AddCharge");

	Alantern_base_bp_C_AddCharge_Params params;
	params.Charge = Charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.UserConstructionScript");

	Alantern_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.lerp_timeline__FinishedFunc
// (BlueprintEvent)

void Alantern_base_bp_C::lerp_timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.lerp_timeline__FinishedFunc");

	Alantern_base_bp_C_lerp_timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.lerp_timeline__UpdateFunc
// (BlueprintEvent)

void Alantern_base_bp_C::lerp_timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.lerp_timeline__UpdateFunc");

	Alantern_base_bp_C_lerp_timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5");

	Alantern_base_bp_C_OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.RegisterToModifyAddCharge
// (Public, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::RegisterToModifyAddCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.RegisterToModifyAddCharge");

	Alantern_base_bp_C_RegisterToModifyAddCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Alantern_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.ReceiveBeginPlay");

	Alantern_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.Flicker Light
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::Flicker_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.Flicker Light");

	Alantern_base_bp_C_Flicker_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.BP_OnLanternEquipped
// (Event, Public, BlueprintEvent)

void Alantern_base_bp_C::BP_OnLanternEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.BP_OnLanternEquipped");

	Alantern_base_bp_C_BP_OnLanternEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.BP_OnLanternUnEquipped
// (Event, Public, BlueprintEvent)

void Alantern_base_bp_C::BP_OnLanternUnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.BP_OnLanternUnEquipped");

	Alantern_base_bp_C_BP_OnLanternUnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.Event OnFullyCharged
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::Event_OnFullyCharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.Event OnFullyCharged");

	Alantern_base_bp_C_Event_OnFullyCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.Event OnDischargeEnded
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::Event_OnDischargeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.Event OnDischargeEnded");

	Alantern_base_bp_C_Event_OnDischargeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.ReceiveTick");

	Alantern_base_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.Event OnChargeAdded
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargeAdded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::Event_OnChargeAdded(float ChargeAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.Event OnChargeAdded");

	Alantern_base_bp_C_Event_OnChargeAdded_Params params;
	params.ChargeAdded = ChargeAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Alantern_base_bp_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.ReceiveGameplayStart");

	Alantern_base_bp_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.Check For Transmog
// (BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::Check_For_Transmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.Check For Transmog");

	Alantern_base_bp_C_Check_For_Transmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.ReEquip
// (BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::ReEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.ReEquip");

	Alantern_base_bp_C_ReEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.StopDischarge
// (BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::StopDischarge()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.StopDischarge");

	Alantern_base_bp_C_StopDischarge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.OnOwnerHiddenInGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewHidden                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::OnOwnerHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.OnOwnerHiddenInGame");

	Alantern_base_bp_C_OnOwnerHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.AddChargeInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::AddChargeInterface(float Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.AddChargeInterface");

	Alantern_base_bp_C_AddChargeInterface_Params params;
	params.Charge = Charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.StartDischargeInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DischargeDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::StartDischargeInterface(float DischargeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.StartDischargeInterface");

	Alantern_base_bp_C_StartDischargeInterface_Params params;
	params.DischargeDuration = DischargeDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.InstantDischargeSecondaryInterface
// (Public, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::InstantDischargeSecondaryInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.InstantDischargeSecondaryInterface");

	Alantern_base_bp_C_InstantDischargeSecondaryInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.InstantDischargePrimaryInterface
// (Public, BlueprintCallable, BlueprintEvent)

void Alantern_base_bp_C::InstantDischargePrimaryInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.InstantDischargePrimaryInterface");

	Alantern_base_bp_C_InstantDischargePrimaryInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.ExecuteUbergraph_lantern_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::ExecuteUbergraph_lantern_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.ExecuteUbergraph_lantern_base_bp");

	Alantern_base_bp_C_ExecuteUbergraph_lantern_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_base_bp.lantern_base_bp_C.OnAddLanternChargeModifyHook__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_base_bp_C::OnAddLanternChargeModifyHook__DelegateSignature(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_base_bp.lantern_base_bp_C.OnAddLanternChargeModifyHook__DelegateSignature");

	Alantern_base_bp_C_OnAddLanternChargeModifyHook__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
