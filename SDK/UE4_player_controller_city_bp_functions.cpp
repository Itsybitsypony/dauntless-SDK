// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_city_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_controller_city_bp.player_controller_city_bp_C.Is Cinematic Playing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aplayer_controller_city_bp_C::Is_Cinematic_Playing()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.Is Cinematic Playing");

	Aplayer_controller_city_bp_C_Is_Cinematic_Playing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_controller_city_bp.player_controller_city_bp_C.MarkReturnToRamsgateComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::MarkReturnToRamsgateComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.MarkReturnToRamsgateComplete");

	Aplayer_controller_city_bp_C_MarkReturnToRamsgateComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.HasSeenReturnToRamsgateCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasSeenCinematic               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_city_bp_C::HasSeenReturnToRamsgateCinematic(bool* HasSeenCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.HasSeenReturnToRamsgateCinematic");

	Aplayer_controller_city_bp_C_HasSeenReturnToRamsgateCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSeenCinematic != nullptr)
		*HasSeenCinematic = params.HasSeenCinematic;
}


// Function player_controller_city_bp.player_controller_city_bp_C.CanShowWelcomeMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aplayer_controller_city_bp_C::CanShowWelcomeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.CanShowWelcomeMessage");

	Aplayer_controller_city_bp_C_CanShowWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_controller_city_bp.player_controller_city_bp_C.ShouldPlayReturnToRamsgateCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldPlayCinematic            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_city_bp_C::ShouldPlayReturnToRamsgateCinematic(bool* ShouldPlayCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.ShouldPlayReturnToRamsgateCinematic");

	Aplayer_controller_city_bp_C_ShouldPlayReturnToRamsgateCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldPlayCinematic != nullptr)
		*ShouldPlayCinematic = params.ShouldPlayCinematic;
}


// Function player_controller_city_bp.player_controller_city_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.UserConstructionScript");

	Aplayer_controller_city_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Toggle Player Ready_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_city_bp_C::InpActEvt_Toggle_Player_Ready_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Toggle Player Ready_K2Node_InputActionEvent_10");

	Aplayer_controller_city_bp_C_InpActEvt_Toggle_Player_Ready_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Dodge_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_city_bp_C::InpActEvt_Dodge_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Dodge_K2Node_InputActionEvent_9");

	Aplayer_controller_city_bp_C_InpActEvt_Dodge_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_city_bp_C::InpActEvt_Primary_Attack_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_8");

	Aplayer_controller_city_bp_C_InpActEvt_Primary_Attack_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_city_bp_C::InpActEvt_Secondary_Attack_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_7");

	Aplayer_controller_city_bp_C_InpActEvt_Secondary_Attack_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Party Options_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_city_bp_C::InpActEvt_Party_Options_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Party Options_K2Node_InputActionEvent_6");

	Aplayer_controller_city_bp_C_InpActEvt_Party_Options_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_city_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.ReceiveTick");

	Aplayer_controller_city_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aplayer_controller_city_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.ReceiveBeginPlay");

	Aplayer_controller_city_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Aplayer_controller_city_bp_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.ReceiveGameplayStart");

	Aplayer_controller_city_bp_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.OnPartyMatchmakingStartedNotification
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::OnPartyMatchmakingStartedNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.OnPartyMatchmakingStartedNotification");

	Aplayer_controller_city_bp_C_OnPartyMatchmakingStartedNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.OnClientQuestSystemReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::OnClientQuestSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.OnClientQuestSystemReady");

	Aplayer_controller_city_bp_C_OnClientQuestSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.OnServerPlaybackStopped
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::OnServerPlaybackStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.OnServerPlaybackStopped");

	Aplayer_controller_city_bp_C_OnServerPlaybackStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.EvaluateCanShowWelcomeMessage
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::EvaluateCanShowWelcomeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.EvaluateCanShowWelcomeMessage");

	Aplayer_controller_city_bp_C_EvaluateCanShowWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.ClientOnQuestSystemReady
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_city_bp_C::ClientOnQuestSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.ClientOnQuestSystemReady");

	Aplayer_controller_city_bp_C_ClientOnQuestSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_city_bp.player_controller_city_bp_C.ExecuteUbergraph_player_controller_city_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_city_bp_C::ExecuteUbergraph_player_controller_city_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_city_bp.player_controller_city_bp_C.ExecuteUbergraph_player_controller_city_bp");

	Aplayer_controller_city_bp_C_ExecuteUbergraph_player_controller_city_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
