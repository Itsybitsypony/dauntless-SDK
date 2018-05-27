// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_eblade_animbp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.GetAtmosphereSpawner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aatmosphere_spawner_bp_C* Atmosphere_Spawner             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_combat_eblade_animbp_C::GetAtmosphereSpawner(class Aatmosphere_spawner_bp_C** Atmosphere_Spawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.GetAtmosphereSpawner");

	Uplayer_combat_eblade_animbp_C_GetAtmosphereSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Atmosphere_Spawner != nullptr)
		*Atmosphere_Spawner = params.Atmosphere_Spawner;
}


// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_combat_eblade_animbp_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.BlueprintUpdateAnimation");

	Uplayer_combat_eblade_animbp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.OnAtmosphereChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAtmosphereBase*         SpawnedAtmosphere              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_combat_eblade_animbp_C::OnAtmosphereChanged(class AAtmosphereBase* SpawnedAtmosphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.OnAtmosphereChanged");

	Uplayer_combat_eblade_animbp_C_OnAtmosphereChanged_Params params;
	params.SpawnedAtmosphere = SpawnedAtmosphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.ExecuteUbergraph_player_combat_eblade_animbp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_combat_eblade_animbp_C::ExecuteUbergraph_player_combat_eblade_animbp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.ExecuteUbergraph_player_combat_eblade_animbp");

	Uplayer_combat_eblade_animbp_C_ExecuteUbergraph_player_combat_eblade_animbp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
