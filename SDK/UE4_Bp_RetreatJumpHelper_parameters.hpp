#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_RetreatJumpHelper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.GetPatrolPoint
struct ABp_RetreatJumpHelper_C_GetPatrolPoint_Params
{
	class ABP_PatrolCenterPoint_C*                     PatrolPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.UserConstructionScript
struct ABp_RetreatJumpHelper_C_UserConstructionScript_Params
{
};

// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ReceiveBeginPlay
struct ABp_RetreatJumpHelper_C_ReceiveBeginPlay_Params
{
};

// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ShowLinks
struct ABp_RetreatJumpHelper_C_ShowLinks_Params
{
};

// Function Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C.ExecuteUbergraph_Bp_RetreatJumpHelper
struct ABp_RetreatJumpHelper_C_ExecuteUbergraph_Bp_RetreatJumpHelper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
