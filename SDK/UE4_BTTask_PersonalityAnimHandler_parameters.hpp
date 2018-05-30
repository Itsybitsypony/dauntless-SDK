#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_PersonalityAnimHandler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.OuputLocation
struct UBTTask_PersonalityAnimHandler_C_OuputLocation_Params
{
};

// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveExecuteAI
struct UBTTask_PersonalityAnimHandler_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveAbortAI
struct UBTTask_PersonalityAnimHandler_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveTickAI
struct UBTTask_PersonalityAnimHandler_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ExecuteUbergraph_BTTask_PersonalityAnimHandler
struct UBTTask_PersonalityAnimHandler_C_ExecuteUbergraph_BTTask_PersonalityAnimHandler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
