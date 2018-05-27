// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_aiming_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_aiming_bpc.player_aiming_bpc_C.Client_StartAiming
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fplayer_aim_request     AimRequest                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Uplayer_aiming_bpc_C::Client_StartAiming(const struct Fplayer_aim_request& AimRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_aiming_bpc.player_aiming_bpc_C.Client_StartAiming");

	Uplayer_aiming_bpc_C_Client_StartAiming_Params params;
	params.AimRequest = AimRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_aiming_bpc.player_aiming_bpc_C.Client_StopAiming
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Uplayer_aiming_bpc_C::Client_StopAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_aiming_bpc.player_aiming_bpc_C.Client_StopAiming");

	Uplayer_aiming_bpc_C_Client_StopAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_aiming_bpc.player_aiming_bpc_C.Internal_SetAimState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_aiming_state> NewAimState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_aiming_bpc_C::Internal_SetAimState(TEnumAsByte<Eplayer_aiming_state> NewAimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_aiming_bpc.player_aiming_bpc_C.Internal_SetAimState");

	Uplayer_aiming_bpc_C_Internal_SetAimState_Params params;
	params.NewAimState = NewAimState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_aiming_bpc.player_aiming_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_aiming_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_aiming_bpc.player_aiming_bpc_C.ReceiveTick");

	Uplayer_aiming_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_aiming_bpc.player_aiming_bpc_C.ExecuteUbergraph_player_aiming_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_aiming_bpc_C::ExecuteUbergraph_player_aiming_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_aiming_bpc.player_aiming_bpc_C.ExecuteUbergraph_player_aiming_bpc");

	Uplayer_aiming_bpc_C_ExecuteUbergraph_player_aiming_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
