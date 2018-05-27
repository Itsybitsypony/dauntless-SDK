#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_find_player_to_rez_bts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function find_player_to_rez_bts.find_player_to_rez_bts_C.GetBleedingOutSlayer
struct Ufind_player_to_rez_bts_C_GetBleedingOutSlayer_Params
{
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function find_player_to_rez_bts.find_player_to_rez_bts_C.ReceiveTick
struct Ufind_player_to_rez_bts_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function find_player_to_rez_bts.find_player_to_rez_bts_C.ReceiveSearchStartAI
struct Ufind_player_to_rez_bts_C_ReceiveSearchStartAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function find_player_to_rez_bts.find_player_to_rez_bts_C.ExecuteUbergraph_find_player_to_rez_bts
struct Ufind_player_to_rez_bts_C_ExecuteUbergraph_find_player_to_rez_bts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
