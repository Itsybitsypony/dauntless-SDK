// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ammo_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ammo_bpc.ammo_bpc_C.AuthReloadNumAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoToReload                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AmmoWeaponScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::AuthReloadNumAmmo(int AmmoToReload, float AmmoWeaponScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthReloadNumAmmo");

	Uammo_bpc_C_AuthReloadNumAmmo_Params params;
	params.AmmoToReload = AmmoToReload;
	params.AmmoWeaponScale = AmmoWeaponScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.GetAmmoIndexScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::GetAmmoIndexScale(int AmmoIndex, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.GetAmmoIndexScale");

	Uammo_bpc_C_GetAmmoIndexScale_Params params;
	params.AmmoIndex = AmmoIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function ammo_bpc.ammo_bpc_C.ClampMeterScaleToAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::ClampMeterScaleToAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ClampMeterScaleToAmmo");

	Uammo_bpc_C_ClampMeterScaleToAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.DebugOutputAmmoScale
// (Public, BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::DebugOutputAmmoScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.DebugOutputAmmoScale");

	Uammo_bpc_C_DebugOutputAmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.AuthSetAmmoIndexMeterScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::AuthSetAmmoIndexMeterScale(float Scale, int AmmoIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthSetAmmoIndexMeterScale");

	Uammo_bpc_C_AuthSetAmmoIndexMeterScale_Params params;
	params.Scale = Scale;
	params.AmmoIndex = AmmoIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.AuthReloadWeaponWithAmmoScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::AuthReloadWeaponWithAmmoScale(float AmmoScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthReloadWeaponWithAmmoScale");

	Uammo_bpc_C_AuthReloadWeaponWithAmmoScale_Params params;
	params.AmmoScale = AmmoScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.GetCurrentAmmoScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::GetCurrentAmmoScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.GetCurrentAmmoScale");

	Uammo_bpc_C_GetCurrentAmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function ammo_bpc.ammo_bpc_C.OnRep_AmmoMeterScale
// (BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::OnRep_AmmoMeterScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.OnRep_AmmoMeterScale");

	Uammo_bpc_C_OnRep_AmmoMeterScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.AuthRemoveCurrentAmmoMeterScaleIndex
// (Public, BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::AuthRemoveCurrentAmmoMeterScaleIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthRemoveCurrentAmmoMeterScaleIndex");

	Uammo_bpc_C_AuthRemoveCurrentAmmoMeterScaleIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.AuthSetCurrentMeterScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::AuthSetCurrentMeterScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthSetCurrentMeterScale");

	Uammo_bpc_C_AuthSetCurrentMeterScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.OnRep_CurrentAmmoCount
// (BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::OnRep_CurrentAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.OnRep_CurrentAmmoCount");

	Uammo_bpc_C_OnRep_CurrentAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.IsAmmoDepleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutOfAmmo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::IsAmmoDepleted(bool* OutOfAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.IsAmmoDepleted");

	Uammo_bpc_C_IsAmmoDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOfAmmo != nullptr)
		*OutOfAmmo = params.OutOfAmmo;
}


// Function ammo_bpc.ammo_bpc_C.AuthReloadWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::AuthReloadWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthReloadWeapon");

	Uammo_bpc_C_AuthReloadWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.AuthAdjustAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoAdjustment                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::AuthAdjustAmmoCount(int AmmoAdjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthAdjustAmmoCount");

	Uammo_bpc_C_AuthAdjustAmmoCount_Params params;
	params.AmmoAdjustment = AmmoAdjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.AuthSetAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::AuthSetAmmoCount(int Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.AuthSetAmmoCount");

	Uammo_bpc_C_AuthSetAmmoCount_Params params;
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uammo_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ReceiveBeginPlay");

	Uammo_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ReceiveTick");

	Uammo_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.ExecuteUbergraph_ammo_bpc
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::ExecuteUbergraph_ammo_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ExecuteUbergraph_ammo_bpc");

	Uammo_bpc_C_ExecuteUbergraph_ammo_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.ServerOnAmmoAdjustedPreClamp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::ServerOnAmmoAdjustedPreClamp__DelegateSignature(int OldAmmoCount, int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ServerOnAmmoAdjustedPreClamp__DelegateSignature");

	Uammo_bpc_C_ServerOnAmmoAdjustedPreClamp__DelegateSignature_Params params;
	params.OldAmmoCount = OldAmmoCount;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.OnAmmoMeterScaleUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::OnAmmoMeterScaleUpdated__DelegateSignature(float Scale, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.OnAmmoMeterScaleUpdated__DelegateSignature");

	Uammo_bpc_C_OnAmmoMeterScaleUpdated__DelegateSignature_Params params;
	params.Scale = Scale;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.ServerOnReloadWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uammo_bpc_C::ServerOnReloadWeapon__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ServerOnReloadWeapon__DelegateSignature");

	Uammo_bpc_C_ServerOnReloadWeapon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.ServerOnAmmoAdjusted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AdjustedAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::ServerOnAmmoAdjusted__DelegateSignature(int AdjustedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.ServerOnAmmoAdjusted__DelegateSignature");

	Uammo_bpc_C_ServerOnAmmoAdjusted__DelegateSignature_Params params;
	params.AdjustedAmount = AdjustedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ammo_bpc.ammo_bpc_C.OnAmmoCountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uammo_bpc_C::OnAmmoCountChanged__DelegateSignature(int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ammo_bpc.ammo_bpc_C.OnAmmoCountChanged__DelegateSignature");

	Uammo_bpc_C_OnAmmoCountChanged__DelegateSignature_Params params;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
