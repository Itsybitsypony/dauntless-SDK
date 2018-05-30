#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_BehemothAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.OuputLocation
struct UBTTask_BehemothAction_C_OuputLocation_Params
{
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveExecuteAI
struct UBTTask_BehemothAction_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveAbortAI
struct UBTTask_BehemothAction_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.OnMontageBlendingOut_Event_1
struct UBTTask_BehemothAction_C_OnMontageBlendingOut_Event_1_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.Finish
struct UBTTask_BehemothAction_C_Finish_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveTickAI
struct UBTTask_BehemothAction_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.Event_EarlyOut
struct UBTTask_BehemothAction_C_Event_EarlyOut_Params
{
};

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ExecuteUbergraph_BTTask_BehemothAction
struct UBTTask_BehemothAction_C_ExecuteUbergraph_BTTask_BehemothAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
