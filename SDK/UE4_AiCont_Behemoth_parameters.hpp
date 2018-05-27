#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AiCont_Behemoth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AiCont_Behemoth.AiCont_Behemoth_C.UserConstructionScript
struct AAiCont_Behemoth_C_UserConstructionScript_Params
{
};

// Function AiCont_Behemoth.AiCont_Behemoth_C.ReceiveBeginPlay
struct AAiCont_Behemoth_C_ReceiveBeginPlay_Params
{
};

// Function AiCont_Behemoth.AiCont_Behemoth_C.OnUsingBlackBoard
struct AAiCont_Behemoth_C_OnUsingBlackBoard_Params
{
	class UBlackboardComponent**                       BlackboardComp;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBlackboardData**                            BlackboardAsset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AiCont_Behemoth.AiCont_Behemoth_C.ExecuteUbergraph_AiCont_Behemoth
struct AAiCont_Behemoth_C_ExecuteUbergraph_AiCont_Behemoth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
