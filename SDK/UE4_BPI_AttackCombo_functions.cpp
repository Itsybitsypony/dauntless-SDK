// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_AttackCombo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_AttackCombo.BPI_AttackCombo_C.GetInputActionKeyHeld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PrimaryAttackHeld              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SecondaryAttackHeld            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SpecialAttackHeld              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AttackCombo_C::GetInputActionKeyHeld(bool* PrimaryAttackHeld, bool* SecondaryAttackHeld, bool* SpecialAttackHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AttackCombo.BPI_AttackCombo_C.GetInputActionKeyHeld");

	UBPI_AttackCombo_C_GetInputActionKeyHeld_Params params;

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


// Function BPI_AttackCombo.BPI_AttackCombo_C.ServerTellClient_StartNextMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_AttackCombo_C::ServerTellClient_StartNextMove(const struct FComboInputBuffer& ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AttackCombo.BPI_AttackCombo_C.ServerTellClient_StartNextMove");

	UBPI_AttackCombo_C_ServerTellClient_StartNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AttackCombo.BPI_AttackCombo_C.GetDefaultWarpSmoothing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Smoothing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_AttackCombo_C::GetDefaultWarpSmoothing(float* Smoothing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AttackCombo.BPI_AttackCombo_C.GetDefaultWarpSmoothing");

	UBPI_AttackCombo_C_GetDefaultWarpSmoothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Smoothing != nullptr)
		*Smoothing = params.Smoothing;
}


// Function BPI_AttackCombo.BPI_AttackCombo_C.SetWarpSmoothing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Smoothing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AttackCombo_C::SetWarpSmoothing(float Smoothing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AttackCombo.BPI_AttackCombo_C.SetWarpSmoothing");

	UBPI_AttackCombo_C_SetWarpSmoothing_Params params;
	params.Smoothing = Smoothing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AttackCombo.BPI_AttackCombo_C.Set Slow Charge State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Slow_State_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AttackCombo_C::Set_Slow_Charge_State(bool Slow_State_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AttackCombo.BPI_AttackCombo_C.Set Slow Charge State");

	UBPI_AttackCombo_C_Set_Slow_Charge_State_Params params;
	params.Slow_State_ = Slow_State_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_AttackCombo.BPI_AttackCombo_C.ApplyHitPause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitPauseDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_AttackCombo_C::ApplyHitPause(float HitPauseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AttackCombo.BPI_AttackCombo_C.ApplyHitPause");

	UBPI_AttackCombo_C_ApplyHitPause_Params params;
	params.HitPauseDuration = HitPauseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
