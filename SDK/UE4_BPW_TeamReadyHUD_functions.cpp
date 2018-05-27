// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_TeamReadyHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Get Ready Button Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_TeamReadyHUD_C::Get_Ready_Button_Label()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Get Ready Button Label");

	UBPW_TeamReadyHUD_C_Get_Ready_Button_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Update Party Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobby            Lobby_Info                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_TeamReadyHUD_C::Update_Party_Info(const struct FArchonLobby& Lobby_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Update Party Info");

	UBPW_TeamReadyHUD_C_Update_Party_Info_Params params;
	params.Lobby_Info = Lobby_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_TeamReadyHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Construct");

	UBPW_TeamReadyHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.SetTeamStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumReady                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_TeamReadyHUD_C::SetTeamStatus(int NumReady, int TeamSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.SetTeamStatus");

	UBPW_TeamReadyHUD_C_SetTeamStatus_Params params;
	params.NumReady = NumReady;
	params.TeamSize = TeamSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.SetLaunchReadiness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLaunchReady                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_TeamReadyHUD_C::SetLaunchReadiness(bool bLaunchReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.SetLaunchReadiness");

	UBPW_TeamReadyHUD_C_SetLaunchReadiness_Params params;
	params.bLaunchReady = bLaunchReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.RegisterLobbyClientDelegates
// (BlueprintCallable, BlueprintEvent)

void UBPW_TeamReadyHUD_C::RegisterLobbyClientDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.RegisterLobbyClientDelegates");

	UBPW_TeamReadyHUD_C_RegisterLobbyClientDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.On Lobby Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobby            CurrentLobbyInfo               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPW_TeamReadyHUD_C::On_Lobby_Changed(const struct FArchonLobby& CurrentLobbyInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.On Lobby Changed");

	UBPW_TeamReadyHUD_C_On_Lobby_Changed_Params params;
	params.CurrentLobbyInfo = CurrentLobbyInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Show Ready HUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Show                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_TeamReadyHUD_C::Show_Ready_HUD(bool Should_Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Show Ready HUD");

	UBPW_TeamReadyHUD_C_Show_Ready_HUD_Params params;
	params.Should_Show = Should_Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Matchmaking Start
// (BlueprintCallable, BlueprintEvent)

void UBPW_TeamReadyHUD_C::Matchmaking_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Matchmaking Start");

	UBPW_TeamReadyHUD_C_Matchmaking_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Matchmaking End
// (BlueprintCallable, BlueprintEvent)

void UBPW_TeamReadyHUD_C::Matchmaking_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Matchmaking End");

	UBPW_TeamReadyHUD_C_Matchmaking_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.ExecuteUbergraph_BPW_TeamReadyHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_TeamReadyHUD_C::ExecuteUbergraph_BPW_TeamReadyHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.ExecuteUbergraph_BPW_TeamReadyHUD");

	UBPW_TeamReadyHUD_C_ExecuteUbergraph_BPW_TeamReadyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
