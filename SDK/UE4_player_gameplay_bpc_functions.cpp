// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_gameplay_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_gameplay_bpc.player_gameplay_bpc_C.AuthStartGameplay
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Ftimed_gameplay_event> TimedGameplayEvents            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Fbeam_request>   Beams                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uplayer_gameplay_bpc_C::AuthStartGameplay(TArray<struct Ftimed_gameplay_event> TimedGameplayEvents, TArray<struct Fbeam_request> Beams)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_gameplay_bpc.player_gameplay_bpc_C.AuthStartGameplay");

	Uplayer_gameplay_bpc_C_AuthStartGameplay_Params params;
	params.TimedGameplayEvents = TimedGameplayEvents;
	params.Beams = Beams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_gameplay_bpc.player_gameplay_bpc_C.AuthStopGameplay
// (BlueprintCallable, BlueprintEvent)

void Uplayer_gameplay_bpc_C::AuthStopGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_gameplay_bpc.player_gameplay_bpc_C.AuthStopGameplay");

	Uplayer_gameplay_bpc_C_AuthStopGameplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_gameplay_bpc.player_gameplay_bpc_C.AuthRegisterGameplayGUID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_gameplay_bpc_C::AuthRegisterGameplayGUID(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_gameplay_bpc.player_gameplay_bpc_C.AuthRegisterGameplayGUID");

	Uplayer_gameplay_bpc_C_AuthRegisterGameplayGUID_Params params;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_gameplay_bpc.player_gameplay_bpc_C.ExecuteUbergraph_player_gameplay_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_gameplay_bpc_C::ExecuteUbergraph_player_gameplay_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_gameplay_bpc.player_gameplay_bpc_C.ExecuteUbergraph_player_gameplay_bpc");

	Uplayer_gameplay_bpc_C_ExecuteUbergraph_player_gameplay_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
