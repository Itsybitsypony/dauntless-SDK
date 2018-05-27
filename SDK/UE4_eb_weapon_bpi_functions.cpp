// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_weapon_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_weapon_bpi.eb_weapon_bpi_C.GetUsesBaseWeaponSuperMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueb_weapon_bpi_C::GetUsesBaseWeaponSuperMode(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_weapon_bpi.eb_weapon_bpi_C.GetUsesBaseWeaponSuperMode");

	Ueb_weapon_bpi_C_GetUsesBaseWeaponSuperMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function eb_weapon_bpi.eb_weapon_bpi_C.GetIsInSuperMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueb_weapon_bpi_C::GetIsInSuperMode(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_weapon_bpi.eb_weapon_bpi_C.GetIsInSuperMode");

	Ueb_weapon_bpi_C_GetIsInSuperMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function eb_weapon_bpi.eb_weapon_bpi_C.GetMaxEmberCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxCharge                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueb_weapon_bpi_C::GetMaxEmberCharge(float* MaxCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_weapon_bpi.eb_weapon_bpi_C.GetMaxEmberCharge");

	Ueb_weapon_bpi_C_GetMaxEmberCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxCharge != nullptr)
		*MaxCharge = params.MaxCharge;
}


// Function eb_weapon_bpi.eb_weapon_bpi_C.GetCurrentEmberCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ueb_weapon_bpi_C::GetCurrentEmberCharge(float* CurrentCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_weapon_bpi.eb_weapon_bpi_C.GetCurrentEmberCharge");

	Ueb_weapon_bpi_C_GetCurrentEmberCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCharge != nullptr)
		*CurrentCharge = params.CurrentCharge;
}


// Function eb_weapon_bpi.eb_weapon_bpi_C.Evaluate Ember Charge
// (Public, BlueprintCallable, BlueprintEvent)

void Ueb_weapon_bpi_C::Evaluate_Ember_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_weapon_bpi.eb_weapon_bpi_C.Evaluate Ember Charge");

	Ueb_weapon_bpi_C_Evaluate_Ember_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
