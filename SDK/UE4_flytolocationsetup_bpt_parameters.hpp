#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_flytolocationsetup_bpt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.MakeSpline
struct Uflytolocationsetup_bpt_C_MakeSpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (Parm, OutParm, ZeroConstructor)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveTickAI
struct Uflytolocationsetup_bpt_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveExecuteAI
struct Uflytolocationsetup_bpt_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveAbort
struct Uflytolocationsetup_bpt_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ExecuteUbergraph_flytolocationsetup_bpt
struct Uflytolocationsetup_bpt_C_ExecuteUbergraph_flytolocationsetup_bpt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
