#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PatrolCenterPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.GetBehemothHasUsed
struct ABP_PatrolCenterPoint_C_GetBehemothHasUsed_Params
{
	bool                                               HasBehemothUsed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.GetRetreatJump
struct ABP_PatrolCenterPoint_C_GetRetreatJump_Params
{
	class ABp_RetreatJumpHelper_C*                     JumpPoint;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.UserConstructionScript
struct ABP_PatrolCenterPoint_C_UserConstructionScript_Params
{
};

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ReceiveBeginPlay
struct ABP_PatrolCenterPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ShowLinks
struct ABP_PatrolCenterPoint_C_ShowLinks_Params
{
};

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.SetBehemothHasUsed
struct ABP_PatrolCenterPoint_C_SetBehemothHasUsed_Params
{
	bool                                               HasBehemothUsed;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PatrolCenterPoint.BP_PatrolCenterPoint_C.ExecuteUbergraph_BP_PatrolCenterPoint
struct ABP_PatrolCenterPoint_C_ExecuteUbergraph_BP_PatrolCenterPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
