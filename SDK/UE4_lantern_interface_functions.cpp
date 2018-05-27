// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_interface.lantern_interface_C.InstantDischargePrimaryInterface
// (Public, BlueprintCallable, BlueprintEvent)

void Ulantern_interface_C::InstantDischargePrimaryInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.InstantDischargePrimaryInterface");

	Ulantern_interface_C_InstantDischargePrimaryInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_interface.lantern_interface_C.GetCurrentSecondaryChargeInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSecondaryCharge         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetCurrentSecondaryChargeInterface(float* CurrentSecondaryCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetCurrentSecondaryChargeInterface");

	Ulantern_interface_C_GetCurrentSecondaryChargeInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSecondaryCharge != nullptr)
		*CurrentSecondaryCharge = params.CurrentSecondaryCharge;
}


// Function lantern_interface.lantern_interface_C.GetSingleChargeCostInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SingleChargeCost               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetSingleChargeCostInterface(float* SingleChargeCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetSingleChargeCostInterface");

	Ulantern_interface_C_GetSingleChargeCostInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SingleChargeCost != nullptr)
		*SingleChargeCost = params.SingleChargeCost;
}


// Function lantern_interface.lantern_interface_C.InstantDischargeSecondaryInterface
// (Public, BlueprintCallable, BlueprintEvent)

void Ulantern_interface_C::InstantDischargeSecondaryInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.InstantDischargeSecondaryInterface");

	Ulantern_interface_C_InstantDischargeSecondaryInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_interface.lantern_interface_C.GetMaximumChargeInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaximumCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetMaximumChargeInterface(float* MaximumCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetMaximumChargeInterface");

	Ulantern_interface_C_GetMaximumChargeInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaximumCharge != nullptr)
		*MaximumCharge = params.MaximumCharge;
}


// Function lantern_interface.lantern_interface_C.StartDischargeInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DischargeDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::StartDischargeInterface(float DischargeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.StartDischargeInterface");

	Ulantern_interface_C_StartDischargeInterface_Params params;
	params.DischargeDuration = DischargeDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_interface.lantern_interface_C.GetPrimaryChargePercentInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetPrimaryChargePercentInterface(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetPrimaryChargePercentInterface");

	Ulantern_interface_C_GetPrimaryChargePercentInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargePercent != nullptr)
		*ChargePercent = params.ChargePercent;
}


// Function lantern_interface.lantern_interface_C.RegisterToModifyAddCharge
// (Public, BlueprintCallable, BlueprintEvent)

void Ulantern_interface_C::RegisterToModifyAddCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.RegisterToModifyAddCharge");

	Ulantern_interface_C_RegisterToModifyAddCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_interface.lantern_interface_C.AddChargeInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::AddChargeInterface(float Charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.AddChargeInterface");

	Ulantern_interface_C_AddChargeInterface_Params params;
	params.Charge = Charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_interface.lantern_interface_C.GetLanternMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetLanternMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetLanternMesh");

	Ulantern_interface_C_GetLanternMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function lantern_interface.lantern_interface_C.GetDischargeLoopEndSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeLoopEndSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeLoopEndSound");

	Ulantern_interface_C_GetDischargeLoopEndSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_interface.lantern_interface_C.GetDischargeEndedSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeEndedSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeEndedSound");

	Ulantern_interface_C_GetDischargeEndedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_interface.lantern_interface_C.GetDischargeEndedEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeEndedEffect(class UParticleSystem** Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeEndedEffect");

	Ulantern_interface_C_GetDischargeEndedEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect != nullptr)
		*Effect = params.Effect;
}


// Function lantern_interface.lantern_interface_C.GetDischargeLoopStartSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeLoopStartSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeLoopStartSound");

	Ulantern_interface_C_GetDischargeLoopStartSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_interface.lantern_interface_C.GetDischargeVO
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeVO(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeVO");

	Ulantern_interface_C_GetDischargeVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_interface.lantern_interface_C.GetDischargeStartedSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       Sound                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeStartedSound(class UAkAudioEventBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeStartedSound");

	Ulantern_interface_C_GetDischargeStartedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sound != nullptr)
		*Sound = params.Sound;
}


// Function lantern_interface.lantern_interface_C.GetDischargeLoopStartEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeLoopStartEffect(class UParticleSystem** Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeLoopStartEffect");

	Ulantern_interface_C_GetDischargeLoopStartEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect != nullptr)
		*Effect = params.Effect;
}


// Function lantern_interface.lantern_interface_C.GetDischargeStartedEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_interface_C::GetDischargeStartedEffect(class UParticleSystem** Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_interface.lantern_interface_C.GetDischargeStartedEffect");

	Ulantern_interface_C_GetDischargeStartedEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect != nullptr)
		*Effect = params.Effect;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
