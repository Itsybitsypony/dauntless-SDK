#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactioncode_component_player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.GetPlayerInteractionMontage
struct Ubase_interactioncode_component_player_C_GetPlayerInteractionMontage_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.GetInteractionDuration
struct Ubase_interactioncode_component_player_C_GetInteractionDuration_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.CancelFill
struct Ubase_interactioncode_component_player_C_CancelFill_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.BlueprintCanUserStartInteraction
struct Ubase_interactioncode_component_player_C_BlueprintCanUserStartInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.ReceiveBeginPlay
struct Ubase_interactioncode_component_player_C_ReceiveBeginPlay_Params
{
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserCompletedInteraction
struct Ubase_interactioncode_component_player_C_UserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserStartedInteraction
struct Ubase_interactioncode_component_player_C_UserStartedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserCanceledInteraction
struct Ubase_interactioncode_component_player_C_UserCanceledInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.ExecuteUbergraph_base_interactioncode_component_player
struct Ubase_interactioncode_component_player_C_ExecuteUbergraph_base_interactioncode_component_player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
