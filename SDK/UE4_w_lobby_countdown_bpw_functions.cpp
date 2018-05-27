// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_countdown_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_lobby_countdown_bpw.w_lobby_countdown_bpw_C.LobbyIslandCountdownTimer
// (BlueprintCallable, BlueprintEvent)

void Uw_lobby_countdown_bpw_C::LobbyIslandCountdownTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_countdown_bpw.w_lobby_countdown_bpw_C.LobbyIslandCountdownTimer");

	Uw_lobby_countdown_bpw_C_LobbyIslandCountdownTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_countdown_bpw.w_lobby_countdown_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_lobby_countdown_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_countdown_bpw.w_lobby_countdown_bpw_C.Construct");

	Uw_lobby_countdown_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_countdown_bpw.w_lobby_countdown_bpw_C.ExecuteUbergraph_w_lobby_countdown_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_countdown_bpw_C::ExecuteUbergraph_w_lobby_countdown_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_countdown_bpw.w_lobby_countdown_bpw_C.ExecuteUbergraph_w_lobby_countdown_bpw");

	Uw_lobby_countdown_bpw_C_ExecuteUbergraph_w_lobby_countdown_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
