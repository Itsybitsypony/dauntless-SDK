#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_city_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_controller_city_bp.player_controller_city_bp_C.Is Cinematic Playing
struct Aplayer_controller_city_bp_C_Is_Cinematic_Playing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_controller_city_bp.player_controller_city_bp_C.MarkReturnToRamsgateComplete
struct Aplayer_controller_city_bp_C_MarkReturnToRamsgateComplete_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.HasSeenReturnToRamsgateCinematic
struct Aplayer_controller_city_bp_C_HasSeenReturnToRamsgateCinematic_Params
{
	bool                                               HasSeenCinematic;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_city_bp.player_controller_city_bp_C.CanShowWelcomeMessage
struct Aplayer_controller_city_bp_C_CanShowWelcomeMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_controller_city_bp.player_controller_city_bp_C.ShouldPlayReturnToRamsgateCinematic
struct Aplayer_controller_city_bp_C_ShouldPlayReturnToRamsgateCinematic_Params
{
	bool                                               ShouldPlayCinematic;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_city_bp.player_controller_city_bp_C.UserConstructionScript
struct Aplayer_controller_city_bp_C_UserConstructionScript_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Toggle Player Ready_K2Node_InputActionEvent_10
struct Aplayer_controller_city_bp_C_InpActEvt_Toggle_Player_Ready_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Dodge_K2Node_InputActionEvent_9
struct Aplayer_controller_city_bp_C_InpActEvt_Dodge_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_8
struct Aplayer_controller_city_bp_C_InpActEvt_Primary_Attack_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_7
struct Aplayer_controller_city_bp_C_InpActEvt_Secondary_Attack_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_city_bp.player_controller_city_bp_C.InpActEvt_Party Options_K2Node_InputActionEvent_6
struct Aplayer_controller_city_bp_C_InpActEvt_Party_Options_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_controller_city_bp.player_controller_city_bp_C.ReceiveTick
struct Aplayer_controller_city_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_city_bp.player_controller_city_bp_C.ReceiveBeginPlay
struct Aplayer_controller_city_bp_C_ReceiveBeginPlay_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.ReceiveGameplayStart
struct Aplayer_controller_city_bp_C_ReceiveGameplayStart_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.OnPartyMatchmakingStartedNotification
struct Aplayer_controller_city_bp_C_OnPartyMatchmakingStartedNotification_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.OnClientQuestSystemReady
struct Aplayer_controller_city_bp_C_OnClientQuestSystemReady_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.OnServerPlaybackStopped
struct Aplayer_controller_city_bp_C_OnServerPlaybackStopped_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.EvaluateCanShowWelcomeMessage
struct Aplayer_controller_city_bp_C_EvaluateCanShowWelcomeMessage_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.ClientOnQuestSystemReady
struct Aplayer_controller_city_bp_C_ClientOnQuestSystemReady_Params
{
};

// Function player_controller_city_bp.player_controller_city_bp_C.ExecuteUbergraph_player_controller_city_bp
struct Aplayer_controller_city_bp_C_ExecuteUbergraph_player_controller_city_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
