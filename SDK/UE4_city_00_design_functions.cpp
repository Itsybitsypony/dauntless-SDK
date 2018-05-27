// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_00_design_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function city_00_design.city_00_design_C.UnSpawnCityBots
// (BlueprintCallable, BlueprintEvent)

void Acity_00_design_C::UnSpawnCityBots()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_design.city_00_design_C.UnSpawnCityBots");

	Acity_00_design_C_UnSpawnCityBots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_00_design.city_00_design_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acity_00_design_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_design.city_00_design_C.ReceiveBeginPlay");

	Acity_00_design_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_00_design.city_00_design_C.SpawnCityBots
// (BlueprintCallable, BlueprintEvent)

void Acity_00_design_C::SpawnCityBots()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_design.city_00_design_C.SpawnCityBots");

	Acity_00_design_C_SpawnCityBots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_00_design.city_00_design_C.ExecuteUbergraph_city_00_design
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_00_design_C::ExecuteUbergraph_city_00_design(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_design.city_00_design_C.ExecuteUbergraph_city_00_design");

	Acity_00_design_C_ExecuteUbergraph_city_00_design_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
