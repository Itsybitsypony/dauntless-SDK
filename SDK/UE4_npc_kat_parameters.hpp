#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_kat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function npc_kat.npc_kat_C.UserConstructionScript
struct Anpc_kat_C_UserConstructionScript_Params
{
};

// Function npc_kat.npc_kat_C.ReceiveBeginPlay
struct Anpc_kat_C_ReceiveBeginPlay_Params
{
};

// Function npc_kat.npc_kat_C.ReceiveTick
struct Anpc_kat_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_kat.npc_kat_C.ExecuteUbergraph_npc_kat
struct Anpc_kat_C_ExecuteUbergraph_npc_kat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
