#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_bpgm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lobby_bpgm.lobby_bpgm_C.HandleSlotPrevious
struct Alobby_bpgm_C_HandleSlotPrevious_Params
{
	int                                                FromSlotIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidChangeSlot;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NewSlotIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.HandleSlotNext
struct Alobby_bpgm_C_HandleSlotNext_Params
{
	int                                                FromSlotIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidChangeSlot;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NewSlotIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.HandleSlotClicked
struct Alobby_bpgm_C_HandleSlotClicked_Params
{
	class AActor*                                      ClickedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DidHandle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.GetSlotClicked
struct Alobby_bpgm_C_GetSlotClicked_Params
{
	class AActor*                                      ClickedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlotClicked;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SlotActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.UpdatePlayerHighlights
struct Alobby_bpgm_C_UpdatePlayerHighlights_Params
{
	int                                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.SetLobbyPlayerReady
struct Alobby_bpgm_C_SetLobbyPlayerReady_Params
{
	bool                                               ReadyState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.ChoosePlayerStart
struct Alobby_bpgm_C_ChoosePlayerStart_Params
{
	class AController**                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.GetOpenOptions
struct Alobby_bpgm_C_GetOpenOptions_Params
{
	TArray<struct FName>                               HuntIds;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function lobby_bpgm.lobby_bpgm_C.SpawnAtmosphere
struct Alobby_bpgm_C_SpawnAtmosphere_Params
{
};

// Function lobby_bpgm.lobby_bpgm_C.SetupAtmosphereVariables
struct Alobby_bpgm_C_SetupAtmosphereVariables_Params
{
	class AArchonGameMode*                             GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.SpawnAtmosphereFromClass
struct Alobby_bpgm_C_SpawnAtmosphereFromClass_Params
{
	class UClass*                                      InClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.UserConstructionScript
struct Alobby_bpgm_C_UserConstructionScript_Params
{
};

// Function lobby_bpgm.lobby_bpgm_C.OnLoaded_3AF3459C4E3598210ECDFAA7F258670A
struct Alobby_bpgm_C_OnLoaded_3AF3459C4E3598210ECDFAA7F258670A_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.CycleAtmosphere
struct Alobby_bpgm_C_CycleAtmosphere_Params
{
};

// Function lobby_bpgm.lobby_bpgm_C.StreamNewAtmosphere
struct Alobby_bpgm_C_StreamNewAtmosphere_Params
{
	int                                                NewAtmosphereIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.ReceiveBeginPlay
struct Alobby_bpgm_C_ReceiveBeginPlay_Params
{
};

// Function lobby_bpgm.lobby_bpgm_C.ReceiveTick
struct Alobby_bpgm_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpgm.lobby_bpgm_C.ExecuteUbergraph_lobby_bpgm
struct Alobby_bpgm_C_ExecuteUbergraph_lobby_bpgm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
