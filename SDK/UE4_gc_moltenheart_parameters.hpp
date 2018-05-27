#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gc_moltenheart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function gc_moltenheart.gc_moltenheart_C.UserConstructionScript
struct Agc_moltenheart_C_UserConstructionScript_Params
{
};

// Function gc_moltenheart.gc_moltenheart_C.ClearVFX
struct Agc_moltenheart_C_ClearVFX_Params
{
};

// Function gc_moltenheart.gc_moltenheart_C.StartWarning
struct Agc_moltenheart_C_StartWarning_Params
{
};

// Function gc_moltenheart.gc_moltenheart_C.K2_HandleGameplayCue
struct Agc_moltenheart_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function gc_moltenheart.gc_moltenheart_C.ExecuteUbergraph_gc_moltenheart
struct Agc_moltenheart_C_ExecuteUbergraph_gc_moltenheart_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
