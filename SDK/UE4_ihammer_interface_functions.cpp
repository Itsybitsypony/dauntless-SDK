// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ihammer_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ihammer_interface.ihammer_interface_C.AuthBroadcastInstantReloadEffects
// (Public, BlueprintCallable, BlueprintEvent)

void Uihammer_interface_C::AuthBroadcastInstantReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ihammer_interface.ihammer_interface_C.AuthBroadcastInstantReloadEffects");

	Uihammer_interface_C_AuthBroadcastInstantReloadEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ihammer_interface.ihammer_interface_C.ReloadVFX
// (Public, BlueprintCallable, BlueprintEvent)

void Uihammer_interface_C::ReloadVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ihammer_interface.ihammer_interface_C.ReloadVFX");

	Uihammer_interface_C_ReloadVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ihammer_interface.ihammer_interface_C.IsAmmoShellPrimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPrimed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uihammer_interface_C::IsAmmoShellPrimed(bool* IsPrimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ihammer_interface.ihammer_interface_C.IsAmmoShellPrimed");

	Uihammer_interface_C_IsAmmoShellPrimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPrimed != nullptr)
		*IsPrimed = params.IsPrimed;
}


// Function ihammer_interface.ihammer_interface_C.RemovePrimedAmmoShell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uihammer_interface_C::RemovePrimedAmmoShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function ihammer_interface.ihammer_interface_C.RemovePrimedAmmoShell");

	Uihammer_interface_C_RemovePrimedAmmoShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ihammer_interface.ihammer_interface_C.PrimeAmmoShell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uihammer_interface_C::PrimeAmmoShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function ihammer_interface.ihammer_interface_C.PrimeAmmoShell");

	Uihammer_interface_C_PrimeAmmoShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
