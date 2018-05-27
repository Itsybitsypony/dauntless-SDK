// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mspear_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mspear_interface.mspear_interface_C.GetMeter_AmmoQualityRanges
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoQualityThresh_1            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_2            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_3            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_4            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_5            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoMax                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umspear_interface_C::GetMeter_AmmoQualityRanges(float* AmmoQualityThresh_1, float* AmmoQualityThresh_2, float* AmmoQualityThresh_3, float* AmmoQualityThresh_4, float* AmmoQualityThresh_5, int* AmmoMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_interface.mspear_interface_C.GetMeter_AmmoQualityRanges");

	Umspear_interface_C_GetMeter_AmmoQualityRanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoQualityThresh_1 != nullptr)
		*AmmoQualityThresh_1 = params.AmmoQualityThresh_1;
	if (AmmoQualityThresh_2 != nullptr)
		*AmmoQualityThresh_2 = params.AmmoQualityThresh_2;
	if (AmmoQualityThresh_3 != nullptr)
		*AmmoQualityThresh_3 = params.AmmoQualityThresh_3;
	if (AmmoQualityThresh_4 != nullptr)
		*AmmoQualityThresh_4 = params.AmmoQualityThresh_4;
	if (AmmoQualityThresh_5 != nullptr)
		*AmmoQualityThresh_5 = params.AmmoQualityThresh_5;
	if (AmmoMax != nullptr)
		*AmmoMax = params.AmmoMax;
}


// Function mspear_interface.mspear_interface_C.GetLastFiredShotAmmoScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          LastFiredShotAmmoScale         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umspear_interface_C::GetLastFiredShotAmmoScale(float* LastFiredShotAmmoScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_interface.mspear_interface_C.GetLastFiredShotAmmoScale");

	Umspear_interface_C_GetLastFiredShotAmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastFiredShotAmmoScale != nullptr)
		*LastFiredShotAmmoScale = params.LastFiredShotAmmoScale;
}


// Function mspear_interface.mspear_interface_C.GetCurrentMeterAmmoQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAmmoQuality             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umspear_interface_C::GetCurrentMeterAmmoQuality(float* CurrentAmmoQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_interface.mspear_interface_C.GetCurrentMeterAmmoQuality");

	Umspear_interface_C_GetCurrentMeterAmmoQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoQuality != nullptr)
		*CurrentAmmoQuality = params.CurrentAmmoQuality;
}


// Function mspear_interface.mspear_interface_C.GetMeterGainScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umspear_interface_C::GetMeterGainScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_interface.mspear_interface_C.GetMeterGainScale");

	Umspear_interface_C_GetMeterGainScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function mspear_interface.mspear_interface_C.GetRangedModeTunables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fmspear_tunables_str    Tunables                       (Parm, OutParm)

void Umspear_interface_C::GetRangedModeTunables(struct Fmspear_tunables_str* Tunables)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_interface.mspear_interface_C.GetRangedModeTunables");

	Umspear_interface_C_GetRangedModeTunables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tunables != nullptr)
		*Tunables = params.Tunables;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
