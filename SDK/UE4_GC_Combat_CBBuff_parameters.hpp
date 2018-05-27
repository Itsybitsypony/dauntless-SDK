#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_Combat_CBBuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GC_Combat_CBBuff.GC_Combat_CBBuff_C.UserConstructionScript
struct AGC_Combat_CBBuff_C_UserConstructionScript_Params
{
};

// Function GC_Combat_CBBuff.GC_Combat_CBBuff_C.K2_HandleGameplayCue
struct AGC_Combat_CBBuff_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Combat_CBBuff.GC_Combat_CBBuff_C.ExecuteUbergraph_GC_Combat_CBBuff
struct AGC_Combat_CBBuff_C_ExecuteUbergraph_GC_Combat_CBBuff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
