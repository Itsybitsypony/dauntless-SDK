#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EQContext_TempActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EQContext_TempActor.EQContext_TempActor_C.GetTempActor
struct UEQContext_TempActor_C_GetTempActor_Params
{
	class UBlackboardComponent*                        BlackboardComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TempActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EQContext_TempActor.EQContext_TempActor_C.ProvideSingleActor
struct UEQContext_TempActor_C_ProvideSingleActor_Params
{
	class UObject**                                    QuerierObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ResultingActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EQContext_TempActor.EQContext_TempActor_C.ProvideSingleLocation
struct UEQContext_TempActor_C_ProvideSingleLocation_Params
{
	class UObject**                                    QuerierObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     QuerierActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
