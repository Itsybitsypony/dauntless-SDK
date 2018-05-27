#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonLobbyHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.UserConstructionScript
struct ABPH_ArchonLobbyHUD_C_UserConstructionScript_Params
{
};

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveBeginPlay
struct ABPH_ArchonLobbyHUD_C_ReceiveBeginPlay_Params
{
};

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveGameplayStart
struct ABPH_ArchonLobbyHUD_C_ReceiveGameplayStart_Params
{
};

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.Escape Menu
struct ABPH_ArchonLobbyHUD_C_Escape_Menu_Params
{
};

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ShowLobby
struct ABPH_ArchonLobbyHUD_C_ShowLobby_Params
{
};

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ReceiveEndPlay
struct ABPH_ArchonLobbyHUD_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C.ExecuteUbergraph_BPH_ArchonLobbyHUD
struct ABPH_ArchonLobbyHUD_C_ExecuteUbergraph_BPH_ArchonLobbyHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
