#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_BehemothActionSet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.GetActionByClass
struct ABp_BehemothActionSet_C_GetActionByClass_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BehemothAction_C*                        Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.SpawnActionActor
struct ABp_BehemothActionSet_C_SpawnActionActor_Params
{
	class ABp_Behemoth_C*                              OwningBehemoth;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStruct_ActionSet                           Struct_ActionSet;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABP_BehemothAction_C*>                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ABP_BehemothAction_C*                        Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.UserConstructionScript
struct ABp_BehemothActionSet_C_UserConstructionScript_Params
{
};

// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.ReceiveDestroyed
struct ABp_BehemothActionSet_C_ReceiveDestroyed_Params
{
};

// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.ExecuteUbergraph_Bp_BehemothActionSet
struct ABp_BehemothActionSet_C_ExecuteUbergraph_Bp_BehemothActionSet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
