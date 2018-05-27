#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_TeamReadyHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Get Ready Button Label
struct UBPW_TeamReadyHUD_C_Get_Ready_Button_Label_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Update Party Info
struct UBPW_TeamReadyHUD_C_Update_Party_Info_Params
{
	struct FArchonLobby                                Lobby_Info;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Construct
struct UBPW_TeamReadyHUD_C_Construct_Params
{
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.SetTeamStatus
struct UBPW_TeamReadyHUD_C_SetTeamStatus_Params
{
	int                                                NumReady;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.SetLaunchReadiness
struct UBPW_TeamReadyHUD_C_SetLaunchReadiness_Params
{
	bool                                               bLaunchReady;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.RegisterLobbyClientDelegates
struct UBPW_TeamReadyHUD_C_RegisterLobbyClientDelegates_Params
{
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.On Lobby Changed
struct UBPW_TeamReadyHUD_C_On_Lobby_Changed_Params
{
	struct FArchonLobby                                CurrentLobbyInfo;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Show Ready HUD
struct UBPW_TeamReadyHUD_C_Show_Ready_HUD_Params
{
	bool                                               Should_Show;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Matchmaking Start
struct UBPW_TeamReadyHUD_C_Matchmaking_Start_Params
{
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.Matchmaking End
struct UBPW_TeamReadyHUD_C_Matchmaking_End_Params
{
};

// Function BPW_TeamReadyHUD.BPW_TeamReadyHUD_C.ExecuteUbergraph_BPW_TeamReadyHUD
struct UBPW_TeamReadyHUD_C_ExecuteUbergraph_BPW_TeamReadyHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
