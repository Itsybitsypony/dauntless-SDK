// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_fire_bomb_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.DidNotSpawn_425A75904401FE80073938BECC2FAF33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_fire_bomb_ab_C::DidNotSpawn_425A75904401FE80073938BECC2FAF33(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.DidNotSpawn_425A75904401FE80073938BECC2FAF33");

	Ulanternhold_fire_bomb_ab_C_DidNotSpawn_425A75904401FE80073938BECC2FAF33_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.Success_425A75904401FE80073938BECC2FAF33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_fire_bomb_ab_C::Success_425A75904401FE80073938BECC2FAF33(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.Success_425A75904401FE80073938BECC2FAF33");

	Ulanternhold_fire_bomb_ab_C_Success_425A75904401FE80073938BECC2FAF33_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ulanternhold_fire_bomb_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.K2_ActivateAbility");

	Ulanternhold_fire_bomb_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.ExecuteUbergraph_lanternhold_fire_bomb_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_fire_bomb_ab_C::ExecuteUbergraph_lanternhold_fire_bomb_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_fire_bomb_ab.lanternhold_fire_bomb_ab_C.ExecuteUbergraph_lanternhold_fire_bomb_ab");

	Ulanternhold_fire_bomb_ab_C_ExecuteUbergraph_lanternhold_fire_bomb_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
