// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_axe_weapon_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function axe_weapon_bpi.axe_weapon_bpi_C.GetCurrentDetermination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Determination                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uaxe_weapon_bpi_C::GetCurrentDetermination(int* Determination)
{
	static auto fn = UObject::FindObject<UFunction>("Function axe_weapon_bpi.axe_weapon_bpi_C.GetCurrentDetermination");

	Uaxe_weapon_bpi_C_GetCurrentDetermination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Determination != nullptr)
		*Determination = params.Determination;
}


// Function axe_weapon_bpi.axe_weapon_bpi_C.SetDeterminationOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DeterminationLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uaxe_weapon_bpi_C::SetDeterminationOverride(int DeterminationLevel, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function axe_weapon_bpi.axe_weapon_bpi_C.SetDeterminationOverride");

	Uaxe_weapon_bpi_C_SetDeterminationOverride_Params params;
	params.DeterminationLevel = DeterminationLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function axe_weapon_bpi.axe_weapon_bpi_C.SetCurrentChargeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentChargeLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uaxe_weapon_bpi_C::SetCurrentChargeLevel(int CurrentChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function axe_weapon_bpi.axe_weapon_bpi_C.SetCurrentChargeLevel");

	Uaxe_weapon_bpi_C_SetCurrentChargeLevel_Params params;
	params.CurrentChargeLevel = CurrentChargeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function axe_weapon_bpi.axe_weapon_bpi_C.GetDeterminationOnHitPerChargeLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    DeterminationOnHitPerChargeLevel (Parm, OutParm, ZeroConstructor)

void Uaxe_weapon_bpi_C::GetDeterminationOnHitPerChargeLevel(TArray<int>* DeterminationOnHitPerChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function axe_weapon_bpi.axe_weapon_bpi_C.GetDeterminationOnHitPerChargeLevel");

	Uaxe_weapon_bpi_C_GetDeterminationOnHitPerChargeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeterminationOnHitPerChargeLevel != nullptr)
		*DeterminationOnHitPerChargeLevel = params.DeterminationOnHitPerChargeLevel;
}


// Function axe_weapon_bpi.axe_weapon_bpi_C.GetCurrentChargeLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChargeLevel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uaxe_weapon_bpi_C::GetCurrentChargeLevel(int* ChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function axe_weapon_bpi.axe_weapon_bpi_C.GetCurrentChargeLevel");

	Uaxe_weapon_bpi_C_GetCurrentChargeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargeLevel != nullptr)
		*ChargeLevel = params.ChargeLevel;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
