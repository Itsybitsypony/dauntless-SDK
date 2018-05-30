// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_telemetry_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_telemetry_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.ReceiveTick");

	Uplayer_controller_telemetry_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_telemetry_component.player_controller_telemetry_component_C.On Set Dye Colour
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_Armour* Armour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDyeVariant             NewDyeConfiguration            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uplayer_controller_telemetry_component_C::On_Set_Dye_Colour(class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& NewDyeConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.On Set Dye Colour");

	Uplayer_controller_telemetry_component_C_On_Set_Dye_Colour_Params params;
	params.Armour = Armour;
	params.NewDyeConfiguration = NewDyeConfiguration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchMakingStarted
// (BlueprintCallable, BlueprintEvent)

void Uplayer_controller_telemetry_component_C::MatchMakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchMakingStarted");

	Uplayer_controller_telemetry_component_C_MatchMakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingFailed
// (BlueprintCallable, BlueprintEvent)

void Uplayer_controller_telemetry_component_C::MatchmakingFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingFailed");

	Uplayer_controller_telemetry_component_C_MatchmakingFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingCanceled
// (BlueprintCallable, BlueprintEvent)

void Uplayer_controller_telemetry_component_C::MatchmakingCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingCanceled");

	Uplayer_controller_telemetry_component_C_MatchmakingCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingSuccess
// (BlueprintCallable, BlueprintEvent)

void Uplayer_controller_telemetry_component_C::MatchmakingSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingSuccess");

	Uplayer_controller_telemetry_component_C_MatchmakingSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_telemetry_component.player_controller_telemetry_component_C.ExecuteUbergraph_player_controller_telemetry_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_telemetry_component_C::ExecuteUbergraph_player_controller_telemetry_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_telemetry_component.player_controller_telemetry_component_C.ExecuteUbergraph_player_controller_telemetry_component");

	Uplayer_controller_telemetry_component_C_ExecuteUbergraph_player_controller_telemetry_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
