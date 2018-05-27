#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_telemetry_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_telemetry_component.player_telemetry_component_C.GetCurrentWeapon
struct Uplayer_telemetry_component_C_GetCurrentWeapon_Params
{
	class FString                                      CurrentWeapon;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function player_telemetry_component.player_telemetry_component_C.GetClosestBehemoth
struct Uplayer_telemetry_component_C_GetClosestBehemoth_Params
{
	class FString                                      ClosestBehemothName;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function player_telemetry_component.player_telemetry_component_C.GetHuntID
struct Uplayer_telemetry_component_C_GetHuntID_Params
{
	class FString                                      HuntId;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Logout In Island
struct Uplayer_telemetry_component_C_POST_Server_Player_Logout_In_Island_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Login In Island
struct Uplayer_telemetry_component_C_POST_Server_Player_Login_In_Island_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Logout In City
struct Uplayer_telemetry_component_C_POST_Server_Player_Logout_In_City_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Login In City
struct Uplayer_telemetry_component_C_POST_Server_Player_Login_In_City_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Spawned In Island
struct Uplayer_telemetry_component_C_POST_Server_Player_Spawned_In_Island_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Spawned In City
struct Uplayer_telemetry_component_C_POST_Server_Player_Spawned_In_City_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.Fill Montage Start Data
struct Uplayer_telemetry_component_C_Fill_Montage_Start_Data_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.POST Server Player Montage Event
struct Uplayer_telemetry_component_C_POST_Server_Player_Montage_Event_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Started;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_telemetry_component.player_telemetry_component_C.OnGameModeStartCityEvent
struct Uplayer_telemetry_component_C_OnGameModeStartCityEvent_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.On Recover From Fall Event
struct Uplayer_telemetry_component_C_On_Recover_From_Fall_Event_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.Get Player Info
struct Uplayer_telemetry_component_C_Get_Player_Info_Params
{
	struct FJsonBPObjectField                          player_id;                                                // (Parm, OutParm)
	struct FJsonBPObjectField                          character_id;                                             // (Parm, OutParm)
	struct FJsonBPObjectField                          Position;                                                 // (Parm, OutParm)
	struct FJsonBPObjectField                          Facing;                                                   // (Parm, OutParm)
	struct FJsonBPObjectField                          Camera;                                                   // (Parm, OutParm)
	struct FJsonBPObjectField                          Velocity;                                                 // (Parm, OutParm)
	struct FJsonBPObjectField                          player_stats;                                             // (Parm, OutParm)
};

// Function player_telemetry_component.player_telemetry_component_C.POST Player Location Telemetry
struct Uplayer_telemetry_component_C_POST_Player_Location_Telemetry_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.TIMER Player Location Telemetry
struct Uplayer_telemetry_component_C_TIMER_Player_Location_Telemetry_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.Get Loadout
struct Uplayer_telemetry_component_C_Get_Loadout_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.ReceiveTick
struct Uplayer_telemetry_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_telemetry_component.player_telemetry_component_C.Montage Started
struct Uplayer_telemetry_component_C_Montage_Started_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_telemetry_component.player_telemetry_component_C.Montage Blending Out
struct Uplayer_telemetry_component_C_Montage_Blending_Out_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_telemetry_component.player_telemetry_component_C.ReceiveBeginPlay
struct Uplayer_telemetry_component_C_ReceiveBeginPlay_Params
{
};

// Function player_telemetry_component.player_telemetry_component_C.ExecuteUbergraph_player_telemetry_component
struct Uplayer_telemetry_component_C_ExecuteUbergraph_player_telemetry_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
