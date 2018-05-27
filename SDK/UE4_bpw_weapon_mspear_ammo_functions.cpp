// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_weapon_mspear_ammo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.Get_AetherMat1_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ubpw_weapon_mspear_ammo_C::Get_AetherMat1_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.Get_AetherMat1_ColorAndOpacity_1");

	Ubpw_weapon_mspear_ammo_C_Get_AetherMat1_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_weapon_mspear_ammo_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.GetText_1");

	Ubpw_weapon_mspear_ammo_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Ubpw_weapon_mspear_ammo_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.GetBrush_1");

	Ubpw_weapon_mspear_ammo_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_weapon_mspear_ammo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.Construct");

	Ubpw_weapon_mspear_ammo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.UpdatePip
// (BlueprintCallable, BlueprintEvent)

void Ubpw_weapon_mspear_ammo_C::UpdatePip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.UpdatePip");

	Ubpw_weapon_mspear_ammo_C_UpdatePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.ExecuteUbergraph_bpw_weapon_mspear_ammo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_mspear_ammo_C::ExecuteUbergraph_bpw_weapon_mspear_ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_mspear_ammo.bpw_weapon_mspear_ammo_C.ExecuteUbergraph_bpw_weapon_mspear_ammo");

	Ubpw_weapon_mspear_ammo_C_ExecuteUbergraph_bpw_weapon_mspear_ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
