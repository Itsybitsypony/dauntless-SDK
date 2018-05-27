// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AetherVentChargeAbility_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AetherVentChargeAbility.AetherVentChargeAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAetherVentChargeAbility_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AetherVentChargeAbility.AetherVentChargeAbility_C.K2_ActivateAbility");

	UAetherVentChargeAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AetherVentChargeAbility.AetherVentChargeAbility_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UAetherVentChargeAbility_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AetherVentChargeAbility.AetherVentChargeAbility_C.K2_OnEndAbility");

	UAetherVentChargeAbility_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AetherVentChargeAbility.AetherVentChargeAbility_C.ExecuteUbergraph_AetherVentChargeAbility
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAetherVentChargeAbility_C::ExecuteUbergraph_AetherVentChargeAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AetherVentChargeAbility.AetherVentChargeAbility_C.ExecuteUbergraph_AetherVentChargeAbility");

	UAetherVentChargeAbility_C_ExecuteUbergraph_AetherVentChargeAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
